/* src/game/classes/TWindow.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TWindow.h"

/* ======================================================================
 * TWindow__TWindow  (Ghidra `TWindow` @ 005b9230)
 * Signature: uint8_t __thiscall TWindow(TWindow * self, WindowSetupProps * arg1)
 * Class: TWindow
 * Calls: `SDL_CreateSystemCursor`, `SDL_CreateWindow`, `SDL_DisableScreenSaver`, `SDL_GetDesktopDisplayMode`, `SDL_GetError`, `SDL_SetCursor`, `SDL_ShowCursor`, `fflush`, `fprintf`
 * Called by: `TEngine__TEngine`
 */
/* TWindow__TWindow(WindowSetupProps const*) */

void __thiscall TWindow__TWindow(TWindow *self,WindowSetupProps *arg1)

{
  int iVar1;
  long lVar2;
  uint64_t uVar3;
  char *pcVar4;
  bool bVar5;
  uint8_t auStack_38 [4];
  uint32_t local_34;
  uint32_t local_30;
  
  if (Window != (TWindow *)0x0) {
    Error__ThrowFatalError("Window Already created");
  }
  *(uint32_t *)(self + 0x48) = 0;
  if ((WindowSetupProps *)(self + 8) != arg1) {
    *(uint64_t *)(self + 8) = *(uint64_t *)arg1;
    *(uint64_t *)(self + 0x10) = *(uint64_t *)(arg1 + 8);
    *(uint64_t *)(self + 0x18) = *(uint64_t *)(arg1 + 0x10);
    *(uint64_t *)(self + 0x20) = *(uint64_t *)(arg1 + 0x18);
    *(uint64_t *)(self + 0x28) = *(uint64_t *)(arg1 + 0x20);
    *(uint64_t *)(self + 0x30) = *(uint64_t *)(arg1 + 0x28);
    *(uint32_t *)(self + 0x38) = *(uint32_t *)(arg1 + 0x30);
  }
  iVar1 = SDL_GetDesktopDisplayMode(0,auStack_38);
  if (iVar1 == -1) {
    *(uint32_t *)(self + 0x3c) = 800;
    *(uint32_t *)(self + 0x40) = 600;
  }
  else {
    *(uint32_t *)(self + 0x3c) = local_34;
    *(uint32_t *)(self + 0x40) = local_30;
  }
  if (*(int *)(arg1 + 0xc) == 1) {
    bVar5 = *(int *)(arg1 + 4) == 0;
    iVar1 = (-(uint)bVar5 & 0xffffefff) + 0x1003;
    if (*(int *)(arg1 + 8) == 0) {
      iVar1 = (-(uint)bVar5 & 0xffffefff) + 0x100b;
    }
    lVar2 = SDL_CreateWindow(arg1 + 0x10,0x1fff0000,0x1fff0000,*(uint16_t *)arg1,
                             *(uint16_t *)(arg1 + 2),iVar1);
    *(long *)self = lVar2;
    if (lVar2 == 0) {
      uVar3 = SDL_GetError();
      pcVar4 = "";
      if (!bVar5) {
        pcVar4 = "|FULLSCREEN";
      }
      fprintf(stderr,"SDL_CreateWindow(%d, %d, OPENGL%s) failed: %s\n",(ulong)*(ushort *)arg1,
              (ulong)*(ushort *)(arg1 + 2),pcVar4,uVar3);
      fflush(stderr);
      Error__ThrowFatalError("SDL_CreateWindow() failed");
    }
    lVar2 = SDL_CreateSystemCursor(3);
    if (lVar2 != 0) {
      SDL_SetCursor(lVar2);
    }
    SDL_DisableScreenSaver();
  }
  *(float *)(self + 0x44) = (float)*(ushort *)arg1 / (float)*(ushort *)(arg1 + 2);
  SDL_ShowCursor(*(int *)(arg1 + 0x30) == 1);
  Window = self;
  return;
}

/* ======================================================================
 * TWindow__TWindow__005b93e0  (Ghidra `~TWindow` @ 005b93e0)
 * Signature: uint8_t __thiscall ~TWindow(TWindow * self)
 * Class: TWindow
 * Calls: `SDL_DestroyWindow`, `SDL_EnableScreenSaver`
 * Called by: `TEngine__TEngine`, `TEngine__TEngine__00583e20`
 */
/* TWindow__TWindow__005b93e0() */

void __thiscall TWindow__TWindow__005b93e0(TWindow *self)

{
  SDL_DestroyWindow(*(uint64_t *)self);
  SDL_EnableScreenSaver();
  return;
}

/* ======================================================================
 * TWindow__GetWindowPosition  (Ghidra `GetWindowPosition` @ 005b9400)
 * Signature: uint8_t __thiscall GetWindowPosition(TWindow * self, uint * arg1, uint * arg2)
 * Class: TWindow
 * Calls: `SDL_GetWindowPosition`
 * Called by: (none)
 */
/* TWindow__GetWindowPosition(unsigned int&, unsigned int&) */

void __thiscall TWindow__GetWindowPosition(TWindow *self,uint *arg1,uint *arg2)

{
  uint uVar1;
  uint uVar2;
  uint local_20;
  uint local_1c [3];
  
  SDL_GetWindowPosition(*(uint64_t *)self,&local_20,local_1c);
  uVar1 = 0;
  if (-1 < (int)local_20) {
    uVar1 = local_20;
  }
  uVar2 = 0;
  if (-1 < (int)local_1c[0]) {
    uVar2 = local_1c[0];
  }
  *arg1 = uVar1;
  *arg2 = uVar2;
  return;
}
