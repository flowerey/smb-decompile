/* src/game/classes/Vector2.c — 22 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Vector2.h"

/* ======================================================================
 * Vector2__Vector2  (Ghidra `~Vector2` @ 004736b0)
 * Signature: uint8_t __thiscall ~Vector2(Vector2 * self)
 * Class: Vector2
 * Calls: (none)
 * Called by: `GLOBAL_sub_I_UserLoginCheck`, `GLOBAL_sub_I_vDefaultStart3D`, `IsOnTrianglePart`, `MeatBoyCharactor__Update`, `SMBAnimalGroundEnemyUpdate`, `SMBEditor__Render`, `TileLevelLightMap__GenerateShadowMap`
 */
/* Vector2__Vector2() */

void __thiscall Vector2__Vector2(Vector2 *self)

{
  return;
}

/* ======================================================================
 * Vector2__operator_minus  (Ghidra `operator-` @ 005be100)
 * Signature: uint8_t __thiscall operator-(Vector2 * self)
 * Class: Vector2
 * Calls: `Vector2__operator_minus__005be180`
 * Called by: (none)
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE() const */

Vector2 * __thiscall Vector2__operator_minus__005be180(Vector2 *self)

{
  uint *in_RSI;
  uint uVar1;
  
  uVar1 = *in_RSI ^ DAT_005be6f0 /* R:u32=2147483648 */;
  *(uint *)(self + 4) = in_RSI[1] ^ DAT_005be6f0 /* R:u32=2147483648 */;
  *(uint *)self = uVar1;
  return self;
}

/* ======================================================================
 * Vector2__operator_plus  (Ghidra `operator+` @ 005be130)
 * Signature: uint8_t __thiscall operator+(Vector2 * self)
 * Class: Vector2
 * Calls: `Vector2__operator_plus__005be140`
 * Called by: (none)
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE() const */

Vector2 * __thiscall Vector2__operator_plus__005be140(Vector2 *self)

{
  uint64_t *in_RSI;
  
  *(uint64_t *)self = *in_RSI;
  return self;
}

/* ======================================================================
 * Vector2__operator_plus__005be140  (Ghidra `operator+` @ 005be140)
 * Signature: uint8_t __thiscall operator+(Vector2 * self, Vector2 * arg1)
 * Class: Vector2
 * Calls: (none)
 * Called by: `Apply2DPhysics`, `ApplyObstacleForces`, `ArbitraryBlockCollision`, `ArbitraryBlockCollision__004e95c0`, `BloodyTiles__AddBloodyTile`, `CommanderVideo__Render`, `ExtendFaceFromLight`, `ExtendFaceFromLight__0046fd60`, `FlashLibraryInstance__GetBounds`, `FlashLibraryInstance__IsBoundsTouchingInstance__00574660` (+26 more)
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(Vector2 const&) const */

Vector2 * __thiscall Vector2__operator_plus__005be140(Vector2 *self,Vector2 *arg1)

{
  float fVar1;
  float fVar2;
  float *in_RDX;
  
  fVar1 = *in_RDX;
  fVar2 = *(float *)arg1;
  *(float *)(self + 4) = in_RDX[1] + *(float *)(arg1 + 4);
  *(float *)self = fVar1 + fVar2;
  return self;
}

/* ======================================================================
 * Vector2__operator_plus_assign  (Ghidra `operator+=` @ 005be160)
 * Signature: uint8_t __thiscall operator+=(Vector2 * self, Vector2 * arg1)
 * Class: Vector2
 * Calls: (none)
 * Called by: `Apply2DPhysics`, `ApplyGravityOrbForce`, `ApplyObstacleForces`, `ClosestPointToBoundingSquare`, `ClosestPointToBoundingSquare__0057e5e0`, `EditorButton__IsMouseOverButton`, `ForestBoss__Update`, `MeatBoyCharactor__Update`, `PasteSelectedTiles`, `RaptureBoss__Update` (+11 more)
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(Vector2 const&) */

void __thiscall Vector2__operator_plus_assign(Vector2 *self,Vector2 *arg1)

{
  *(float *)self = *(float *)self + *(float *)arg1;
  *(float *)(self + 4) = *(float *)(self + 4) + *(float *)(arg1 + 4);
  return;
}

