// Recovered class model for `QuakeEmitter` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class QuakeEmitter : public ParticleEmitter {
public:
  virtual void ~QuakeEmitter();  // +0x10 @0x483990
  virtual void ~QuakeEmitter();  // +0x18 @0x4839d0
  virtual void Render();  // +0x20 @0x4839a0
  virtual void Update();  // +0x28 @0x4839e0
  virtual void Reset();  // +0x30 @0x4839c0
  virtual void SetPosition(Vector2 const&);  // +0x38 @0x4839b0
  // ---- non-virtual / static (from symtab) ----
  void QuakeEmitter(QuakeEmitterCreate const*);  // @0x483a70
};
