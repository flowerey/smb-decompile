// Recovered class model for `VertexBuffer` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class VertexBuffer : public BaseResource {
public:
  virtual void ~VertexBuffer();  // +0x10 @0x5a6310
  virtual void ~VertexBuffer();  // +0x18 @0x5a6360
  virtual void AddRef();  // +0x20 @0x57be20  // via BaseResource
  virtual int RemoveRef();  // +0x28 @0x57be30  // via BaseResource
  // ---- non-virtual / static (from symtab) ----
  void VertexBuffer();  // @0x5a63c0
  /* ? */ void Create(tagVertexBufferCreation const*);  // @0x5a63e0
  void Lock(void**, unsigned int, unsigned long);  // @0x5a6470
  void Unlock();  // @0x5a64e0
  void Realloc(unsigned long);  // @0x5a6500
  void Replicate(unsigned int);  // @0x5a6590
  void ResetReplication();  // @0x5a65a0
};
