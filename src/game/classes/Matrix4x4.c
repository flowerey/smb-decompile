/* src/game/classes/Matrix4x4.c — 13 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "Matrix4x4.h"

/* ======================================================================
 * Matrix4x4__operator_cast_to_float  (Ghidra `operator.cast.to.float*` @ 005baf00)
 * Signature: float * __thiscall operator.cast.to.float*(Matrix4x4 * self)
 * Class: Matrix4x4
 * Calls: (none)
 * Called by: `Matrix4x4__operator_cast_to_float__005baf10`, `gfxDraw`
 */
/* Matrix4x4__operator float*() */

float *__thiscall Matrix4x4__operator_cast_to_float(Matrix4x4 *self)

{
  return (float *)self;
}

/* ======================================================================
 * Matrix4x4__operator_cast_to_float__005baf10  (Ghidra `operator.cast.to.float*` @ 005baf10)
 * Signature: float * __thiscall operator.cast.to.float*(Matrix4x4 * self)
 * Class: Matrix4x4
 * Calls: `Matrix4x4__operator_cast_to_float`
 * Called by: (none)
 */
/* Matrix4x4__operator float const*() const */

float *__thiscall Matrix4x4__operator_cast_to_float(Matrix4x4 *self)

{
  return (float *)self;
}

/* ======================================================================
 * Matrix4x4__operator_index  (Ghidra `operator[]` @ 005baf20)
 * Signature: uint8_t __thiscall operator[](Matrix4x4 * self, int arg1)
 * Class: Matrix4x4
 * Calls: `Matrix4x4__operator_index__005baf30`
 * Called by: (none)
 */
/* Matrix4x4__operator_index__005baf30(int) */

Matrix4x4 *__thiscall Matrix4x4__operator_index__005baf30(Matrix4x4 *self, int arg1)

{
  return self + (long)arg1 * 0x10;
}

/* ======================================================================
 * Matrix4x4__operator_index__005baf30  (Ghidra `operator[]` @ 005baf30)
 * Signature: uint8_t __thiscall operator[](Matrix4x4 * self, int arg1)
 * Class: Matrix4x4
 * Calls: (none)
 * Called by: `ClosestPointToBoundingBox`, `ClosestPointToBoundingBoxDistSq`, `ClosestPointToBoundingBox__005805b0`, `IsBoxTouchingBox`, `Matrix4x4__operator_index`
 */
/* Matrix4x4__operator_index__005baf30(int) const */

Matrix4x4 *__thiscall Matrix4x4__operator_index__005baf30(Matrix4x4 *self, int arg1)

{
  return self + (long)arg1 * 0x10;
}

/* ======================================================================
 * Matrix4x4__GetElement  (Ghidra `GetElement` @ 005baf40)
 * Signature: uint8_t __thiscall GetElement(Matrix4x4 * self, uchar arg1, uchar arg2)
 * Class: Matrix4x4
 * Calls: `Matrix4x4__GetElement__005baf50`
 * Called by: (none)
 */
/* Matrix4x4__GetElement__005baf50(unsigned char, unsigned char) */

Matrix4x4 *__thiscall Matrix4x4__GetElement__005baf50(Matrix4x4 *self, uchar arg1, uchar arg2)

{
  return self + ((ulong)arg2 + (ulong)arg1 * 4) * 4;
}

/* ======================================================================
 * Matrix4x4__GetElement__005baf50  (Ghidra `GetElement` @ 005baf50)
 * Signature: uint8_t __thiscall GetElement(Matrix4x4 * self, uchar arg1, uchar arg2)
 * Class: Matrix4x4
 * Calls: (none)
 * Called by: `Matrix4x4__GetElement`
 */
/* Matrix4x4__GetElement__005baf50(unsigned char, unsigned char) const */

Matrix4x4 *__thiscall Matrix4x4__GetElement__005baf50(Matrix4x4 *self, uchar arg1, uchar arg2)

{
  return self + ((ulong)arg2 + (ulong)arg1 * 4) * 4;
}

