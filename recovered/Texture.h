// Recovered class model for `Texture` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class Texture : public BaseResource {
public:
  virtual void ~Texture();  // +0x10 @0x5a0400
  virtual void ~Texture();  // +0x18 @0x5a0720
  virtual void AddRef();  // +0x20 @0x57be20  // via BaseResource
  virtual int RemoveRef();  // +0x28 @0x57be30  // via BaseResource
  // ---- non-virtual / static (from symtab) ----
  void Texture();  // @0x5a0a40
  /* ? */ void Create(tagTextureCreation*);  // @0x5a0a60
  void Lock(void**, unsigned int);  // @0x5a0b40
  void Unlock();  // @0x5a0ba0
};
