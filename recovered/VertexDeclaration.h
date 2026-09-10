// Recovered class model for `VertexDeclaration` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class VertexDeclaration : public BaseResource {
public:
  virtual void ~VertexDeclaration();  // +0x10 @0x5a65b0
  virtual void ~VertexDeclaration();  // +0x18 @0x5a65f0
  virtual void AddRef();  // +0x20 @0x57be20  // via BaseResource
  virtual int RemoveRef();  // +0x28 @0x57be30  // via BaseResource
  // ---- non-virtual / static (from symtab) ----
  void VertexDeclaration(tagVertexDeclarationCreation const*);  // @0x5a6630
  /* ? */ void Create(tagVertexDeclarationCreation const*);  // @0x5a66b0
};
