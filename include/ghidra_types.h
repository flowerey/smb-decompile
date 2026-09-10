#pragma once
/* Common Ghidra decompiler types. Include first in every TU. */
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef uint64_t ulong;
typedef uint32_t uint;
typedef uint16_t ushort;
typedef uint8_t byte;
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined1;
typedef uint8_t undefined;
typedef void *(*code)(); /* Ghidra code-pointer: generic function */
typedef struct {
  char *_rep;
} allocator; /* libstdc++ COW stub */

static inline void halt_baddata(void) { __builtin_trap(); }

/* Ghidra calling-convention annotations — no effect in C */
#define __thiscall
#define __stdcall
#define __cdecl
#define __fastcall
#define __usercall
#define __spoils

/* OpenSSL stub (only _init uses it) */
typedef struct EVP_PKEY_CTX EVP_PKEY_CTX;
