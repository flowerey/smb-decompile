// Recovered class model for `Model` — from RTTI + vtable + symtab. NOT compiled.
// kind=vmi
#pragma once

class Model : public BaseResource, public RenderableObject {
public:
  virtual void ~Model();  // +0x10 @0x592860
  virtual void ~Model();  // +0x18 @0x5928a0
  virtual void AddRef();  // +0x20 @0x57be20  // via BaseResource
  virtual int RemoveRef();  // +0x28 @0x57be30  // via BaseResource
  // ---- non-virtual / static (from symtab) ----
  void Render();  // @0x5929c0
  void Replicate(unsigned int, unsigned int);  // @0x592a20
  /* ? */ void Create(tagModelCreation*);  // @0x5956a0
};
