// Recovered class model for `FlashSymbol` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class FlashSymbol : public FlashLibraryEntry {
public:
  virtual void ~FlashSymbol();  // +0x10 @0x5713b0
  virtual void ~FlashSymbol();  // +0x18 @0x571460
  virtual void Render(float, ColorTemplate<float> const&, ColorTemplate<float> const&, FlashLibraryInstance*);  // +0x20 @0x571c10
  virtual void GetBounds(float, Vector2&, Vector2&);  // +0x28 @0x5716b0
  virtual uint64_t IsEntryTouchingBounds(float, Bounds const*, tagInstanceBoundsType, Matrix4x4*);  // +0x30 @0x571480
  // ---- non-virtual / static (from symtab) ----
  void FlashSymbol();  // @0x575060
};
