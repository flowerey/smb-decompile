# Audio (TAudio) and the Steam/online stack

## TAudio — OpenAL cue manager (`TAudio.c`, 20 methods)

Backend is OpenAL (`al*`/`alc*` imports; `audCreateCue/Device`,
`audPlayCue/StopCue`, `audUpdateDevice` in the engine glue). Model:

- Cues + instances: `CreateManagedInstance` / `DestroyManagedInstance` /
  `ManageInstance`, `RemoveInstanceByPosition/LibraryID`.
- 2D positional audio: `EnableDirectionalAudio`,
  `SetMicrophonePosition` + `SetMicrophoneListeningRange` (the "microphone"
  is the listener; volume/pan derive from instance position).
- Music: `SetMusicVolume`, `OverrideMusicVolume` (ducking).
- `Mute`/`UnMute`, `ManageEffect`, `InvalidateInstance`,
  `DecodeConsoleADPCMData` (its own codec path for console-format samples).

## Steam / leaderboards / achievements

Three layers, bottom to top:

1. **SDK shims** (`src/platform/shims.c`): `SteamAPI_Init`,
   `SteamAPI_RunCallbacks`, `SteamUser/Utils/Apps/Friends/UserStats`
   accessors, `RegisterCallback/CallResult` plumbing.
2. **Callback glue** (`src/game/logic/`): `SteamLeaderBoards__*`
   (`OnLeaderboardFoundRead/Write` + `Finished` variants),
   `WriteEntryToLeaderboard`, `InitializeLeaderboardEntry`,
   `FreeLeaderboardEntry`, `ShowGamerInfo`, plus `Game_*` event handlers
   the SDK invokes — `Game_PlayerAdded`, `Game_ProfileChanged/SignedOut`,
   `Game_StorageChanged/RemovedOK/Cancel`, `Game_ConnectionChanged`,
   `Game_OverlayShowing`, `Game_JoystickUnplugged`,
   `Game_FullGamePurchased`, `Game_OSMusicChanged`,
   `Game_AllowLeaderboardFailureMessage`.
3. **UI** (`SMBLeaderBoardMenu.c`, 18 methods: `Activate/Deactivate`,
   `LoadData/ReadData`, paging, row select, `ShowSelectedPlayerProps`,
   `CloseDueToConnectionLoss`; `SMBStatisticsMenu.c`; `Achievements.c` /
   `Leaderboards.c` hold the entry tables).

Failure-tolerant by design: every online path has an offline/message-box
twin (`Game_CreateMessage/DisableMessage/ForceCloseMessage`,
`CloseDueToConnectionLoss`).

*See also: `tengine.md` (startup), `editor_input_data.md` (UI/widgets for menus).*
