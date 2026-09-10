// Recovered class model for `GSMBMenu` — from RTTI + vtable + symtab. NOT compiled.
// kind=si
#pragma once

class GSMBMenu : public RenderLayer {
public:
  virtual void ~GSMBMenu();  // +0x10 @0x4d7e30
  virtual void ~GSMBMenu();  // +0x18 @0x4d8670
  virtual void Render();  // +0x20 @0x4cff10
  // ---- non-virtual / static (from symtab) ----
  void PlayCodeSound();  // @0x4c8a80
  void PlayBossIntro();  // @0x4c8bc0
  void SetCharSilouetteText();  // @0x4c8c10
  void LoadCharacterMenu();  // @0x4c8df0
  void UnloadCharacterMenu();  // @0x4c9ba0
  void TransitionInWorld();  // @0x4c9bf0
  void TransitionOutWorld();  // @0x4c9c80
  void TransitionOutChapter();  // @0x4c9d10
  void ProcessDisconnect();  // @0x4c9e10
  void UnloadChapterMenu();  // @0x4c9e30
  void LoadChapterMenu(tagChapterName);  // @0x4ca140
  void TransitionInChapter();  // @0x4cc970
  void SetWorldMenuStats();  // @0x4ccaf0
  void LoadWorldMenu(tagChapterName, int);  // @0x4ccc40
  void UnloadWorldMenu();  // @0x4cd4a0
  void AddChapterMessage(wchar_t const*);  // @0x4cd4c0
  void HidePauseMenu(int);  // @0x4cd980
  void ShowStartMenu(int);  // @0x4cd990
  void HideStartMenu();  // @0x4cdf20
  void SetTitleMenuText();  // @0x4ce040
  void ShowTitleMenu(int);  // @0x4ce1f0
  void SetTitleHelpAndOptionsMenuText();  // @0x4ce370
  void SetPauseMenuText();  // @0x4ce590
  void SetReplayPauseMenuText();  // @0x4ce7d0
  void ShowPauseMenu(int);  // @0x4cea00
  void SetPauseHelpAndOptionsMenuText();  // @0x4ceff0
  void HideTitleMenu();  // @0x4cf200
  void TransitionInTitleFromWorld();  // @0x4cf2f0
  void TransitionInTitleFromGame();  // @0x4cf340
  void SetBossPadState();  // @0x4cf3a0
  void RenderUnlocks();  // @0x4cf5d0
  void UnlocksFinished(int);  // @0x4cf5f0
  void HideCharMenu();  // @0x4cf620
  void RemoveControls();  // @0x4cf770
  void RestoreControls();  // @0x4cf980
  void TransitionOutGameToTitle();  // @0x4cfc00
  void TransitionOutWorldToTitle();  // @0x4cfc90
  void ShowCharMenu(int);  // @0x4d14f0
  void HideChapterMap();  // @0x4d16d0
  void RestoreWorldMapControls();  // @0x4d1c80
  void ShowWorldMap(int);  // @0x4d1dd0
  void RemoveWorldMapControls();  // @0x4d1e50
  void HideWorldMap();  // @0x4d1f90
  bool AllowedToMove(int);  // @0x4d1fe0
  uint64_t GetCurrLevelName();  // @0x4d2020
  void SetLevelDisplay();  // @0x4d2210
  void MoveToRightLevel();  // @0x4d2910
  void MoveToLeftLevel();  // @0x4d2b00
  void MoveToDownLevel();  // @0x4d2d20
  void MoveToUpLevel();  // @0x4d2f10
  void ShowChapterMap(int);  // @0x4d3100
  void ExtractChapterAndLevelFromSelectedLevel(int&, int&, char const*);  // @0x4d35e0
  void SetSelectedLevel(int, int);  // @0x4d3720
  void EnterSelectedLevel();  // @0x4d3770
  void EnterSelectedChapter();  // @0x4d39b0
  void LoadReplayFromManager();  // @0x4d3a40
  uint16_t IsInReplayMode();  // @0x4d3ae0
  void GetCurrReplayInfo();  // @0x4d3af0
  void LoadSelectedLevel();  // @0x4d3b00
  byte IsOnBossLevel();  // @0x4d3d10
  void ToggleLightAndDark();  // @0x4d3d30
  void LightDarkStartChange();  // @0x4d3e10
  void TransitionInMenuFromGame();  // @0x4d3f10
  void TransitionOutMenuFromGame();  // @0x4d3fb0
  void TransitionInGameFromMenu();  // @0x4d4060
  void TransitionInReloadChapter();  // @0x4d40f0
  void TransitionOutReloadChapter();  // @0x4d41b0
  void TransitionOutGameFromMenu();  // @0x4d42a0
  void MoveToNextChar();  // @0x4d43a0
  void MoveToPrevChar();  // @0x4d4410
  void PlayCharacterOn();  // @0x4d4480
  void SelectCharacter();  // @0x4d44d0
  int GetNextChapter(int);  // @0x4d46b0
  void TransitionInNextWorldMap(int);  // @0x4d4750
  void TransitionOutNextWorldMap(int);  // @0x4d49e0
  void StartGame();  // @0x4d4a70
  void Update();  // @0x4d4bf0
  void ShowExitMessage();  // @0x4d5430
  void IncrementTitleOption();  // @0x4d5520
  void DecrementTitleOption();  // @0x4d55e0
  void GoBackToTitleFromPause();  // @0x4d56a0
  void GoBackToMapFromPause();  // @0x4d56c0
  void IncrementReplayOption();  // @0x4d56e0
  void DecrementReplayOption();  // @0x4d5740
  void IncrementPauseOption();  // @0x4d57a0
  void DecrementPauseOption();  // @0x4d5840
  void ShowTitleHelpAndOptions();  // @0x4d58e0
  void ClickTitleOption();  // @0x4d5a30
  void HideTitleHelpAndOptions();  // @0x4d5cb0
  void ShowPauseHelpAndOptions();  // @0x4d5d20
  void ClickReplayPauseOption();  // @0x4d5e70
  void ClickPauseOption();  // @0x4d6070
  void HidePauseHelpAndOptions();  // @0x4d6570
  void ClickHelpOption();  // @0x4d6640
  void BackFromHelpAndOptions();  // @0x4d6850
  void ShowBackToTitleMessage();  // @0x4d6990
  void ShowBackToMapMessage();  // @0x4d6a80
  void IncrementHelpOption();  // @0x4d6b70
  void DecrementHelpOption();  // @0x4d6bd0
  void IncrementPauseHelpOption();  // @0x4d6c30
  void DecrementPauseHelpOption();  // @0x4d6c90
  void RenderLoadingScreen();  // @0x4d6cf0
  void ShowLeaderboardMenu();  // @0x4d6eb0
  void SetMenuTransitioning(int);  // @0x4d6ef0
  void SwitchIconToCurrWarp();  // @0x4d6f20
  bool CheckChapterLoadingStatus();  // @0x4d7010
  uint64_t ValidateAndLoadChapter();  // @0x4d7030
  void GetChapterFileData(unsigned char**, unsigned int&);  // @0x4d7180
  uint64_t LoadInternetsChapter();  // @0x4d71d0
  void LoadInternetsLevels();  // @0x4d71e0
  void GetLevelDataByIndex(int, unsigned char**, unsigned int*);  // @0x4d71f0
  void RenderTitleScreenForIntro();  // @0x4d7230
  void ProcessStorageChange();  // @0x4d7360
  void ResetForSignout();  // @0x4d7370
  void RestoreStartGameControls(int);  // @0x4d73f0
  void ResetForPurchase();  // @0x4d7540
  void LoadChapterEnd();  // @0x4d75a0
  void ShowChapterEnd();  // @0x4d7960
  void HideChapterEnd();  // @0x4d7a00
  void ShowCreditsMenu();  // @0x4d7ab0
  void ShowSettingsMenu();  // @0x4d7ad0
  void ShowInternetsSelection();  // @0x4d7af0
  void ShowReplayMenu(int);  // @0x4d7c00
  void ShowUpsell();  // @0x4d7c70
  void ShowAchievementUpsell(tagAwardType);  // @0x4d7cd0
  void ShowStatsMenu();  // @0x4d7cf0
  void ShowHowToPlayMenu();  // @0x4d7d10
  void ShowControlsMenu();  // @0x4d7d30
  void ShowCharSwitch();  // @0x4d7d50
  bool IsReplayManagerOpen();  // @0x4d7d70
  void ShowBossDefeat();  // @0x4d7d90
  void ShowBossUnlock();  // @0x4d7da0
  void ShowMoveOnMessage();  // @0x4d7db0
  void PromptUpsell();  // @0x4d7df0
  bool PopupTransitioning();  // @0x4d7e00
  void GSMBMenu();  // @0x4d8690
};
