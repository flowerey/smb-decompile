// Recovered class model for `Shader` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class Shader : public BaseResource {
public:
  virtual void ~Shader();  // +0x10 @0x595e00
  virtual void ~Shader();  // +0x18 @0x595e10
  virtual void AddRef();  // +0x20 @0x57be20  // via BaseResource
  virtual int RemoveRef();  // +0x28 @0x57be30  // via BaseResource
  // ---- non-virtual / static (from symtab) ----
  /* ? */ void CreateShader(tagShaderCreation*);  // @0x59f100
};
