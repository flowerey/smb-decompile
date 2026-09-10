// Recovered class model for `Sprite` — from RTTI + vtable + symtab. NOT compiled.
// kind=vmi
#pragma once

class Sprite : public RenderLayerObject, public SceneObject2D {
public:
  virtual void ~Sprite();  // +0x10 @0x59ff50
  virtual void ~Sprite();  // +0x18 @0x59ffd0
  virtual void Render();  // +0x20 @0x59fdb0
  // ---- non-virtual / static (from symtab) ----
  void Sprite(SpriteCreation const*);  // @0x5a0040
  void SetupRender();  // @0x5a0220
  void RenderOnly();  // @0x5a02a0
};
