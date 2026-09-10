// Recovered class model for `FlashEditableTextField` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class FlashEditableTextField : public FlashMovieClip {
public:
  virtual /* ? */ void ~FlashEditableTextField();  // +0x10 @0x571420
  virtual /* ? */ void ~FlashEditableTextField();  // +0x18 @0x571b20
  virtual void Render(float, ColorTemplate<float> const&, ColorTemplate<float> const&, FlashLibraryInstance*);  // +0x20 @0x5760b0
  virtual void GetBounds(float, Vector2&, Vector2&);  // +0x28 @0x574cc0  // via FlashMovieClip
  virtual void IsEntryTouchingBounds(float, Bounds const*, tagInstanceBoundsType, Matrix4x4*);  // +0x30 @0x574ec0  // via FlashMovieClip
  // ---- non-virtual / static (from symtab) ----
  /* ? */ void FlashEditableTextField();  // @0x576550
  void SetText(wchar_t const*, ...);  // @0x578560
  void SetText(char const*, ...);  // @0x578630
  long GetText();  // @0x578710
  uint64_t GetUITextField();  // @0x578720
};