/* ======================================================================
 * Matrix4x4__operator_assign  (Ghidra `operator=` @ 005baf60)
 * Signature: uint8_t __thiscall operator=(Matrix4x4 * self, Matrix4x4 * arg1)
 * Class: Matrix4x4
 * Calls: (none)
 * Called by: `Add`, `BoundingBox__BoundingBox`, `BoundingBox__Change`, `BoundingSquare__BoundingSquare`, `BoundingSquare__Change`, `BoundingVolume3D__Change`, `Create__005956a0`, `MeatBoyCharactor__Clone`, `MeatBoyCharactor__MeatBoyCharactor__0047b350`, `SMBPalette__FindAnimatedObstacles` (+5 more)
 */
/* Matrix4x4__TEMPNAMEPLACEHOLDERVALUE(Matrix4x4 const&) */

void __thiscall Matrix4x4__operator_assign(Matrix4x4 *self, Matrix4x4 *arg1)

{
  *(uint32_t *)self = *(uint32_t *)arg1;
  *(uint32_t *)(self + 0x10) = *(uint32_t *)(arg1 + 0x10);
  *(uint32_t *)(self + 0x20) = *(uint32_t *)(arg1 + 0x20);
  *(uint32_t *)(self + 0x30) = *(uint32_t *)(arg1 + 0x30);
  *(uint32_t *)(self + 4) = *(uint32_t *)(arg1 + 4);
  *(uint32_t *)(self + 0x14) = *(uint32_t *)(arg1 + 0x14);
  *(uint32_t *)(self + 0x24) = *(uint32_t *)(arg1 + 0x24);
  *(uint32_t *)(self + 0x34) = *(uint32_t *)(arg1 + 0x34);
  *(uint32_t *)(self + 8) = *(uint32_t *)(arg1 + 8);
  *(uint32_t *)(self + 0x18) = *(uint32_t *)(arg1 + 0x18);
  *(uint32_t *)(self + 0x28) = *(uint32_t *)(arg1 + 0x28);
  *(uint32_t *)(self + 0x38) = *(uint32_t *)(arg1 + 0x38);
  *(uint32_t *)(self + 0xc) = *(uint32_t *)(arg1 + 0xc);
  *(uint32_t *)(self + 0x1c) = *(uint32_t *)(arg1 + 0x1c);
  *(uint32_t *)(self + 0x2c) = *(uint32_t *)(arg1 + 0x2c);
  *(uint32_t *)(self + 0x3c) = *(uint32_t *)(arg1 + 0x3c);
  return;
}

/* ======================================================================
 * Matrix4x4__operator_eq  (Ghidra `operator==` @ 005bafc0)
 * Signature: uint8_t __thiscall operator==(Matrix4x4 * self, Matrix4x4 * arg1)
 * Class: Matrix4x4
 * Calls: (none)
 * Called by: (none)
 */
/* Matrix4x4__TEMPNAMEPLACEHOLDERVALUE(Matrix4x4 const&) const */

bool __thiscall Matrix4x4__operator_eq(Matrix4x4 *self, Matrix4x4 *arg1)

{
  if (((((*(float *)self == *(float *)arg1) &&
         (*(float *)(self + 0x10) == *(float *)(arg1 + 0x10))) &&
        (*(float *)(self + 0x20) == *(float *)(arg1 + 0x20))) &&
       ((((*(float *)(self + 0x30) == *(float *)(arg1 + 0x30) &&
           (*(float *)(self + 4) == *(float *)(arg1 + 4))) &&
          ((*(float *)(self + 0x14) == *(float *)(arg1 + 0x14) &&
            ((*(float *)(self + 0x24) == *(float *)(arg1 + 0x24) &&
              (*(float *)(self + 0x34) == *(float *)(arg1 + 0x34))))))) &&
         (*(float *)(self + 8) == *(float *)(arg1 + 8))))) &&
      ((((*(float *)(self + 0x18) == *(float *)(arg1 + 0x18) &&
          (*(float *)(self + 0x28) == *(float *)(arg1 + 0x28))) &&
         (*(float *)(self + 0x38) == *(float *)(arg1 + 0x38))) &&
        ((*(float *)(self + 0xc) == *(float *)(arg1 + 0xc) &&
          (*(float *)(self + 0x1c) == *(float *)(arg1 + 0x1c))))))) {
    if (*(float *)(self + 0x2c) == *(float *)(arg1 + 0x2c)) {
      return *(float *)(self + 0x3c) == *(float *)(arg1 + 0x3c);
    }
    return false;
  }
  return false;
}

