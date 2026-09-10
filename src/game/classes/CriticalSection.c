/* src/game/classes/CriticalSection.c — 4 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "CriticalSection.h"

/* ======================================================================
 * CriticalSection__CriticalSection  (Ghidra `CriticalSection` @ 005b7190)
 * Signature: uint8_t __thiscall CriticalSection(CriticalSection * self)
 * Class: CriticalSection
 * Calls: `pthread_mutex_init`, `pthread_mutexattr_destroy`, `pthread_mutexattr_init`, `pthread_mutexattr_settype`
 * Called by: `AdjustSetPieceLayering`, `BoundingVolume3D__BoundingVolume3D`, `CreateUserProfile`, `DrFetus__DrFetus__00466250`, `DrFetus__DrFetus__00466f80`, `ErrorLog__ErrorLog`, `ExplodeString`, `FlashAnimationLibrary__FlashAnimationLibrary__00576680`, `FlashSoundLibrary__Initialize`, `FragmentLinker__FragmentLinker__00587530` (+55 more)
 */
/* CriticalSection__CriticalSection() */

void __thiscall CriticalSection__CriticalSection(CriticalSection *self)

{
  pthread_mutexattr_t apStack_18 [4];
  
  pthread_mutexattr_init(apStack_18);
  pthread_mutexattr_settype(apStack_18,1);
  pthread_mutex_init((pthread_mutex_t *)self,apStack_18);
  pthread_mutexattr_destroy(apStack_18);
  return;
}

/* ======================================================================
 * CriticalSection__CriticalSection__005b71d0  (Ghidra `~CriticalSection` @ 005b71d0)
 * Signature: uint8_t __thiscall ~CriticalSection(CriticalSection * self)
 * Class: CriticalSection
 * Calls: (none)
 * Called by: `ActionAnimations__ActionAnimations`, `BoundingVolume3D__BoundingVolume3D__0057d940`, `ErrorLog__ErrorLog__005b6fc0`, `ExplodeString`, `FlashAnimationLibrary__FlashAnimationLibrary`, `FlashSoundLibrary__FlashSoundLibrary__00575090`, `FragmentLinker__FragmentLinker`, `GLOBAL_sub_I_AnimationCallbackSection`, `GLOBAL_sub_I_Audio`, `GLOBAL_sub_I_FixFileCase` (+91 more)
 */
/* CriticalSection__CriticalSection__005b71d0() */

void __thiscall CriticalSection__CriticalSection__005b71d0(CriticalSection *self)

{
  (*(code *)PTR_pthread_mutex_destroy_00815ae0)();
  return;
}

/* ======================================================================
 * CriticalSection__Lock  (Ghidra `Lock` @ 005b71e0)
 * Signature: uint8_t __thiscall Lock(CriticalSection * self, int arg1)
 * Class: CriticalSection
 * Calls: `pthread_mutex_lock`, `pthread_mutex_trylock`
 * Called by: `Add__00501060`, `Add__00501440`, `AutoLockSection__AutoLockSection`, `File__File`, `OpenFile`, `ResizeableArray_SMBLaser__Add`, `SMBPalette__SpecialRender__004e1290`, `SMBPalette__Update`, `SQLDatabase__AddQueuedQuery`, `SQLDatabase__PopQueuedQuery` (+2 more)
 */
/* CriticalSection__Lock(int) */

bool __thiscall CriticalSection__Lock(CriticalSection *self,int arg1)

{
  int iVar1;
  
  if (arg1 != 1) {
    iVar1 = pthread_mutex_trylock((pthread_mutex_t *)self);
    return iVar1 == 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)self);
  return true;
}

/* ======================================================================
 * CriticalSection__Unlock  (Ghidra `Unlock` @ 005b7210)
 * Signature: uint8_t __thiscall Unlock(CriticalSection * self)
 * Class: CriticalSection
 * Calls: (none)
 * Called by: `Add__00501060`, `Add__00501440`, `AutoLockSection__AutoLockSection__005b59d0`, `CloseFile`, `File__File`, `ResizeableArray_SMBLaser__Add`, `SMBPalette__SpecialRender__004e1290`, `SMBPalette__Update`, `SQLDatabase__AddQueuedQuery`, `SQLDatabase__PopQueuedQuery` (+2 more)
 */
/* CriticalSection__Unlock() */

void __thiscall CriticalSection__Unlock(CriticalSection *self)

{
  (*(code *)PTR_pthread_mutex_unlock_00815908)();
  return;
}
