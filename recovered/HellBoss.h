// Recovered class model for `HellBoss` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class HellBoss : public SMBBoss {
public:
  virtual void ~HellBoss();  // +0x10 @0x46b350
  virtual void ~HellBoss();  // +0x18 @0x46b5b0
  virtual void Render();  // +0x20 @0x46ccd0
  virtual void Update();  // +0x28 @0x46c890
  virtual void OnDeath();  // +0x30 @0x46b1c0
  virtual bool IsCollidingWithBounds(Bounds const*);  // +0x38 @0x46b290
  virtual void Reset();  // +0x40 @0x46b5d0
  virtual void GetCameraFocus(FPUVector*);  // +0x48 @0x46b170
  virtual HellBoss *__thiscall GetPosition();  // +0x50 @0x46b160
  virtual void AddWayPoint(Vector2 const&, Vector2 const&, int, TileLevelSetPiece*);  // +0x58 @0x48d820  // via SMBBoss
  // ---- non-virtual / static (from symtab) ----
  void HellBoss();  // @0x46bab0
  void DestroyHellBossAttack(HellBoss::HellAttack*);  // @0x46c510
  void SpawnMeatBoys();  // @0x46c580
  void FillAttackSequenceArray();  // @0x46ca00
  void DetermineNextAction();  // @0x46ca80
  void IncrementHurtState();  // @0x46cab0
  void Hit();  // @0x46cb10
  void RenderAttack(tagHellBossAttackType);  // @0x46cb20
  void ResetAttacks();  // @0x46cda0
};
