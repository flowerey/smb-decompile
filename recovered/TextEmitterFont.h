// Recovered class model for `TextEmitterFont` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class TextEmitterFont : public BaseResource {
public:
  virtual void ~TextEmitterFont();  // +0x10 @0x584e50
  virtual void ~TextEmitterFont();  // +0x18 @0x584f60
  virtual void AddRef();  // +0x20 @0x584a60
  virtual void RemoveRef();  // +0x28 @0x584a00
  // ---- non-virtual / static (from symtab) ----
  void TextEmitterFont(char const*);  // @0x584f80
  ushort GetKerning(wchar_t, wchar_t);  // @0x585140
  long GetCharInfo(wchar_t);  // @0x5851b0
};
