// Recovered class model for `BaseResource` — from RTTI + vtable + symtab. NOT compiled.
// kind=single
#pragma once

class BaseResource {
public:
  virtual void ~BaseResource();  // +0x10 @0x57d1c0
  virtual void ~BaseResource();  // +0x18 @0x57d1d0
  virtual void AddRef();  // +0x20 @0x57be20
  virtual int RemoveRef();  // +0x28 @0x57be30
  // ---- non-virtual / static (from symtab) ----
  void Release(int);  // @0x57c300
};
