// Recovered class model for `Tweening::Basic<float>` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class Tweening::Basic<float> : public TweenBase<float> {
public:
  virtual void Calculate(float);  // +0x10 @0x4b5cf0  // via TweenBase<float>
  virtual void Update(float);  // +0x18 @0x4b6190  // via TweenBase<float>
  virtual void Reset(int);  // +0x20 @0x4b58e0  // via TweenBase<float>
  virtual void Reverse();  // +0x28 @0x4b5930  // via TweenBase<float>
  virtual void Pause(int);  // +0x30 @0x4b5950  // via TweenBase<float>
  virtual uint32_t IsTweening();  // +0x38 @0x4b5960  // via TweenBase<float>
};
