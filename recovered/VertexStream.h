// Recovered class model for `VertexStream` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class VertexStream : public BaseResource {
public:
  virtual void ~VertexStream();  // +0x10 @0x5a6800
  virtual void ~VertexStream();  // +0x18 @0x5a6810
  virtual void AddRef();  // +0x20 @0x5a6880
  virtual void RemoveRef();  // +0x28 @0x5a6820
  // ---- non-virtual / static (from symtab) ----
  void VertexStream();  // @0x5a68d0
  void VertexStream(unsigned char, unsigned int, unsigned int, tagDrawType, VertexBuffer**, VertexDeclaration*);  // @0x5a6980
  void SetVertexBuffer(unsigned char, VertexBuffer*);  // @0x5a6c00
  void SetVertexDeclaration(VertexDeclaration*);  // @0x5a6d00
};
