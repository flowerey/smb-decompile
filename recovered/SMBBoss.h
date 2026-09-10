// Recovered class model for `SMBBoss` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class SMBBoss : public RenderLayerObject {
public:
  virtual void ~SMBBoss();  // +0x10 @0x48d8c0
  virtual void ~SMBBoss();  // +0x18 @0x48d920
  virtual void slot_2();  // +0x20 @0x451e40 ?
  virtual void slot_3();  // +0x28 @0x451e40 ?
  virtual void slot_4();  // +0x30 @0x451e40 ?
  virtual void slot_5();  // +0x38 @0x451e40 ?
  virtual void Reset();  // +0x40 @0x48d780
  virtual void slot_7();  // +0x48 @0x451e40 ?
  virtual void slot_8();  // +0x50 @0x451e40 ?
  virtual void AddWayPoint(Vector2 const&, Vector2 const&, int, TileLevelSetPiece*);  // +0x58 @0x48d820
  // ---- non-virtual / static (from symtab) ----
  void SMBBoss();  // @0x48d980
  void WayPointCollision(int, Bounds*);  // @0x48da50
  void WayPointCollision(int, Vector2 const&);  // @0x48da90
};