/* ======================================================================
 * Vector2__operator_minus__005be180  (Ghidra `operator-` @ 005be180)
 * Signature: uint8_t __thiscall operator-(Vector2 * self, Vector2 * arg1)
 * Class: Vector2
 * Calls: (none)
 * Called by: `ApplyGravityOrbForce`, `ApplyObstacleForces`, `ArbitraryBlockCollision`, `ArbitraryBlockCollision__004e95c0`, `ClosestPointToBoundingSquare`, `ClosestPointToBoundingSquareDistSq`, `ClosestPointToBoundingSquareDistSq__0057e850`, `ClosestPointToBoundingSquare__0057e5e0`, `CommanderVideo__Render`, `DrFetus__UpdateShots` (+35 more)
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(Vector2 const&) const */

Vector2 * __thiscall Vector2__operator_minus__005be180(Vector2 *self,Vector2 *arg1)

{
  float fVar1;
  float fVar2;
  float *in_RDX;
  
  fVar1 = *(float *)arg1;
  fVar2 = *in_RDX;
  *(float *)(self + 4) = *(float *)(arg1 + 4) - in_RDX[1];
  *(float *)self = fVar1 - fVar2;
  return self;
}

/* ======================================================================
 * Vector2__operator_minus_assign  (Ghidra `operator-=` @ 005be1a0)
 * Signature: uint8_t __thiscall operator-=(Vector2 * self, Vector2 * arg1)
 * Class: Vector2
 * Calls: (none)
 * Called by: `Apply2DPhysics`, `DetermineCursorStart`, `SMBPalette__CollisionResponse__004e61d0`
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(Vector2 const&) */

void __thiscall Vector2__operator_minus_assign(Vector2 *self,Vector2 *arg1)

{
  *(float *)self = *(float *)self - *(float *)arg1;
  *(float *)(self + 4) = *(float *)(self + 4) - *(float *)(arg1 + 4);
  return;
}

/* ======================================================================
 * Vector2__operator_mul  (Ghidra `operator*` @ 005be1c0)
 * Signature: uint8_t __thiscall operator*(Vector2 * self, float arg1)
 * Class: Vector2
 * Calls: `Vector2__operator_mul__005be200`
 * Called by: (none)
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(float) const */

Vector2 * __thiscall Vector2__operator_mul__005be200(Vector2 *self,float arg1)

{
  float fVar1;
  float *in_RSI;
  
  fVar1 = *in_RSI;
  *(float *)(self + 4) = in_RSI[1] * arg1;
  *(float *)self = arg1 * fVar1;
  return self;
}

/* ======================================================================
 * Vector2__operator_mul_assign  (Ghidra `operator*=` @ 005be1e0)
 * Signature: uint8_t __thiscall operator*=(Vector2 * self, float arg1)
 * Class: Vector2
 * Calls: `Vector2__operator_mul_assign__005be220`
 * Called by: (none)
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(float) */

void __thiscall Vector2__operator_mul_assign__005be220(Vector2 *self,float arg1)

{
  *(float *)self = *(float *)self * arg1;
  *(float *)(self + 4) = arg1 * *(float *)(self + 4);
  return;
}

/* ======================================================================
 * Vector2__operator_mul__005be200  (Ghidra `operator*` @ 005be200)
 * Signature: uint8_t __thiscall operator*(Vector2 * self, Vector2 * arg1)
 * Class: Vector2
 * Calls: (none)
 * Called by: `Apply2DPhysics`, `ApplyGravityOrbForce`, `ApplyObstacleForces`, `BoundingSquare__Update`, `ClosestPointToBoundingSquare`, `ClosestPointToBoundingSquare__0057e5e0`, `CreateTileLightMapResources`, `DrFetus__UpdateShots`, `ExtendFaceFromLight`, `ExtendFaceFromLight__0046fd60` (+28 more)
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(Vector2 const&) const */

Vector2 * __thiscall Vector2__operator_mul__005be200(Vector2 *self,Vector2 *arg1)

{
  float fVar1;
  float fVar2;
  float *in_RDX;
  
  fVar1 = *in_RDX;
  fVar2 = *(float *)arg1;
  *(float *)(self + 4) = in_RDX[1] * *(float *)(arg1 + 4);
  *(float *)self = fVar1 * fVar2;
  return self;
}

