// Recovered class model for `VertexShader` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class VertexShader : public Shader {
public:
  virtual void ~VertexShader();  // +0x10 @0x5a6750
  virtual void ~VertexShader();  // +0x18 @0x5a67a0
  virtual void AddRef();  // +0x20 @0x57be20  // via BaseResource
  virtual int RemoveRef();  // +0x28 @0x57be30  // via BaseResource
  // ---- non-virtual / static (from symtab) ----
  /* ? */ void Create(tagShaderCreation*);  // @0x5a67f0
};
