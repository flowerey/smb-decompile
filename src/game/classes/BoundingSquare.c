/* src/game/classes/BoundingSquare.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "BoundingSquare.h"

/* ======================================================================
 * BoundingSquare__BoundingSquare  (Ghidra `BoundingSquare` @ 0057dfc0)
 * Signature: uint8_t __thiscall BoundingSquare(BoundingSquare * self, Vector2 * arg1, float arg2, Vector2 * arg3)
 * Class: BoundingSquare
 * Calls: `Matrix4x4__operator_assign`, `Vector2__operator_assign`
 * Called by: `Camera__Camera__00581730`, `Camera__Camera__00581800`, `IsEntryTouchingBounds__00571480`, `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__00476530`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `RenderSetPiece`, `SMBAnimal__SMBAnimal__004868d0`, `SMBBoss__WayPointCollision`, `SMBBoss__WayPointCollision__0048da90` (+2 more)
 */
/* BoundingSquare__BoundingSquare(Vector2 const&, float, Vector2 const&) */

void __thiscall
BoundingSquare__BoundingSquare(BoundingSquare *self,Vector2 *arg1,float arg2,Vector2 *arg3)

{
  float local_1c;
  
  *self = (BoundingSquare)0x10;
  local_1c = arg2;
  Vector2__operator_assign((Vector2 *)(self + 0x84),arg3);
  Vector2__operator_assign((Vector2 *)(self + 0x8c),arg3);
  Matrix4x4__Transformation2DRot((Matrix4x4 *)(self + 4),(Vector2 *)0x0,&local_1c,arg1);
  Matrix4x4__operator_assign((Matrix4x4 *)(self + 0x44),(Matrix4x4 *)(self + 4));
  return;
}

/* ======================================================================
 * BoundingSquare__Update  (Ghidra `Update` @ 0057e040)
 * Signature: uint8_t __thiscall Update(BoundingSquare * self, Vector2 * arg1, float arg2, Vector2 * arg3)
 * Class: BoundingSquare
 * Calls: `Vector2__operator_assign`, `Vector2__operator_mul__005be200`
 * Called by: (none)
 */
/* BoundingSquare__Update(Vector2 const&, float, Vector2 const&) */

void __thiscall
BoundingSquare__Update(BoundingSquare *self,Vector2 *arg1,float arg2,Vector2 *arg3)

{
  Matrix4x4 *pMVar1;
  float local_2c;
  Vector2 local_28 [16];
  
  local_2c = arg2;
  pMVar1 = (Matrix4x4 *)
           Matrix4x4__Transformation2DRot
                     ((Matrix4x4 *)(self + 0x44),(Vector2 *)0x0,&local_2c,arg3);
  Matrix4x4__Multiply((Matrix4x4 *)(self + 0x44),(Matrix4x4 *)(self + 4),pMVar1);
  Vector2__operator_mul__005be200(local_28,(Vector2 *)(self + 0x84));
  Vector2__operator_assign((Vector2 *)(self + 0x8c),local_28);
  return;
}

/* ======================================================================
 * BoundingSquare__Change  (Ghidra `Change` @ 0057e0c0)
 * Signature: uint8_t __thiscall Change(BoundingSquare * self, Vector2 * arg1, float arg2, Vector2 * arg3)
 * Class: BoundingSquare
 * Calls: `Matrix4x4__operator_assign`, `Vector2__operator_assign`
 * Called by: `Camera__SetupCamera`, `FlyWrench__Reset`, `Machinarium__Reset`, `MeatBoyCharactor__Reset`, `MeatBoyCharactor__Update`, `Ogmo__Reset`, `Runman__Reset`
 */
/* BoundingSquare__Change(Vector2 const&, float, Vector2 const&) */

void __thiscall
BoundingSquare__Change(BoundingSquare *self,Vector2 *arg1,float arg2,Vector2 *arg3)

{
  float local_1c;
  
  local_1c = arg2;
  Vector2__operator_assign((Vector2 *)(self + 0x84),arg1);
  Vector2__operator_assign((Vector2 *)(self + 0x8c),arg1);
  Matrix4x4__Transformation2DRot((Matrix4x4 *)(self + 4),(Vector2 *)0x0,&local_1c,arg3);
  Matrix4x4__operator_assign((Matrix4x4 *)(self + 0x44),(Matrix4x4 *)(self + 4));
  return;
}
