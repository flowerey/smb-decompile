// Recovered class model for `RenderLayer` — from RTTI + vtable + symtab. NOT compiled.
// kind=single
#pragma once

class RenderLayer {
public:
  virtual void ~RenderLayer();  // +0x10 @0x598860
  virtual void ~RenderLayer();  // +0x18 @0x5988e0
  virtual void Render();  // +0x20 @0x597c80
  // ---- non-virtual / static (from symtab) ----
  void RenderLayer();  // @0x597d50
  int GetNumObjects();  // @0x597dd0
  void AddObject(RenderLayerObject*);  // @0x597df0
  void RemoveObject(RenderLayerObject*);  // @0x597f20
  void SwapObjects(RenderLayerObject*, RenderLayerObject*);  // @0x597fb0
  void InsertObjectAfter(RenderLayerObject*, RenderLayerObject*);  // @0x598530
  void InsertObjectBefore(RenderLayerObject*, RenderLayerObject*);  // @0x5985f0
  int GetObjectPosition(RenderLayerObject*);  // @0x5986b0
};
