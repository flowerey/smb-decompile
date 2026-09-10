// Recovered class model for `Tweening::Basic<ColorTemplate<float> >` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class Tweening::Basic<ColorTemplate<float> > : public TweenBase<ColorTemplate<float> > {
public:
  virtual void Calculate(float);  // +0x10 @0x4b5db0  // via TweenBase<ColorTemplate<float> >
  virtual void Update(float);  // +0x18 @0x4b6100  // via TweenBase<ColorTemplate<float> >
  virtual void Reset(int);  // +0x20 @0x4b5970  // via TweenBase<ColorTemplate<float> >
  virtual void Reverse();  // +0x28 @0x4b59c0  // via TweenBase<ColorTemplate<float> >
  virtual void Pause(int);  // +0x30 @0x4b59e0  // via TweenBase<ColorTemplate<float> >
  virtual uint32_t IsTweening();  // +0x38 @0x4b58d0  // via TweenBase<ColorTemplate<float> >
};
