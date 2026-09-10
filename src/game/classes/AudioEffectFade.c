/* src/game/classes/AudioEffectFade.c — 5 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "AudioEffectFade.h"

/* ======================================================================
 * AudioEffectFade__IsFinished  (Ghidra `IsFinished` @ 0057bb90)
 * Signature: uint8_t __thiscall IsFinished(AudioEffectFade * self)
 * Class: AudioEffectFade
 * Calls: (none)
 * Called by: (none)
 */
/* AudioEffectFade__IsFinished() */

bool __thiscall AudioEffectFade__IsFinished(AudioEffectFade *self)

{
  return *(int *)(self + 100) == 0;
}

/* ======================================================================
 * AudioEffectFade__ContainsInstance  (Ghidra `ContainsInstance` @ 0057bba0)
 * Signature: uint8_t __thiscall ContainsInstance(AudioEffectFade * self, TAudioInstance * arg1)
 * Class: AudioEffectFade
 * Calls: (none)
 * Called by: (none)
 */
/* AudioEffectFade__ContainsInstance(TAudioInstance const*) */

bool __thiscall AudioEffectFade__ContainsInstance(AudioEffectFade *self, TAudioInstance *arg1)

{
  bool bVar1;

  bVar1 = true;
  if (*(TAudioInstance **)(self + 0x10) != arg1) {
    bVar1 = arg1 == *(TAudioInstance **)(self + 0x18);
  }
  return bVar1;
}

/* ======================================================================
 * AudioEffectFade__Update  (Ghidra `Update` @ 0057bbc0)
 * Signature: uint8_t __thiscall Update(AudioEffectFade * self)
 * Class: AudioEffectFade
 * Calls: `TAudioInstance__SetVolume`
 * Called by: (none)
 */
/* AudioEffectFade__Update() */

void __thiscall AudioEffectFade__Update(AudioEffectFade *self)

{
  float fVar1;
  uint32_t uVar2;
  float fVar3;

  fVar1 = fOneFrameTimeStep;
  if (*(int *)(self + 0x58) == 1) {
    if ((*(int *)(self + 0x60) != 0) ||
        (fVar3 = *(float *)(self + 0x4c) + fOneFrameTimeStep, *(float *)(self + 0x4c) = fVar3,
         fVar3 < *(float *)(self + 0x54)))
      goto LAB_0057bc18;
    *(uint32_t *)(self + 0x58) = 0;
    *(uint32_t *)(self + 0x4c) = 0;
  } else if (*(int *)(self + 0x58) != 0)
    goto LAB_0057bc18;
  if (*(int *)(self + 0x60) == 0) {
    fVar3 = *(float *)(self + 0x4c);
    *(float *)(self + 0x4c) = fVar1 + fVar3;
    if (fVar1 + fVar3 < *(float *)(self + 0x50)) {
      (*(code *)**(uint64_t **)(self + 0x30))(self + 0x30);
    } else {
      if (*(int *)(self + 0x5c) == 0) {
        uVar2 = *(uint32_t *)(self + 0x44);
      } else {
        uVar2 = *(uint32_t *)(self + 0x40);
      }
      **(uint32_t **)(self + 0x38) = uVar2;
      *(uint32_t *)(self + 100) = 0;
    }
  }
LAB_0057bc18:
  fVar1 = DAT_005be894 /* R:1.0f */;
  TAudioInstance__SetVolume(
      *(TAudioInstance **)(self + 0x10),
      (uint)(long)((float)*(uint *)(self + 0x24) * *(float *)(self + 0x28) +
                   (float)*(uint *)(self + 0x20) *
                       (DAT_005be894 /* R:1.0f */ - *(float *)(self + 0x28))));
  if (*(TAudioInstance **)(self + 0x18) != (TAudioInstance *)0x0) {
    TAudioInstance__SetVolume(
        *(TAudioInstance **)(self + 0x18),
        (uint)(long)((float)*(uint *)(self + 0x24) * (fVar1 - *(float *)(self + 0x28)) +
                     (float)*(uint *)(self + 0x20) * *(float *)(self + 0x28)));
    return;
  }
  return;
}

/* ======================================================================
 * AudioEffectFade__AudioEffectFade__0057bd10  (Ghidra `AudioEffectFade` @ 0057bd10)
 * Signature: uint8_t __thiscall AudioEffectFade(AudioEffectFade * self)
 * Class: AudioEffectFade
 * Calls: (none)
 * Called by: `AudioEffectFade__AudioEffectFade`
 */
/* AudioEffectFade__AudioEffectFade__0057bd10() */

void __thiscall AudioEffectFade__AudioEffectFade__0057bd10(AudioEffectFade *self)

{
  *(uint8_t ***)self = &PTR_Update_005dbdd0;
  *(uint64_t *)(self + 0x10) = 0;
  *(uint64_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  *(uint32_t *)(self + 0x24) = 0;
  *(uint32_t *)(self + 0x28) = 0x3f800000;
  *(uint32_t *)(self + 0x5c) = 0;
  *(uint32_t *)(self + 0x60) = 0;
  *(uint32_t *)(self + 100) = 1;
  *(uint8_t ***)(self + 0x30) = &PTR_Calculate_005c4510;
  return;
}

/* ======================================================================
 * AudioEffectFade__AudioEffectFade__0057bd60  (Ghidra `~AudioEffectFade` @ 0057bd60)
 * Signature: uint8_t __thiscall ~AudioEffectFade(AudioEffectFade * self)
 * Class: AudioEffectFade
 * Calls: (none)
 * Called by: (none)
 */
/* AudioEffectFade__AudioEffectFade__0057bd60() */

void __thiscall AudioEffectFade__AudioEffectFade__0057bd60(AudioEffectFade *self)

{
  *(uint8_t ***)(self + 0x30) = &PTR_Calculate_005c4550;
  *(uint8_t ***)self = &PTR___cxa_pure_virtual_005dbd30;
  return;
}
