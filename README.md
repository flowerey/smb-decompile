# Super Meat Boy — Ghidra source reconstruction (4894 functions)

Decompiler output reorganized to browse like real source. NOT original code,
NOT fully buildable — types/layouts are Ghidra's best guess.

## Layout
```
include/ghidra_types.h   ulong/uint/byte/undefined*/code, call-conv macros, EVP stub
include/game_types.h     ~227 opaque class forward-decls + scalar/system-type stubs
include/globals.h        1698 nm globals + 814 DAT_/PTR_ synthetics
src/globals.c            dummy definitions
src/runtime/startup.c    CRT/entry/wrappers
src/platform/shims.c     SDL/OpenAL/MySQL/Steam/GL thunks
src/vendor/zlib_png.c | audio.c | shader.c   vendored libs
src/engine/core_*.c      generic engine/util (12 chunks)
src/game/classes/*.c     ONE FILE PER CLASS (e.g. GSMBMenu, GSuperMeatBoy)
src/game/logic/game_*.c  unclassified game fns
src/external/stubs.c     EXTERNAL-block stubs (halt_baddata)
docs/index.md            per-function file map
tests/                   recompilable leaf demo (adler32 vs zlib)
```

## How to read
1. `docs/index.md` to locate things; start at `main @ 00453b40`
   (`SDL_Init` -> `GetBasePath` -> `chdir` -> `XDG_DATA_HOME` ->
   `GSuperMeatBoy` ctor -> `TEngine::Run`), then
   `src/game/classes/GSuperMeatBoy.c`, `src/game/classes/GSMBMenu.c`.
2. Each function keeps `Ghidra name @ address + Signature (+ Class)`,
   plus `Calls:` / `Called by:` xref lists (e.g. `main` shows its whole
   startup flow and `Called by: start`).
3. Raw addresses carry value comments: `DAT_005be5e0 /* R:500.0f */`,
   `&DAT_005c9a59 /* R:"ELSE" */` — full table in `docs/rodata.md`.
   (`R:".."` = string, `R:500.0f` = float32, else raw u32.)
4. Identifiers are C-ified: `this` -> `self`, `param_N` -> `argN`,
   `undefined4` -> `uint32_t`, etc. String literals are untouched.

## Deep dives (human-quality rewrites + notes)

- `docs/alien_hominid.md` + `src/game/classes/AlienHominid_documented.c` —
  guest character id 27 fully recovered: 10-shot blaster layout, struct,
  per-function behaviour, replay wiring. Rewrite compiles with **0 errors**
  (original: 673 error lines); offsets byte-audited.

## Build status (honest)
- `make check` compiles per-file (`gcc -Iinclude -w -fcommon -std=gnu11`).
  Only a minority of TUs compile: opaque-struct pointer arithmetic
  (`this + 0x7e0` on incomplete structs), missing class layouts/vtables/STL
  and `code*` indirect-call idioms need manual RE. Full relink is not automatic.
- `tests/`: leaf function `adler32 @ 00562140` recompiles and matches zlib.
