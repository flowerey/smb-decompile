// Recovered class model for `AudioEffectFade` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class AudioEffectFade : public AudioEffectBase {
public:
  virtual void Update();  // +0x10 @0x57bbc0
  virtual bool IsFinished();  // +0x18 @0x57bb90
  virtual bool ContainsInstance(TAudioInstance const*);  // +0x20 @0x57bba0
  // ---- non-virtual / static (from symtab) ----
  void AudioEffectFade();  // @0x57bd10
  void ~AudioEffectFade();  // @0x57bd60
  void Create(AudioEffectFadeCreation const*);  // @0x57bd70
};
