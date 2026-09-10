// Recovered class model for `SparkEmitter` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SparkEmitter : public ParticleEmitter {
public:
  virtual void ~SparkEmitter();  // +0x10 @0x59f4f0
  virtual void ~SparkEmitter();  // +0x18 @0x59f590
  virtual void Render();  // +0x20 @0x59f410
  virtual void Update();  // +0x28 @0x59f800
  virtual void Reset();  // +0x30 @0x59f2b0
  virtual void SetPosition(Vector2 const&);  // +0x38 @0x59f2a0
  // ---- non-virtual / static (from symtab) ----
  void SparkEmitter(SparkEmitterCreation const*);  // @0x59f5b0
  void AddNewSpark();  // @0x59f6e0
};
