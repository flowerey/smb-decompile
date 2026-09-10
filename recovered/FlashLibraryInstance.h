// Recovered class model for `FlashLibraryInstance` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class FlashLibraryInstance : public RenderLayerObject {
public:
  virtual void ~FlashLibraryInstance();  // +0x10 @0x572b80
  virtual void ~FlashLibraryInstance();  // +0x18 @0x572bd0
  virtual void Render();  // +0x20 @0x5717a0
  // ---- non-virtual / static (from symtab) ----
  void FlashLibraryInstance();  // @0x573610
  void TimelineRender(float, float, ColorTemplate<float> const&, ColorTemplate<float> const&, FlashLibraryInstance*);  // @0x5736c0
  void GetInstanceBounds(float&, float&, Vector2&);  // @0x573d00
  void GetBounds(float, Vector2&, Vector2&, float);  // @0x573e50
  bool IsPlaying();  // @0x574510
  void GotoAndPlay(int);  // @0x574560
  void GotoAndStop(int);  // @0x574590
  void Reset();  // @0x5745c0
  uint64_t GetLibraryEntry();  // @0x5745d0
  /* ? */ void IsBoundsTouchingInstance(Bounds const*);  // @0x5745f0
  /* ? */ void IsBoundsTouchingInstance(Bounds const*, float, Matrix4x4*, float);  // @0x574660
};
