/* src/game/classes/RenderLayers.c — 2 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "RenderLayers.h"

/* ======================================================================
 * RenderLayers__Render  (Ghidra `Render` @ 005986f0)
 * Signature: uint8_t __stdcall Render(void)
 * Class: RenderLayers
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`
 * Called by: `TEngine__EngineRun`, `TEngine__Render`
 */
/* RenderLayers__Render() */

void RenderLayers__Render(void)

{
  long *plVar1;
  AutoLockSection aAStack_28[16];
  AutoLockSection local_18[16];

  AutoLockSection__AutoLockSection(aAStack_28, (CriticalSection *)MasterRenderSection);
  /* try { // try from 0059870c to 00598710 has its CatchHandler @ 00598768 */
  AutoLockSection__AutoLockSection(local_18, (CriticalSection *)_RENDERLAYER_SECTION);
  for (plVar1 = pHeadLayer; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[0x79]) {
    while (*(int *)((long)plVar1 + 0x414) != 1) {
      plVar1 = (long *)plVar1[0x79];
      if (plVar1 == (long *)0x0)
        goto LAB_00598750;
    }
    /* try { // try from 0059873b to 0059873d has its CatchHandler @ 0059877b */
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_00598750:
  /* try { // try from 00598755 to 00598759 has its CatchHandler @ 00598768 */
  AutoLockSection__AutoLockSection__005b59d0(local_18);
  AutoLockSection__AutoLockSection__005b59d0(aAStack_28);
  return;
}

/* ======================================================================
 * RenderLayers__RemoveAllLayers  (Ghidra `RemoveAllLayers` @ 00599050)
 * Signature: uint8_t __stdcall RemoveAllLayers(void)
 * Class: RenderLayers
 * Calls: `RemoveLayer`
 * Called by: (none)
 */
/* RenderLayers__RemoveAllLayers() */

void RenderLayers__RemoveAllLayers(void)

{
  while (pHeadLayer != (RenderLayer *)0x0) {
    RemoveLayer(pHeadLayer);
  }
  return;
}
