// Recovered class model for `HospitalBoss` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class HospitalBoss : public SMBBoss {
public:
  virtual void ~HospitalBoss();  // +0x10 @0x46d040
  virtual void ~HospitalBoss();  // +0x18 @0x46d120
  virtual void Render();  // +0x20 @0x46d140
  virtual void Update();  // +0x28 @0x46d820
  virtual void OnDeath();  // +0x30 @0x46d2b0
  virtual bool IsCollidingWithBounds(Bounds const*);  // +0x38 @0x46cfc0
  virtual void Reset();  // +0x40 @0x46d760
  virtual void GetCameraFocus(FPUVector*);  // +0x48 @0x46cf80
  virtual HospitalBoss *__thiscall GetPosition();  // +0x50 @0x46cfb0
  virtual void AddWayPoint(Vector2 const&, Vector2 const&, int, TileLevelSetPiece*);  // +0x58 @0x48d820  // via SMBBoss
  // ---- non-virtual / static (from symtab) ----
  void HospitalBoss();  // @0x46d390
  void ChangeAction(tagHospitalBossState);  // @0x46d590
  void Hit();  // @0x46dcf0
};
