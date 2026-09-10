/* src/runtime/startup.c — 201 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "startup.h"

/* ======================================================================
 * init  (Ghidra `_init` @ 00450f58)
 * Signature: int __stdcall _init(EVP_PKEY_CTX * ctx)
 * Calls: `call_gmon_start`, `frame_dummy`
 * Called by: (none)
 */
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;

  call_gmon_start();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}

/* ======================================================================
 * errno_location  (Ghidra `__errno_location` @ 00450fe0)
 * Signature: int * __errno_location(void)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int *__errno_location(void)

{
  int *piVar1;

  piVar1 = (int *)(*(code *)PTR___errno_location_00815670)();
  return piVar1;
}

/* ======================================================================
 * pow_finite  (Ghidra `__pow_finite` @ 00451060)
 * Signature: uint8_t __pow_finite(void)
 * Calls: (none)
 * Called by: (none)
 */
void __pow_finite(void)

{
  (*(code *)PTR___pow_finite_008156b0)();
  return;
}

/* ======================================================================
 * M_leak_hard  (Ghidra `_M_leak_hard` @ 00451100)
 * Signature: uint8_t _M_leak_hard(void)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__string_M_leak_hard(void)

{
  (*(code *)PTR__M_leak_hard_00815700)();
  return;
}

/* ======================================================================
 * logf_finite  (Ghidra `__logf_finite` @ 00451180)
 * Signature: uint8_t __logf_finite(void)
 * Calls: (none)
 * Called by: (none)
 */
void __logf_finite(void)

{
  (*(code *)PTR___logf_finite_00815740)();
  return;
}

/* ======================================================================
 * M_destroy  (Ghidra `_M_destroy` @ 004511a0)
 * Signature: uint8_t _M_destroy(allocator * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__wstring_Rep_M_destroy(allocator *arg1)

{
  (*(code *)PTR__M_destroy_00815750)();
  return;
}

/* ======================================================================
 * acosf_finite  (Ghidra `__acosf_finite` @ 004512f0)
 * Signature: uint8_t __acosf_finite(void)
 * Calls: (none)
 * Called by: (none)
 */
void __acosf_finite(void)

{
  (*(code *)PTR___acosf_finite_008157f8)();
  return;
}

/* ======================================================================
 * cxa_guard_abort  (Ghidra `__cxa_guard_abort` @ 00451490)
 * Signature: uint8_t __cxa_guard_abort(void)
 * Calls: (none)
 * Called by: (none)
 */
void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_008158c8)();
  return;
}

/* ======================================================================
 * cxa_guard_release  (Ghidra `__cxa_guard_release` @ 004514b0)
 * Signature: uint8_t __cxa_guard_release(void)
 * Calls: (none)
 * Called by: (none)
 */
void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_008158d8)();
  return;
}

/* ======================================================================
 * M_destroy__00451560  (Ghidra `_M_destroy` @ 00451560)
 * Signature: uint8_t _M_destroy(allocator * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__string_Rep_M_destroy(allocator *arg1)

{
  (*(code *)PTR__M_destroy_00815930)();
  return;
}

/* ======================================================================
 * exp_finite  (Ghidra `__exp_finite` @ 004515a0)
 * Signature: uint8_t __exp_finite(void)
 * Calls: (none)
 * Called by: (none)
 */
void __exp_finite(void)

{
  (*(code *)PTR___exp_finite_00815950)();
  return;
}

/* ======================================================================
 * cxa_atexit  (Ghidra `__cxa_atexit` @ 00451600)
 * Signature: uint8_t __cxa_atexit(void)
 * Calls: (none)
 * Called by: (none)
 */
void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_00815980)();
  return;
}

/* ======================================================================
 * isoc99_sscanf  (Ghidra `__isoc99_sscanf` @ 00451710)
 * Signature: uint8_t __isoc99_sscanf(void)
 * Calls: (none)
 * Called by: (none)
 */
void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00815a08)();
  return;
}

/* ======================================================================
 * xstat  (Ghidra `__xstat` @ 00451760)
 * Signature: int __xstat(int __ver, char * __filename, stat * __stat_buf)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __xstat(int __ver, char *__filename, stat *__stat_buf)

{
  int iVar1;

  iVar1 = (*(code *)PTR___xstat_00815a30)();
  return iVar1;
}

/* ======================================================================
 * fxstat  (Ghidra `__fxstat` @ 004517c0)
 * Signature: int __fxstat(int __ver, int __fildes, stat * __stat_buf)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int __fxstat(int __ver, int __fildes, stat *__stat_buf)

{
  int iVar1;

  iVar1 = (*(code *)PTR___fxstat_00815a60)();
  return iVar1;
}

/* ======================================================================
 * atan2_finite  (Ghidra `__atan2_finite` @ 00451810)
 * Signature: uint8_t __atan2_finite(void)
 * Calls: (none)
 * Called by: (none)
 */
void __atan2_finite(void)

{
  (*(code *)PTR___atan2_finite_00815a88)();
  return;
}

/* ======================================================================
 * setjmp  (Ghidra `_setjmp` @ 00451ae0)
 * Signature: int _setjmp(__jmp_buf_tag * __env)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setjmp(__jmp_buf_tag *__env)

{
  int iVar1;

  iVar1 = (*(code *)PTR__setjmp_00815bf0)();
  return iVar1;
}

/* ======================================================================
 * throw_out_of_range  (Ghidra `__throw_out_of_range` @ 00451b10)
 * Signature: uint8_t __throw_out_of_range(char * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std__throw_out_of_range(char *arg1)

{
  (*(code *)PTR___throw_out_of_range_00815c08)();
  return;
}

/* ======================================================================
 * gxx_personality_v0  (Ghidra `__gxx_personality_v0` @ 00451cd0)
 * Signature: uint8_t __gxx_personality_v0(void)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Switch with 1 destination removed at 0x00451cd0 */

void __gxx_personality_v0(void)

{
  do {
    /* WARNING: Do nothing block with infinite loop */
  } while (true);
}

/* ======================================================================
 * Unwind_Resume  (Ghidra `_Unwind_Resume` @ 00451d50)
 * Signature: noreturn uint8_t _Unwind_Resume(void)
 * Calls: (none)
 * Called by: (none)
 */
void _Unwind_Resume(void)

{
  (*(code *)PTR__Unwind_Resume_00815d28)();
  return;
}

/* ======================================================================
 * cxa_guard_acquire  (Ghidra `__cxa_guard_acquire` @ 00451db0)
 * Signature: uint8_t __cxa_guard_acquire(void)
 * Calls: (none)
 * Called by: (none)
 */
void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_00815d58)();
  return;
}

/* ======================================================================
 * libc_start_main  (Ghidra `__libc_start_main` @ 00451e00)
 * Signature: uint8_t __libc_start_main(void)
 * Calls: (none)
 * Called by: (none)
 */
void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00815d80)();
  return;
}

/* ======================================================================
 * cxa_pure_virtual  (Ghidra `__cxa_pure_virtual` @ 00451e40)
 * Signature: uint8_t __cxa_pure_virtual(void)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Switch with 1 destination removed at 0x00451e40 */

void __cxa_pure_virtual(void)

{
  do {
    /* WARNING: Do nothing block with infinite loop */
  } while (true);
}

/* ======================================================================
 * AlienHominid__AlienHominid  (Ghidra `_GLOBAL__sub_I_AlienHominid` @ 004522c0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_AlienHominid(void)
 * Class: AlienHominid
 * Calls: `AlienHominid__AlienHominid__00462960`, `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
/* AlienHominid__AlienHominid__00462960() */

