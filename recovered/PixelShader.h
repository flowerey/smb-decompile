// Recovered class model for `PixelShader` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class PixelShader : public Shader {
public:
  virtual void ~PixelShader();  // +0x10 @0x595d50
  virtual void ~PixelShader();  // +0x18 @0x595da0
  virtual void AddRef();  // +0x20 @0x57be20  // via BaseResource
  virtual int RemoveRef();  // +0x28 @0x57be30  // via BaseResource
  // ---- non-virtual / static (from symtab) ----
  /* ? */ void Create(tagShaderCreation*);  // @0x595df0
};