/* ======================================================================
 * Vector2__operator_mul_assign__005be220  (Ghidra `operator*=` @ 005be220)
 * Signature: uint8_t __thiscall operator*=(Vector2 * self, Vector2 * arg1)
 * Class: Vector2
 * Calls: (none)
 * Called by: `MeatBoyCharFoundation__Render`, `Render`, `RenderSetPiece`, `SMBBooUpdate`, `SMBPalette__GetSetPieceProps__004dad20`, `SMBShooter__AddShot`, `UIDropDown__Render`, `UIForm__CalculateFormArea`, `UIForm__Render`, `UIForm__Update` (+3 more)
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(Vector2 const&) */

void __thiscall Vector2__operator_mul_assign__005be220(Vector2 *self,Vector2 *arg1)

{
  *(float *)self = *(float *)self * *(float *)arg1;
  *(float *)(self + 4) = *(float *)(self + 4) * *(float *)(arg1 + 4);
  return;
}

/* ======================================================================
 * Vector2__operator_div  (Ghidra `operator/` @ 005be240)
 * Signature: uint8_t __thiscall operator/(Vector2 * self, float arg1)
 * Class: Vector2
 * Calls: `Vector2__operator_div__005be2a0`
 * Called by: (none)
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(float) const */

Vector2 * __thiscall Vector2__operator_div__005be2a0(Vector2 *self,float arg1)

{
  float fVar1;
  float *in_RSI;
  float fVar2;
  
  fVar2 = DAT_005be894 /* R:1.0f */ / arg1;
  fVar1 = *in_RSI;
  *(float *)(self + 4) = in_RSI[1] * fVar2;
  *(float *)self = fVar2 * fVar1;
  return self;
}

/* ======================================================================
 * Vector2__operator_div_assign  (Ghidra `operator/=` @ 005be270)
 * Signature: uint8_t __thiscall operator/=(Vector2 * self, float arg1)
 * Class: Vector2
 * Calls: `Vector2__operator_div_assign__005be2c0`
 * Called by: (none)
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(float) */

void __thiscall Vector2__operator_div_assign__005be2c0(Vector2 *self,float arg1)

{
  float fVar1;
  
  fVar1 = DAT_005be894 /* R:1.0f */ / arg1;
  *(float *)self = *(float *)self * fVar1;
  *(float *)(self + 4) = fVar1 * *(float *)(self + 4);
  return;
}

/* ======================================================================
 * Vector2__operator_div__005be2a0  (Ghidra `operator/` @ 005be2a0)
 * Signature: uint8_t __thiscall operator/(Vector2 * self, Vector2 * arg1)
 * Class: Vector2
 * Calls: (none)
 * Called by: `TileLevel__TileCollision`, `Vector2__operator_div`
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(Vector2 const&) const */

Vector2 * __thiscall Vector2__operator_div__005be2a0(Vector2 *self,Vector2 *arg1)

{
  float fVar1;
  float fVar2;
  float *in_RDX;
  
  fVar1 = *(float *)arg1;
  fVar2 = *in_RDX;
  *(float *)(self + 4) = *(float *)(arg1 + 4) / in_RDX[1];
  *(float *)self = fVar1 / fVar2;
  return self;
}

/* ======================================================================
 * Vector2__operator_div_assign__005be2c0  (Ghidra `operator/=` @ 005be2c0)
 * Signature: uint8_t __thiscall operator/=(Vector2 * self, Vector2 * arg1)
 * Class: Vector2
 * Calls: (none)
 * Called by: `ApplyGravityOrbForce`, `DrFetus__UpdateShots`, `PasteSelectedTiles`, `RaptureBoss__UpdateMaggot`, `RenderSetPiece`, `RibbonEmitter__Update`, `SMBBooUpdate`, `SMBEditor__EditSetPieces`, `SMBEditor__Render`, `SMBPalette__Update` (+3 more)
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(Vector2 const&) */

void __thiscall Vector2__operator_div_assign__005be2c0(Vector2 *self,Vector2 *arg1)

{
  *(float *)self = *(float *)self / *(float *)arg1;
  *(float *)(self + 4) = *(float *)(self + 4) / *(float *)(arg1 + 4);
  return;
}

