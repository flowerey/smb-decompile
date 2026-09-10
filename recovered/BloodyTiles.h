// Recovered class model for `BloodyTiles` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class BloodyTiles : public RenderLayerObject {
public:
  virtual void ~BloodyTiles();  // +0x10 @0x463640
  virtual void ~BloodyTiles();  // +0x18 @0x463670
  virtual void Render();  // +0x20 @0x463130
  // ---- non-virtual / static (from symtab) ----
  void BloodyTiles();  // @0x4636a0
  void Reset();  // @0x4636e0
  bool IsBloodOnTile(GRIDBLOCK const*, Vector2 const&, tagTileCollisionType, int&, int, int);  // @0x463850
  void AddBloodyTile(GRIDBLOCK const*, tagTileCollisionType, Vector2 const&, int, FlashLibraryInstance*);  // @0x463a30
};