/* ======================================================================
 * Matrix4x4__operator_ne  (Ghidra `operator!=` @ 005bb0a0)
 * Signature: uint8_t __thiscall operator!=(Matrix4x4 * self, Matrix4x4 * arg1)
 * Class: Matrix4x4
 * Calls: (none)
 * Called by: (none)
 */
/* Matrix4x4__TEMPNAMEPLACEHOLDERVALUE(Matrix4x4 const&) const */

bool __thiscall Matrix4x4__operator_ne(Matrix4x4 *self, Matrix4x4 *arg1)

{
  bool bVar1;

  bVar1 = true;
  if (((((*(float *)self == *(float *)arg1) &&
         (*(float *)(self + 0x10) == *(float *)(arg1 + 0x10))) &&
        (*(float *)(self + 0x20) == *(float *)(arg1 + 0x20))) &&
       (((*(float *)(self + 0x30) == *(float *)(arg1 + 0x30) &&
          (*(float *)(self + 4) == *(float *)(arg1 + 4))) &&
         ((*(float *)(self + 0x14) == *(float *)(arg1 + 0x14) &&
           ((*(float *)(self + 0x24) == *(float *)(arg1 + 0x24) &&
             (*(float *)(self + 0x34) == *(float *)(arg1 + 0x34))))))))) &&
      ((*(float *)(self + 8) == *(float *)(arg1 + 8) &&
        (((((*(float *)(self + 0x18) == *(float *)(arg1 + 0x18) &&
             (*(float *)(self + 0x28) == *(float *)(arg1 + 0x28))) &&
            (*(float *)(self + 0x38) == *(float *)(arg1 + 0x38))) &&
           ((*(float *)(self + 0xc) == *(float *)(arg1 + 0xc) &&
             (*(float *)(self + 0x1c) == *(float *)(arg1 + 0x1c))))) &&
          (*(float *)(self + 0x2c) == *(float *)(arg1 + 0x2c))))))) {
    bVar1 = *(float *)(self + 0x3c) != *(float *)(arg1 + 0x3c);
  }
  return bVar1;
}

/* ======================================================================
 * Matrix4x4__operator_mul_assign  (Ghidra `operator*=` @ 005bb180)
 * Signature: uint8_t __thiscall operator*=(Matrix4x4 * self, float arg1)
 * Class: Matrix4x4
 * Calls: `Matrix4x4__operator_mul_assign__005bc070`
 * Called by: (none)
 */
/* Matrix4x4__TEMPNAMEPLACEHOLDERVALUE(float) */

void __thiscall Matrix4x4__operator_mul_assign__005bc070(Matrix4x4 *self, float arg1)

{
  *(ulong *)(self + 0x10) = CONCAT44((float)((ulong) * (uint64_t *)(self + 0x10) >> 0x20) * arg1,
                                     (float)*(uint64_t *)(self + 0x10) * arg1);
  *(ulong *)(self + 0x18) = CONCAT44((float)((ulong) * (uint64_t *)(self + 0x18) >> 0x20) * arg1,
                                     (float)*(uint64_t *)(self + 0x18) * arg1);
  *(ulong *)(self + 0x20) = CONCAT44((float)((ulong) * (uint64_t *)(self + 0x20) >> 0x20) * arg1,
                                     (float)*(uint64_t *)(self + 0x20) * arg1);
  *(ulong *)(self + 0x28) = CONCAT44((float)((ulong) * (uint64_t *)(self + 0x28) >> 0x20) * arg1,
                                     (float)*(uint64_t *)(self + 0x28) * arg1);
  *(ulong *)(self + 0x30) = CONCAT44((float)((ulong) * (uint64_t *)(self + 0x30) >> 0x20) * arg1,
                                     (float)*(uint64_t *)(self + 0x30) * arg1);
  *(ulong *)(self + 0x38) = CONCAT44((float)((ulong) * (uint64_t *)(self + 0x38) >> 0x20) * arg1,
                                     (float)*(uint64_t *)(self + 0x38) * arg1);
  *(ulong *)self =
      CONCAT44((float)((ulong) * (uint64_t *)self >> 0x20) * arg1, (float)*(uint64_t *)self * arg1);
  *(ulong *)(self + 8) = CONCAT44((float)((ulong) * (uint64_t *)(self + 8) >> 0x20) * arg1,
                                  (float)*(uint64_t *)(self + 8) * arg1);
  return;
}