/* ======================================================================
 * Vector2__operator_assign  (Ghidra `operator=` @ 005be2e0)
 * Signature: uint8_t __thiscall operator=(Vector2 * self, Vector2 * arg1)
 * Class: Vector2
 * Calls: (none)
 * Called by: `Add`, `AddPostLineRenderItem`, `AlienHominid__AddShot`, `AlienHominid__ProcessSpecial`, `Apply2DPhysics`, `ApplyAnimalProps`, `ApplyObstacleForces`, `ArbitraryBlockCollision`, `ArbitraryBlockCollision__004e95c0`, `BloodyTiles__AddBloodyTile` (+161 more)
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(Vector2 const&) */

void __thiscall Vector2__operator_assign(Vector2 *self,Vector2 *arg1)

{
  *(uint32_t *)self = *(uint32_t *)arg1;
  *(uint32_t *)(self + 4) = *(uint32_t *)(arg1 + 4);
  return;
}

/* ======================================================================
 * Vector2__operator_eq  (Ghidra `operator==` @ 005be2f0)
 * Signature: uint8_t __thiscall operator==(Vector2 * self, Vector2 * arg1)
 * Class: Vector2
 * Calls: (none)
 * Called by: `PasteSelectedTiles`, `SMBAnimalGroundEnemyUpdate`
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(Vector2 const&) const */

bool __thiscall Vector2__operator_eq(Vector2 *self,Vector2 *arg1)

{
  if (*(float *)arg1 == *(float *)self) {
    return *(float *)(arg1 + 4) == *(float *)(self + 4);
  }
  return false;
}

/* ======================================================================
 * Vector2__operator_ne  (Ghidra `operator!=` @ 005be320)
 * Signature: uint8_t __thiscall operator!=(Vector2 * self, Vector2 * arg1)
 * Class: Vector2
 * Calls: (none)
 * Called by: (none)
 */
/* Vector2__TEMPNAMEPLACEHOLDERVALUE(Vector2 const&) const */

bool __thiscall Vector2__operator_ne(Vector2 *self,Vector2 *arg1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(float *)arg1 == *(float *)self) {
    bVar1 = *(float *)(arg1 + 4) != *(float *)(self + 4);
  }
  return bVar1;
}

/* ======================================================================
 * Vector2__operator_cast_to_float  (Ghidra `operator.cast.to.float*` @ 005be340)
 * Signature: float * __thiscall operator.cast.to.float*(Vector2 * self)
 * Class: Vector2
 * Calls: (none)
 * Called by: `ModelLoader__ModelLoader__005942a0`, `Vector2__operator_cast_to_float__005be350`
 */
/* Vector2__operator float*() */

float * __thiscall Vector2__operator_cast_to_float(Vector2 *self)

{
  return (float *)self;
}

/* ======================================================================
 * Vector2__operator_cast_to_float__005be350  (Ghidra `operator.cast.to.float*` @ 005be350)
 * Signature: float * __thiscall operator.cast.to.float*(Vector2 * self)
 * Class: Vector2
 * Calls: `Vector2__operator_cast_to_float`
 * Called by: (none)
 */
/* Vector2__operator float const*() const */

float * __thiscall Vector2__operator_cast_to_float(Vector2 *self)

{
  return (float *)self;
}

/* ======================================================================
 * Vector2__operator_index  (Ghidra `operator[]` @ 005be360)
 * Signature: uint8_t __thiscall operator[](Vector2 * self, int arg1)
 * Class: Vector2
 * Calls: `Vector2__operator_index__005be370`
 * Called by: (none)
 */
/* Vector2__operator_index__005be370(int) */

Vector2 * __thiscall Vector2__operator_index__005be370(Vector2 *self,int arg1)

{
  return self + (long)arg1 * 4;
}

/* ======================================================================
 * Vector2__operator_index__005be370  (Ghidra `operator[]` @ 005be370)
 * Signature: uint8_t __thiscall operator[](Vector2 * self, int arg1)
 * Class: Vector2
 * Calls: (none)
 * Called by: `ClosestPointToBoundingSquare`, `ClosestPointToBoundingSquareDistSq`, `ClosestPointToBoundingSquareDistSq__0057e850`, `ClosestPointToBoundingSquare__0057e5e0`, `Vector2__operator_index`
 */
/* Vector2__operator_index__005be370(int) const */

Vector2 * __thiscall Vector2__operator_index__005be370(Vector2 *self,int arg1)

{
  return self + (long)arg1 * 4;
}
