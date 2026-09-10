/* src/game/classes/SMBEditorRenderLayer.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBEditorRenderLayer.h"

/* ======================================================================
 * SMBEditorRenderLayer__SMBEditorRenderLayer  (Ghidra `~SMBEditorRenderLayer` @ 0049eb70)
 * Signature: uint8_t __thiscall ~SMBEditorRenderLayer(SMBEditorRenderLayer * self)
 * Class: SMBEditorRenderLayer
 * Calls: `RenderLayer__RenderLayer__005988e0`, `SMBEditorRenderLayer__SMBEditorRenderLayer__0049f3c0`
 * Called by: (none)
 */
/* SMBEditorRenderLayer__SMBEditorRenderLayer__0049f3c0() */

void __thiscall SMBEditorRenderLayer__SMBEditorRenderLayer__0049f3c0(SMBEditorRenderLayer *self)

{
  *(uint8_t ***)self = &PTR__SMBEditorRenderLayer_005c4450;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  return;
}

/* ======================================================================
 * SMBEditorRenderLayer__SMBEditorRenderLayer__0049f3c0  (Ghidra `~SMBEditorRenderLayer` @ 0049f3c0)
 * Signature: uint8_t __thiscall ~SMBEditorRenderLayer(SMBEditorRenderLayer * self)
 * Class: SMBEditorRenderLayer
 * Calls: `RenderLayer__RenderLayer__005988e0`, `operator_delete`
 * Called by: `SMBEditorRenderLayer__SMBEditorRenderLayer`
 */
/* SMBEditorRenderLayer__SMBEditorRenderLayer__0049f3c0() */

void __thiscall SMBEditorRenderLayer__SMBEditorRenderLayer__0049f3c0(SMBEditorRenderLayer *self)

{
  *(uint8_t ***)self = &PTR__SMBEditorRenderLayer_005c4450;
  RenderLayer__RenderLayer__005988e0((RenderLayer *)self);
  operator_delete(self);
  return;
}

/* ======================================================================
 * SMBEditorRenderLayer__SMBEditorRenderLayer__004a9470  (Ghidra `SMBEditorRenderLayer` @ 004a9470)
 * Signature: uint8_t __thiscall SMBEditorRenderLayer(SMBEditorRenderLayer * self)
 * Class: SMBEditorRenderLayer
 * Calls: `RenderLayer__RenderLayer__00597d50`
 * Called by: (none)
 */
/* SMBEditorRenderLayer__SMBEditorRenderLayer__004a9470() */

void __thiscall SMBEditorRenderLayer__SMBEditorRenderLayer__004a9470(SMBEditorRenderLayer *self)

{
  RenderLayer__RenderLayer__00597d50((RenderLayer *)self);
  *(uint8_t ***)self = &PTR__SMBEditorRenderLayer_005c4450;
  return;
}

/* ======================================================================
 * SMBEditorRenderLayer__Render  (Ghidra `Render` @ 004b4a90)
 * Signature: uint8_t __stdcall Render(void)
 * Class: SMBEditorRenderLayer
 * Calls: `SMBEditor__Render`
 * Called by: (none)
 */
/* SMBEditorRenderLayer__Render() */

void SMBEditorRenderLayer__Render(void)

{
  SMBEditor__Render(SuperMeatBoyEditor);
  return;
}
