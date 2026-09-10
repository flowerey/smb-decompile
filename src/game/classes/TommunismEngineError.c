/* src/game/classes/TommunismEngineError.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TommunismEngineError.h"

/* ======================================================================
 * TommunismEngineError__TommunismEngineError  (Ghidra `TommunismEngineError` @ 005b7230)
 * Signature: uint8_t __thiscall TommunismEngineError(TommunismEngineError * self, char * arg1, ...)
 * Class: TommunismEngineError
 * Calls: `SprintArgList`, `malloc`, `memcpy`, `strlen`
 * Called by: (none)
 */
/* TommunismEngineError__TommunismEngineError(char const*, ...) */

void __thiscall TommunismEngineError__TommunismEngineError(TommunismEngineError *self, char *arg1,
                                                           ...)

{
  char *pcVar1;
  char in_AL;
  size_t sVar2;
  char *__dest;
  uint64_t in_RCX;
  uint64_t in_RDX;
  uint64_t in_R8;
  uint64_t in_R9;
  uint64_t in_XMM0_Qa;
  uint64_t in_XMM1_Qa;
  uint64_t in_XMM2_Qa;
  uint64_t in_XMM3_Qa;
  uint64_t in_XMM4_Qa;
  uint64_t in_XMM5_Qa;
  uint64_t in_XMM6_Qa;
  uint64_t in_XMM7_Qa;
  uint32_t local_e0;
  uint32_t local_dc;
  uint8_t *local_d8;
  uint8_t *local_d0;
  uint8_t local_c8[16];
  uint64_t local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_38;
  uint64_t local_28;

  if (in_AL != '\0') {
    local_98 = in_XMM0_Qa;
    local_88 = in_XMM1_Qa;
    local_78 = in_XMM2_Qa;
    local_68 = in_XMM3_Qa;
    local_58 = in_XMM4_Qa;
    local_48 = in_XMM5_Qa;
    local_38 = in_XMM6_Qa;
    local_28 = in_XMM7_Qa;
  }
  local_d8 = &stack0x00000008;
  *(uint8_t ***)self = &PTR___getMessage_005de620;
  pcVar1 = strLargeString;
  *(uint64_t *)(self + 8) = 0;
  local_d0 = local_c8;
  local_e0 = 0x10;
  local_dc = 0x30;
  local_b8 = in_RDX;
  local_b0 = in_RCX;
  local_a8 = in_R8;
  local_a0 = in_R9;
  SprintArgList(arg1, pcVar1, &local_e0);
  pcVar1 = strLargeString;
  sVar2 = strlen(strLargeString);
  sVar2 = (size_t)((int)sVar2 + 1);
  __dest = malloc(sVar2);
  *(char **)(self + 8) = __dest;
  if (pcVar1 != __dest) {
    memcpy(__dest, pcVar1, sVar2);
  }
  return;
}

/* ======================================================================
 * TommunismEngineError__TommunismEngineError__005b7340  (Ghidra `~TommunismEngineError` @ 005b7340)
 * Signature: uint8_t __thiscall ~TommunismEngineError(TommunismEngineError * self)
 * Class: TommunismEngineError
 * Calls: `operator_delete`
 * Called by: (none)
 */
/* TommunismEngineError__TommunismEngineError__005b7340() */

void __thiscall TommunismEngineError__TommunismEngineError__005b7340(TommunismEngineError *self)

{
  *(uint8_t ***)self = &PTR___getMessage_005de620;
  if (*(void **)(self + 8) != (void *)0x0) {
    operator_delete(*(void **)(self + 8));
  }
  *(uint64_t *)(self + 8) = 0;
  return;
}