void AlienHominid__AlienHominid(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_bloodRender  (Ghidra `_GLOBAL__sub_I_bloodRender` @ 00452440)
 * Signature: uint8_t _GLOBAL__sub_I_bloodRender(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`
 * Called by: (none)
 */
void _GLOBAL__sub_I_bloodRender(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)bloodRender);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, bloodRender, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_CreateCommanderVideoResources  (Ghidra `_GLOBAL__sub_I_CreateCommanderVideoResources` @ 004525e0)
 * Signature: uint8_t _GLOBAL__sub_I_CreateCommanderVideoResources(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_CreateCommanderVideoResources(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * DefaultMeatBoy__DefaultMeatBoy  (Ghidra `_GLOBAL__sub_I_DefaultMeatBoy` @ 00452760)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_DefaultMeatBoy(void)
 * Class: DefaultMeatBoy
 * Calls: `ColorTemplate_float__ColorTemplate`, `DefaultMeatBoy__DefaultMeatBoy__00465540`
 * Called by: (none)
 */
/* DefaultMeatBoy__DefaultMeatBoy__00465540() */

void DefaultMeatBoy__DefaultMeatBoy(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * DrFetus__DrFetus  (Ghidra `_GLOBAL__sub_I_DrFetus` @ 004528e0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_DrFetus(void)
 * Class: DrFetus
 * Calls: `ColorTemplate_float__ColorTemplate`, `DrFetus__DrFetus__00466f80`
 * Called by: (none)
 */
/* DrFetus__DrFetus__00466f80() */

void DrFetus__DrFetus(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBFactoryBossOutroFinished  (Ghidra `_GLOBAL__sub_I_SMBFactoryBossOutroFinished` @ 00452a60)
 * Signature: uint8_t _GLOBAL__sub_I_SMBFactoryBossOutroFinished(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SMBFactoryBossOutroFinished`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SMBFactoryBossOutroFinished(void*, int, int) */

void _GLOBAL__sub_I_SMBFactoryBossOutroFinished(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_pEscapeMusic  (Ghidra `_GLOBAL__sub_I_pEscapeMusic` @ 00452be0)
 * Signature: uint8_t _GLOBAL__sub_I_pEscapeMusic(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SyncEvent__SyncEvent`, `SyncEvent__SyncEvent__005b8100`, `TAudioInstance__TAudioInstance`, `TAudioInstance__TAudioInstance__0057a200`
 * Called by: (none)
 */
void _GLOBAL__sub_I_pEscapeMusic(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  TAudioInstance__TAudioInstance((TAudioInstance *)escapeMusic);
  __cxa_atexit(TAudioInstance__TAudioInstance__0057a200, escapeMusic, &__dso_handle);
  SyncEvent__SyncEvent((SyncEvent *)endLibLoaded);
  __cxa_atexit(SyncEvent__SyncEvent__005b8100, endLibLoaded, &__dso_handle);
  return;
}

/* ======================================================================
 * FlyWrench__FlyWrench  (Ghidra `_GLOBAL__sub_I_FlyWrench` @ 00452da0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_FlyWrench(void)
 * Class: FlyWrench
 * Calls: `ColorTemplate_float__ColorTemplate`, `FlyWrench__FlyWrench__00469fb0`
 * Called by: (none)
 */
/* FlyWrench__FlyWrench__00469fb0() */

void FlyWrench__FlyWrench(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBForestBossOutroFinished  (Ghidra `_GLOBAL__sub_I_SMBForestBossOutroFinished` @ 00452f20)
 * Signature: uint8_t _GLOBAL__sub_I_SMBForestBossOutroFinished(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SMBForestBossOutroFinished`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SMBForestBossOutroFinished(void*, int, int) */

void _GLOBAL__sub_I_SMBForestBossOutroFinished(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GooBall__GooBall  (Ghidra `_GLOBAL__sub_I_GooBall` @ 004530a0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_GooBall(void)
 * Class: GooBall
 * Calls: `ColorTemplate_float__ColorTemplate`, `GooBall__GooBall__0046ad80`
 * Called by: (none)
 */
/* GooBall__GooBall__0046ad80() */

void GooBall__GooBall(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * HeadCrab__HeadCrab  (Ghidra `_GLOBAL__sub_I_HeadCrab` @ 00453220)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_HeadCrab(void)
 * Class: HeadCrab
 * Calls: `ColorTemplate_float__ColorTemplate`, `HeadCrab__HeadCrab__0046b0e0`
 * Called by: (none)
 */
/* HeadCrab__HeadCrab__0046b0e0() */

void HeadCrab__HeadCrab(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBHellBossOutroFinished  (Ghidra `_GLOBAL__sub_I_SMBHellBossOutroFinished` @ 004533a0)
 * Signature: uint8_t _GLOBAL__sub_I_SMBHellBossOutroFinished(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SMBHellBossOutroFinished`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SMBHellBossOutroFinished(void*, int, int) */

void _GLOBAL__sub_I_SMBHellBossOutroFinished(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_uSwitchResetCount  (Ghidra `_GLOBAL__sub_I_uSwitchResetCount` @ 00453520)
 * Signature: uint8_t _GLOBAL__sub_I_uSwitchResetCount(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_uSwitchResetCount(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * Jill__Jill  (Ghidra `_GLOBAL__sub_I_Jill` @ 004536a0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_Jill(void)
 * Class: Jill
 * Calls: `ColorTemplate_float__ColorTemplate`, `Jill__Jill__0046e1e0`
 * Called by: (none)
 */
/* Jill__Jill__0046e1e0() */

void Jill__Jill(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  DAT_00818e58 /* R:2.0739217272007293e-43f */._0_4_ = 0;
  DAT_00818e58 /* R:2.0739217272007293e-43f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_ShadowMapSection  (Ghidra `_GLOBAL__sub_I_ShadowMapSection` @ 00453820)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_ShadowMapSection(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`
 * Called by: (none)
 */
/* TileLevelLightMap__ShadowMapSection */

void TileLevelLightMap__GLOBAL_sub_I_ShadowMapSection(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  DAT_00818ef8 /* R:5.268882225861312e-43f */._0_4_ = 0x3f800000;
  DAT_00818ef8 /* R:5.268882225861312e-43f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)ShadowMapSection);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, ShadowMapSection, &__dso_handle);
  return;
}

/* ======================================================================
 * Machinarium__Machinarium  (Ghidra `_GLOBAL__sub_I_Machinarium` @ 004539c0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_Machinarium(void)
 * Class: Machinarium
 * Calls: `ColorTemplate_float__ColorTemplate`, `Machinarium__Machinarium__00473bc0`
 * Called by: (none)
 */
/* Machinarium__Machinarium__00473bc0() */

void Machinarium__Machinarium(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * main  (Ghidra `main` @ 00453b40)
 * Signature: uint8_t main(void)
 * Calls: `GSuperMeatBoy__GSuperMeatBoy__00514290`, `SDL_GL_LoadLibrary`, `SDL_GetBasePath`, `SDL_GetError`, `SDL_Init`, `TEngine__Run`, `TEngine__TEngine`, `TEngine__TEngine__00583e20`, `atexit`, `chdir` (+15 more)
 * Called by: `start`
 */
uint64_t main(int arg1, long arg2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  long lVar5;
  GSuperMeatBoy *this;
  TEngine *pTVar6;
  uint64_t uVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  byte bVar12;
  char *local_78;
  uint32_t local_70;
  uint32_t local_6c;
  uint32_t local_68;
  GSuperMeatBoy *local_60;
  char *local_58[2];
  char *local_48[2];
  char *local_38;
  allocator local_2a;
  allocator local_29[9];

  bVar12 = 0;
  setlocale(0, "");
  iVar2 = SDL_Init(0x20);
  if (iVar2 == -1) {
    uVar7 = SDL_GetError();
    fprintf(stderr, "SDL_Init(SDL_INIT_VIDEO) failed: %s\n", uVar7);
  } else {
    atexit(sdl_quit_at_exit);
    iVar2 = SDL_GL_LoadLibrary(0);
    if (iVar2 != -1) {
      local_58[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
      /* try { // try from 00453b97 to 00453c97 has its CatchHandler @ 00453f20 */
      pcVar3 = (char *)SDL_GetBasePath();
      if (pcVar3 == (char *)0x0) {
        /* try { // try from 00453f11 to 00453f6e has its CatchHandler @ 00453f20 */
        fwrite("Couldn\'t determine game\'s base path!\n", 1, 0x25, stderr);
      } else {
        iVar2 = chdir(pcVar3);
        if (iVar2 == -1) {
          fwrite("Couldn\'t chdir to game\'s base path!\n", 1, 0x24, stderr);
        } else {
          iVar2 = chdir("..");
          if (iVar2 != -1) {
            pcVar3 = getenv("XDG_DATA_HOME");
            if (pcVar3 == (char *)0x0) {
              pcVar3 = getenv("HOME");
              if (pcVar3 == (char *)0x0) {
                /* try { // try from 00453eb0 to 00453eb4 has its CatchHandler @ 00453f20 */
                std__string_assign((char *)local_58);
              } else {
                /* try { // try from 00453e7c to 00453e8d has its CatchHandler @ 00453f20 */
                std__string_assign((char *)local_58);
                std__string_append((char *)local_58);
              }
            } else {
              std__string_assign((char *)local_58);
              std__string_append((char *)local_58);
            }
            uVar8 = 0xffffffffffffffff;
            pcVar3 = local_58[0];
            do {
              if (uVar8 == 0)
                break;
              uVar8 = uVar8 - 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + (ulong)bVar12 * -2 + 1;
            } while (cVar1 != '\0');
            pcVar3 = operator_new__(~uVar8);
            strcpy(pcVar3, local_58[0]);
            cVar1 = *pcVar3;
            GUserDataPath = pcVar3;
            while (cVar1 != '\0') {
              while (cVar1 != '/') {
                pcVar3 = pcVar3 + 1;
                cVar1 = *pcVar3;
                if (cVar1 == '\0')
                  goto LAB_00453c71;
              }
              *pcVar3 = '\0';
              mkdir(GUserDataPath, 0x1c0);
              *pcVar3 = '/';
              pcVar3 = pcVar3 + 1;
              cVar1 = *pcVar3;
            }
          LAB_00453c71:
            mkdir(GUserDataPath, 0x1c0);
            std__string_string((string *)local_48, GUserDataPath, local_29);
            /* try { // try from 00453ca2 to 00453cbc has its CatchHandler @ 00453f47 */
            std__string_append((char *)local_48);
            std__string_string((string *)&local_38, GUserDataPath, &local_2a);
            /* try { // try from 00453cc7 to 00453ccb has its CatchHandler @ 00453eba */
            std__string_append((char *)&local_38);
            rename(local_48[0], local_38);
            std__string_string((string *)&local_38);
            std__string_string((string *)local_48);
            std__string_string((string *)local_58);
            if (arg1 < 1) {
              pcVar3 = operator_new__(1);
              *pcVar3 = '\0';
            } else {
              lVar9 = 0;
              lVar11 = 0;
              do {
                lVar5 = lVar9 * 8;
                lVar9 = lVar9 + 1;
                sVar4 = strlen(*(char **)(arg2 + lVar5));
                lVar5 = sVar4 + lVar11;
                lVar11 = lVar5 + 1;
              } while ((int)lVar9 < arg1);
              lVar11 = 0;
              pcVar3 = operator_new__(lVar5 + 2);
              *pcVar3 = '\0';
              do {
                lVar9 = lVar11 * 8;
                lVar11 = lVar11 + 1;
                strcat(pcVar3, *(char **)(arg2 + lVar9));
                sVar4 = strlen(pcVar3);
                (pcVar3 + sVar4)[0] = ' ';
                (pcVar3 + sVar4)[1] = '\0';
              } while ((int)lVar11 < arg1);
            }
            uVar8 = 0xffffffffffffffff;
            pcVar10 = pcVar3;
            do {
              if (uVar8 == 0)
                break;
              uVar8 = uVar8 - 1;
              cVar1 = *pcVar10;
              pcVar10 = pcVar10 + (ulong)bVar12 * -2 + 1;
            } while (cVar1 != '\0');
            pcVar3[~uVar8 - 2] = '\0';
            local_70 = 1;
            local_6c = 1;
            local_68 = 0;
            local_60 = (GSuperMeatBoy *)0x0;
            local_78 = pcVar3;
            this = operator_new(0x430);
            /* try { // try from 00453da6 to 00453daa has its CatchHandler @ 00453ef4 */
            GSuperMeatBoy__GSuperMeatBoy__00514290(this, (char *)0x0);
            local_60 = (GSuperMeatBoy *)0x0;
            if (this != (GSuperMeatBoy *)0x0) {
              local_60 = this + 0x20;
            }
            pTVar6 = operator_new(0x40);
            /* try { // try from 00453dd0 to 00453dd4 has its CatchHandler @ 00453ee1 */
            TEngine__TEngine(pTVar6, (EngineParams *)&local_78);
            TEngine__Run(Engine);
            pTVar6 = Engine;
            if (Engine != (TEngine *)0x0) {
              TEngine__TEngine__00583e20(Engine);
              operator_delete(pTVar6);
            }
            operator_delete__(pcVar3);
            return 0;
          }
          fwrite("Couldn\'t chdir to game\'s install path!\n", 1, 0x27, stderr);
        }
      }
      /* WARNING: Subroutine does not return */
      exit(1);
    }
    uVar7 = SDL_GetError();
    fprintf(stderr, "SDL_GL_LoadLibrary(NULL) failed: %s\n", uVar7);
    fflush(stderr);
  }
  return 1;
}

/* ======================================================================
 * GLOBAL_sub_I_main  (Ghidra `_GLOBAL__sub_I_main` @ 00453f80)
 * Signature: uint8_t _GLOBAL__sub_I_main(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_main(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_keyJump  (Ghidra `_GLOBAL__sub_I_keyJump` @ 00454100)
 * Signature: uint8_t _GLOBAL__sub_I_keyJump(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_keyJump(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBHUD  (Ghidra `_GLOBAL__sub_I_SMBHUD` @ 00454280)
 * Signature: uint8_t _GLOBAL__sub_I_SMBHUD(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`
 * Called by: (none)
 */
void _GLOBAL__sub_I_SMBHUD(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)hudUpdate);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, hudUpdate, &__dso_handle);
  return;
}

/* ======================================================================
 * MeatNinja__MeatNinja  (Ghidra `_GLOBAL__sub_I_MeatNinja` @ 00454420)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_MeatNinja(void)
 * Class: MeatNinja
 * Calls: `ColorTemplate_float__ColorTemplate`, `MeatNinja__MeatNinja__00481750`
 * Called by: (none)
 */
/* MeatNinja__MeatNinja__00481750() */

void MeatNinja__MeatNinja(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * MrMinecraft__MrMinecraft  (Ghidra `_GLOBAL__sub_I_MrMinecraft` @ 004545a0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_MrMinecraft(void)
 * Class: MrMinecraft
 * Calls: `ColorTemplate_float__ColorTemplate`, `MrMinecraft__MrMinecraft__00482810`
 * Called by: (none)
 */
/* MrMinecraft__MrMinecraft__00482810() */

void MrMinecraft__MrMinecraft(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * Naija__Naija  (Ghidra `_GLOBAL__sub_I_Naija` @ 00454720)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_Naija(void)
 * Class: Naija
 * Calls: `ColorTemplate_float__ColorTemplate`, `Naija__Naija__00483350`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Naija__Naija__00483350() */

void Naija__Naija(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange = 0x3f800000;
  _DAT_00819508 /* R:1.1895499349388512e-38f */ = 0;
  _DAT_0081950c /* R:0.0f */ = 0x3f800000;
  _DAT_00819504 /* R:2.2958888052482446e-39f */ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * Ogmo__Ogmo  (Ghidra `_GLOBAL__sub_I_Ogmo` @ 004548a0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_Ogmo(void)
 * Class: Ogmo
 * Calls: `ColorTemplate_float__ColorTemplate`, `Ogmo__Ogmo__00483910`
 * Called by: (none)
 */
/* Ogmo__Ogmo__00483910() */

void Ogmo__Ogmo(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_QuakeEmitter  (Ghidra `_GLOBAL__sub_I_QuakeEmitter` @ 00454a20)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_QuakeEmitter(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `QuakeEmitter__QuakeEmitter__00483a70`
 * Called by: (none)
 */
/* QuakeEmitter__QuakeEmitter__00483a70(QuakeEmitterCreate const*) */

void QuakeEmitter__GLOBAL_sub_I_QuakeEmitter(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBRaptureBossOutroFinished  (Ghidra `_GLOBAL__sub_I_SMBRaptureBossOutroFinished` @ 00454ba0)
 * Signature: uint8_t _GLOBAL__sub_I_SMBRaptureBossOutroFinished(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SMBRaptureBossOutroFinished`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SMBRaptureBossOutroFinished(void*, int, int) */

void _GLOBAL__sub_I_SMBRaptureBossOutroFinished(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * Runman__Runman  (Ghidra `_GLOBAL__sub_I_Runman` @ 00454d20)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_Runman(void)
 * Class: Runman
 * Calls: `ColorTemplate_float__ColorTemplate`, `Runman__Runman__00486800`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Runman__Runman__00486800() */

void Runman__Runman(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed = 0x3f800000;
  _DAT_00819704 /* R:0.0f */ = 0;
  _DAT_00819708 /* R:2.2420775429197073e-44f */ = 0;
  _DAT_0081970c /* R:0.0f */ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * SMBAnimal__SMBAnimal  (Ghidra `_GLOBAL__sub_I_SMBAnimal` @ 00454ea0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_SMBAnimal(void)
 * Class: SMBAnimal
 * Calls: `ColorTemplate_float__ColorTemplate`, `SMBAnimal__SMBAnimal__004868d0`
 * Called by: (none)
 */
/* SMBAnimal__SMBAnimal__004868d0() */

void SMBAnimal__SMBAnimal(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBBloodExplosionCreateResources  (Ghidra `_GLOBAL__sub_I_SMBBloodExplosionCreateResources` @ 00455020)
 * Signature: uint8_t _GLOBAL__sub_I_SMBBloodExplosionCreateResources(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SMBBloodExplosionCreateResources`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SMBBloodExplosionCreateResources(void*) */

void _GLOBAL__sub_I_SMBBloodExplosionCreateResources(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_CurrentSMBBoss  (Ghidra `_GLOBAL__sub_I_CurrentSMBBoss` @ 004551a0)
 * Signature: uint8_t _GLOBAL__sub_I_CurrentSMBBoss(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_CurrentSMBBoss(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_cameraUpdateSection  (Ghidra `_GLOBAL__sub_I_cameraUpdateSection` @ 00455320)
 * Signature: uint8_t _GLOBAL__sub_I_cameraUpdateSection(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`
 * Called by: (none)
 */
void _GLOBAL__sub_I_cameraUpdateSection(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)cameraUpdateSection);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, cameraUpdateSection, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_iCurrentLevel  (Ghidra `_GLOBAL__sub_I_iCurrentLevel` @ 004554c0)
 * Signature: uint8_t _GLOBAL__sub_I_iCurrentLevel(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SyncEvent__SyncEvent`, `SyncEvent__SyncEvent__005b8100`
 * Called by: (none)
 */
void _GLOBAL__sub_I_iCurrentLevel(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  SyncEvent__SyncEvent((SyncEvent *)bossIntroEvent);
  __cxa_atexit(SyncEvent__SyncEvent__005b8100, bossIntroEvent, &__dso_handle);
  SyncEvent__SyncEvent((SyncEvent *)bossOutroEvent);
  __cxa_atexit(SyncEvent__SyncEvent__005b8100, bossOutroEvent, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBChapterData  (Ghidra `_GLOBAL__sub_I_SMBChapterData` @ 00455680)
 * Signature: uint8_t _GLOBAL__sub_I_SMBChapterData(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SMBLevelData__SMBLevelData`, `SyncEvent__SyncEvent`, `SyncEvent__SyncEvent__005b8100`
 * Called by: (none)
 */
void _GLOBAL__sub_I_SMBChapterData(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  SMBCurrLevelData._0_4_ = 0x4cbebc20;
  SMBCurrLevelData._4_4_ = 0;
  SMBCurrLevelData._8_4_ = 0;
  __cxa_atexit(SMBLevelData__SMBLevelData, SMBCurrLevelData, &__dso_handle);
  SyncEvent__SyncEvent((SyncEvent *)SMBChapterSaveEvent);
  __cxa_atexit(SyncEvent__SyncEvent__005b8100, SMBChapterSaveEvent, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBCharactor  (Ghidra `_GLOBAL__sub_I_SMBCharactor` @ 00455850)
 * Signature: uint8_t _GLOBAL__sub_I_SMBCharactor(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `std__string_string`
 * Called by: (none)
 */
void _GLOBAL__sub_I_SMBCharactor(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  strCharPath = &DAT_008184c8 /* R:0.00016803004837129265f */;
  __cxa_atexit(std__string_string, &strCharPath, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_strBefore  (Ghidra `_GLOBAL__sub_I_strBefore` @ 004559f0)
 * Signature: uint8_t _GLOBAL__sub_I_strBefore(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_strBefore(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBCutSceneManager  (Ghidra `_GLOBAL__sub_I_SMBCutSceneManager` @ 00455b70)
 * Signature: uint8_t _GLOBAL__sub_I_SMBCutSceneManager(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_SMBCutSceneManager(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_UserLoginCheck  (Ghidra `_GLOBAL__sub_I_UserLoginCheck` @ 00455cf0)
 * Signature: uint8_t _GLOBAL__sub_I_UserLoginCheck(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`, `EditorFormDisplayValue__EditorFormDisplayValue`, `ObjectDefaultValue__ObjectDefaultValue`, `ResizeableArray_EditorButton__ResizeableArray`, `ResizeableArray_EditorLayerColorTweens__ResizeableArray`, `ResizeableArray_SelectedBlock__ResizeableArray`, `ResizeableArray_TileLevelSetPiece__ResizeableArray`, `ResizeableArray_TileLevelSetPiece__ResizeableArray__004b5c70` (+5 more)
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UserLoginCheck() */

void _GLOBAL__sub_I_UserLoginCheck(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  DAT_0081a968 /* R:2.2420775429197073e-44f */._0_4_ = 0x3f800000;
  DAT_0081a968 /* R:2.2420775429197073e-44f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)pEditorButtons);
  pEditorButtons._42_2_ = 0;
  pEditorButtons._40_2_ = 0;
  pEditorButtons._52_2_ = 1;
  pEditorButtons._56_8_ = 0;
  pEditorButtons._64_8_ = 0;
  pEditorButtons._72_4_ = 0;
  pEditorButtons[0x2c] = 4;
  pEditorButtons._48_4_ = 0;
  __cxa_atexit(ResizeableArray_EditorButton__ResizeableArray, pEditorButtons, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)pLayerColorTweens);
  pLayerColorTweens._42_2_ = 0;
  pLayerColorTweens._40_2_ = 0;
  pLayerColorTweens._52_2_ = 1;
  pLayerColorTweens._56_8_ = 0;
  pLayerColorTweens._64_8_ = 0;
  pLayerColorTweens._72_4_ = 0;
  pLayerColorTweens[0x2c] = 4;
  pLayerColorTweens._48_4_ = 0;
  __cxa_atexit(ResizeableArray_EditorLayerColorTweens__ResizeableArray, pLayerColorTweens,
               &__dso_handle);
  __cxa_atexit(ObjectDefaultValue__ObjectDefaultValue, defaultObjectDefault, &__dso_handle);
  __cxa_atexit(ObjectDefaultValue__ObjectDefaultValue, particleEmitterDefault, &__dso_handle);
  __cxa_atexit(ObjectDefaultValue__ObjectDefaultValue, smokeEmitterDefault, &__dso_handle);
  __cxa_atexit(ObjectDefaultValue__ObjectDefaultValue, quakeEmitterDefault, &__dso_handle);
  __cxa_atexit(ObjectDefaultValue__ObjectDefaultValue, laserObjectDefault, &__dso_handle);
  __cxa_atexit(ObjectDefaultValue__ObjectDefaultValue, shooterObjectDefault, &__dso_handle);
  __cxa_atexit(ObjectDefaultValue__ObjectDefaultValue, keyObjectDefault, &__dso_handle);
  __cxa_atexit(ObjectDefaultValue__ObjectDefaultValue, orbObjectDefault, &__dso_handle);
  __cxa_atexit(ObjectDefaultValue__ObjectDefaultValue, switchObjectDefault, &__dso_handle);
  __cxa_atexit(ObjectDefaultValue__ObjectDefaultValue, fanObjectDefault, &__dso_handle);
  defaultObjectForm = 0;
  DAT_0081a648 /* R:1.1900140449902355e-38f */ = 0;
  _DAT_0081a650 /* R:2.2420775429197073e-44f */ = 0;
  DAT_0081a658 /* R:2.872661851865875e-42f */ = 0;
  DAT_0081a660 /* R:1.1900162870677785e-38f */ = 0;
  __cxa_atexit(EditorFormDisplayValue__EditorFormDisplayValue, &defaultObjectForm, &__dso_handle);
  particleEmitterForm._0_8_ = 0;
  particleEmitterForm._8_8_ = 0;
  particleEmitterForm._16_4_ = 0;
  particleEmitterForm._24_8_ = 0;
  particleEmitterForm._32_4_ = 0;
  __cxa_atexit(EditorFormDisplayValue__EditorFormDisplayValue, particleEmitterForm, &__dso_handle);
  smokeEmitterForm._0_8_ = 0;
  smokeEmitterForm._8_8_ = 0;
  smokeEmitterForm._16_4_ = 0;
  smokeEmitterForm._24_8_ = 0;
  smokeEmitterForm._32_4_ = 0;
  __cxa_atexit(EditorFormDisplayValue__EditorFormDisplayValue, smokeEmitterForm, &__dso_handle);
  quakeEmitterForm._0_8_ = 0;
  quakeEmitterForm._8_8_ = 0;
  quakeEmitterForm._16_4_ = 0;
  quakeEmitterForm._24_8_ = 0;
  quakeEmitterForm._32_4_ = 0;
  __cxa_atexit(EditorFormDisplayValue__EditorFormDisplayValue, quakeEmitterForm, &__dso_handle);
  laserObjectForm._0_8_ = 0;
  laserObjectForm._8_8_ = 0;
  laserObjectForm._16_4_ = 0;
  laserObjectForm._24_8_ = 0;
  laserObjectForm._32_4_ = 0;
  __cxa_atexit(EditorFormDisplayValue__EditorFormDisplayValue, laserObjectForm, &__dso_handle);
  shooterObjectForm._0_8_ = 0;
  shooterObjectForm._8_8_ = 0;
  shooterObjectForm._16_4_ = 0;
  shooterObjectForm._24_8_ = 0;
  shooterObjectForm._32_4_ = 0;
  __cxa_atexit(EditorFormDisplayValue__EditorFormDisplayValue, shooterObjectForm, &__dso_handle);
  keyObjectForm._0_8_ = 0;
  keyObjectForm._8_8_ = 0;
  keyObjectForm._16_4_ = 0;
  keyObjectForm._24_8_ = 0;
  keyObjectForm._32_4_ = 0;
  __cxa_atexit(EditorFormDisplayValue__EditorFormDisplayValue, keyObjectForm, &__dso_handle);
  orbObjectForm._0_8_ = 0;
  orbObjectForm._8_8_ = 0;
  orbObjectForm._16_4_ = 0;
  orbObjectForm._24_8_ = 0;
  orbObjectForm._32_4_ = 0;
  __cxa_atexit(EditorFormDisplayValue__EditorFormDisplayValue, orbObjectForm, &__dso_handle);
  switchObjectForm._0_8_ = 0;
  switchObjectForm._8_8_ = 0;
  switchObjectForm._16_4_ = 0;
  switchObjectForm._24_8_ = 0;
  switchObjectForm._32_4_ = 0;
  __cxa_atexit(EditorFormDisplayValue__EditorFormDisplayValue, switchObjectForm, &__dso_handle);
  fanObjectForm._0_8_ = 0;
  fanObjectForm._8_8_ = 0;
  fanObjectForm._16_4_ = 0;
  fanObjectForm._24_8_ = 0;
  fanObjectForm._32_4_ = 0;
  __cxa_atexit(EditorFormDisplayValue__EditorFormDisplayValue, fanObjectForm, &__dso_handle);
  vSelectionPoint1 = 0x4cbebc20;
  DAT_0081a974 /* R:2.2958888052482446e-39f */ = 0x4cbebc20;
  __cxa_atexit(Vector2__Vector2, &vSelectionPoint1, &__dso_handle);
  vSelectionPoint2 = 0x4cbebc20;
  _DAT_0081a97c /* R:0.0f */ = 0x4cbebc20;
  __cxa_atexit(Vector2__Vector2, &vSelectionPoint2, &__dso_handle);
  TileLevelSetPiece__TileLevelSetPiece__0058d640((TileLevelSetPiece *)lastParalax);
  __cxa_atexit(TileLevelSetPiece__TileLevelSetPiece__0058d560, lastParalax, &__dso_handle);
  TileLevelSetPiece__TileLevelSetPiece__0058d640((TileLevelSetPiece *)lastSetPiece);
  __cxa_atexit(TileLevelSetPiece__TileLevelSetPiece__0058d560, lastSetPiece, &__dso_handle);
  TileLevelSetPiece__TileLevelSetPiece__0058d640((TileLevelSetPiece *)lastAnimation);
  __cxa_atexit(TileLevelSetPiece__TileLevelSetPiece__0058d560, lastAnimation, &__dso_handle);
  TileLevelSetPiece__TileLevelSetPiece__0058d640((TileLevelSetPiece *)lastObstacle);
  __cxa_atexit(TileLevelSetPiece__TileLevelSetPiece__0058d560, lastObstacle, &__dso_handle);
  vTileScale._0_4_ = 0x3f800000;
  vTileScale._4_4_ = 0x3f800000;
  vTileScale._8_4_ = 0xbf800000;
  vTileScale._12_4_ = 0x3f800000;
  vTileScale._16_4_ = 0x3f800000;
  vTileScale._20_4_ = 0xbf800000;
  vTileScale._24_4_ = 0xbf800000;
  vTileScale._28_4_ = 0xbf800000;
  __cxa_atexit(__tcf_0, 0, &__dso_handle);
  vTileOpposite._0_4_ = 0x3f800000;
  vTileOpposite._4_4_ = 0x3f800000;
  vTileOpposite._8_4_ = 0xbf800000;
  vTileOpposite._12_4_ = 0x3f800000;
  vTileOpposite._16_4_ = 0x3f800000;
  vTileOpposite._20_4_ = 0xbf800000;
  vTileOpposite._24_4_ = 0xbf800000;
  vTileOpposite._28_4_ = 0xbf800000;
  __cxa_atexit(__tcf_1, 0, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)pCopiedBlocks);
  pCopiedBlocks._42_2_ = 0;
  pCopiedBlocks._40_2_ = 0;
  pCopiedBlocks._52_2_ = 1;
  pCopiedBlocks._56_8_ = 0;
  pCopiedBlocks._64_8_ = 0;
  pCopiedBlocks._72_4_ = 0;
  pCopiedBlocks[0x2c] = 4;
  pCopiedBlocks._48_4_ = 0;
  __cxa_atexit(ResizeableArray_SelectedBlock__ResizeableArray, pCopiedBlocks, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)pTempSetSelection);
  pTempSetSelection._42_2_ = 0;
  pTempSetSelection._40_2_ = 0;
  pTempSetSelection._52_2_ = 1;
  pTempSetSelection._56_8_ = 0;
  pTempSetSelection._64_8_ = 0;
  pTempSetSelection._72_4_ = 0;
  pTempSetSelection[0x2c] = 4;
  pTempSetSelection._48_4_ = 0;
  __cxa_atexit(ResizeableArray_TileLevelSetPiece__ResizeableArray, pTempSetSelection,
               &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)pCopiedSetPieces);
  pCopiedSetPieces._42_2_ = 0;
  pCopiedSetPieces._40_2_ = 0;
  pCopiedSetPieces._52_2_ = 1;
  pCopiedSetPieces._56_8_ = 0;
  pCopiedSetPieces._64_8_ = 0;
  pCopiedSetPieces._72_4_ = 0;
  pCopiedSetPieces[0x2c] = 4;
  pCopiedSetPieces._48_4_ = 0;
  __cxa_atexit(ResizeableArray_TileLevelSetPiece__ResizeableArray__004b5c70, pCopiedSetPieces,
               &__dso_handle);
  vXYCOM = 0;
  DAT_00819f44 /* R:0.0f */ = 0;
  __cxa_atexit(Vector2__Vector2, &vXYCOM, &__dso_handle);
  __cxa_atexit(Vector2__Vector2, &vWorldCursorPos, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)SMBEditor__editorSection);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, SMBEditor__editorSection, &__dso_handle);
  strEditorTmpLevelFile = &DAT_008184c8 /* R:0.00016803004837129265f */;
  __cxa_atexit(std__string_string, &strEditorTmpLevelFile, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMB_MASTER_FORM  (Ghidra `_GLOBAL__sub_I_SMB_MASTER_FORM` @ 004565e0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_SMB_MASTER_FORM(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
/* SMBEditorForms__SMB_MASTER_FORM */

void SMBEditorForms__GLOBAL_sub_I_SMB_MASTER_FORM(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  DAT_0081afd8 /* R:6.367051806383385e-39f */._0_4_ = 0x3f800000;
  DAT_0081afd8 /* R:6.367051806383385e-39f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBInstructions  (Ghidra `_GLOBAL__sub_I_SMBInstructions` @ 00456760)
 * Signature: uint8_t _GLOBAL__sub_I_SMBInstructions(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_SMBInstructions(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_rmChapterStatus  (Ghidra `_GLOBAL__sub_I_rmChapterStatus` @ 004568e0)
 * Signature: uint8_t _GLOBAL__sub_I_rmChapterStatus(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_rmChapterStatus(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_pLeaderboards  (Ghidra `_GLOBAL__sub_I_pLeaderboards` @ 00456a60)
 * Signature: uint8_t _GLOBAL__sub_I_pLeaderboards(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_pLeaderboards(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBLeaderBoardSwitchFilter  (Ghidra `_GLOBAL__sub_I_SMBLeaderBoardSwitchFilter` @ 00456be0)
 * Signature: uint8_t _GLOBAL__sub_I_SMBLeaderBoardSwitchFilter(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SMBLeaderBoardSwitchFilter`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SMBLeaderBoardSwitchFilter(tagButtonProps const*, void*) */

void _GLOBAL__sub_I_SMBLeaderBoardSwitchFilter(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  cSelected._0_4_ = 0x3f800000;
  cSelected._4_4_ = 0;
  cSelected._8_4_ = 0;
  cSelected._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cSelected, &__dso_handle);
  cDisabled._12_4_ = 0x3f800000;
  cDisabled._0_4_ = 0x3f000000;
  cDisabled._4_4_ = 0x3f000000;
  cDisabled._8_4_ = 0x3f000000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cDisabled, &__dso_handle);
  cUnSelected._0_4_ = 0x3f800000;
  cUnSelected._4_4_ = 0x3f800000;
  cUnSelected._8_4_ = 0x3f800000;
  cUnSelected._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cUnSelected, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBLevelLoad  (Ghidra `_GLOBAL__sub_I_SMBLevelLoad` @ 00456de0)
 * Signature: uint8_t _GLOBAL__sub_I_SMBLevelLoad(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_SMBLevelLoad(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  DAT_0081ba88 /* R:1.1910274640396352e-38f */._0_4_ = 0x3f800000;
  DAT_0081ba88 /* R:1.1910274640396352e-38f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBMenu  (Ghidra `_GLOBAL__sub_I_SMBMenu` @ 00456f60)
 * Signature: uint8_t _GLOBAL__sub_I_SMBMenu(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`, `FPUVector__FPUVector`, `ResizeableArray_RemoteChapter__ResizeableArray`, `SyncEvent__SyncEvent`, `SyncEvent__SyncEvent__005b8100`, `TAudioInstance__TAudioInstance`, `TAudioInstance__TAudioInstance__0057a200`, `tagCheatCode__tagCheatCode`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _GLOBAL__sub_I_SMBMenu(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  SyncEvent__SyncEvent((SyncEvent *)loadChapterEvent);
  __cxa_atexit(SyncEvent__SyncEvent__005b8100, loadChapterEvent, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)pInternetsChapters);
  pInternetsChapters._42_2_ = 0;
  pInternetsChapters._40_2_ = 0;
  pInternetsChapters._52_2_ = 1;
  pInternetsChapters._56_8_ = 0;
  pInternetsChapters._64_8_ = 0;
  pInternetsChapters._72_4_ = 0;
  pInternetsChapters[0x2c] = 4;
  pInternetsChapters._48_4_ = 0;
  __cxa_atexit(ResizeableArray_RemoteChapter__ResizeableArray, pInternetsChapters, &__dso_handle);
  playAsBrownie._0_4_ = 0;
  playAsBrownie._4_4_ = 0;
  playAsBrownie._8_4_ = 0;
  playAsBrownie._12_4_ = 0;
  playAsBrownie._16_4_ = 0;
  playAsBrownie._20_4_ = 0;
  playAsBrownie._24_4_ = 0;
  playAsBrownie._28_4_ = 0;
  playAsBrownie._32_4_ = 0;
  playAsBrownie._36_4_ = 0;
  playAsBrownie._40_4_ = 0;
  playAsBrownie._44_4_ = 0;
  playAsBrownie._48_4_ = 0;
  playAsBrownie._52_4_ = 0;
  playAsBrownie._56_4_ = 0;
  playAsBrownie._60_4_ = 0;
  playAsBrownie._64_4_ = 0;
  playAsBrownie._68_4_ = 0;
  playAsBrownie._72_4_ = 0;
  playAsBrownie._76_4_ = 0;
  playAsBrownie._80_4_ = 0;
  playAsBrownie._84_4_ = 1000;
  playAsBrownie._88_4_ = 0;
  playAsBrownie._92_4_ = 0;
  __cxa_atexit(tagCheatCode__tagCheatCode, playAsBrownie, &__dso_handle);
  playAsDrFetus._0_4_ = 0;
  playAsDrFetus._4_4_ = 0;
  playAsDrFetus._8_4_ = 0;
  playAsDrFetus._12_4_ = 0;
  playAsDrFetus._16_4_ = 0;
  playAsDrFetus._20_4_ = 0;
  playAsDrFetus._24_4_ = 0;
  playAsDrFetus._28_4_ = 0;
  playAsDrFetus._32_4_ = 0;
  playAsDrFetus._36_4_ = 0;
  playAsDrFetus._40_4_ = 0;
  playAsDrFetus._44_4_ = 0;
  playAsDrFetus._48_4_ = 0;
  playAsDrFetus._52_4_ = 0;
  playAsDrFetus._56_4_ = 0;
  playAsDrFetus._60_4_ = 0;
  playAsDrFetus._64_4_ = 0;
  playAsDrFetus._68_4_ = 0;
  playAsDrFetus._72_4_ = 0;
  playAsDrFetus._76_4_ = 0;
  playAsDrFetus._80_4_ = 0;
  playAsDrFetus._84_4_ = 1000;
  playAsDrFetus._88_4_ = 0;
  playAsDrFetus._92_4_ = 0;
  __cxa_atexit(tagCheatCode__tagCheatCode, playAsDrFetus, &__dso_handle);
  playAsTofuBoy._0_4_ = 0;
  playAsTofuBoy._4_4_ = 0;
  playAsTofuBoy._8_4_ = 0;
  playAsTofuBoy._12_4_ = 0;
  playAsTofuBoy._16_4_ = 0;
  playAsTofuBoy._20_4_ = 0;
  playAsTofuBoy._24_4_ = 0;
  playAsTofuBoy._28_4_ = 0;
  playAsTofuBoy._32_4_ = 0;
  playAsTofuBoy._36_4_ = 0;
  playAsTofuBoy._40_4_ = 0;
  playAsTofuBoy._44_4_ = 0;
  playAsTofuBoy._48_4_ = 0;
  playAsTofuBoy._52_4_ = 0;
  playAsTofuBoy._56_4_ = 0;
  playAsTofuBoy._60_4_ = 0;
  playAsTofuBoy._64_4_ = 0;
  playAsTofuBoy._68_4_ = 0;
  playAsTofuBoy._72_4_ = 0;
  playAsTofuBoy._76_4_ = 0;
  playAsTofuBoy._80_4_ = 0;
  playAsTofuBoy._84_4_ = 1000;
  playAsTofuBoy._88_4_ = 0;
  playAsTofuBoy._92_4_ = 0;
  __cxa_atexit(tagCheatCode__tagCheatCode, playAsTofuBoy, &__dso_handle);
  playAsWOG._0_4_ = 0;
  playAsWOG._4_4_ = 0;
  playAsWOG._8_4_ = 0;
  playAsWOG._12_4_ = 0;
  playAsWOG._16_4_ = 0;
  playAsWOG._20_4_ = 0;
  playAsWOG._24_4_ = 0;
  playAsWOG._28_4_ = 0;
  playAsWOG._32_4_ = 0;
  playAsWOG._36_4_ = 0;
  playAsWOG._40_4_ = 0;
  playAsWOG._44_4_ = 0;
  playAsWOG._48_4_ = 0;
  playAsWOG._52_4_ = 0;
  playAsWOG._56_4_ = 0;
  playAsWOG._60_4_ = 0;
  playAsWOG._64_4_ = 0;
  playAsWOG._68_4_ = 0;
  playAsWOG._72_4_ = 0;
  playAsWOG._76_4_ = 0;
  playAsWOG._80_4_ = 0;
  playAsWOG._84_4_ = 1000;
  playAsWOG._88_4_ = 0;
  playAsWOG._92_4_ = 0;
  __cxa_atexit(tagCheatCode__tagCheatCode, playAsWOG, &__dso_handle);
  playAsTim._0_4_ = 0;
  playAsTim._4_4_ = 0;
  playAsTim._8_4_ = 0;
  playAsTim._12_4_ = 0;
  playAsTim._16_4_ = 0;
  playAsTim._20_4_ = 0;
  playAsTim._24_4_ = 0;
  playAsTim._28_4_ = 0;
  playAsTim._32_4_ = 0;
  playAsTim._36_4_ = 0;
  playAsTim._40_4_ = 0;
  playAsTim._44_4_ = 0;
  playAsTim._48_4_ = 0;
  playAsTim._52_4_ = 0;
  playAsTim._56_4_ = 0;
  playAsTim._60_4_ = 0;
  playAsTim._64_4_ = 0;
  playAsTim._68_4_ = 0;
  playAsTim._72_4_ = 0;
  playAsTim._76_4_ = 0;
  playAsTim._80_4_ = 0;
  playAsTim._84_4_ = 1000;
  playAsTim._88_4_ = 0;
  playAsTim._92_4_ = 0;
  __cxa_atexit(tagCheatCode__tagCheatCode, playAsTim, &__dso_handle);
  vChapterMenuMeatBoyOffset = 0;
  _DAT_0081bf28 /* R:2.2420775429197073e-44f */ = 0;
  _DAT_0081bf2c /* R:0.0f */ = 0;
  _DAT_0081bf24 /* R:0.0f */ = 0x41200000;
  __cxa_atexit(FPUVector__FPUVector, &vChapterMenuMeatBoyOffset, &__dso_handle);
  vWorldMenuMeatBoyOffset = 0;
  DAT_0081bf38 /* R:1.1915431418745068e-38f */ = 0;
  DAT_0081bf3c /* R:0.0f */ = 0;
  DAT_0081bf34 /* R:2.2958888052482446e-39f */ = 0x41700000;
  __cxa_atexit(FPUVector__FPUVector, &vWorldMenuMeatBoyOffset, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)SMBMenuSection);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, SMBMenuSection, &__dso_handle);
  TAudioInstance__TAudioInstance((TAudioInstance *)titleMusicInstance);
  __cxa_atexit(TAudioInstance__TAudioInstance__0057a200, titleMusicInstance, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_pPalProps  (Ghidra `_GLOBAL__sub_I_pPalProps` @ 00457710)
 * Signature: uint8_t _GLOBAL__sub_I_pPalProps(void)
 * Calls: `BoundingCircle__BoundingCircle`, `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_pPalProps(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  DAT_0081c008 /* R:1.0778787787586493e-41f */._0_4_ = 0x3f800000;
  DAT_0081c008 /* R:1.0778787787586493e-41f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  DAT_0081bfe8 /* R:1.6815581571897805e-44f */._0_4_ = 0;
  DAT_0081bfe8 /* R:1.6815581571897805e-44f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  demonSpawnCircle._8_4_ = 0;
  demonSpawnCircle._12_4_ = 0;
  demonSpawnCircle._4_4_ = 0x41200000;
  demonSpawnCircle[0] = 0x11;
  __cxa_atexit(BoundingCircle__BoundingCircle, demonSpawnCircle, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBPopupDeActivateMenu  (Ghidra `_GLOBAL__sub_I_SMBPopupDeActivateMenu` @ 004578c0)
 * Signature: uint8_t _GLOBAL__sub_I_SMBPopupDeActivateMenu(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SMBPopupDeActivateMenu`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SMBPopupDeActivateMenu(tagButtonProps const*, void*) */

void _GLOBAL__sub_I_SMBPopupDeActivateMenu(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_strPortalUploadQuery  (Ghidra `_GLOBAL__sub_I_strPortalUploadQuery` @ 00457a40)
 * Signature: uint8_t _GLOBAL__sub_I_strPortalUploadQuery(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SQLQuery__SQLQuery`
 * Called by: (none)
 */
void _GLOBAL__sub_I_strPortalUploadQuery(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  sqlQuery._0_8_ = 0;
  sqlQuery._8_8_ = 0;
  sqlQuery._16_8_ = 0;
  sqlQuery._24_4_ = 0;
  sqlQuery._28_4_ = 0;
  sqlQuery._32_2_ = 0;
  sqlQuery._34_2_ = 0;
  __cxa_atexit(SQLQuery__SQLQuery, sqlQuery, &__dso_handle);
  sqlQuery2._0_8_ = 0;
  sqlQuery2._8_8_ = 0;
  sqlQuery2._16_8_ = 0;
  sqlQuery2._24_4_ = 0;
  sqlQuery2._28_4_ = 0;
  sqlQuery2._32_2_ = 0;
  sqlQuery2._34_2_ = 0;
  __cxa_atexit(SQLQuery__SQLQuery, sqlQuery2, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_dwFrameStartTime  (Ghidra `_GLOBAL__sub_I_dwFrameStartTime` @ 00457c70)
 * Signature: uint8_t _GLOBAL__sub_I_dwFrameStartTime(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SyncEvent__SyncEvent`, `SyncEvent__SyncEvent__005b8100`
 * Called by: (none)
 */
void _GLOBAL__sub_I_dwFrameStartTime(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  SyncEvent__SyncEvent((SyncEvent *)writeReplayEvent);
  __cxa_atexit(SyncEvent__SyncEvent__005b8100, writeReplayEvent, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBReplayConfirmDelete  (Ghidra `_GLOBAL__sub_I_SMBReplayConfirmDelete` @ 00457e10)
 * Signature: uint8_t _GLOBAL__sub_I_SMBReplayConfirmDelete(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SMBReplayConfirmDelete`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SMBReplayConfirmDelete(void*) */

void _GLOBAL__sub_I_SMBReplayConfirmDelete(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMBSelectionMenuIncrement  (Ghidra `_GLOBAL__sub_I_SMBSelectionMenuIncrement` @ 00457f90)
 * Signature: uint8_t _GLOBAL__sub_I_SMBSelectionMenuIncrement(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SMBSelectionMenuIncrement`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SMBSelectionMenuIncrement(tagButtonProps const*, void*) */

void _GLOBAL__sub_I_SMBSelectionMenuIncrement(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_GLOBAL_SETTINGS_MENU  (Ghidra `_GLOBAL__sub_I_GLOBAL_SETTINGS_MENU` @ 00458110)
 * Signature: uint8_t _GLOBAL__sub_I_GLOBAL_SETTINGS_MENU(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `CriticalSection__CriticalSection`, `ResizeableArray_GFXScreenResolutions__ResizeableArray`
 * Called by: (none)
 */
void _GLOBAL__sub_I_GLOBAL_SETTINGS_MENU(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)pScreenResolutions);
  pScreenResolutions._42_2_ = 0;
  pScreenResolutions._40_2_ = 0;
  pScreenResolutions._52_2_ = 1;
  pScreenResolutions._56_8_ = 0;
  pScreenResolutions._64_8_ = 0;
  pScreenResolutions._72_4_ = 0;
  pScreenResolutions[0x2c] = 4;
  pScreenResolutions._48_4_ = 0;
  __cxa_atexit(ResizeableArray_GFXScreenResolutions__ResizeableArray, pScreenResolutions,
               &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SmokeEmitter  (Ghidra `_GLOBAL__sub_I_SmokeEmitter` @ 00458300)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_SmokeEmitter(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SmokeEmitter__SmokeEmitter__00511b60`
 * Called by: (none)
 */
/* SmokeEmitter__SmokeEmitter__00511b60(SmokeEmitterCreate const*) */

void SmokeEmitter__GLOBAL_sub_I_SmokeEmitter(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SMB_GLOBAL_INVINCIBLE  (Ghidra `_GLOBAL__sub_I__SMB_GLOBAL_INVINCIBLE` @ 00458480)
 * Signature: uint8_t _GLOBAL__sub_I__SMB_GLOBAL_INVINCIBLE(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `FPUVector__FPUVector`, `ScreenFlashManager__ScreenFlashManager__00517a70`, `std__string_string`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _GLOBAL__sub_I__SMB_GLOBAL_INVINCIBLE(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  DAT_0081c7f8 /* R:2.2420775429197073e-44f */._0_4_ = 0x3f800000;
  DAT_0081c7f8 /* R:2.2420775429197073e-44f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  DAT_0081c838 /* R:1.1917718337838846e-38f */._0_4_ = 0;
  DAT_0081c838 /* R:1.1917718337838846e-38f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  vLastEyePos._0_4_ = 0;
  vLastEyePos._4_4_ = 0;
  vLastEyePos._8_4_ = 0;
  vLastEyePos._12_4_ = 0;
  uTmpGlobalMusicVolume = GLOBALMUSICVOLUME;
  __cxa_atexit(FPUVector__FPUVector, vLastEyePos, &__dso_handle);
  _DAT_0081c768 /* R:2.2420775429197073e-44f */ = CONCAT44(cWhite._4_4_, (uint32_t)cWhite);
  ScreenFlash = 0;
  _DAT_0081c764 /* R:0.0f */ = 0;
  _DAT_0081c778 /* R:8.499491757454318e-39f */ = 0;
  _DAT_0081c770 /* R:1.3176409460046255e-41f */ =
      CONCAT44(DAT_0081c7f8 /* R:2.2420775429197073e-44f */._4_4_,
               (uint32_t)DAT_0081c7f8 /* R:2.2420775429197073e-44f */);
  __cxa_atexit(ScreenFlashManager__ScreenFlashManager__00517a70, &ScreenFlash, &__dso_handle);
  strStartingPalette = &DAT_008184c8 /* R:0.00016803004837129265f */;
  __cxa_atexit(std__string_string, &strStartingPalette, &__dso_handle);
  return;
}

/* ======================================================================
 * TheKid__TheKid  (Ghidra `_GLOBAL__sub_I_TheKid` @ 004586a0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_TheKid(void)
 * Class: TheKid
 * Calls: `ColorTemplate_float__ColorTemplate`, `TheKid__TheKid__005189d0`
 * Called by: (none)
 */
/* TheKid__TheKid__005189d0() */

void TheKid__TheKid(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * Tim__Tim  (Ghidra `_GLOBAL__sub_I_Tim` @ 00458820)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_Tim(void)
 * Class: Tim
 * Calls: `ColorTemplate_float__ColorTemplate`, `Tim__Tim__00518f20`
 * Called by: (none)
 */
/* Tim__Tim__00518f20() */

void Tim__Tim(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * VVVVVV__VVVVVV  (Ghidra `_GLOBAL__sub_I_VVVVVV` @ 004589a0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_VVVVVV(void)
 * Class: VVVVVV
 * Calls: `ColorTemplate_float__ColorTemplate`, `VVVVVV__VVVVVV__005196d0`
 * Called by: (none)
 */
/* VVVVVV__VVVVVV__005196d0() */

void VVVVVV__VVVVVV(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_XAudioSection  (Ghidra `_GLOBAL__sub_I_XAudioSection` @ 00458b20)
 * Signature: uint8_t _GLOBAL__sub_I_XAudioSection(void)
 * Calls: `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`, `ResizeableArray_OpenALCue__ResizeableArray`
 * Called by: (none)
 */
void _GLOBAL__sub_I_XAudioSection(void)

{
  uint32_t *puVar1;

  CriticalSection__CriticalSection((CriticalSection *)XAudioSection);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, XAudioSection, &__dso_handle);
  puVar1 = &DAT_0081cedc /* R:2.2958888052482446e-39f */;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 8;
  } while (puVar1 != (uint32_t *)(XAudioSection + 0x1c));
  __cxa_atexit(__tcf_0, 0, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)pActiveCues);
  pActiveCues._42_2_ = 0;
  pActiveCues._40_2_ = 0;
  pActiveCues._52_2_ = 1;
  pActiveCues._56_8_ = 0;
  pActiveCues._64_8_ = 0;
  pActiveCues._72_4_ = 0;
  pActiveCues[0x2c] = 4;
  pActiveCues._48_4_ = 0;
  __cxa_atexit(ResizeableArray_OpenALCue__ResizeableArray, pActiveCues, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_gfxLockIndexBuffer  (Ghidra `_GLOBAL__sub_I_gfxLockIndexBuffer` @ 00458bf0)
 * Signature: uint8_t _GLOBAL__sub_I_gfxLockIndexBuffer(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_gfxLockIndexBuffer(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_gfxCreateTexture  (Ghidra `_GLOBAL__sub_I_gfxCreateTexture` @ 00458ef0)
 * Signature: uint8_t _GLOBAL__sub_I_gfxCreateTexture(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_gfxCreateTexture(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_gfxLockVertexBuffer  (Ghidra `_GLOBAL__sub_I_gfxLockVertexBuffer` @ 00459070)
 * Signature: uint8_t _GLOBAL__sub_I_gfxLockVertexBuffer(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_gfxLockVertexBuffer(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_gfxCreateVertexDeclaration  (Ghidra `_GLOBAL__sub_I_gfxCreateVertexDeclaration` @ 004591f0)
 * Signature: uint8_t _GLOBAL__sub_I_gfxCreateVertexDeclaration(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_gfxCreateVertexDeclaration(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_uMasterInputFrameCounter  (Ghidra `_GLOBAL__sub_I_uMasterInputFrameCounter` @ 0045c2b0)
 * Signature: uint8_t _GLOBAL__sub_I_uMasterInputFrameCounter(void)
 * Calls: `tagSDLKeyboard__tagSDLKeyboard`, `tagSDLMouse__tagSDLMouse`
 * Called by: (none)
 */
void _GLOBAL__sub_I_uMasterInputFrameCounter(void)

{
  pJoysticks._0_4_ = 0;
  pJoysticks._8_8_ = 0;
  pJoysticks._16_8_ = 0;
  pJoysticks._24_8_ = 0;
  pJoysticks._32_4_ = 0;
  pJoysticks._40_8_ = 0;
  pJoysticks._48_8_ = 0;
  pJoysticks._56_8_ = 0;
  pJoysticks._64_4_ = 0;
  pJoysticks._72_8_ = 0;
  pJoysticks._80_8_ = 0;
  pJoysticks._88_8_ = 0;
  pJoysticks._96_4_ = 0;
  pJoysticks._104_8_ = 0;
  pJoysticks._112_8_ = 0;
  pJoysticks._120_8_ = 0;
  __cxa_atexit(__tcf_0, 0, &__dso_handle);
  mouse = 0;
  __cxa_atexit(tagSDLMouse__tagSDLMouse, &mouse, &__dso_handle);
  keyboard = 0;
  __cxa_atexit(tagSDLKeyboard__tagSDLKeyboard, &keyboard, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_AnimationCallbackSection  (Ghidra `_GLOBAL__sub_I_AnimationCallbackSection` @ 0045c3c0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_AnimationCallbackSection(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`, `ResizeableArray_AnimationFinishedCallback__ResizeableArray`, `UITextFieldStyle__UITextFieldStyle`
 * Called by: (none)
 */
/* AnimationManager__AnimationCallbackSection */

void AnimationManager__GLOBAL_sub_I_AnimationCallbackSection(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  DAT_00820458 /* R:2.2420775429197073e-44f */._0_4_ = 0x3f800000;
  DAT_00820458 /* R:2.2420775429197073e-44f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  DAT_00820448 /* R:2.8306228979361305e-42f */._0_4_ = 0;
  DAT_00820448 /* R:2.8306228979361305e-42f */._4_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &::cNullColor, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)AnimationCallbackSection);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, AnimationCallbackSection, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)pAnimCallbacks);
  pAnimCallbacks._42_2_ = 0;
  pAnimCallbacks._40_2_ = 0;
  pAnimCallbacks._52_2_ = 1;
  pAnimCallbacks._56_8_ = 0;
  pAnimCallbacks._64_8_ = 0;
  pAnimCallbacks._72_4_ = 0;
  pAnimCallbacks[0x2c] = 4;
  pAnimCallbacks._48_4_ = 0;
  __cxa_atexit(ResizeableArray_AnimationFinishedCallback__ResizeableArray, pAnimCallbacks,
               &__dso_handle);
  FlashEditableTextFieldStyle._0_4_ = 0;
  FlashEditableTextFieldStyle._4_4_ = 0;
  FlashEditableTextFieldStyle._8_4_ = 0;
  FlashEditableTextFieldStyle._12_4_ = 0;
  FlashEditableTextFieldStyle._16_4_ = 0;
  FlashEditableTextFieldStyle._20_4_ = 0;
  FlashEditableTextFieldStyle._24_4_ = 0;
  FlashEditableTextFieldStyle._28_4_ = 0;
  __cxa_atexit(UITextFieldStyle__UITextFieldStyle, FlashEditableTextFieldStyle, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_Audio  (Ghidra `_GLOBAL__sub_I_Audio` @ 0045c610)
 * Signature: uint8_t _GLOBAL__sub_I_Audio(void)
 * Calls: `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`, `ResizeableArray_TAudioCueCache__ResizeableArray`, `ResizeableArray_TAudioInstance__ResizeableArray`
 * Called by: (none)
 */
void _GLOBAL__sub_I_Audio(void)

{
  CriticalSection__CriticalSection((CriticalSection *)TAudioSection);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, TAudioSection, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)pMusicInstances);
  pMusicInstances._42_2_ = 0;
  pMusicInstances._40_2_ = 0;
  pMusicInstances._52_2_ = 1;
  pMusicInstances._56_8_ = 0;
  pMusicInstances._64_8_ = 0;
  pMusicInstances._72_4_ = 0;
  pMusicInstances[0x2c] = 4;
  pMusicInstances._48_4_ = 0;
  __cxa_atexit(ResizeableArray_TAudioInstance__ResizeableArray, pMusicInstances, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)pAudioCueCache);
  pAudioCueCache._42_2_ = 0;
  pAudioCueCache._40_2_ = 0;
  pAudioCueCache._52_2_ = 1;
  pAudioCueCache._56_8_ = 0;
  pAudioCueCache._64_8_ = 0;
  pAudioCueCache._72_4_ = 0;
  pAudioCueCache[0x2c] = 4;
  pAudioCueCache._48_4_ = 0;
  __cxa_atexit(ResizeableArray_TAudioCueCache__ResizeableArray, pAudioCueCache, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)cacheCueSection);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, cacheCueSection, &__dso_handle);
  return;
}

/* ======================================================================
 * AudioEffectFade__AudioEffectFade  (Ghidra `_GLOBAL__sub_I_AudioEffectFade` @ 0045c730)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_AudioEffectFade(void)
 * Class: AudioEffectFade
 * Calls: `AudioEffectFade__AudioEffectFade__0057bd10`, `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
/* AudioEffectFade__AudioEffectFade__0057bd10() */

void AudioEffectFade__AudioEffectFade(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_Plane  (Ghidra `_GLOBAL__sub_I_Plane` @ 0045c8b0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_Plane(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `Plane__Plane`, `VertexStream__VertexStream__005a6810`, `VertexStream__VertexStream__005a6980`
 * Called by: (none)
 */
/* Plane__Plane(FPUVector const&, FPUVector const&) */

void Plane__GLOBAL_sub_I_Plane(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  VertexStream__VertexStream__005a6980((VertexStream *)pBoundsStream);
  __cxa_atexit(VertexStream__VertexStream__005a6810, pBoundsStream, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_pSingleQuadStream  (Ghidra `_GLOBAL__sub_I_pSingleQuadStream` @ 0045ca50)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_pSingleQuadStream(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
/* CGR__pSingleQuadStream */

void CGR__GLOBAL_sub_I_pSingleQuadStream(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * Camera__Camera  (Ghidra `_GLOBAL__sub_I_Camera` @ 0045cbd0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_Camera(void)
 * Class: Camera
 * Calls: `Camera__Camera__00581800`, `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
/* Camera__Camera__00581800() */

void Camera__Camera(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_ConfigurationFile_cpp  (Ghidra `_GLOBAL__sub_I_ConfigurationFile.cpp` @ 0045cd50)
 * Signature: uint8_t _GLOBAL__sub_I_ConfigurationFile.cpp(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_ConfigurationFile_cpp(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_p3DCursorTexture  (Ghidra `_GLOBAL__sub_I_p3DCursorTexture` @ 0045ced0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_p3DCursorTexture(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
/* Cursor3D__p3DCursorTexture */

void Cursor3D__GLOBAL_sub_I_p3DCursorTexture(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_uMasterInvokeID  (Ghidra `_GLOBAL__sub_I_uMasterInvokeID` @ 0045d050)
 * Signature: uint8_t _GLOBAL__sub_I_uMasterInvokeID(void)
 * Calls: `CriticalSection__CriticalSection`, `ResizeableArray_tagEditableCategory__ResizeableArray`, `ResizeableArray_tagEditableItem__ResizeableArray`
 * Called by: (none)
 */
void _GLOBAL__sub_I_uMasterInvokeID(void)

{
  CriticalSection__CriticalSection((CriticalSection *)pEditableItems);
  pEditableItems._42_2_ = 0;
  pEditableItems._40_2_ = 0;
  pEditableItems._52_2_ = 1;
  pEditableItems._56_8_ = 0;
  pEditableItems._64_8_ = 0;
  pEditableItems._72_4_ = 0;
  pEditableItems[0x2c] = 4;
  pEditableItems._48_4_ = 0;
  __cxa_atexit(ResizeableArray_tagEditableItem__ResizeableArray, pEditableItems, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)pEditableCategories);
  pEditableCategories._42_2_ = 0;
  pEditableCategories._40_2_ = 0;
  pEditableCategories._52_2_ = 1;
  pEditableCategories._56_8_ = 0;
  pEditableCategories._64_8_ = 0;
  pEditableCategories._72_4_ = 0;
  pEditableCategories[0x2c] = 4;
  pEditableCategories._48_4_ = 0;
  __cxa_atexit(ResizeableArray_tagEditableCategory__ResizeableArray, pEditableCategories,
               &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_dwDefaultTimeBetweenFrames  (Ghidra `_GLOBAL__sub_I_dwDefaultTimeBetweenFrames` @ 0045d130)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_dwDefaultTimeBetweenFrames(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `SyncEvent__SyncEvent`, `SyncEvent__SyncEvent__005b8100`
 * Called by: (none)
 */
/* TEngine__dwDefaultTimeBetweenFrames */

void TEngine__GLOBAL_sub_I_dwDefaultTimeBetweenFrames(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  dwDefaultTimeBetweenFrames = (uint32_t)(long)(DAT_005c01c4 /* R:1000.0f */ * fOneFrameTimeStep);
  SyncEvent__SyncEvent((SyncEvent *)LoadingRenderThreadFinished);
  __cxa_atexit(SyncEvent__SyncEvent__005b8100, LoadingRenderThreadFinished, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_CreateTextEmitterFontResources  (Ghidra `_GLOBAL__sub_I_CreateTextEmitterFontResources` @ 0045d2e0)
 * Signature: uint8_t _GLOBAL__sub_I_CreateTextEmitterFontResources(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `CreateTextEmitterFontResources`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CreateTextEmitterFontResources(void*) */

void _GLOBAL__sub_I_CreateTextEmitterFontResources(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  DAT_00820c68 /* R:2.802596928649634e-45f */._0_4_ = 0;
  DAT_00820c68 /* R:2.802596928649634e-45f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_bIgnoreFragmentCache  (Ghidra `_GLOBAL__sub_I_bIgnoreFragmentCache` @ 0045d460)
 * Signature: uint8_t _GLOBAL__sub_I_bIgnoreFragmentCache(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_bIgnoreFragmentCache(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * Game__ExitGame  (Ghidra `_GLOBAL__sub_I_ExitGame` @ 0045d5e0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_ExitGame(void)
 * Class: Game
 * Calls: `ColorTemplate_float__ColorTemplate`, `Game__ExitGame__00587be0`
 * Called by: (none)
 */
/* Game__ExitGame__00587be0() */

void Game__ExitGame(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_GFXResetParams  (Ghidra `_GLOBAL__sub_I__GFXResetParams` @ 0045d760)
 * Signature: uint8_t _GLOBAL__sub_I__GFXResetParams(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`, `tagResetDeviceParams__tagResetDeviceParams`
 * Called by: (none)
 */
void _GLOBAL__sub_I__GFXResetParams(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  _GFXResetParams._0_4_ = 800;
  _GFXResetParams._4_4_ = 600;
  _GFXResetParams._8_4_ = 0;
  __cxa_atexit(tagResetDeviceParams__tagResetDeviceParams, _GFXResetParams, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)GFXDrawSection);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, GFXDrawSection, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)TGraphicsSection);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, TGraphicsSection, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_GRAPHICSFORM  (Ghidra `_GLOBAL__sub_I__GRAPHICSFORM` @ 0045d950)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I__GRAPHICSFORM(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `CriticalSection__CriticalSection`, `ResizeableArray_SelectableResolutions__ResizeableArray`
 * Called by: (none)
 */
/* GraphicsSettings__GRAPHICSFORM */

void GraphicsSettings__GLOBAL_sub_I_GRAPHICSFORM(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)pSelectableResolutions);
  pSelectableResolutions._42_2_ = 0;
  pSelectableResolutions._40_2_ = 0;
  pSelectableResolutions._52_2_ = 1;
  pSelectableResolutions._56_8_ = 0;
  pSelectableResolutions._64_8_ = 0;
  pSelectableResolutions._72_4_ = 0;
  pSelectableResolutions[0x2c] = 4;
  pSelectableResolutions._48_4_ = 0;
  __cxa_atexit(ResizeableArray_SelectableResolutions__ResizeableArray, pSelectableResolutions,
               &__dso_handle);
  return;
}

/* ======================================================================
 * IndexBuffer__IndexBuffer  (Ghidra `_GLOBAL__sub_I_IndexBuffer` @ 0045db40)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_IndexBuffer(void)
 * Class: IndexBuffer
 * Calls: `ColorTemplate_float__ColorTemplate`, `IndexBuffer__IndexBuffer__0058a590`
 * Called by: (none)
 */
/* IndexBuffer__IndexBuffer__0058a590() */

void IndexBuffer__IndexBuffer(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_Input  (Ghidra `_GLOBAL__sub_I_Input` @ 0045dcc0)
 * Signature: uint8_t _GLOBAL__sub_I_Input(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_Input(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_fLevelGridWH  (Ghidra `_GLOBAL__sub_I_fLevelGridWH` @ 0045de40)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_fLevelGridWH(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
/* TileLevel__fLevelGridWH */

void TileLevel__GLOBAL_sub_I_fLevelGridWH(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_LoaderAllocSection  (Ghidra `_GLOBAL__sub_I_LoaderAllocSection` @ 0045dfc0)
 * Signature: uint8_t _GLOBAL__sub_I_LoaderAllocSection(void)
 * Calls: `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`
 * Called by: (none)
 */
void _GLOBAL__sub_I_LoaderAllocSection(void)

{
  CriticalSection__CriticalSection((CriticalSection *)LoaderAllocSection);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, LoaderAllocSection, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)pLoaderFuncs);
  pLoaderFuncs._42_2_ = 0;
  pLoaderFuncs._40_2_ = 0;
  pLoaderFuncs._52_2_ = 1;
  pLoaderFuncs._56_8_ = 0;
  pLoaderFuncs._64_8_ = 0;
  pLoaderFuncs._72_4_ = 0;
  pLoaderFuncs[0x2c] = 4;
  pLoaderFuncs._48_4_ = 0;
  __cxa_atexit(ResizeableArray_Loader__LoaderFuncBlock::~ResizeableArray, pLoaderFuncs,
               &__dso_handle);
  return;
}

/* ======================================================================
 * Model__Model  (Ghidra `_GLOBAL__sub_I_~Model` @ 0045e050)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_~Model(void)
 * Class: Model
 * Calls: `ColorTemplate_float__ColorTemplate`, `Model__Model__005928a0`
 * Called by: (none)
 */
/* Model__Model__005928a0() */

void Model__GLOBAL_sub_I_Model(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_vDefaultStart3D  (Ghidra `_GLOBAL__sub_I_vDefaultStart3D` @ 0045e1d0)
 * Signature: uint8_t _GLOBAL__sub_I_vDefaultStart3D(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `FPUVector__FPUVector`, `Vector2__Vector2`
 * Called by: (none)
 */
void _GLOBAL__sub_I_vDefaultStart3D(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  vDefaultStart3D._0_4_ = 0;
  vDefaultStart3D._4_4_ = 0;
  DAT_008224a8 /* R:7.541182974059577e-39f */._0_4_ = 0;
  DAT_008224a8 /* R:7.541182974059577e-39f */._4_4_ = 0;
  __cxa_atexit(FPUVector__FPUVector, &vDefaultStart3D, &__dso_handle);
  vDefaultStart2D._0_4_ = 0;
  vDefaultStart2D._4_4_ = 0;
  __cxa_atexit(Vector2__Vector2, &vDefaultStart2D, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_Player  (Ghidra `_GLOBAL__sub_I_Player` @ 0045e520)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_Player(void)
 * Calls: (none)
 * Called by: (none)
 */
/* Players__Player */

void Players__GLOBAL_sub_I_Player(void)

{
  Player._0_4_ = 0xffffffff;
  Player._8_8_ = 0;
  Player._16_4_ = 0;
  Player._24_4_ = 0xffffffff;
  Player._32_8_ = 0;
  Player._40_4_ = 0;
  Player._48_4_ = 0xffffffff;
  Player._56_8_ = 0;
  Player._64_4_ = 0;
  Player._72_4_ = 0xffffffff;
  Player._80_8_ = 0;
  Player._88_4_ = 0;
  __cxa_atexit(__tcf_0, 0, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_PropertiesFile  (Ghidra `_GLOBAL__sub_I_PropertiesFile` @ 0045e5b0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_PropertiesFile(void)
 * Calls: `PropertiesFile__PropertiesFile__005975b0`, `std__ios_base_Init_Init`
 * Called by: (none)
 */
/* PropertiesFile__PropertiesFile__005975b0(char const*, unsigned int) */

void PropertiesFile__GLOBAL_sub_I_PropertiesFile(void)

{
  std__ios_base_Init_Init((Init *)&std__ioinit);
  __cxa_atexit(std__ios_base_Init_Init, &std__ioinit, &__dso_handle);
  return;
}

/* ======================================================================
 * ReimplmentThisSprite__ReimplmentThisSprite  (Ghidra `_GLOBAL__sub_I_ReimplmentThisSprite` @ 0045e5e0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_ReimplmentThisSprite(void)
 * Class: ReimplmentThisSprite
 * Calls: `ColorTemplate_float__ColorTemplate`, `ReimplmentThisSprite__ReimplmentThisSprite__005979d0`
 * Called by: (none)
 */
/* ReimplmentThisSprite__ReimplmentThisSprite__005979d0() */

void ReimplmentThisSprite__ReimplmentThisSprite(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * RenderLayer__RenderLayer  (Ghidra `_GLOBAL__sub_I_RenderLayer` @ 0045e760)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_RenderLayer(void)
 * Class: RenderLayer
 * Calls: `ColorTemplate_float__ColorTemplate`, `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`, `RenderLayer__RenderLayer__00597d50`
 * Called by: (none)
 */
/* RenderLayer__RenderLayer__00597d50() */

void RenderLayer__RenderLayer(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  DAT_00822778 /* R:7.547281424976319e-39f */._0_4_ = 0x3f800000;
  DAT_00822778 /* R:7.547281424976319e-39f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)RenderLayers__MasterRenderSection);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, RenderLayers__MasterRenderSection,
               &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)_RENDERLAYER_SECTION);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, _RENDERLAYER_SECTION, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_ResourceCreator  (Ghidra `_GLOBAL__sub_I_ResourceCreator` @ 0045e920)
 * Signature: uint8_t _GLOBAL__sub_I_ResourceCreator(void)
 * Calls: `TResourceCreator__TResourceCreator`, `TResourceCreator__TResourceCreator__00599f60`
 * Called by: (none)
 */
void _GLOBAL__sub_I_ResourceCreator(void)

{
  TResourceCreator__TResourceCreator__00599f60((TResourceCreator *)ResourceCreator);
  __cxa_atexit(TResourceCreator__TResourceCreator, ResourceCreator, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_CreateRibbonEmitterResources  (Ghidra `_GLOBAL__sub_I_CreateRibbonEmitterResources` @ 0045e950)
 * Signature: uint8_t _GLOBAL__sub_I_CreateRibbonEmitterResources(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_CreateRibbonEmitterResources(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  DAT_008228c8 /* R:7.550128863455827e-39f */._0_4_ = 0x3f800000;
  DAT_008228c8 /* R:7.550128863455827e-39f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  DAT_008228d8 /* R:3.1986038746678274e-41f */._0_4_ = 0;
  DAT_008228d8 /* R:3.1986038746678274e-41f */._4_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * SceneObject2D__SceneObject2D  (Ghidra `_GLOBAL__sub_I_~SceneObject2D` @ 0045ead0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_~SceneObject2D(void)
 * Class: SceneObject2D
 * Calls: `ColorTemplate_float__ColorTemplate`, `SceneObject2D__SceneObject2D__0059b220`
 * Called by: (none)
 */
/* SceneObject2D__SceneObject2D__0059b220() */

void SceneObject2D__GLOBAL_sub_I_SceneObject2D(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_pMarginStream  (Ghidra `_GLOBAL__sub_I___pMarginStream` @ 0045ec50)
 * Signature: uint8_t _GLOBAL__sub_I___pMarginStream(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I___pMarginStream(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_pSetPieceWayPointStream  (Ghidra `_GLOBAL__sub_I_pSetPieceWayPointStream` @ 0045edd0)
 * Signature: uint8_t _GLOBAL__sub_I_pSetPieceWayPointStream(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_pSetPieceWayPointStream(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SparkEmitterResourceCreate  (Ghidra `_GLOBAL__sub_I_SparkEmitterResourceCreate` @ 0045f0d0)
 * Signature: uint8_t _GLOBAL__sub_I_SparkEmitterResourceCreate(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_SparkEmitterResourceCreate(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  DAT_00822b88 /* R:1.401298464324817e-44f */._0_4_ = 0x3f800000;
  DAT_00822b88 /* R:1.401298464324817e-44f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_Sprite  (Ghidra `_GLOBAL__sub_I_Sprite` @ 0045f250)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_Sprite(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `Sprite__Sprite__005a0040`
 * Called by: (none)
 */
/* Sprite__Sprite__005a0040(SpriteCreation const*) */

void Sprite__GLOBAL_sub_I_Sprite(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_uNumTextures  (Ghidra `_GLOBAL__sub_I__uNumTextures` @ 0045f3d0)
 * Signature: uint8_t _GLOBAL__sub_I__uNumTextures(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I__uNumTextures(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_TexturePackage  (Ghidra `_GLOBAL__sub_I_TexturePackage` @ 0045f550)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_TexturePackage(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `TexturePackage__TexturePackage`
 * Called by: (none)
 */
/* TexturePackage__TexturePackage(TexturePackageCreate const*) */

void TexturePackage__GLOBAL_sub_I_TexturePackage(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * TilePalette__TilePalette  (Ghidra `_GLOBAL__sub_I_TilePalette` @ 0045f6d0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_TilePalette(void)
 * Class: TilePalette
 * Calls: `ColorTemplate_float__ColorTemplate`, `TilePalette__TilePalette__005a1cb0`
 * Called by: (none)
 */
/* TilePalette__TilePalette__005a1cb0() */

void TilePalette__TilePalette(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_UI_cpp  (Ghidra `_GLOBAL__sub_I_UI.cpp` @ 0045f850)
 * Signature: uint8_t _GLOBAL__sub_I_UI.cpp(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_UI_cpp(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_UILayer  (Ghidra `_GLOBAL__sub_I___UILayer` @ 0045f9d0)
 * Signature: uint8_t _GLOBAL__sub_I___UILayer(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I___UILayer(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_DEFAULT_UIBUTTON_STYLE  (Ghidra `_GLOBAL__sub_I__DEFAULT_UIBUTTON_STYLE` @ 0045fb50)
 * Signature: uint8_t _GLOBAL__sub_I__DEFAULT_UIBUTTON_STYLE(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `UIButtonStyle__UIButtonStyle`
 * Called by: (none)
 */
void _GLOBAL__sub_I__DEFAULT_UIBUTTON_STYLE(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  _DEFAULT_UIBUTTON_STYLE._0_4_ = 0;
  _DEFAULT_UIBUTTON_STYLE._4_4_ = 0;
  _DEFAULT_UIBUTTON_STYLE._16_4_ = 0x3f000000;
  _DEFAULT_UIBUTTON_STYLE._20_4_ = 0x3f000000;
  _DEFAULT_UIBUTTON_STYLE._24_4_ = 0x3f000000;
  _DEFAULT_UIBUTTON_STYLE._8_4_ = 0;
  _DEFAULT_UIBUTTON_STYLE._12_4_ = 0x3f800000;
  _DEFAULT_UIBUTTON_STYLE._28_4_ = 0x3f800000;
  _DEFAULT_UIBUTTON_STYLE._44_4_ = 0x3f800000;
  _DEFAULT_UIBUTTON_STYLE._32_4_ = 0x3f333333;
  _DEFAULT_UIBUTTON_STYLE._36_4_ = 0x3f333333;
  _DEFAULT_UIBUTTON_STYLE._40_4_ = 0x3f333333;
  __cxa_atexit(UIButtonStyle__UIButtonStyle, _DEFAULT_UIBUTTON_STYLE, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_DEFAULT_UIDROPDOWN_STYLE  (Ghidra `_GLOBAL__sub_I__DEFAULT_UIDROPDOWN_STYLE` @ 0045fd30)
 * Signature: uint8_t _GLOBAL__sub_I__DEFAULT_UIDROPDOWN_STYLE(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `UIDropDownStyle__UIDropDownStyle`, `UIFormStyle__UIFormStyle`
 * Called by: (none)
 */
void _GLOBAL__sub_I__DEFAULT_UIDROPDOWN_STYLE(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  _DEFAULT_UIDROPDOWN_STYLE._0_4_ = 0;
  _DEFAULT_UIDROPDOWN_STYLE._4_4_ = 0;
  _DEFAULT_UIDROPDOWN_STYLE._8_4_ = 0;
  _DEFAULT_UIDROPDOWN_STYLE._12_4_ = 0x3f800000;
  __cxa_atexit(UIDropDownStyle__UIDropDownStyle, _DEFAULT_UIDROPDOWN_STYLE, &__dso_handle);
  _DEFAULT_UIDROPDOWNFORM_STYLE._0_4_ = 0;
  _DEFAULT_UIDROPDOWNFORM_STYLE._4_4_ = 0;
  _DEFAULT_UIDROPDOWNFORM_STYLE._8_4_ = 0;
  _DEFAULT_UIDROPDOWNFORM_STYLE._12_4_ = 0x3f800000;
  __cxa_atexit(UIFormStyle__UIFormStyle, _DEFAULT_UIDROPDOWNFORM_STYLE, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_ConvertPosTo0To1  (Ghidra `_GLOBAL__sub_I_ConvertPosTo0To1` @ 0045ff00)
 * Signature: uint8_t _GLOBAL__sub_I_ConvertPosTo0To1(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `ConvertPosTo0To1`, `UIFormStyle__UIFormStyle`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConvertPosTo0To1(float&, float&, float, float) */

void _GLOBAL__sub_I_ConvertPosTo0To1(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  _DEFAULT_UIFORM_STYLE._12_4_ = 0x3f333333;
  _DEFAULT_UIFORM_STYLE._0_4_ = 0x3e4ccccd;
  _DEFAULT_UIFORM_STYLE._4_4_ = 0x3e4ccccd;
  _DEFAULT_UIFORM_STYLE._8_4_ = 0x3e4ccccd;
  __cxa_atexit(UIFormStyle__UIFormStyle, _DEFAULT_UIFORM_STYLE, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_DEFAULT_UIFRAME_STYLE  (Ghidra `_GLOBAL__sub_I__DEFAULT_UIFRAME_STYLE` @ 004600b0)
 * Signature: uint8_t _GLOBAL__sub_I__DEFAULT_UIFRAME_STYLE(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `UIFrameStyle__UIFrameStyle`
 * Called by: (none)
 */
void _GLOBAL__sub_I__DEFAULT_UIFRAME_STYLE(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  DAT_00823178 /* R:3.3978685162948164e-41f */._0_4_ = 0x3f800000;
  DAT_00823178 /* R:3.3978685162948164e-41f */._4_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, &cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  _DEFAULT_UIFRAME_STYLE._4_4_ = cWhite._4_4_;
  _DEFAULT_UIFRAME_STYLE._0_4_ = (uint32_t)cWhite;
  _DEFAULT_UIFRAME_STYLE._16_4_ = 0;
  _DEFAULT_UIFRAME_STYLE._20_4_ = 0;
  _DEFAULT_UIFRAME_STYLE._24_4_ = 0;
  _DEFAULT_UIFRAME_STYLE._28_4_ = 0x3f800000;
  _DEFAULT_UIFRAME_STYLE._12_4_ = DAT_00823178 /* R:3.3978685162948164e-41f */._4_4_;
  _DEFAULT_UIFRAME_STYLE._8_4_ = (uint32_t)DAT_00823178 /* R:3.3978685162948164e-41f */;
  __cxa_atexit(UIFrameStyle__UIFrameStyle, _DEFAULT_UIFRAME_STYLE, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_DEFAULT_UILABEL_STYLE  (Ghidra `_GLOBAL__sub_I__DEFAULT_UILABEL_STYLE` @ 00460270)
 * Signature: uint8_t _GLOBAL__sub_I__DEFAULT_UILABEL_STYLE(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `UILabelStyle__UILabelStyle`
 * Called by: (none)
 */
void _GLOBAL__sub_I__DEFAULT_UILABEL_STYLE(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  _DEFAULT_UILABEL_STYLE._0_4_ = 0x3f800000;
  _DEFAULT_UILABEL_STYLE._4_4_ = 0x3f800000;
  _DEFAULT_UILABEL_STYLE._8_4_ = 0x3f800000;
  _DEFAULT_UILABEL_STYLE._12_4_ = 0x3f800000;
  _DEFAULT_UILABEL_STYLE._24_4_ = _DEFAULT_UI_FONT_SIZE;
  __cxa_atexit(UILabelStyle__UILabelStyle, _DEFAULT_UILABEL_STYLE, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_DEFAULT_UISCROLLBAR_STYLE  (Ghidra `_GLOBAL__sub_I__DEFAULT_UISCROLLBAR_STYLE` @ 00460420)
 * Signature: uint8_t _GLOBAL__sub_I__DEFAULT_UISCROLLBAR_STYLE(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `UIScrollBarStyle__UIScrollBarStyle`
 * Called by: (none)
 */
void _GLOBAL__sub_I__DEFAULT_UISCROLLBAR_STYLE(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  _DEFAULT_UISCROLLBAR_STYLE._12_4_ = 0x3f800000;
  _DEFAULT_UISCROLLBAR_STYLE._28_4_ = 0x3f800000;
  _DEFAULT_UISCROLLBAR_STYLE._0_4_ = 0x3dcccccd;
  _DEFAULT_UISCROLLBAR_STYLE._4_4_ = 0x3dcccccd;
  _DEFAULT_UISCROLLBAR_STYLE._8_4_ = 0x3dcccccd;
  _DEFAULT_UISCROLLBAR_STYLE._44_4_ = 0x3f800000;
  _DEFAULT_UISCROLLBAR_STYLE._16_4_ = 0x3e99999a;
  _DEFAULT_UISCROLLBAR_STYLE._20_4_ = 0x3e99999a;
  _DEFAULT_UISCROLLBAR_STYLE._24_4_ = 0x3e99999a;
  _DEFAULT_UISCROLLBAR_STYLE._32_4_ = 0x3f333333;
  _DEFAULT_UISCROLLBAR_STYLE._36_4_ = 0x3f333333;
  _DEFAULT_UISCROLLBAR_STYLE._40_4_ = 0x3f333333;
  __cxa_atexit(UIScrollBarStyle__UIScrollBarStyle, _DEFAULT_UISCROLLBAR_STYLE, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_DEFAULT_UITEXTFIELD_STYLE  (Ghidra `_GLOBAL__sub_I__DEFAULT_UITEXTFIELD_STYLE` @ 00460610)
 * Signature: uint8_t _GLOBAL__sub_I__DEFAULT_UITEXTFIELD_STYLE(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `UITextFieldStyle__UITextFieldStyle`
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _GLOBAL__sub_I__DEFAULT_UITEXTFIELD_STYLE(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  _DEFAULT_UITEXTFIELD_STYLE._0_4_ = 0;
  _DEFAULT_UITEXTFIELD_STYLE._4_4_ = 0;
  DAT_00823350 /* R:1.0930128021733573e-43f */._0_4_ = 0x3f4ccccd;
  DAT_00823350 /* R:1.0930128021733573e-43f */._4_4_ = 0x3f4ccccd;
  DAT_00823358 /* R:3.4400476000709934e-41f */._0_4_ = 0x3f4ccccd;
  DAT_00823348 /* R:7.56734801898545e-39f */._0_4_ = 0;
  DAT_00823348 /* R:7.56734801898545e-39f */._4_4_ = 0x3f800000;
  DAT_00823358 /* R:3.4400476000709934e-41f */._4_4_ = 0x3f800000;
  _DAT_00823368 /* R:1.6535321879032841e-43f */ = _DEFAULT_UI_FONT_SIZE;
  __cxa_atexit(UITextFieldStyle__UITextFieldStyle, &_DEFAULT_UITEXTFIELD_STYLE, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_uNumVertexBuffers  (Ghidra `_GLOBAL__sub_I__uNumVertexBuffers` @ 004607e0)
 * Signature: uint8_t _GLOBAL__sub_I__uNumVertexBuffers(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I__uNumVertexBuffers(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_VertexDeclaration  (Ghidra `_GLOBAL__sub_I_VertexDeclaration` @ 00460960)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_VertexDeclaration(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `VertexDeclaration__VertexDeclaration__005a6630`
 * Called by: (none)
 */
/* VertexDeclaration__VertexDeclaration__005a6630(tagVertexDeclarationCreation const*) */

void VertexDeclaration__GLOBAL_sub_I_VertexDeclaration(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * VertexStream__VertexStream  (Ghidra `_GLOBAL__sub_I_VertexStream` @ 00460c60)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_VertexStream(void)
 * Class: VertexStream
 * Calls: `ColorTemplate_float__ColorTemplate`, `VertexStream__VertexStream__005a6980`
 * Called by: (none)
 */
/* VertexStream__VertexStream__005a6980() */

void VertexStream__VertexStream(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_Memory  (Ghidra `_GLOBAL__sub_I_Memory` @ 00460de0)
 * Signature: uint8_t _GLOBAL__sub_I_Memory(void)
 * Calls: `TMemory__TMemory`
 * Called by: (none)
 */
void _GLOBAL__sub_I_Memory(void)

{
  __cxa_atexit(TMemory__TMemory, &Memory, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_SystemCaps  (Ghidra `_GLOBAL__sub_I_SystemCaps` @ 00460e00)
 * Signature: uint8_t _GLOBAL__sub_I_SystemCaps(void)
 * Calls: (none)
 * Called by: (none)
 */
void _GLOBAL__sub_I_SystemCaps(void)

{
  SystemCaps._0_4_ = 0;
  LastFrameSystemCaps._0_4_ = 0;
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_FixFileCase  (Ghidra `_GLOBAL__sub_I_FixFileCase` @ 00460e20)
 * Signature: uint8_t _GLOBAL__sub_I_FixFileCase(void)
 * Calls: `CriticalSection__CriticalSection`, `CriticalSection__CriticalSection__005b71d0`, `FixFileCase`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FixFileCase(char const*) */

void _GLOBAL__sub_I_FixFileCase(void)

{
  CriticalSection__CriticalSection((CriticalSection *)fileOpenSection);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, fileOpenSection, &__dso_handle);
  CriticalSection__CriticalSection((CriticalSection *)packageRead);
  __cxa_atexit(CriticalSection__CriticalSection__005b71d0, packageRead, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_Window  (Ghidra `_GLOBAL__sub_I_Window` @ 00460e70)
 * Signature: uint8_t _GLOBAL__sub_I_Window(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_Window(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cWhite, &__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlack, &__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cOrange, &__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cYellow, &__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cRed, &__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cGreen, &__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cBlue, &__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_fnMessageBoxRender  (Ghidra `_GLOBAL__sub_I_fnMessageBoxRender` @ 00460ff0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_fnMessageBoxRender(void)
 * Calls: (none)
 * Called by: (none)
 */
/* UserAlert__fnMessageBoxRender */

void UserAlert__GLOBAL_sub_I_fnMessageBoxRender(void)

{
  pendingCreation._0_4_ = 0;
  pendingCreation._8_8_ = 0;
  pendingCreation._16_8_ = 0;
  pendingCreation._24_8_ = 0;
  pendingCreation._32_8_ = 0;
  pendingCreation._40_8_ = 0;
  pendingCreation._48_8_ = 0;
  pendingCreation._56_8_ = 0;
  pendingCreation._64_8_ = 0;
  pendingCreation._72_8_ = 0;
  pendingCreation._80_8_ = 0;
  pendingCreation._88_8_ = 0;
  pendingCreation._96_8_ = 0;
  pendingCreation._104_8_ = 0;
  __cxa_atexit(MessageCreate__MessageCreate, pendingCreation, &__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_ConvertColorToColor8  (Ghidra `_GLOBAL__sub_I_ConvertColorToColor8` @ 004610a0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_ConvertColorToColor8(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
/* ColorConversion__ConvertColorToColor8(ColorTemplate<float> const&, ColorTemplate<unsigned char>&)
    */

void ColorConversion__GLOBAL_sub_I_ConvertColorToColor8(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cWhite, &__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlack, &__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cOrange, &__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cYellow, &__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cRed, &__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cGreen, &__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cBlue, &__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate, ::cNullColor, &__dso_handle);
  return;
}

/* ======================================================================
 * start  (Ghidra `_start` @ 00461218)
 * Signature: uint8_t processEntry _start(void)
 * Calls: `main`
 * Called by: (none)
 */
void processEntry _start(uint64_t arg1, uint64_t arg2)

{
  uint8_t auStack_8[8];

  __libc_start_main(main, arg2, &stack0x00000008, __libc_csu_init, __libc_csu_fini, arg1,
                    auStack_8);
  do {
    /* WARNING: Do nothing block with infinite loop */
  } while (true);
}

/* ======================================================================
 * call_gmon_start  (Ghidra `call_gmon_start` @ 00461244)
 * Signature: uint8_t call_gmon_start(void)
 * Calls: (none)
 * Called by: `init`
 */
void call_gmon_start(void)

{
  if (PTR___gmon_start___00815620 != (uint8_t *)0x0) {
    (*(code *)PTR___gmon_start___00815620)();
  }
  return;
}

/* ======================================================================
 * do_global_dtors_aux  (Ghidra `__do_global_dtors_aux` @ 0046125c)
 * Signature: uint8_t __do_global_dtors_aux(void)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x00461280) */

uint64_t __do_global_dtors_aux(uint64_t arg1, uint64_t arg2, uint64_t arg3)

{
  if (completed_5889 == '\0') {
    completed_5889 = '\x01';
  }
  return arg3;
}

/* ======================================================================
 * frame_dummy  (Ghidra `frame_dummy` @ 004612a8)
 * Signature: uint8_t frame_dummy(void)
 * Calls: (none)
 * Called by: `init`
 */
/* WARNING: Removing unreachable block (ram,0x004612c0) */

void frame_dummy(void)

{
  return;
}

/* ======================================================================
 * getInvocationID  (Ghidra `__getInvocationID` @ 00463100)
 * Signature: uint8_t __stdcall __getInvocationID(void)
 * Calls: (none)
 * Called by: (none)
 */
/* SceneObject2D__getInvocationID() const */

uint64_t SceneObject2D__getInvocationID(void)

{
  return 0;
}

/* ======================================================================
 * getEditorProperties  (Ghidra `__getEditorProperties` @ 00463110)
 * Signature: uint8_t __stdcall __getEditorProperties(EditableProperty * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* SceneObject2D__getEditorProperties(EditableProperty*) const */

uint64_t SceneObject2D__getEditorProperties(EditableProperty *arg1)

{
  return 0;
}

/* ======================================================================
 * tcf_0  (Ghidra `__tcf_0` @ 00463f70)
 * Signature: uint8_t __tcf_0(void)
 * Calls: (none)
 * Called by: (none)
 */
void __tcf_0(void)

{
  return;
}

/* ======================================================================
 * getInvocationID__00468c20  (Ghidra `__getInvocationID` @ 00468c20)
 * Signature: uint8_t __stdcall __getInvocationID(void)
 * Calls: (none)
 * Called by: (none)
 */
/* SceneObject__getInvocationID() const */

uint64_t SceneObject__getInvocationID(void)

{
  return 0;
}

/* ======================================================================
 * getEditorProperties__00468c30  (Ghidra `__getEditorProperties` @ 00468c30)
 * Signature: uint8_t __stdcall __getEditorProperties(EditableProperty * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* SceneObject__getEditorProperties(EditableProperty*) const */

uint64_t SceneObject__getEditorProperties(EditableProperty *arg1)

{
  return 0;
}

/* ======================================================================
 * TileLevelLightMap__getNumLights  (Ghidra `__getNumLights` @ 0046fcd0)
 * Signature: uint8_t __thiscall __getNumLights(TileLevelLightMap * this)
 * Class: TileLevelLightMap
 * Calls: (none)
 * Called by: `SMBEditor__Render`, `SMBLevelSave`
 */
/* TileLevelLightMap__getNumLights() */

uint __thiscall TileLevelLightMap__getNumLights(TileLevelLightMap *this)

{
  uint uVar1;
  uint uVar2;

  uVar2 = (*(int *)(this + 0x28) != 0) + 1;
  if (*(int *)(this + 0x68) == 0) {
    uVar2 = (uint)(*(int *)(this + 0x28) != 0);
  }
  uVar1 = uVar2 + 1;
  if (*(int *)(this + 0xa8) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 + 1;
  if (*(int *)(this + 0xe8) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 + 1;
  if (*(int *)(this + 0x128) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 + 1;
  if (*(int *)(this + 0x168) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 + 1;
  if (*(int *)(this + 0x1a8) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 + 1;
  if (*(int *)(this + 0x1e8) == 0) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2 + 1;
  if (*(int *)(this + 0x228) == 0) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 + 1;
  if (*(int *)(this + 0x268) == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}

/* ======================================================================
 * MeatBoyCharactor__getRenderPos  (Ghidra `__getRenderPos` @ 0047e0c0)
 * Signature: uint8_t __thiscall __getRenderPos(MeatBoyCharactor * this)
 * Class: MeatBoyCharactor
 * Calls: (none)
 * Called by: `FactoryBoss__GetCameraFocus`, `FinalBoss__GetCameraFocus`, `ForestBoss__GetCameraFocus`, `GSuperMeatBoy__GetCameraFocus`, `HellBoss__GetCameraFocus`, `RaptureBoss__GetCameraFocus`
 */
/* MeatBoyCharactor__getRenderPos() */

MeatBoyCharactor *__thiscall MeatBoyCharactor__getRenderPos(MeatBoyCharactor *this)

{
  if (*(int *)(*(long *)(this + 0xa38) + 0x2c8) != 1) {
    return (MeatBoyCharactor *)(*(long *)(*(long *)(this + 0x7f0) +
                                          (long)*(int *)(*(long *)(this + 0xa38) + 0x3c) * 8) +
                                0x868);
  }
  return this + 0x868;
}

/* ======================================================================
 * tcf_0__0049e3c0  (Ghidra `__tcf_0` @ 0049e3c0)
 * Signature: uint8_t __tcf_0(void)
 * Calls: (none)
 * Called by: (none)
 */
void __tcf_0(void)

{
  return;
}

/* ======================================================================
 * tcf_1  (Ghidra `__tcf_1` @ 0049e3d0)
 * Signature: uint8_t __tcf_1(void)
 * Calls: (none)
 * Called by: (none)
 */
void __tcf_1(void)

{
  return;
}

/* ======================================================================
 * SMBEditor__getCurrLight  (Ghidra `__getCurrLight` @ 004ab830)
 * Signature: uint8_t __thiscall __getCurrLight(SMBEditor * this)
 * Class: SMBEditor
 * Calls: (none)
 * Called by: `ApplyLightProperties`, `LightPropertiesActivate`
 */
/* SMBEditor__getCurrLight() */

long __thiscall SMBEditor__getCurrLight(SMBEditor *this)

{
  if (pSelectedLight != 0) {
    return pSelectedLight;
  }
  return *(long *)(this + 200);
}

/* ======================================================================
 * SMBEditor__getCurrAnimal  (Ghidra `__getCurrAnimal` @ 004b5700)
 * Signature: uint8_t __stdcall __getCurrAnimal(void)
 * Class: SMBEditor
 * Calls: (none)
 * Called by: `ActivateAnimalProps`, `ApplyAnimalProps`
 */
/* SMBEditor__getCurrAnimal() */

uint64_t SMBEditor__getCurrAnimal(void)

{
  return pSelectedAnimal;
}

/* ======================================================================
 * insertion_sort_SMBPortalLevel_bool_SMBPortalLevel_SMBPortalLevel  (Ghidra `__insertion_sort<SMBPortalLevel**,bool(*)(SMBPortalLevel*,SMBPortalLevel*)>` @ 005057e0)
 * Signature: void __insertion_sort<SMBPortalLevel**,bool(*)(SMBPortalLevel*,SMBPortalLevel*)>(SMBPortalLevel * * arg1, SMBPortalLevel * * arg2, _func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr * arg3)
 * Calls: `memmove`
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std__insertion_sort_SMBPortalLevel, bool (*)(SMBPortalLevel*,
   SMBPortalLevel*)>(SMBPortalLevel**, SMBPortalLevel**, bool (*)(SMBPortalLevel*, SMBPortalLevel*))
   [clone .constprop.34] */

void std__insertion_sort_SMBPortalLevel,
    bool (*)(SMBPortalLevel *, SMBPortalLevel *) >
        (SMBPortalLevel * *arg1, SMBPortalLevel **arg2,
         _func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *arg3)

{
  SMBPortalLevel *pSVar1;
  SMBPortalLevel **ppSVar2;
  SMBPortalLevel **ppSVar3;
  long lVar4;
  SMBPortalLevel *pSVar5;
  SMBPortalLevel **ppSVar6;
  SMBPortalLevel **ppSVar7;
  bool bVar8;

  if ((arg1 != arg2) && (ppSVar6 = arg1 + 1, arg2 != ppSVar6)) {
    ppSVar7 = arg1 + 2;
    do {
      while (true) {
        pSVar1 = *ppSVar6;
        if (*(float *)(pSVar1 + 0x74) < *(float *)(*arg1 + 0x74))
          break;
        pSVar5 = ppSVar6[-1];
        ppSVar3 = ppSVar6;
        if (*(float *)(pSVar1 + 0x74) < *(float *)(pSVar5 + 0x74)) {
          do {
            ppSVar2 = ppSVar3 + -1;
            *ppSVar3 = pSVar5;
            pSVar5 = ppSVar3[-2];
            ppSVar3 = ppSVar2;
          } while (*(float *)(pSVar1 + 0x74) <= *(float *)(pSVar5 + 0x74) &&
                   *(float *)(pSVar5 + 0x74) != *(float *)(pSVar1 + 0x74));
          *ppSVar2 = pSVar1;
        } else {
          *ppSVar6 = pSVar1;
        }
        ppSVar6 = ppSVar6 + 1;
        bVar8 = arg2 == ppSVar7;
        ppSVar7 = ppSVar7 + 1;
        if (bVar8) {
          return;
        }
      }
      lVar4 = (long)ppSVar6 - (long)arg1 >> 3;
      if (lVar4 != 0) {
        memmove(ppSVar7 + -lVar4, arg1, lVar4 * 8);
      }
      ppSVar6 = ppSVar6 + 1;
      bVar8 = arg2 != ppSVar7;
      *arg1 = pSVar1;
      ppSVar7 = ppSVar7 + 1;
    } while (bVar8);
  }
  return;
}

/* ======================================================================
 * adjust_heap_SMBPortalLevel_long_SMBPortalLevel_bool_SMBPortalLevel_SMBPortalLevel  (Ghidra `__adjust_heap<SMBPortalLevel**,long,SMBPortalLevel*,bool(*)(SMBPortalLevel*,SMBPortalLevel*)>` @ 005058d0)
 * Signature: void __adjust_heap<SMBPortalLevel**,long,SMBPortalLevel*,bool(*)(SMBPortalLevel*,SMBPortalLevel*)>(SMBPortalLevel * * arg1, long arg2, long arg3, SMBPortalLevel * arg4, _func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr * arg5)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std__adjust_heap_SMBPortalLevel, long, SMBPortalLevel*, bool (*)(SMBPortalLevel*,
   SMBPortalLevel*)>(SMBPortalLevel**, long, long, SMBPortalLevel*, bool (*)(SMBPortalLevel*,
   SMBPortalLevel*)) [clone .constprop.37] */

void std::__adjust_heap<SMBPortalLevel **, long, SMBPortalLevel *,
                        bool (*)(SMBPortalLevel *, SMBPortalLevel *)>(
    SMBPortalLevel **arg1, long arg2, long arg3, SMBPortalLevel *arg4,
    _func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *arg5)

{
  float fVar1;
  long lVar2;
  long lVar3;
  SMBPortalLevel *pSVar4;
  long lVar5;
  SMBPortalLevel **ppSVar6;
  SMBPortalLevel *pSVar7;

  ppSVar6 = arg1 + arg2;
  lVar2 = arg2;
  while (lVar2 < (arg3 + -1) / 2) {
    lVar3 = (lVar2 + 1) * 2;
    ppSVar6 = arg1 + (lVar2 + 1) * 2;
    lVar5 = lVar3 + -1;
    fVar1 = *(float *)(arg1[lVar5] + 0x74);
    pSVar7 = *ppSVar6 + 0x74;
    pSVar4 = *ppSVar6;
    if (*(float *)pSVar7 <= fVar1 && fVar1 != *(float *)pSVar7) {
      ppSVar6 = arg1 + lVar5;
      lVar3 = lVar5;
      pSVar4 = arg1[lVar5];
    }
    arg1[lVar2] = pSVar4;
    lVar2 = lVar3;
  }
  if (((arg3 & 1U) == 0) && (lVar2 == (arg3 + -2) / 2)) {
    lVar2 = lVar2 * 2 + 1;
    *ppSVar6 = arg1[lVar2];
    ppSVar6 = arg1 + lVar2;
  }
  if (arg2 < lVar2) {
    lVar5 = (lVar2 + -1) / 2;
    pSVar7 = arg1[lVar5];
    if (*(float *)(arg4 + 0x74) < *(float *)(pSVar7 + 0x74) ||
        *(float *)(arg4 + 0x74) == *(float *)(pSVar7 + 0x74)) {
      *ppSVar6 = arg4;
      return;
    }
    while (true) {
      ppSVar6 = arg1 + lVar5;
      arg1[lVar2] = pSVar7;
      if (lVar5 <= arg2)
        break;
      lVar3 = (lVar5 + -1) / 2;
      pSVar7 = arg1[lVar3];
      lVar2 = lVar5;
      lVar5 = lVar3;
      if (*(float *)(arg4 + 0x74) < *(float *)(pSVar7 + 0x74) ||
          *(float *)(arg4 + 0x74) == *(float *)(pSVar7 + 0x74)) {
        *ppSVar6 = arg4;
        return;
      }
    }
  }
  *ppSVar6 = arg4;
  return;
}

/* ======================================================================
 * introsort_loop_SMBPortalLevel_long_bool_SMBPortalLevel_SMBPortalLevel  (Ghidra `__introsort_loop<SMBPortalLevel**,long,bool(*)(SMBPortalLevel*,SMBPortalLevel*)>` @ 005059f0)
 * Signature: void __introsort_loop<SMBPortalLevel**,long,bool(*)(SMBPortalLevel*,SMBPortalLevel*)>(SMBPortalLevel * * arg1, SMBPortalLevel * * arg2, long arg3, _func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr * arg4)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std__introsort_loop_SMBPortalLevel, long, bool (*)(SMBPortalLevel*,
   SMBPortalLevel*)>(SMBPortalLevel**, SMBPortalLevel**, long, bool (*)(SMBPortalLevel*,
   SMBPortalLevel*)) [clone .constprop.35] */

void std__introsort_loop_SMBPortalLevel, long,
    bool (*)(SMBPortalLevel *, SMBPortalLevel *) >
        (SMBPortalLevel * *arg1, SMBPortalLevel **arg2, long arg3,
         _func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *arg4)

{
  SMBPortalLevel **ppSVar1;
  float fVar2;
  SMBPortalLevel *pSVar3;
  SMBPortalLevel *pSVar4;
  long lVar5;
  SMBPortalLevel **ppSVar6;
  SMBPortalLevel *pSVar7;
  SMBPortalLevel **ppSVar8;
  _func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *in_R8;
  long lVar9;
  float fVar10;
  float fVar11;

  lVar5 = (long)arg2 - (long)arg1;
  if (0x87 < lVar5) {
    ppSVar1 = arg1 + 1;
    do {
      if (arg3 == 0) {
        for (lVar9 = (lVar5 >> 3) + -2 >> 1;
             __adjust_heap<SMBPortalLevel **, long, SMBPortalLevel *,
                           bool (*)(SMBPortalLevel *, SMBPortalLevel *)>(arg1, lVar9, lVar5 >> 3,
                                                                         arg1[lVar9], in_R8),
            lVar9 != 0;
             lVar9 = lVar9 + -1) {
        }
        do {
          arg2 = arg2 + -1;
          pSVar7 = *arg2;
          *arg2 = *arg1;
          __adjust_heap<SMBPortalLevel **, long, SMBPortalLevel *,
                        bool (*)(SMBPortalLevel *, SMBPortalLevel *)>(
              arg1, 0, (long)arg2 - (long)arg1 >> 3, pSVar7, in_R8);
        } while (0xf < (long)arg2 - (long)arg1);
        return;
      }
      arg3 = arg3 + -1;
      pSVar7 = arg2[-1];
      pSVar3 = *arg1;
      pSVar4 = arg1[lVar5 >> 4];
      fVar11 = *(float *)(pSVar7 + 0x74);
      fVar10 = *(float *)(pSVar3 + 0x74);
      fVar2 = *(float *)(pSVar4 + 0x74);
      ppSVar6 = arg2;
      ppSVar8 = ppSVar1;
      if (fVar2 <= fVar10) {
        if (fVar11 <= fVar10) {
          if (fVar2 < fVar11)
            goto LAB_00505b0c;
          goto LAB_00505a58;
        }
      } else if (fVar11 <= fVar2) {
        if (fVar10 < fVar11) {
        LAB_00505b0c:
          *arg1 = pSVar7;
          arg2[-1] = pSVar3;
          fVar11 = *(float *)(pSVar3 + 0x74);
          fVar10 = *(float *)(*arg1 + 0x74);
          pSVar7 = pSVar3;
        }
      } else {
      LAB_00505a58:
        *arg1 = pSVar4;
        arg1[lVar5 >> 4] = pSVar3;
        fVar10 = *(float *)(*arg1 + 0x74);
        fVar11 = *(float *)(arg2[-1] + 0x74);
        pSVar7 = arg2[-1];
      }
      while (true) {
        while (pSVar3 = *ppSVar8,
               *(float *)(pSVar3 + 0x74) <= fVar10 && fVar10 != *(float *)(pSVar3 + 0x74)) {
          ppSVar8 = ppSVar8 + 1;
        }
        ppSVar6 = ppSVar6 + -1;
        while (fVar10 < fVar11) {
          ppSVar6 = ppSVar6 + -1;
          pSVar7 = *ppSVar6;
          fVar11 = *(float *)(pSVar7 + 0x74);
        }
        if (ppSVar6 <= ppSVar8)
          break;
        *ppSVar8 = pSVar7;
        *ppSVar6 = pSVar3;
        fVar10 = *(float *)(*arg1 + 0x74);
        fVar11 = *(float *)(ppSVar6[-1] + 0x74);
        pSVar7 = ppSVar6[-1];
        ppSVar8 = ppSVar8 + 1;
      }
      __introsort_loop<SMBPortalLevel **, long, bool (*)(SMBPortalLevel *, SMBPortalLevel *)>(
          ppSVar8, arg2, arg3, (_func_bool_SMBPortalLevel_ptr_SMBPortalLevel_ptr *)pSVar3);
      lVar5 = (long)ppSVar8 - (long)arg1;
      arg2 = ppSVar8;
    } while (0x87 < lVar5);
  }
  return;
}

/* ======================================================================
 * GSuperMeatBoy__getChar  (Ghidra `__getChar` @ 00514c40)
 * Signature: uint8_t __thiscall __getChar(GSuperMeatBoy * this, int arg1)
 * Class: GSuperMeatBoy
 * Calls: (none)
 * Called by: `ActivateAnimProps`, `ActivateEffectProps`, `ActivatePlayerProps`, `DeactivateAnimProps`, `DeactivateEffectProps`, `DeactivatePlayerProps`, `DrFetus__UpdateShots`, `FactoryBoss__GetCameraFocus`, `FactoryBoss__Reset`, `FactoryBoss__Update` (+34 more)
 */
/* GSuperMeatBoy__getChar(int) */

uint64_t __thiscall GSuperMeatBoy__getChar(GSuperMeatBoy *this, int arg1)

{
  if ((*(int *)(pReplay + 0x2c8) != 1) && (arg1 != 1)) {
    return *(uint64_t *)(*(long *)(*(long *)(this + 0x48) + 0x7f0) +
                         (long)*(int *)(pReplay + 0x3c) * 8);
  }
  return *(uint64_t *)(this + 0x48);
}

/* ======================================================================
 * handle_pp_ifdef  (Ghidra `_handle_pp_ifdef` @ 005398c0)
 * Signature: uint8_t _handle_pp_ifdef(void)
 * Calls: `failf`, `find_define`, `memcpy`, `preprocessor_lexer`
 * Called by: (none)
 */
int *_handle_pp_ifdef(long arg1, int arg2)

{
  void *__dest;
  long lVar1;
  void *__src;
  uint64_t uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  uint8_t *puVar10;
  uint64_t uStack_50;
  uint8_t auStack_48[8];
  long local_40[2];

  lVar1 = *(long *)(arg1 + 0x120);
  if (*(int *)(lVar1 + 0x28) == 0) {
    uStack_50 = 0x539a58;
    iVar5 = preprocessor_lexer(lVar1);
  } else {
    iVar5 = *(int *)(lVar1 + 0x24);
    *(uint32_t *)(lVar1 + 0x28) = 0;
  }
  pcVar9 = "Macro names must be indentifiers";
  puVar10 = auStack_48;
  if (iVar5 == 0x101) {
    uVar4 = *(uint *)(lVar1 + 0x20);
    __src = *(void **)(lVar1 + 0x18);
    lVar6 = -((ulong)(*(int *)(lVar1 + 0x20) + 1) + 0x1e & 0xfffffffffffffff0);
    __dest = (void *)((long)local_40 + lVar6);
    *(uint64_t *)(auStack_48 + lVar6 + -8) = 0x539939;
    memcpy(__dest, __src, (ulong)uVar4);
    *(uint8_t *)((long)__dest + (ulong) * (uint *)(lVar1 + 0x20)) = 0;
    if (*(int *)(lVar1 + 0x28) == 0) {
      *(uint64_t *)(auStack_48 + lVar6 + -8) = 0x539a78;
      iVar5 = preprocessor_lexer(lVar1);
    } else {
      iVar5 = *(int *)(lVar1 + 0x24);
      *(uint32_t *)(lVar1 + 0x28) = 0;
    }
    *(uint32_t *)(lVar1 + 0x28) = 1;
    if (((iVar5 == 10) || (iVar5 == 0x12a)) || (iVar5 == 0x11b)) {
      piVar7 = *(int **)(arg1 + 0x118);
      if (piVar7 == (int *)0x0) {
        uVar2 = *(uint64_t *)(arg1 + 0x970);
        pcVar3 = *(code **)(arg1 + 0x960);
        *(uint64_t *)(auStack_48 + lVar6 + -8) = 0x539a93;
        piVar7 = (int *)(*pcVar3)(0x18, uVar2);
        if (piVar7 == (int *)0x0) {
          *(uint32_t *)(arg1 + 4) = 1;
          return (int *)0x0;
        }
      } else {
        *(uint64_t *)(arg1 + 0x118) = *(uint64_t *)(piVar7 + 4);
      }
      piVar7[0] = 0;
      piVar7[1] = 0;
      piVar7[2] = 0;
      piVar7[3] = 0;
      piVar7[4] = 0;
      piVar7[5] = 0;
      local_40[0] = *(long *)(lVar1 + 0x50);
      *(uint64_t *)(auStack_48 + lVar6 + -8) = 0x5399f5;
      lVar6 = find_define(arg1, __dest);
      uVar4 = (uint)(lVar6 != 0);
      if (arg2 != 0x123) {
        uVar4 = lVar6 != 0 ^ 1;
      }
      if ((local_40[0] == 0) || (uVar8 = 1, *(int *)(local_40[0] + 8) == 0)) {
        uVar8 = uVar4 ^ 1;
      }
      *piVar7 = arg2;
      iVar5 = *(int *)(lVar1 + 0x48);
      piVar7[2] = uVar8;
      piVar7[3] = uVar4;
      *(long *)(piVar7 + 4) = local_40[0];
      piVar7[1] = iVar5 + -1;
      *(int **)(lVar1 + 0x50) = piVar7;
      return piVar7;
    }
    pcVar9 = "Invalid #ifndef directive";
    puVar10 = auStack_48 + lVar6;
    if (arg2 == 0x123) {
      pcVar9 = "Invalid #ifdef directive";
      puVar10 = auStack_48 + lVar6;
    }
  }
  *(uint64_t *)(puVar10 + -8) = 0x539994;
  failf(arg1, "%s", pcVar9);
  return (int *)0x0;
}

/* ======================================================================
 * tcf_0__0053db30  (Ghidra `__tcf_0` @ 0053db30)
 * Signature: uint8_t __tcf_0(void)
 * Calls: (none)
 * Called by: (none)
 */
void __tcf_0(void)

{
  return;
}

/* ======================================================================
 * tcf_0__0055dc20  (Ghidra `__tcf_0` @ 0055dc20)
 * Signature: uint8_t __tcf_0(void)
 * Calls: (none)
 * Called by: (none)
 */
void __tcf_0(void)

{
  return;
}

/* ======================================================================
 * tcf_1__0055dc30  (Ghidra `__tcf_1` @ 0055dc30)
 * Signature: uint8_t __tcf_1(void)
 * Calls: (none)
 * Called by: (none)
 */
void __tcf_1(void)

{
  return;
}

/* ======================================================================
 * tcf_2  (Ghidra `__tcf_2` @ 0055dc40)
 * Signature: uint8_t __tcf_2(void)
 * Calls: (none)
 * Called by: (none)
 */
void __tcf_2(void)

{
  return;
}

/* ======================================================================
 * tcf_3  (Ghidra `__tcf_3` @ 0055dc50)
 * Signature: uint8_t __tcf_3(void)
 * Calls: (none)
 * Called by: (none)
 */
void __tcf_3(void)

{
  return;
}

/* ======================================================================
 * tcf_4  (Ghidra `__tcf_4` @ 0055dc60)
 * Signature: uint8_t __tcf_4(void)
 * Calls: (none)
 * Called by: (none)
 */
void __tcf_4(void)

{
  return;
}

/* ======================================================================
 * tcf_5  (Ghidra `__tcf_5` @ 0055dc70)
 * Signature: uint8_t __tcf_5(void)
 * Calls: (none)
 * Called by: (none)
 */
void __tcf_5(void)

{
  return;
}

/* ======================================================================
 * tcf_6  (Ghidra `__tcf_6` @ 0055dc80)
 * Signature: uint8_t __tcf_6(void)
 * Calls: (none)
 * Called by: (none)
 */
void __tcf_6(void)

{
  return;
}

/* ======================================================================
 * tr_init  (Ghidra `_tr_init` @ 0056e9c0)
 * Signature: uint8_t _tr_init(void)
 * Calls: (none)
 * Called by: (none)
 */
void _tr_init(long arg1)

{
  long lVar1;

  *(uint8_t **)(arg1 + 0xb58) = static_l_desc;
  *(uint8_t **)(arg1 + 0xb70) = static_d_desc;
  *(uint8_t **)(arg1 + 0xb88) = static_bl_desc;
  *(uint16_t *)(arg1 + 0x1720) = 0;
  *(long *)(arg1 + 0xb48) = arg1 + 0xc4;
  *(uint32_t *)(arg1 + 0x1724) = 0;
  *(uint32_t *)(arg1 + 0x171c) = 8;
  *(long *)(arg1 + 0xb60) = arg1 + 0x9b8;
  *(long *)(arg1 + 0xb78) = arg1 + 0xaac;
  lVar1 = 0;
  do {
    *(uint16_t *)(arg1 + 0xc4 + lVar1) = 0;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x478);
  lVar1 = 0;
  do {
    *(uint16_t *)(arg1 + 0x9b8 + lVar1) = 0;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x78);
  lVar1 = 0;
  do {
    *(uint16_t *)(arg1 + 0xaac + lVar1) = 0;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x4c);
  *(uint16_t *)(arg1 + 0x4c4) = 1;
  *(uint64_t *)(arg1 + 0x1710) = 0;
  *(uint64_t *)(arg1 + 0x1708) = 0;
  *(uint32_t *)(arg1 + 0x1718) = 0;
  *(uint32_t *)(arg1 + 0x16fc) = 0;
  return;
}

/* ======================================================================
 * tr_stored_block  (Ghidra `_tr_stored_block` @ 0056eac0)
 * Signature: uint8_t _tr_stored_block(void)
 * Calls: (none)
 * Called by: (none)
 */
void _tr_stored_block(long arg1, uint8_t *arg2, int arg3, uint arg4)

{
  byte bVar1;
  uint8_t *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint8_t *puVar6;
  uint8_t *puVar7;
  uint uVar8;
  ulong uVar9;

  iVar5 = *(int *)(arg1 + 0x1724);
  if (iVar5 < 0xe) {
    uVar3 = (ushort)(arg4 << ((byte)iVar5 & 0x1f)) | *(ushort *)(arg1 + 0x1720);
    uVar8 = (uint)uVar3;
    iVar5 = iVar5 + 3;
    *(int *)(arg1 + 0x1724) = iVar5;
    *(ushort *)(arg1 + 0x1720) = uVar3;
  } else {
    uVar8 = *(uint *)(arg1 + 0x28);
    uVar3 = (ushort)(arg4 << ((byte)iVar5 & 0x1f)) | *(ushort *)(arg1 + 0x1720);
    *(ushort *)(arg1 + 0x1720) = uVar3;
    *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar8) = (char)uVar3;
    *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar8 + 1)) = *(uint8_t *)(arg1 + 0x1721);
    *(uint *)(arg1 + 0x28) = uVar8 + 2;
    uVar8 = (int)(arg4 & 0xffff) >> (0x10U - (char)*(int *)(arg1 + 0x1724) & 0x1f);
    iVar5 = *(int *)(arg1 + 0x1724) + -0xd;
    *(short *)(arg1 + 0x1720) = (short)uVar8;
    *(int *)(arg1 + 0x1724) = iVar5;
  }
  if (iVar5 < 9) {
    if (0 < iVar5) {
      uVar4 = *(uint *)(arg1 + 0x28);
      *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar4) = (char)uVar8;
      *(uint *)(arg1 + 0x28) = uVar4 + 1;
    }
  } else {
    uVar4 = *(uint *)(arg1 + 0x28);
    *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar4) = (char)uVar8;
    *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar4 + 1)) = *(uint8_t *)(arg1 + 0x1721);
    *(uint *)(arg1 + 0x28) = uVar4 + 2;
  }
  uVar8 = *(uint *)(arg1 + 0x28);
  *(uint16_t *)(arg1 + 0x1720) = 0;
  *(uint32_t *)(arg1 + 0x1724) = 0;
  *(uint32_t *)(arg1 + 0x171c) = 8;
  *(byte *)(*(long *)(arg1 + 0x10) + (ulong)uVar8) = (byte)arg3;
  bVar1 = (byte)((uint)arg3 >> 8);
  *(byte *)(*(long *)(arg1 + 0x10) + (ulong)(uVar8 + 1)) = bVar1;
  *(byte *)(*(long *)(arg1 + 0x10) + (ulong)(uVar8 + 2)) = ~(byte)arg3;
  uVar4 = uVar8 + 4;
  *(byte *)(*(long *)(arg1 + 0x10) + (ulong)(uVar8 + 3)) = ~bVar1;
  *(uint *)(arg1 + 0x28) = uVar4;
  if (arg3 != 0) {
    puVar2 = arg2 + 1;
    puVar7 = arg2;
    while (true) {
      puVar6 = puVar2;
      uVar9 = (ulong)uVar4;
      uVar4 = uVar4 + 1;
      *(uint8_t *)(*(long *)(arg1 + 0x10) + uVar9) = *puVar7;
      *(uint *)(arg1 + 0x28) = uVar4;
      if (puVar6 == arg2 + 1 + (arg3 - 1))
        break;
      puVar2 = puVar6 + 1;
      puVar7 = puVar6;
    }
  }
  return;
}

/* ======================================================================
 * tr_align  (Ghidra `_tr_align` @ 0056ec60)
 * Signature: uint8_t _tr_align(void)
 * Calls: (none)
 * Called by: (none)
 */
void _tr_align(long arg1)

{
  uint uVar1;
  uint8_t uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;

  iVar5 = *(int *)(arg1 + 0x1724);
  if (iVar5 < 0xe) {
    uVar4 = (ushort)(2 << ((byte)iVar5 & 0x1f)) | *(ushort *)(arg1 + 0x1720);
    uVar3 = (uint)uVar4;
    iVar5 = iVar5 + 3;
    *(int *)(arg1 + 0x1724) = iVar5;
    *(ushort *)(arg1 + 0x1720) = uVar4;
  } else {
    uVar3 = *(uint *)(arg1 + 0x28);
    uVar4 = (ushort)(2 << ((byte)iVar5 & 0x1f)) | *(ushort *)(arg1 + 0x1720);
    *(ushort *)(arg1 + 0x1720) = uVar4;
    *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar3) = (char)uVar4;
    *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar3 + 1)) = *(uint8_t *)(arg1 + 0x1721);
    *(uint *)(arg1 + 0x28) = uVar3 + 2;
    uVar3 = 2 >> (0x10U - (char)*(int *)(arg1 + 0x1724) & 0x1f);
    *(short *)(arg1 + 0x1720) = (short)uVar3;
    iVar5 = *(int *)(arg1 + 0x1724) + -0xd;
    *(int *)(arg1 + 0x1724) = iVar5;
  }
  if (iVar5 < 10) {
    iVar5 = iVar5 + 7;
    *(int *)(arg1 + 0x1724) = iVar5;
    if (iVar5 != 0x10)
      goto LAB_0056ed1f;
  LAB_0056ee22:
    uVar1 = *(uint *)(arg1 + 0x28);
    *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar1) = (char)uVar3;
    *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar1 + 1)) = *(uint8_t *)(arg1 + 0x1721);
    *(uint *)(arg1 + 0x28) = uVar1 + 2;
    uVar3 = 0;
    *(uint16_t *)(arg1 + 0x1720) = 0;
    *(uint32_t *)(arg1 + 0x1724) = 0;
    iVar5 = 0;
  } else {
    uVar1 = *(uint *)(arg1 + 0x28);
    *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar1) = (char)uVar3;
    *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar1 + 1)) = *(uint8_t *)(arg1 + 0x1721);
    uVar3 = 0;
    *(uint *)(arg1 + 0x28) = uVar1 + 2;
    *(uint16_t *)(arg1 + 0x1720) = 0;
    iVar5 = *(int *)(arg1 + 0x1724) + -9;
    *(int *)(arg1 + 0x1724) = iVar5;
    if (iVar5 == 0x10)
      goto LAB_0056ee22;
  LAB_0056ed1f:
    if (7 < iVar5) {
      uVar1 = *(uint *)(arg1 + 0x28);
      *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar1) = (char)uVar3;
      uVar3 = (uint) * (byte *)(arg1 + 0x1721);
      *(uint *)(arg1 + 0x28) = uVar1 + 1;
      iVar5 = *(int *)(arg1 + 0x1724) + -8;
      *(int *)(arg1 + 0x1724) = iVar5;
      *(ushort *)(arg1 + 0x1720) = (ushort) * (byte *)(arg1 + 0x1721);
    }
  }
  if (8 < (*(int *)(arg1 + 0x171c) + 0xb) - iVar5)
    goto LAB_0056edff;
  if (iVar5 < 0xe) {
    iVar6 = iVar5 + 3;
    uVar3 = uVar3 | 2 << ((byte)iVar5 & 0x1f);
    *(short *)(arg1 + 0x1720) = (short)uVar3;
    *(int *)(arg1 + 0x1724) = iVar6;
    if (iVar6 < 10)
      goto LAB_0056eeef;
  LAB_0056ed92:
    uVar1 = *(uint *)(arg1 + 0x28);
    *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar1) = (char)uVar3;
    *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar1 + 1)) = *(uint8_t *)(arg1 + 0x1721);
    *(uint *)(arg1 + 0x28) = uVar1 + 2;
    uVar2 = 0;
    *(uint16_t *)(arg1 + 0x1720) = 0;
    iVar6 = *(int *)(arg1 + 0x1724) + -9;
    *(int *)(arg1 + 0x1724) = iVar6;
  } else {
    uVar1 = *(uint *)(arg1 + 0x28);
    uVar3 = uVar3 | 2 << ((byte)iVar5 & 0x1f);
    *(short *)(arg1 + 0x1720) = (short)uVar3;
    *(char *)(*(long *)(arg1 + 0x10) + (ulong)uVar1) = (char)uVar3;
    *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar1 + 1)) = *(uint8_t *)(arg1 + 0x1721);
    *(uint *)(arg1 + 0x28) = uVar1 + 2;
    iVar6 = *(int *)(arg1 + 0x1724) + -0xd;
    uVar3 = 2 >> (0x10U - (char)*(int *)(arg1 + 0x1724) & 0x1f);
    *(int *)(arg1 + 0x1724) = iVar6;
    *(short *)(arg1 + 0x1720) = (short)uVar3;
    if (9 < iVar6)
      goto LAB_0056ed92;
  LAB_0056eeef:
    uVar2 = (uint8_t)uVar3;
    iVar6 = iVar6 + 7;
    *(int *)(arg1 + 0x1724) = iVar6;
  }
  if (iVar6 == 0x10) {
    uVar3 = *(uint *)(arg1 + 0x28);
    *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)uVar3) = uVar2;
    *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)(uVar3 + 1)) = *(uint8_t *)(arg1 + 0x1721);
    *(uint *)(arg1 + 0x28) = uVar3 + 2;
    *(uint16_t *)(arg1 + 0x1720) = 0;
    *(uint32_t *)(arg1 + 0x1724) = 0;
    *(uint32_t *)(arg1 + 0x171c) = 7;
    return;
  }
  if (7 < iVar6) {
    uVar3 = *(uint *)(arg1 + 0x28);
    *(uint8_t *)(*(long *)(arg1 + 0x10) + (ulong)uVar3) = uVar2;
    *(ushort *)(arg1 + 0x1720) = *(ushort *)(arg1 + 0x1720) >> 8;
    *(int *)(arg1 + 0x1724) = *(int *)(arg1 + 0x1724) + -8;
    *(uint *)(arg1 + 0x28) = uVar3 + 1;
  }
LAB_0056edff:
  *(uint32_t *)(arg1 + 0x171c) = 7;
  return;
}

/* ======================================================================
 * tr_flush_block  (Ghidra `_tr_flush_block` @ 0056ef50)
 * Signature: uint8_t _tr_flush_block(void)
 * Calls: `build_tree`, `compress_block`, `scan_tree`, `send_tree`
 * Called by: (none)
 */
void _tr_flush_block(long *arg1, long arg2, long arg3, int arg4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  int iVar10;
  short *psVar11;
  uint32_t uVar12;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  uint32_t uVar13;

  if (*(int *)((long)arg1 + 0xb4) < 1) {
    uVar8 = arg3 + 5;
    iVar14 = 0;
    uVar15 = uVar8;
  } else {
    if ((arg3 != 0) && (*(int *)(*arg1 + 0x58) == 2)) {
      uVar12 = 0;
      uVar13 = 0;
      if ((((*(short *)((long)arg1 + 0xc4) == 0) &&
            (((((short)arg1[0x19] == 0 && (*(short *)((long)arg1 + 0xcc) == 0)) &&
               (uVar12 = uVar13, (short)arg1[0x1a] == 0)) &&
              ((*(short *)((long)arg1 + 0xd4) == 0 && ((short)arg1[0x1b] == 0)))))) &&
           (*(short *)((long)arg1 + 0xdc) == 0)) &&
          (((short)arg1[0x1c] == 0 && (*(short *)((long)arg1 + 0xe4) == 0)))) {
        psVar11 = (short *)((long)arg1 + 0xfc);
        iVar14 = 0xe;
        do {
          if (*psVar11 != 0) {
            uVar12 = 0;
            goto LAB_0056f4bd;
          }
          iVar14 = iVar14 + 1;
          psVar11 = psVar11 + 2;
        } while (iVar14 != 0x20);
        uVar12 = 1;
      }
    LAB_0056f4bd:
      *(uint32_t *)(*arg1 + 0x58) = uVar12;
    }
    build_tree(arg1, arg1 + 0x169);
    build_tree(arg1, arg1 + 0x16c);
    scan_tree(arg1, (long)arg1 + 0xc4, (int)arg1[0x16a]);
    scan_tree(arg1, arg1 + 0x137, (int)arg1[0x16d]);
    build_tree(arg1, arg1 + 0x16f);
    if (*(short *)((long)arg1 + 0xaea) == 0) {
      if (*(short *)((long)arg1 + 0xab2) != 0) {
        iVar14 = 0x11;
        goto LAB_0056f677;
      }
      if (*(short *)((long)arg1 + 0xae6) != 0) {
        iVar14 = 0x10;
        goto LAB_0056f677;
      }
      if (*(short *)((long)arg1 + 0xab6) != 0) {
        iVar14 = 0xf;
        goto LAB_0056f677;
      }
      if (*(short *)((long)arg1 + 0xae2) != 0) {
        iVar14 = 0xe;
        goto LAB_0056f677;
      }
      if (*(short *)((long)arg1 + 0xaba) != 0) {
        iVar14 = 0xd;
        goto LAB_0056f677;
      }
      if (*(short *)((long)arg1 + 0xade) != 0) {
        iVar14 = 0xc;
        goto LAB_0056f677;
      }
      if (*(short *)((long)arg1 + 0xabe) != 0) {
        iVar14 = 0xb;
        goto LAB_0056f677;
      }
      if (*(short *)((long)arg1 + 0xada) != 0) {
        iVar14 = 10;
        goto LAB_0056f677;
      }
      if (*(short *)((long)arg1 + 0xac2) != 0) {
        iVar14 = 9;
        goto LAB_0056f677;
      }
      if (*(short *)((long)arg1 + 0xad6) != 0) {
        iVar14 = 8;
        goto LAB_0056f677;
      }
      if (*(short *)((long)arg1 + 0xac6) != 0) {
        iVar14 = 7;
        goto LAB_0056f677;
      }
      if (*(short *)((long)arg1 + 0xad2) != 0) {
        iVar14 = 6;
        goto LAB_0056f677;
      }
      if (*(short *)((long)arg1 + 0xaca) != 0) {
        iVar14 = 5;
        goto LAB_0056f677;
      }
      if (*(short *)((long)arg1 + 0xace) != 0) {
        iVar14 = 4;
        goto LAB_0056f677;
      }
      lVar7 = 0x17;
      iVar14 = 2;
      if (*(short *)((long)arg1 + 0xaae) != 0) {
        iVar14 = 3;
        goto LAB_0056f677;
      }
    } else {
      iVar14 = 0x12;
    LAB_0056f677:
      lVar7 = (long)(iVar14 * 3 + 0x11);
    }
    lVar3 = arg1[0x2e1];
    arg1[0x2e1] = lVar7 + lVar3;
    uVar15 = arg1[0x2e2] + 10U >> 3;
    uVar8 = lVar7 + lVar3 + 10U >> 3;
    if (uVar15 <= uVar8) {
      uVar8 = uVar15;
    }
  }
  if ((arg3 + 4U <= uVar8) && (arg2 != 0)) {
    _tr_stored_block(arg1, arg2, arg3, arg4);
    goto LAB_0056f352;
  }
  if ((uVar15 == uVar8) || ((int)arg1[0x17] == 4)) {
    iVar14 = *(int *)((long)arg1 + 0x1724);
    uVar5 = arg4 + 2;
    if (iVar14 < 0xe) {
      *(ushort *)(arg1 + 0x2e4) =
          *(ushort *)(arg1 + 0x2e4) | (ushort)(uVar5 << ((byte)iVar14 & 0x1f));
      *(int *)((long)arg1 + 0x1724) = iVar14 + 3;
    } else {
      uVar1 = *(uint *)(arg1 + 5);
      uVar4 = (ushort)(uVar5 << ((byte)iVar14 & 0x1f)) | *(ushort *)(arg1 + 0x2e4);
      *(ushort *)(arg1 + 0x2e4) = uVar4;
      *(char *)(arg1[2] + (ulong)uVar1) = (char)uVar4;
      *(uint8_t *)(arg1[2] + (ulong)(uVar1 + 1)) = *(uint8_t *)((long)arg1 + 0x1721);
      *(uint *)(arg1 + 5) = uVar1 + 2;
      iVar14 = *(int *)((long)arg1 + 0x1724);
      *(int *)((long)arg1 + 0x1724) = iVar14 + -0xd;
      *(short *)(arg1 + 0x2e4) = (short)((int)(uVar5 & 0xffff) >> (0x10U - (char)iVar14 & 0x1f));
    }
    compress_block(arg1, static_ltree, static_dtree);
    goto LAB_0056f352;
  }
  iVar10 = *(int *)((long)arg1 + 0x1724);
  if (iVar10 < 0xe) {
    uVar4 = (ushort)(arg4 + 4 << ((byte)iVar10 & 0x1f)) | *(ushort *)(arg1 + 0x2e4);
    uVar5 = (uint)uVar4;
    iVar10 = iVar10 + 3;
    *(int *)((long)arg1 + 0x1724) = iVar10;
    *(ushort *)(arg1 + 0x2e4) = uVar4;
  } else {
    uVar5 = *(uint *)(arg1 + 5);
    uVar4 = (ushort)(arg4 + 4U << ((byte)iVar10 & 0x1f)) | *(ushort *)(arg1 + 0x2e4);
    *(ushort *)(arg1 + 0x2e4) = uVar4;
    *(char *)(arg1[2] + (ulong)uVar5) = (char)uVar4;
    *(uint8_t *)(arg1[2] + (ulong)(uVar5 + 1)) = *(uint8_t *)((long)arg1 + 0x1721);
    *(uint *)(arg1 + 5) = uVar5 + 2;
    uVar5 = (int)(arg4 + 4U & 0xffff) >> (0x10U - (char)*(int *)((long)arg1 + 0x1724) & 0x1f);
    iVar10 = *(int *)((long)arg1 + 0x1724) + -0xd;
    *(short *)(arg1 + 0x2e4) = (short)uVar5;
    *(int *)((long)arg1 + 0x1724) = iVar10;
  }
  uVar1 = *(uint *)(arg1 + 0x16d);
  uVar16 = (int)arg1[0x16a] - 0x100;
  if (iVar10 < 0xc) {
    iVar6 = iVar10 + 5;
    uVar5 = uVar5 | uVar16 << ((byte)iVar10 & 0x1f);
    *(int *)((long)arg1 + 0x1724) = iVar6;
    uVar16 = uVar1 << ((byte)iVar6 & 0x1f);
    *(short *)(arg1 + 0x2e4) = (short)uVar5;
    if (iVar6 < 0xc)
      goto LAB_0056f639;
  LAB_0056f1b8:
    uVar2 = *(uint *)(arg1 + 5);
    *(short *)(arg1 + 0x2e4) = (short)(uVar5 | uVar16);
    *(char *)(arg1[2] + (ulong)uVar2) = (char)(uVar5 | uVar16);
    *(uint8_t *)(arg1[2] + (ulong)(uVar2 + 1)) = *(uint8_t *)((long)arg1 + 0x1721);
    *(uint *)(arg1 + 5) = uVar2 + 2;
    uVar5 = (int)(uVar1 & 0xffff) >> (0x10U - (char)*(int *)((long)arg1 + 0x1724) & 0x1f);
    iVar6 = *(int *)((long)arg1 + 0x1724) + -0xb;
    *(short *)(arg1 + 0x2e4) = (short)uVar5;
    *(int *)((long)arg1 + 0x1724) = iVar6;
    if (0xc < iVar6)
      goto LAB_0056f216;
  LAB_0056f658:
    iVar10 = iVar6 + 4;
    uVar5 = iVar14 + -3 << ((byte)iVar6 & 0x1f) | uVar5;
    *(int *)((long)arg1 + 0x1724) = iVar10;
    *(short *)(arg1 + 0x2e4) = (short)uVar5;
  } else {
    uVar2 = *(uint *)(arg1 + 5);
    uVar5 = uVar5 | uVar16 << ((byte)iVar10 & 0x1f);
    *(short *)(arg1 + 0x2e4) = (short)uVar5;
    *(char *)(arg1[2] + (ulong)uVar2) = (char)uVar5;
    *(uint8_t *)(arg1[2] + (ulong)(uVar2 + 1)) = *(uint8_t *)((long)arg1 + 0x1721);
    *(uint *)(arg1 + 5) = uVar2 + 2;
    uVar5 = (int)(uVar16 & 0xffff) >> (0x10U - (char)*(int *)((long)arg1 + 0x1724) & 0x1f);
    iVar6 = *(int *)((long)arg1 + 0x1724) + -0xb;
    *(short *)(arg1 + 0x2e4) = (short)uVar5;
    uVar16 = uVar1 << ((byte)iVar6 & 0x1f);
    *(int *)((long)arg1 + 0x1724) = iVar6;
    if (0xb < iVar6)
      goto LAB_0056f1b8;
  LAB_0056f639:
    iVar6 = iVar6 + 5;
    uVar5 = uVar5 | uVar16;
    *(short *)(arg1 + 0x2e4) = (short)uVar5;
    *(int *)((long)arg1 + 0x1724) = iVar6;
    if (iVar6 < 0xd)
      goto LAB_0056f658;
  LAB_0056f216:
    uVar16 = *(uint *)(arg1 + 5);
    uVar5 = uVar5 | iVar14 - 3U << ((byte)iVar6 & 0x1f);
    *(short *)(arg1 + 0x2e4) = (short)uVar5;
    *(char *)(arg1[2] + (ulong)uVar16) = (char)uVar5;
    *(uint8_t *)(arg1[2] + (ulong)(uVar16 + 1)) = *(uint8_t *)((long)arg1 + 0x1721);
    *(uint *)(arg1 + 5) = uVar16 + 2;
    uVar5 = (int)(iVar14 - 3U & 0xffff) >> (0x10U - (char)*(int *)((long)arg1 + 0x1724) & 0x1f);
    iVar10 = *(int *)((long)arg1 + 0x1724) + -0xc;
    *(short *)(arg1 + 0x2e4) = (short)uVar5;
    *(int *)((long)arg1 + 0x1724) = iVar10;
  }
  iVar6 = 0;
  do {
    while (true) {
      lVar7 = (long)iVar6;
      bVar9 = (byte)iVar10;
      if (0xd < iVar10)
        break;
      iVar6 = iVar6 + 1;
      iVar10 = iVar10 + 3;
      uVar5 = uVar5 | (uint) * (ushort *)((long)arg1 + (ulong)(byte)(&bl_order)[lVar7] * 4 + 0xaae)
                          << (bVar9 & 0x1f);
      *(int *)((long)arg1 + 0x1724) = iVar10;
      *(short *)(arg1 + 0x2e4) = (short)uVar5;
      if (iVar14 < iVar6)
        goto LAB_0056f31e;
    }
    uVar4 = *(ushort *)((long)arg1 + (ulong)(byte)(&bl_order)[lVar7] * 4 + 0xaae);
    uVar16 = *(uint *)(arg1 + 5);
    iVar6 = iVar6 + 1;
    uVar5 = uVar5 | (uint)uVar4 << (bVar9 & 0x1f);
    *(short *)(arg1 + 0x2e4) = (short)uVar5;
    *(char *)(arg1[2] + (ulong)uVar16) = (char)uVar5;
    *(uint8_t *)(arg1[2] + (ulong)(uVar16 + 1)) = *(uint8_t *)((long)arg1 + 0x1721);
    *(uint *)(arg1 + 5) = uVar16 + 2;
    uVar5 = (int)(uint)uVar4 >> (0x10U - (char)*(int *)((long)arg1 + 0x1724) & 0x1f);
    iVar10 = *(int *)((long)arg1 + 0x1724) + -0xd;
    *(short *)(arg1 + 0x2e4) = (short)uVar5;
    *(int *)((long)arg1 + 0x1724) = iVar10;
  } while (iVar6 <= iVar14);
LAB_0056f31e:
  send_tree(arg1, (long)arg1 + 0xc4);
  send_tree(arg1, arg1 + 0x137, uVar1);
  compress_block(arg1, (long)arg1 + 0xc4, arg1 + 0x137);
LAB_0056f352:
  lVar7 = 0;
  do {
    *(uint16_t *)((long)arg1 + lVar7 + 0xc4) = 0;
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0x478);
  lVar7 = 0;
  do {
    *(uint16_t *)((long)arg1 + lVar7 + 0x9b8) = 0;
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0x78);
  lVar7 = 0;
  do {
    *(uint16_t *)((long)arg1 + lVar7 + 0xaac) = 0;
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0x4c);
  *(uint16_t *)((long)arg1 + 0x4c4) = 1;
  arg1[0x2e2] = 0;
  arg1[0x2e1] = 0;
  *(uint32_t *)(arg1 + 0x2e3) = 0;
  *(uint32_t *)((long)arg1 + 0x16fc) = 0;
  if (arg4 != 0) {
    if (*(int *)((long)arg1 + 0x1724) < 9) {
      if (0 < *(int *)((long)arg1 + 0x1724)) {
        uVar5 = *(uint *)(arg1 + 5);
        *(char *)(arg1[2] + (ulong)uVar5) = (char)(short)arg1[0x2e4];
        *(uint *)(arg1 + 5) = uVar5 + 1;
      }
    } else {
      uVar5 = *(uint *)(arg1 + 5);
      *(char *)(arg1[2] + (ulong)uVar5) = (char)(short)arg1[0x2e4];
      *(uint8_t *)(arg1[2] + (ulong)(uVar5 + 1)) = *(uint8_t *)((long)arg1 + 0x1721);
      *(uint *)(arg1 + 5) = uVar5 + 2;
    }
    *(uint16_t *)(arg1 + 0x2e4) = 0;
    *(uint32_t *)((long)arg1 + 0x1724) = 0;
  }
  return;
}

/* ======================================================================
 * tr_tally  (Ghidra `_tr_tally` @ 0056f710)
 * Signature: uint8_t _tr_tally(void)
 * Calls: (none)
 * Called by: (none)
 */
bool _tr_tally(long arg1, int arg2, uint arg3)

{
  short *psVar1;
  int iVar2;
  uint uVar3;

  *(short *)(*(long *)(arg1 + 0x1700) + (ulong) * (uint *)(arg1 + 0x16fc) * 2) = (short)arg2;
  iVar2 = *(uint *)(arg1 + 0x16fc) + 1;
  *(char *)(*(long *)(arg1 + 0x16f0) + (ulong) * (uint *)(arg1 + 0x16fc)) = (char)arg3;
  *(int *)(arg1 + 0x16fc) = iVar2;
  if (arg2 == 0) {
    psVar1 = (short *)(arg1 + 0xc4 + (ulong)arg3 * 4);
    *psVar1 = *psVar1 + 1;
  } else {
    *(int *)(arg1 + 0x1718) = *(int *)(arg1 + 0x1718) + 1;
    uVar3 = arg2 - 1;
    psVar1 = (short *)(arg1 + 0x4c8 + (ulong)(byte)_length_code[arg3] * 4);
    *psVar1 = *psVar1 + 1;
    if (0xff < uVar3) {
      uVar3 = (uVar3 >> 7) + 0x100;
    }
    psVar1 = (short *)(arg1 + 0x9b8 + (long)(int)(uint)(byte)_dist_code[uVar3] * 4);
    *psVar1 = *psVar1 + 1;
  }
  return iVar2 == *(int *)(arg1 + 0x16f8) + -1;
}

/* ======================================================================
 * tcf_0__0056f8d0  (Ghidra `__tcf_0` @ 0056f8d0)
 * Signature: uint8_t __tcf_0(void)
 * Calls: (none)
 * Called by: (none)
 */
void __tcf_0(void)

{
  return;
}

/* ======================================================================
 * getInvocationID__00581d50  (Ghidra `__getInvocationID` @ 00581d50)
 * Signature: uint8_t __stdcall __getInvocationID(void)
 * Calls: (none)
 * Called by: (none)
 */
/* SceneObject3D__getInvocationID() const */

uint64_t SceneObject3D__getInvocationID(void)

{
  return 0;
}

/* ======================================================================
 * getEditorProperties__00581d60  (Ghidra `__getEditorProperties` @ 00581d60)
 * Signature: uint8_t __stdcall __getEditorProperties(EditableProperty * arg1)
 * Calls: (none)
 * Called by: (none)
 */
/* SceneObject3D__getEditorProperties(EditableProperty*) const */

uint64_t SceneObject3D__getEditorProperties(EditableProperty *arg1)

{
  return 0;
}

/* ======================================================================
 * TileLevel__getLevelLayer  (Ghidra `__getLevelLayer` @ 0058f5b0)
 * Signature: uint8_t __thiscall __getLevelLayer(TileLevel * this, tagTileLayerLevelType arg1)
 * Class: TileLevel
 * Calls: (none)
 * Called by: `ApplyLayerProperties`, `ApplyLayerPropertiesToAllLayers`, `EditorButton_SetLayerToActive_Click`, `EditorButton_SetLayerToBackGeneral1_Click`, `EditorButton_SetLayerToBackGeneral2_Click`, `EditorButton_SetLayerToBackGeneral3_Click`, `EditorButton_SetLayerToBack_Click`, `EditorButton_SetLayerToForeGeneral1_Click`, `EditorButton_SetLayerToForeGeneral2_Click`, `EditorButton_SetLayerToFore_Click` (+28 more)
 */
/* TileLevel__getLevelLayer(tagTileLayerLevelType) */

TileLevel *__thiscall TileLevel__getLevelLayer(TileLevel *this, uint32_t arg2)

{
  switch (arg2) {
  default:
    return this + 0x1140;
  case 1:
    return this + 0x1580;
  case 2:
    return this + 0xd00;
  case 3:
    return this + 0x8d0;
  case 4:
    return this + 0x4a0;
  case 5:
    return this + 0x70;
  case 6:
    return this + 0x1df0;
  case 7:
    return this + 0x19c0;
  }
}

/* ======================================================================
 * tcf_0__00595e20  (Ghidra `__tcf_0` @ 00595e20)
 * Signature: uint8_t __tcf_0(void)
 * Calls: (none)
 * Called by: (none)
 */
void __tcf_0(void)

{
  return;
}

/* ======================================================================
 * SceneObject2D__getTransformationMatrix  (Ghidra `__getTransformationMatrix` @ 0059b270)
 * Signature: uint8_t __thiscall __getTransformationMatrix(SceneObject2D * this)
 * Class: SceneObject2D
 * Calls: (none)
 * Called by: `Sprite__Render`, `Sprite__RenderOnly`, `TransformCheckPoint2D`
 */
/* SceneObject2D__getTransformationMatrix() */

Matrix4x4 *__thiscall SceneObject2D__getTransformationMatrix(SceneObject2D *this)

{
  if (*(int *)(this + 0x9c) == 1) {
    Matrix4x4__Transformation2DRot((Matrix4x4 *)(this + 8), (Vector2 *)(this + 0xd0),
                                   (float *)(this + 0xd8), (Vector2 *)(this + 0xa0));
    *(uint32_t *)(this + 0x9c) = 0;
  }
  return (Matrix4x4 *)(this + 8);
}

/* ======================================================================
 * SceneObject3D__setVelocity  (Ghidra `__setVelocity` @ 0059b2d0)
 * Signature: uint8_t __thiscall __setVelocity(SceneObject3D * this, FPUVector * arg1)
 * Class: SceneObject3D
 * Calls: (none)
 * Called by: (none)
 */
/* SceneObject3D__setVelocity(FPUVector const&) */

void __thiscall SceneObject3D__setVelocity(SceneObject3D *this, FPUVector *arg1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint8_t auVar7[16];
  uint8_t auVar8[16];

  fVar1 = *(float *)arg1;
  *(float *)(this + 0xc0) = fVar1;
  fVar2 = *(float *)(arg1 + 4);
  *(float *)(this + 0xc4) = fVar2;
  fVar3 = *(float *)(arg1 + 8);
  *(float *)(this + 200) = fVar3;
  fVar4 = *(float *)(arg1 + 0xc);
  *(float *)(this + 0xcc) = fVar4;
  fVar5 = DAT_005bf760 /* R:0.0f */;
  fVar6 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4);
  *(float *)(this + 0x80) = fVar6;
  if (fVar6 <= fVar5) {
    *(uint64_t *)(this + 0x100) = 0;
    *(uint64_t *)(this + 0x108) = 0;
    return;
  }
  if (DAT_005d3660 /* R:9.999999747378752e-06f */ < fVar6) {
    auVar7._4_4_ = fVar2;
    auVar7._0_4_ = fVar1;
    auVar7._12_4_ = fVar4;
    auVar7._8_4_ = fVar3;
    auVar8._4_4_ = fVar6;
    auVar8._0_4_ = fVar6;
    auVar8._8_4_ = fVar6;
    auVar8._12_4_ = fVar6;
    auVar8 = divps(auVar7, auVar8);
    *(long *)(this + 0x100) = auVar8._0_8_;
    *(long *)(this + 0x108) = auVar8._8_8_;
    return;
  }
  *(ulong *)(this + 0x100) = CONCAT44(fVar2, fVar1);
  *(ulong *)(this + 0x108) = CONCAT44(fVar4, fVar3);
  return;
}

/* ======================================================================
 * SceneObject3D__getTransformationMatrix  (Ghidra `__getTransformationMatrix` @ 0059b3b0)
 * Signature: uint8_t __thiscall __getTransformationMatrix(SceneObject3D * this)
 * Class: SceneObject3D
 * Calls: (none)
 * Called by: `TransformCheckPoint3D`
 */
/* SceneObject3D__getTransformationMatrix() */

Matrix4x4 *__thiscall SceneObject3D__getTransformationMatrix(SceneObject3D *this)

{
  if (*(int *)(this + 0x9c) == 1) {
    Matrix4x4__Transformation3D((Matrix4x4 *)(this + 8), (FPUVector *)(this + 0xd0),
                                (TQuaternion *)(this + 0xe0), (FPUVector *)(this + 0xa0));
    *(uint32_t *)(this + 0x9c) = 0;
  }
  return (Matrix4x4 *)(this + 8);
}

/* ======================================================================
 * UIFormElement__setParent  (Ghidra `__setParent` @ 005a1d30)
 * Signature: uint8_t __thiscall __setParent(UIFormElement * this, UIForm * arg1)
 * Class: UIFormElement
 * Calls: `UIForm__RemoveFormElement`
 * Called by: `UIButton__setParent`, `UIDropDown__setParent`, `UIFrame__setParent`, `UIScrollBar__setParent`
 */
/* UIFormElement__setParent(UIForm*) */

void __thiscall UIFormElement__setParent(UIFormElement *this, UIForm *arg1)

{
  if (*(UIForm **)(this + 0x30) != (UIForm *)0x0) {
    UIForm__RemoveFormElement(*(UIForm **)(this + 0x30), this);
  }
  *(UIForm **)(this + 0x30) = arg1;
  return;
}

/* ======================================================================
 * UIButton__getElementArea  (Ghidra `__getElementArea` @ 005a21e0)
 * Signature: uint8_t __thiscall __getElementArea(UIButton * this, UIRect * arg1)
 * Class: UIButton
 * Calls: (none)
 * Called by: (none)
 */
/* UIButton__getElementArea(UIRect&) */

void __thiscall UIButton__getElementArea(UIButton *this, UIRect *arg1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  (**(code **)(**(long **)(this + 0x50) + 0x58))();
  fVar7 = DAT_005be6e4 /* R:0.5f */;
  fVar1 = *(float *)(this + 100);
  fVar2 = *(float *)(arg1 + 8);
  *(float *)(arg1 + 8) = fVar1 + fVar2;
  fVar3 = *(float *)(this + 0x68);
  fVar4 = *(float *)(arg1 + 0xc);
  *(float *)(arg1 + 0xc) = fVar3 + fVar4;
  fVar5 = *(float *)(this + 0x20);
  *(float *)arg1 = fVar5;
  fVar6 = *(float *)(this + 0x24);
  *(float *)arg1 = fVar5 - (fVar1 + fVar2) * fVar7;
  *(float *)(arg1 + 4) = (fVar3 + fVar4) * fVar7 + fVar6;
  return;
}

/* ======================================================================
 * UIButton__setParent  (Ghidra `__setParent` @ 005a22e0)
 * Signature: uint8_t __thiscall __setParent(UIButton * this, UIForm * arg1)
 * Class: UIButton
 * Calls: `UIFormElement__setParent`
 * Called by: (none)
 */
/* UIButton__setParent(UIForm*) */

void __thiscall UIButton__setParent(UIButton *this, UIForm *arg1)

{
  UIFormElement__setParent((UIFormElement *)this, arg1);
  /* WARNING: Could not recover jumptable at 0x005a2315. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x50) + 0x50))(*(long **)(this + 0x50), arg1);
  return;
}

/* ======================================================================
 * UIButton__setButtonPadding  (Ghidra `__setButtonPadding` @ 005a2660)
 * Signature: uint8_t __thiscall __setButtonPadding(UIButton * this, float arg1, float arg2)
 * Class: UIButton
 * Calls: (none)
 * Called by: (none)
 */
/* UIButton__setButtonPadding(float, float) */

void __thiscall UIButton__setButtonPadding(UIButton *this, float arg1, float arg2)

{
  float fVar1;

  fVar1 = arg2 * DAT_005be6e4 /* R:0.5f */;
  *(float *)(this + 100) = arg1 * DAT_005be6e4 /* R:0.5f */;
  *(float *)(this + 0x68) = fVar1;
  return;
}

/* ======================================================================
 * UIDropDown__getElementArea  (Ghidra `__getElementArea` @ 005a26e0)
 * Signature: uint8_t __thiscall __getElementArea(UIDropDown * this, UIRect * arg1)
 * Class: UIDropDown
 * Calls: (none)
 * Called by: (none)
 */
/* UIDropDown__getElementArea(UIRect&) */

void __thiscall UIDropDown__getElementArea(UIDropDown *this, UIRect *arg1)

{
  float fVar1;
  uint8_t auStack_28[8];
  float local_20;
  float local_1c;

  fVar1 = DAT_005be6e4 /* R:0.5f */;
  *(float *)arg1 = *(float *)(this + 0x20) - *(float *)(this + 0x28) * DAT_005be6e4 /* R:0.5f */;
  *(float *)(arg1 + 4) = *(float *)(this + 0x24) - fVar1 * *(float *)(this + 0x2c);
  (**(code **)(**(long **)(this + 0x50) + 0x58))(*(long **)(this + 0x50), auStack_28);
  *(float *)(arg1 + 8) = local_20 + *(float *)(this + 0x28);
  *(float *)(arg1 + 0xc) = local_1c + *(float *)(this + 0x2c);
  return;
}

/* ======================================================================
 * UIDropDown__setParent  (Ghidra `__setParent` @ 005a2b30)
 * Signature: uint8_t __thiscall __setParent(UIDropDown * this, UIForm * arg1)
 * Class: UIDropDown
 * Calls: `UIFormElement__setParent`, `UIForm__AddFormElement`
 * Called by: (none)
 */
/* UIDropDown__setParent(UIForm*) */

void __thiscall UIDropDown__setParent(UIDropDown *this, UIForm *arg1)

{
  UIFormElement__setParent((UIFormElement *)this, arg1);
  (**(code **)(**(long **)(this + 0x58) + 0x50))(*(long **)(this + 0x58), arg1);
  if (arg1 != (UIForm *)0x0) {
    UIForm__AddFormElement(arg1, *(UIFormElement **)(this + 0x50));
    return;
  }
  /* WARNING: Could not recover jumptable at 0x005a2b93. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x50) + 0x50))(*(long **)(this + 0x50), 0);
  return;
}

/* ======================================================================
 * UIForm__setPositionInPixels  (Ghidra `__setPositionInPixels` @ 005a3730)
 * Signature: uint8_t __thiscall __setPositionInPixels(UIForm * this, float arg1, float arg2)
 * Class: UIForm
 * Calls: (none)
 * Called by: (none)
 */
/* UIForm__setPositionInPixels(float, float) */

void __thiscall UIForm__setPositionInPixels(UIForm *this, float arg1, float arg2)

{
  *(float *)(this + 0x38) = arg1;
  *(float *)(this + 0x3c) = arg2;
  return;
}

/* ======================================================================
 * UIForm__setEdgePadding  (Ghidra `__setEdgePadding` @ 005a4110)
 * Signature: uint8_t __thiscall __setEdgePadding(UIForm * this, ushort arg1, ushort arg2)
 * Class: UIForm
 * Calls: (none)
 * Called by: `CreateGraphicsSettingsForm`, `SMBEditorForms__Initialize`
 */
/* UIForm__setEdgePadding(unsigned short, unsigned short) */

void __thiscall UIForm__setEdgePadding(UIForm *this, ushort arg1, ushort arg2)

{
  long lVar1;

  lVar1 = Window;
  *(float *)(this + 0x30) = (float)arg1 / (float)*(ushort *)(Window + 8);
  *(float *)(this + 0x34) = (float)arg2 / (float)*(ushort *)(lVar1 + 10);
  return;
}

/* ======================================================================
 * UIFrame__getElementArea  (Ghidra `__getElementArea` @ 005a4890)
 * Signature: uint8_t __thiscall __getElementArea(UIFrame * this, UIRect * arg1)
 * Class: UIFrame
 * Calls: (none)
 * Called by: (none)
 */
/* UIFrame__getElementArea(UIRect&) */

void __thiscall UIFrame__getElementArea(UIFrame *this, UIRect *arg1)

{
  *(float *)arg1 = DAT_005c0e00 /* R:-0.5f */ * *(float *)(this + 0x28) + *(float *)(this + 0x20);
  *(float *)(arg1 + 4) =
      DAT_005be6e4 /* R:0.5f */ * *(float *)(this + 0x2c) + *(float *)(this + 0x24);
  *(uint32_t *)(arg1 + 8) = *(uint32_t *)(this + 0x28);
  *(uint32_t *)(arg1 + 0xc) = *(uint32_t *)(this + 0x2c);
  return;
}

/* ======================================================================
 * UIFrame__setParent  (Ghidra `__setParent` @ 005a4910)
 * Signature: uint8_t __thiscall __setParent(UIFrame * this, UIForm * arg1)
 * Class: UIFrame
 * Calls: `UIFormElement__setParent`, `UIForm__AddFormElement`
 * Called by: (none)
 */
/* UIFrame__setParent(UIForm*) */

void __thiscall UIFrame__setParent(UIFrame *this, UIForm *arg1)

{
  UIFormElement__setParent((UIFormElement *)this, arg1);
  if (arg1 != (UIForm *)0x0) {
    UIForm__AddFormElement(arg1, *(UIFormElement **)(this + 0x50));
    UIForm__AddFormElement(arg1, *(UIFormElement **)(this + 0x58));
    return;
  }
  (**(code **)(**(long **)(this + 0x50) + 0x50))(*(long **)(this + 0x50), 0);
  /* WARNING: Could not recover jumptable at 0x005a497f. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x58) + 0x50))(*(long **)(this + 0x58), 0);
  return;
}

/* ======================================================================
 * UILabel__getElementArea  (Ghidra `__getElementArea` @ 005a5010)
 * Signature: uint8_t __thiscall __getElementArea(UILabel * this, UIRect * arg1)
 * Class: UILabel
 * Calls: `TextEmitterFont__GetCharInfo`
 * Called by: (none)
 */
/* UILabel__getElementArea(UIRect&) */

void __thiscall UILabel__getElementArea(UILabel *this, UIRect *arg1)

{
  float fVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;

  fVar2 = DAT_005be6e4 /* R:0.5f */;
  *(float *)(arg1 + 8) = *(float *)(*(long *)(this + 0x40) + 0x98) * DAT_005be6e4 /* R:0.5f */;
  fVar1 = *(float *)(*(long *)(this + 0x40) + 0x9c);
  lVar4 = TextEmitterFont__GetCharInfo(*(TextEmitterFont **)(*(long *)(this + 0x40) + 0x20), L'M');
  lVar3 = Window;
  fVar6 = ((float)*(ushort *)(lVar4 + 10) + fVar1) * fVar2;
  *(float *)(arg1 + 0xc) = fVar6;
  fVar5 = *(float *)(*(long *)(this + 0x40) + 0x54) * *(float *)(arg1 + 8) *
          *(float *)(this + 0x28) * (float)*(ushort *)(lVar3 + 8);
  *(float *)(arg1 + 8) = fVar5;
  fVar6 = *(float *)(this + 0x2c) * *(float *)(*(long *)(this + 0x40) + 0x58) *
          (float)*(ushort *)(lVar3 + 10) * fVar6;
  *(float *)(arg1 + 0xc) = fVar6;
  fVar1 = *(float *)(this + 0x20);
  *(float *)arg1 = fVar1;
  *(float *)(arg1 + 4) = fVar6 * fVar2 + *(float *)(this + 0x24);
  if (*(int *)(*(long *)(this + 0x40) + 0x5c) == 0) {
    *(float *)arg1 = fVar1 - fVar2 * fVar5;
  } else if (*(int *)(*(long *)(this + 0x40) + 0x5c) == 2) {
    *(float *)arg1 = fVar1 - fVar5;
    return;
  }
  return;
}

/* ======================================================================
 * UILabel__setText  (Ghidra `__setText` @ 005a5350)
 * Signature: uint8_t __thiscall __setText(UILabel * this, wchar_t * arg1)
 * Class: UILabel
 * Calls: `FontEmitter__SetStaticText`
 * Called by: `CreateGraphicsSettingsForm`, `SMBEditorForms__Initialize`, `SMBEditor__Render`, `ShowUIMessageBox`, `UIDROPDOWN_MakeSelection`, `UIDropDown__AddDropdownElement`, `UIDropDown__SetSelected`, `UIDropDown__SetSelected__005a30a0`, `UIDropDown__UIDropDown__005a2c90`, `UIMessageBox__UIMessageBox__005a4280` (+1 more)
 */
/* UILabel__setText(wchar_t const*) */

void __thiscall UILabel__setText(UILabel *this, wchar_t *arg1)

{
  FontEmitter__SetStaticText(*(FontEmitter **)(this + 0x40), arg1);
  return;
}

/* ======================================================================
 * UILabel__setAlign  (Ghidra `__setAlign` @ 005a5360)
 * Signature: uint8_t __thiscall __setAlign(UILabel * this, tagTextAlign arg1)
 * Class: UILabel
 * Calls: (none)
 * Called by: `CreateGraphicsSettingsForm`, `SMBEditorForms__Initialize`, `ShowUIMessageBox`, `UIButton__UIButton__005a2560`, `UIDropDown__UIDropDown__005a2c90`, `UIMessageBox__UIMessageBox__005a4280`
 */
/* UILabel__setAlign(tagTextAlign) */

void __thiscall UILabel__setAlign(UILabel *this, uint32_t arg2)

{
  *(uint32_t *)(*(long *)(this + 0x40) + 0x5c) = arg2;
  return;
}

/* ======================================================================
 * UIScrollBar__getElementArea  (Ghidra `__getElementArea` @ 005a53d0)
 * Signature: uint8_t __thiscall __getElementArea(UIScrollBar * this, UIRect * arg1)
 * Class: UIScrollBar
 * Calls: (none)
 * Called by: (none)
 */
/* UIScrollBar__getElementArea(UIRect&) */

void __thiscall UIScrollBar__getElementArea(UIScrollBar *this, UIRect *arg1)

{
  *(float *)arg1 = DAT_005c0e00 /* R:-0.5f */ * *(float *)(this + 0x28) + *(float *)(this + 0x20);
  *(float *)(arg1 + 4) =
      DAT_005be6e4 /* R:0.5f */ * *(float *)(this + 0x2c) + *(float *)(this + 0x24);
  *(uint32_t *)(arg1 + 8) = *(uint32_t *)(this + 0x28);
  *(uint32_t *)(arg1 + 0xc) = *(uint32_t *)(this + 0x2c);
  return;
}

/* ======================================================================
 * UIScrollBar__setParent  (Ghidra `__setParent` @ 005a5480)
 * Signature: uint8_t __thiscall __setParent(UIScrollBar * this, UIForm * arg1)
 * Class: UIScrollBar
 * Calls: `UIFormElement__setParent`, `UIForm__AddFormElement`
 * Called by: (none)
 */
/* UIScrollBar__setParent(UIForm*) */

void __thiscall UIScrollBar__setParent(UIScrollBar *this, UIForm *arg1)

{
  UIFormElement__setParent((UIFormElement *)this, arg1);
  if (arg1 != (UIForm *)0x0) {
    UIForm__AddFormElement(arg1, *(UIFormElement **)(this + 0x58));
    UIForm__AddFormElement(arg1, *(UIFormElement **)(this + 0x50));
    return;
  }
  (**(code **)(**(long **)(this + 0x58) + 0x50))(*(long **)(this + 0x58), 0);
  /* WARNING: Could not recover jumptable at 0x005a54ef. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x50) + 0x50))(*(long **)(this + 0x50), 0);
  return;
}

/* ======================================================================
 * UITextField__getElementArea  (Ghidra `__getElementArea` @ 005a5a90)
 * Signature: uint8_t __thiscall __getElementArea(UITextField * this, UIRect * arg1)
 * Class: UITextField
 * Calls: (none)
 * Called by: (none)
 */
/* UITextField__getElementArea(UIRect&) */

void __thiscall UITextField__getElementArea(UITextField *this, UIRect *arg1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  fVar1 = *(float *)(this + 0x20);
  *(float *)arg1 = fVar1;
  fVar7 = DAT_005be6e4 /* R:0.5f */;
  fVar2 = *(float *)(this + 0x24);
  *(float *)(arg1 + 4) = fVar2;
  fVar3 = *(float *)(this + 0x28);
  fVar4 = *(float *)(this + 0x70);
  *(float *)(arg1 + 8) = fVar3 * fVar4;
  fVar5 = *(float *)(this + 0x2c);
  fVar6 = *(float *)(this + 0x74);
  *(float *)arg1 = fVar1 - fVar3 * fVar4 * fVar7;
  *(float *)(arg1 + 0xc) = fVar5 * fVar6;
  *(float *)(arg1 + 4) = fVar5 * fVar6 * fVar7 + fVar2;
  return;
}

/* ======================================================================
 * TommunismEngineError__getMessage  (Ghidra `__getMessage` @ 005b7220)
 * Signature: uint8_t __thiscall __getMessage(TommunismEngineError * this)
 * Class: TommunismEngineError
 * Calls: (none)
 * Called by: (none)
 */
/* TommunismEngineError__getMessage() */

uint64_t __thiscall TommunismEngineError__getMessage(TommunismEngineError *this)

{
  return *(uint64_t *)(this + 8);
}

/* ======================================================================
 * TWindow__getAspectRatio  (Ghidra `__getAspectRatio` @ 005b9460)
 * Signature: uint8_t __thiscall __getAspectRatio(TWindow * this)
 * Class: TWindow
 * Calls: (none)
 * Called by: `Cursor3D__Render`, `EditorButton__IsMouseOverButton`, `ReimplmentThisSprite__RenderSprite`, `SMBCamera__SMBCamera`, `SMBCamera__Update`, `SMBLevelPortalInterface__Render`
 */
/* TWindow__getAspectRatio() */

void __thiscall TWindow__getAspectRatio(TWindow *this)

{
  *(float *)(this + 0x44) = (float)*(ushort *)(this + 8) / (float)*(ushort *)(this + 10);
  return;
}

/* ======================================================================
 * libc_csu_init  (Ghidra `__libc_csu_init` @ 005be390)
 * Signature: uint8_t __libc_csu_init(void)
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Removing unreachable block (ram,0x005be3da) */
/* WARNING: Removing unreachable block (ram,0x005be3e0) */

void __libc_csu_init(EVP_PKEY_CTX *arg1)

{
  _init(arg1);
  return;
}

/* ======================================================================
 * libc_csu_fini  (Ghidra `__libc_csu_fini` @ 005be420)
 * Signature: uint8_t __libc_csu_fini(void)
 * Calls: (none)
 * Called by: (none)
 */
void __libc_csu_fini(void)

{
  return;
}

/* ======================================================================
 * do_global_ctors_aux  (Ghidra `__do_global_ctors_aux` @ 005be44c)
 * Signature: uint8_t __do_global_ctors_aux(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t __do_global_ctors_aux(uint64_t arg1, uint64_t arg2, uint64_t arg3)

{
  uint8_t **ppuVar1;

  for (ppuVar1 = &PTR__GLOBAL__sub_I_ConvertColorToColor8_008153c0;
       (code *)*ppuVar1 != (code *)0xffffffffffffffff; ppuVar1 = ppuVar1 + -1) {
    (*(code *)*ppuVar1)();
  }
  return arg3;
}

/* ======================================================================
 * fini  (Ghidra `_fini` @ 005be46c)
 * Signature: uint8_t _fini(void)
 * Calls: (none)
 * Called by: (none)
 */
void _fini(void)

{
  __do_global_dtors_aux();
  return;
}
