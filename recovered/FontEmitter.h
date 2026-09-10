// Recovered class model for `FontEmitter` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class FontEmitter : public RenderLayerObject {
public:
  virtual void ~FontEmitter();  // +0x10 @0x584d20
  virtual void ~FontEmitter();  // +0x18 @0x584db0
  virtual void Render();  // +0x20 @0x584610
  // ---- non-virtual / static (from symtab) ----
  float GetRowWidth(int);  // @0x5852d0
  void FillVertexBuffer();  // @0x585520
  void FontEmitter(FontEmitterCreation const*);  // @0x5861d0
  void AllocateChars(int);  // @0x586350
  void SetStaticText(wchar_t const*);  // @0x5863b0
  void SetDynamicText(wchar_t const*, ...);  // @0x586480
  void SetFontSize(float);  // @0x586530
  void SetFontSizeActualPixels(float);  // @0x5865f0
};
