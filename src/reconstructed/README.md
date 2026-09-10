#Reconstructed source — read this first

This tree is a **semantic reconstruction** of the Ghidra decompilation in
`src/`. The two trees are kept side by side on purpose:

- `src/` — immutable low-level reference (raw decompiler output). **Never edit it.**
- `src/reconstructed/` (here) — what a competent programmer might have
  written, recovered from the binary's evidence.

## Confidence labels

Every non-trivial interpretation is tagged at its declaration:

- **[Confirmed]** — demonstrated by the binary/decompilation or strong
  cross-references (e.g. slot stride math, factory sizes, shared clip use).
- **[Inferred]** — strongly supported by usage and surrounding code, but
  the original name/shape is gone (e.g. clip slot roles, flag-bit roles).
- **[Speculation]** — plausible, insufficiently supported. Never used for
  behavior, only for names — and always tagged.

## Conventions

- One class = `.h` (interface + layout) + `.cpp` (behavior) + `.md`
  (the 8-point class note: what it is, fields, state machines, functions,
  gameplay, relationships, evidence, uncertainties).
- Every reconstructed function cites the original address
  (e.g. `// @00461310`), so it can be traced back to `src/`.
- Every field keeps its binary offset in a comment. Where the original
  size is proven (factory allocations), `static_assert`s record it —
  they are documentation until someone builds this.
- Ghidra artifacts (`LAB_*`, `FUN_*`, `DAT_*`, `iVar1`-style temporaries,
  meaningless casts) are removed. Indirect/virtual calls whose target is
  unknown keep an explicit, commented vtable call instead of an invented
  method name.
- Return types/parameters come from demangled symbols where available;
  Ghidra's guesses are kept only where marked.

## Build status

Deliberately **excluded from `Makefile`/`CMakeLists`**: this tree is for
reading. It is not expected to compile (opaque engine subsystems,
unrecovered base layouts).
