// Recovered class model for `RibbonEmitter` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class RibbonEmitter : public ParticleEmitter {
public:
  virtual void ~RibbonEmitter();  // +0x10 @0x59ab60
  virtual void ~RibbonEmitter();  // +0x18 @0x59ac00
  virtual void Render();  // +0x20 @0x59a5e0
  virtual void Update();  // +0x28 @0x59a690
  virtual void Reset();  // +0x30 @0x59a4b0
  virtual void SetPosition(Vector2 const&);  // +0x38 @0x59adb0
  // ---- non-virtual / static (from symtab) ----
  void RibbonEmitter(RibbonEmitterCreation const*);  // @0x59ac20
  void AddRibbonPoint(Vector2 const&);  // @0x59ad20
  long GetRibbonPosition(int);  // @0x59ad70
};
