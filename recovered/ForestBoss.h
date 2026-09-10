// Recovered class model for `ForestBoss` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class ForestBoss : public SMBBoss {
public:
  virtual void ~ForestBoss();  // +0x10 @0x46a180
  virtual void ~ForestBoss();  // +0x18 @0x46a1f0
  virtual void Render();  // +0x20 @0x46a2b0
  virtual void Update();  // +0x28 @0x46a5a0
  virtual void OnDeath();  // +0x30 @0x46a230
  virtual uint64_t IsCollidingWithBounds(Bounds const*);  // +0x38 @0x46a210
  virtual void Reset();  // +0x40 @0x46a030
  virtual void GetCameraFocus(FPUVector*);  // +0x48 @0x46a130
  virtual void GetPosition();  // +0x50 @0x46a020
  virtual void AddWayPoint(Vector2 const&, Vector2 const&, int, TileLevelSetPiece*);  // +0x58 @0x48d820  // via SMBBoss
  // ---- non-virtual / static (from symtab) ----
  void ForestBoss();  // @0x46a890
  void Hit();  // @0x46aa90
};
