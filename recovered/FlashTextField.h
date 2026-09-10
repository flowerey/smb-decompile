// Recovered class model for `FlashTextField` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class FlashTextField : public FlashLibraryEntry {
public:
  virtual void ~FlashTextField();  // +0x10 @0x5713c0
  virtual void ~FlashTextField();  // +0x18 @0x571ad0
  virtual float Render(float, ColorTemplate<float> const&, ColorTemplate<float> const&, FlashLibraryInstance*);  // +0x20 @0x5719b0
  virtual void GetBounds(float, Vector2&, Vector2&);  // +0x28 @0x571400
  virtual uint64_t IsEntryTouchingBounds(float, Bounds const*, tagInstanceBoundsType, Matrix4x4*);  // +0x30 @0x571410
  // ---- non-virtual / static (from symtab) ----
  void FlashTextField(tagTextAlign);  // @0x576210
  void FlashTextField();  // @0x5762b0
  void SetText(wchar_t const*, ...);  // @0x5762d0
  void SetText(char const*, ...);  // @0x5763a0
};
