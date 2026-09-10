// Recovered class model for `FactoryBoss` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class FactoryBoss : public SMBBoss {
public:
  virtual void ~FactoryBoss();  // +0x10 @0x468d60
  virtual void ~FactoryBoss();  // +0x18 @0x468f70
  virtual void Render();  // +0x20 @0x468df0
  virtual void Update();  // +0x28 @0x468ef0
  virtual void OnDeath();  // +0x30 @0x468c50
  virtual bool IsCollidingWithBounds(Bounds const*);  // +0x38 @0x468c70
  virtual void Reset();  // +0x40 @0x468cb0
  virtual void GetCameraFocus(FPUVector*);  // +0x48 @0x468d10
  virtual FactoryBoss *__thiscall GetPosition();  // +0x50 @0x468c60
  virtual void AddWayPoint(Vector2 const&, Vector2 const&, int, TileLevelSetPiece*);  // +0x58 @0x48d820  // via SMBBoss
  // ---- non-virtual / static (from symtab) ----
  void FactoryBoss();  // @0x468ff0
  void Hit();  // @0x4691c0
};
