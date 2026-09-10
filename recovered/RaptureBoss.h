// Recovered class model for `RaptureBoss` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class RaptureBoss : public SMBBoss {
public:
  virtual void ~RaptureBoss();  // +0x10 @0x483d50
  virtual void ~RaptureBoss();  // +0x18 @0x483ed0
  virtual void Render();  // +0x20 @0x485ab0
  virtual void Update();  // +0x28 @0x485000
  virtual void OnDeath();  // +0x30 @0x483b20
  virtual uint64_t IsCollidingWithBounds(Bounds const*);  // +0x38 @0x486220
  virtual void Reset();  // +0x40 @0x483be0
  virtual void GetCameraFocus(FPUVector*);  // +0x48 @0x483ad0
  virtual RaptureBoss *__thiscall GetPosition();  // +0x50 @0x483ac0
  virtual void AddWayPoint(Vector2 const&, Vector2 const&, int, TileLevelSetPiece*);  // +0x58 @0x48d820  // via SMBBoss
  // ---- non-virtual / static (from symtab) ----
  void RaptureBoss();  // @0x483ef0
  void AddMaggotEffect(FlashLibraryInstance*, Vector2 const&);  // @0x484720
  void RenderMaggotEffects();  // @0x4847a0
  void UpdateMaggot(RaptureBoss::Maggot*);  // @0x484810
  void ShootMaggots(Vector2 const&);  // @0x485180
  void UpdateMaggotShots();  // @0x485290
  uint64_t MaggotBulletCollision(Bounds const*);  // @0x485340
  void RenderMaggotShots();  // @0x4853f0
  void RenderMaggot(RaptureBoss::Maggot*);  // @0x4854c0
  void ResetMaggot(RaptureBoss::Maggot*);  // @0x485bb0
  void ResetMaggots();  // @0x485c50
  bool IsBoundsTouchingMaggot(RaptureBoss::Maggot*, Bounds const*);  // @0x485d70
  bool MaggotCollisionCheck(Bounds const*);  // @0x4861a0
  void Hit();  // @0x486330
};
