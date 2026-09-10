// Recovered class model for `IndexBuffer` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class IndexBuffer : public BaseResource {
public:
  virtual void ~IndexBuffer();  // +0x10 @0x58a520
  virtual void ~IndexBuffer();  // +0x18 @0x58a550
  virtual void AddRef();  // +0x20 @0x57be20  // via BaseResource
  virtual int RemoveRef();  // +0x28 @0x57be30  // via BaseResource
  // ---- non-virtual / static (from symtab) ----
  void IndexBuffer();  // @0x58a590
  /* ? */ void Create(tagIndexBufferCreation const*);  // @0x58a5b0
  void Lock(void**, unsigned int, unsigned long);  // @0x58a610
  void Unlock();  // @0x58a630
};
