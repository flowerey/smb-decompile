/* src/game/classes/GraphicsSettings.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "GraphicsSettings.h"

/* ======================================================================
 * GraphicsSettings__SetupGraphicsSettings  (Ghidra `SetupGraphicsSettings` @ 0058a3c0)
 * Signature: uint8_t __stdcall SetupGraphicsSettings(void)
 * Class: GraphicsSettings
 * Calls: `CreateGraphicsSettingsForm`
 * Called by: `TEngine__TEngine`
 */
/* GraphicsSettings__SetupGraphicsSettings() */

void GraphicsSettings__SetupGraphicsSettings(void)

{
  CreateGraphicsSettingsForm((void *)0x0);
  return;
}

/* ======================================================================
 * GraphicsSettings__DestroyGraphicsSettings  (Ghidra `DestroyGraphicsSettings` @ 0058a3d0)
 * Signature: uint8_t __stdcall DestroyGraphicsSettings(void)
 * Class: GraphicsSettings
 * Calls: `free`
 * Called by: `TEngine__TEngine__00583e20`
 */
/* GraphicsSettings__DestroyGraphicsSettings() */

void GraphicsSettings__DestroyGraphicsSettings(void)

{
  if (pSelectableResolutions._72_4_ == -0x5eef3582) {
    pSelectableResolutions._72_4_ = 0;
    free(*(void **)(pSelectableResolutions._56_8_ + -8));
    if (pSelectableResolutions._48_4_ == 1) {
      free(*(void **)(pSelectableResolutions._64_8_ + -8));
    }
    pSelectableResolutions._72_4_ = 0;
    pSelectableResolutions._42_2_ = 0;
    pSelectableResolutions._40_2_ = 0;
    pSelectableResolutions._56_8_ = 0;
    pSelectableResolutions._64_8_ = 0;
  }
  if (_GRAPHICSFORM != (long *)0x0) {
    /* WARNING: Could not recover jumptable at 0x0058a3f7. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(*_GRAPHICSFORM + 8))();
    return;
  }
  return;
}

/* ======================================================================
 * GraphicsSettings__ActivateGraphicsForm  (Ghidra `ActivateGraphicsForm` @ 0058a480)
 * Signature: uint8_t __stdcall ActivateGraphicsForm(void)
 * Class: GraphicsSettings
 * Calls: `UIForm__Activate`
 * Called by: (none)
 */
/* GraphicsSettings__ActivateGraphicsForm() */

void GraphicsSettings__ActivateGraphicsForm(void)

{
  UIForm__Activate(_GRAPHICSFORM);
  return;
}

/* ======================================================================
 * GraphicsSettings__DeActivateGraphicsForm  (Ghidra `DeActivateGraphicsForm` @ 0058a490)
 * Signature: uint8_t __stdcall DeActivateGraphicsForm(void)
 * Class: GraphicsSettings
 * Calls: `UIForm__DeActivate`
 * Called by: (none)
 */
/* GraphicsSettings__DeActivateGraphicsForm() */

void GraphicsSettings__DeActivateGraphicsForm(void)

{
  UIForm__DeActivate(_GRAPHICSFORM);
  return;
}
