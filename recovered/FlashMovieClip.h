// Recovered class model for `FlashMovieClip` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class FlashMovieClip : public FlashLibraryEntry {
public:
  virtual void ~FlashMovieClip();  // +0x10 @0x5713a0
  virtual void ~FlashMovieClip();  // +0x18 @0x571470
  virtual void Render(float, ColorTemplate<float> const&, ColorTemplate<float> const&, FlashLibraryInstance*);  // +0x20 @0x576030
  virtual void GetBounds(float, Vector2&, Vector2&);  // +0x28 @0x574cc0
  virtual void IsEntryTouchingBounds(float, Bounds const*, tagInstanceBoundsType, Matrix4x4*);  // +0x30 @0x574ec0
  // ---- non-virtual / static (from symtab) ----
  void FlashMovieClip();  // @0x574ed0
  uint32_t IsPlaying();  // @0x574f10
  long FindInstance(int, int, int*, int);  // @0x574f20
};
