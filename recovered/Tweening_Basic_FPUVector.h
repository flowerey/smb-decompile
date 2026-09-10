// Recovered class model for `Tweening::Basic<FPUVector>` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class Tweening::Basic<FPUVector> : public TweenBase<FPUVector> {
public:
  virtual void Calculate(float);  // +0x10 @0x4da080  // via TweenBase<FPUVector>
  virtual void Update(float);  // +0x18 @0x4da1e0  // via TweenBase<FPUVector>
  virtual void Reset(int);  // +0x20 @0x4d9f60  // via TweenBase<FPUVector>
  virtual void Reverse();  // +0x28 @0x4d9fd0  // via TweenBase<FPUVector>
  virtual void Pause(int);  // +0x30 @0x4d9ff0  // via TweenBase<FPUVector>
  virtual uint32_t IsTweening();  // +0x38 @0x4d9fc0  // via TweenBase<FPUVector>
};
