// Recovered class model for `SmokeEmitter` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SmokeEmitter : public ParticleEmitter {
public:
  virtual void ~SmokeEmitter();  // +0x10 @0x511b00
  virtual void ~SmokeEmitter();  // +0x18 @0x511b50
  virtual void Render();  // +0x20 @0x511fc0
  virtual void Update();  // +0x28 @0x511dd0
  virtual void Reset();  // +0x30 @0x511b10
  virtual void SetPosition(Vector2 const&);  // +0x38 @0x511b40
  // ---- non-virtual / static (from symtab) ----
  void SmokeEmitter(SmokeEmitterCreate const*);  // @0x511b60
  void AddNewParticle();  // @0x511c90
  void RenderSmokeParticle(SmokeEmitter::SmokeParticle*);  // @0x511ed0
  void UpdateSmokeParticle(SmokeEmitter::SmokeParticle*);  // @0x512010
};
