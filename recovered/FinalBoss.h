// Recovered class model for `FinalBoss` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class FinalBoss : public SMBBoss {
public:
  virtual void ~FinalBoss();  // +0x10 @0x469250
  virtual void ~FinalBoss();  // +0x18 @0x469370
  virtual void Render();  // +0x20 @0x4691d0
  virtual void Update();  // +0x28 @0x469a30
  virtual void OnDeath();  // +0x30 @0x4691e0
  virtual uint64_t IsCollidingWithBounds(Bounds const*);  // +0x38 @0x4693f0
  virtual void Reset();  // +0x40 @0x469410
  virtual void GetCameraFocus(FPUVector*);  // +0x48 @0x469200
  virtual FinalBoss *__thiscall GetPosition();  // +0x50 @0x4691f0
  virtual void AddWayPoint(Vector2 const&, Vector2 const&, int, TileLevelSetPiece*);  // +0x58 @0x48d820  // via SMBBoss
  // ---- non-virtual / static (from symtab) ----
  void FinalBoss();  // @0x469560
  void PlayCredits();  // @0x469870
  void Hit();  // @0x4698f0
  void SetToPhaseTwo();  // @0x469900
};
