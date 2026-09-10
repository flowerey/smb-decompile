// Recovered class model for `UnixUserProfile` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class UnixUserProfile : public UserProfile {
public:
  virtual void ~UnixUserProfile();  // +0x10 @0x5b8ce0
  virtual void ~UnixUserProfile();  // +0x18 @0x5b8f50
  virtual void InitializeProfile(int, int, void (*)());  // +0x20 @0x5b8c50
  virtual uint64_t IsProfileSignedIn();  // +0x28 @0x5b9200
  virtual uint64_t IsProfileDriveSelected();  // +0x30 @0x5b91f0
  virtual uint64_t IsProfileDriveValid();  // +0x38 @0x5b9210
  virtual void CreateUserRegistry(unsigned int);  // +0x40 @0x5b9af0  // via UserProfile
  virtual uint64_t GetUserName();  // +0x48 @0x5b8a60
  virtual /* ? */ void OpenFile(tagFileCreation const*, int*);  // +0x50 @0x5b8e10
  virtual void ReadData(File*, void*, unsigned int);  // +0x58 @0x5b8c40
  virtual void WriteData(File*, void const*, unsigned int);  // +0x60 @0x5b8c30
  virtual void CloseFile(File*, tagFileClass);  // +0x68 @0x5b8bf0
  virtual uint64_t GetFileSize();  // +0x70 @0x5b8a70
  virtual void Reset();  // +0x78 @0x5b8a80
  virtual void ReadDirectory(char const*, FileList**);  // +0x80 @0x5b8fd0
  virtual void DeleteUserFile(char const*);  // +0x88 @0x5b9070
  virtual void ReadSaveGames(char const*, FileList**);  // +0x90 @0x5b8a90
  virtual void DeleteSaveGame(char const*);  // +0x98 @0x5b8aa0
  virtual ulong FileExists(char const*);  // +0xa0 @0x5b8d60
  virtual void WriteProfileSettings(ProfileSetting const*);  // +0xa8 @0x5b8b60
  virtual void ReadProfileSettings(ProfileSetting*);  // +0xb0 @0x5b8ac0
  virtual uint64_t IsSaveFileOwner();  // +0xb8 @0x5b9220
  virtual uint64_t IsSufficientSpace(unsigned int, tagFileClass);  // +0xc0 @0x5b8ab0
  // ---- non-virtual / static (from symtab) ----
  void UnixUserProfile();  // @0x5b9110
};