/* ======================================================================
 * Matrix4x4__operator_div_assign  (Ghidra `operator/=` @ 005bb1e0)
 * Signature: uint8_t __thiscall operator/=(Matrix4x4 * self, float arg1)
 * Class: Matrix4x4
 * Calls: (none)
 * Called by: (none)
 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matrix4x4__TEMPNAMEPLACEHOLDERVALUE(float) */

void __thiscall Matrix4x4__operator_div_assign(Matrix4x4 *self, float arg1)

{
  float fVar1;
  float fVar3;
  float fVar4;
  uint8_t auVar2[16];
  float fVar5;

  auVar2._4_4_ = arg1;
  auVar2._0_4_ = arg1;
  auVar2._8_4_ = arg1;
  auVar2._12_4_ = arg1;
  auVar2 = divps(_DAT_005ded80 /* R:1.0f */, auVar2);
  fVar1 = auVar2._0_4_;
  fVar3 = auVar2._4_4_;
  fVar4 = auVar2._8_4_;
  fVar5 = auVar2._12_4_;
  *(ulong *)(self + 0x10) = CONCAT44((float)((ulong) * (uint64_t *)(self + 0x10) >> 0x20) * fVar3,
                                     (float)*(uint64_t *)(self + 0x10) * fVar1);
  *(ulong *)(self + 0x18) = CONCAT44((float)((ulong) * (uint64_t *)(self + 0x18) >> 0x20) * fVar5,
                                     (float)*(uint64_t *)(self + 0x18) * fVar4);
  *(ulong *)(self + 0x20) = CONCAT44((float)((ulong) * (uint64_t *)(self + 0x20) >> 0x20) * fVar3,
                                     (float)*(uint64_t *)(self + 0x20) * fVar1);
  *(ulong *)(self + 0x28) = CONCAT44((float)((ulong) * (uint64_t *)(self + 0x28) >> 0x20) * fVar5,
                                     (float)*(uint64_t *)(self + 0x28) * fVar4);
  *(ulong *)(self + 0x30) = CONCAT44((float)((ulong) * (uint64_t *)(self + 0x30) >> 0x20) * fVar3,
                                     (float)*(uint64_t *)(self + 0x30) * fVar1);
  *(ulong *)(self + 0x38) = CONCAT44((float)((ulong) * (uint64_t *)(self + 0x38) >> 0x20) * fVar5,
                                     (float)*(uint64_t *)(self + 0x38) * fVar4);
  *(ulong *)self = CONCAT44((float)((ulong) * (uint64_t *)self >> 0x20) * fVar3,
                            (float)*(uint64_t *)self * fVar1);
  *(ulong *)(self + 8) = CONCAT44((float)((ulong) * (uint64_t *)(self + 8) >> 0x20) * fVar5,
                                  (float)*(uint64_t *)(self + 8) * fVar4);
  return;
}

/* ======================================================================
 * Matrix4x4__operator_mul  (Ghidra `operator*` @ 005bc060)
 * Signature: uint8_t __thiscall operator*(Matrix4x4 * self, Matrix4x4 * arg1)
 * Class: Matrix4x4
 * Calls: `Multiply`
 * Called by: (none)
 */
/* Matrix4x4__TEMPNAMEPLACEHOLDERVALUE(Matrix4x4 const&) const */

Matrix4x4 *__thiscall Matrix4x4__operator_mul(Matrix4x4 *self, Matrix4x4 *arg1)

{
  Matrix4x4 *in_RDX;

  Multiply(self, arg1, in_RDX);
  return self;
}

/* ======================================================================
 * Matrix4x4__operator_mul_assign__005bc070  (Ghidra `operator*=` @ 005bc070)
 * Signature: uint8_t __thiscall operator*=(Matrix4x4 * self, Matrix4x4 * arg1)
 * Class: Matrix4x4
 * Calls: `Multiply`
 * Called by: `Matrix4x4__operator_mul_assign`
 */
/* Matrix4x4__TEMPNAMEPLACEHOLDERVALUE(Matrix4x4 const&) */

void __thiscall Matrix4x4__operator_mul_assign__005bc070(Matrix4x4 *self, Matrix4x4 *arg1)

{
  Multiply(self, self, arg1);
  return;
}
