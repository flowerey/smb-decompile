/* src/platform/shims.c — 99 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "shims.h"

/* ======================================================================
 * SDL_DestroyWindow  (Ghidra `SDL_DestroyWindow` @ 00450f90)
 * Signature: uint8_t SDL_DestroyWindow(void)
 * Calls: (none)
 * Called by: `SDL_DestroyWindow__00825008`, `TWindow__TWindow__005b93e0`
 */
void SDL_DestroyWindow(void)

{
  (*(code *)PTR_SDL_DestroyWindow_00815648)();
  return;
}

/* ======================================================================
 * alDeleteBuffers  (Ghidra `alDeleteBuffers` @ 00450fb0)
 * Signature: uint8_t alDeleteBuffers(void)
 * Calls: (none)
 * Called by: `OpenALCueBufferInfo__OpenALCueBufferInfo__0053e0b0`, `OpenALCueBufferInfo__Release`, `OpenALCue__OpenALCue__0053e1e0`, `alDeleteBuffers__00825018`, `audDestroyCue`, `audDestroyDevice`
 */
void alDeleteBuffers(void)

{
  (*(code *)PTR_alDeleteBuffers_00815658)();
  return;
}

/* ======================================================================
 * alcMakeContextCurrent  (Ghidra `alcMakeContextCurrent` @ 00450fc0)
 * Signature: uint8_t alcMakeContextCurrent(void)
 * Calls: (none)
 * Called by: `alcMakeContextCurrent__00825020`, `audCreateDevice`, `audDestroyDevice`
 */
void alcMakeContextCurrent(void)

{
  (*(code *)PTR_alcMakeContextCurrent_00815660)();
  return;
}

/* ======================================================================
 * SDL_GL_LoadLibrary  (Ghidra `SDL_GL_LoadLibrary` @ 00450fd0)
 * Signature: uint8_t SDL_GL_LoadLibrary(void)
 * Calls: (none)
 * Called by: `SDL_GL_LoadLibrary__00825028`, `main`
 */
void SDL_GL_LoadLibrary(void)

{
  (*(code *)PTR_SDL_GL_LoadLibrary_00815668)();
  return;
}

/* ======================================================================
 * SDL_CreateWindow  (Ghidra `SDL_CreateWindow` @ 00451000)
 * Signature: uint8_t SDL_CreateWindow(void)
 * Calls: (none)
 * Called by: `SDL_CreateWindow__00825040`, `TWindow__TWindow`
 */
void SDL_CreateWindow(void)

{
  (*(code *)PTR_SDL_CreateWindow_00815680)();
  return;
}

/* ======================================================================
 * alGenSources  (Ghidra `alGenSources` @ 00451010)
 * Signature: uint8_t alGenSources(void)
 * Calls: (none)
 * Called by: `alGenSources__00825048`, `audPlayCue`
 */
void alGenSources(void)

{
  (*(code *)PTR_alGenSources_00815688)();
  return;
}

/* ======================================================================
 * SDL_Quit  (Ghidra `SDL_Quit` @ 00451030)
 * Signature: uint8_t SDL_Quit(void)
 * Calls: (none)
 * Called by: `SDL_Quit__00825050`
 */
void SDL_Quit(void)

{
  (*(code *)PTR_SDL_Quit_00815698)();
  return;
}

/* ======================================================================
 * mysql_server_init  (Ghidra `mysql_server_init` @ 00451040)
 * Signature: uint8_t mysql_server_init(void)
 * Calls: (none)
 * Called by: `SQLDatabase__Connect`, `mysql_server_init__00825058`
 */
void mysql_server_init(void)

{
  (*(code *)PTR_mysql_server_init_008156a0)();
  return;
}

/* ======================================================================
 * alGetError  (Ghidra `alGetError` @ 00451050)
 * Signature: uint8_t alGetError(void)
 * Calls: (none)
 * Called by: `alGetError__00825060`, `audPlayCue`
 */
void alGetError(void)

{
  (*(code *)PTR_alGetError_008156a8)();
  return;
}

/* ======================================================================
 * SDL_GL_DeleteContext  (Ghidra `SDL_GL_DeleteContext` @ 00451070)
 * Signature: uint8_t SDL_GL_DeleteContext(void)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics__005608f0`, `SDL_GL_DeleteContext__00825070`
 */
void SDL_GL_DeleteContext(void)

{
  (*(code *)PTR_SDL_GL_DeleteContext_008156b8)();
  return;
}

/* ======================================================================
 * SteamAPI_Init  (Ghidra `SteamAPI_Init` @ 00451080)
 * Signature: uint8_t SteamAPI_Init(void)
 * Calls: (none)
 * Called by: `SteamAPI_Init__00825078`, `TEngine__TEngine`
 */
void SteamAPI_Init(void)

{
  (*(code *)PTR_SteamAPI_Init_008156c0)();
  return;
}

/* ======================================================================
 * SDL_GetWindowDisplayMode  (Ghidra `SDL_GetWindowDisplayMode` @ 004510b0)
 * Signature: uint8_t SDL_GetWindowDisplayMode(void)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`, `SDL_GetWindowDisplayMode__00825090`
 */
void SDL_GetWindowDisplayMode(void)

{
  (*(code *)PTR_SDL_GetWindowDisplayMode_008156d8)();
  return;
}

/* ======================================================================
 * mysql_close  (Ghidra `mysql_close` @ 004510d0)
 * Signature: uint8_t mysql_close(void)
 * Calls: (none)
 * Called by: `SQLDatabase__SQLDatabase__005b4540`, `mysql_close__008250a0`
 */
void mysql_close(void)

{
  (*(code *)PTR_mysql_close_008156e8)();
  return;
}

/* ======================================================================
 * mysql_fetch_lengths  (Ghidra `mysql_fetch_lengths` @ 004510f0)
 * Signature: uint8_t mysql_fetch_lengths(void)
 * Calls: (none)
 * Called by: `SQLResultSet__NextRow`, `mysql_fetch_lengths__008250b0`
 */
void mysql_fetch_lengths(void)

{
  (*(code *)PTR_mysql_fetch_lengths_008156f8)();
  return;
}

/* ======================================================================
 * SDL_EnableScreenSaver  (Ghidra `SDL_EnableScreenSaver` @ 00451150)
 * Signature: uint8_t SDL_EnableScreenSaver(void)
 * Calls: (none)
 * Called by: `SDL_EnableScreenSaver__008250e0`, `TWindow__TWindow__005b93e0`
 */
void SDL_EnableScreenSaver(void)

{
  (*(code *)PTR_SDL_EnableScreenSaver_00815728)();
  return;
}

/* ======================================================================
 * alSourceQueueBuffers  (Ghidra `alSourceQueueBuffers` @ 00451190)
 * Signature: uint8_t alSourceQueueBuffers(void)
 * Calls: (none)
 * Called by: `alSourceQueueBuffers__00825100`, `audPlayCue`, `audUpdateDevice`
 */
void alSourceQueueBuffers(void)

{
  (*(code *)PTR_alSourceQueueBuffers_00815748)();
  return;
}

/* ======================================================================
 * alGetSourcefv  (Ghidra `alGetSourcefv` @ 004511b0)
 * Signature: uint8_t alGetSourcefv(void)
 * Calls: (none)
 * Called by: `TAudio__Mute`, `alGetSourcefv__00825110`, `audMute`
 */
void alGetSourcefv(void)

{
  (*(code *)PTR_alGetSourcefv_00815758)();
  return;
}

/* ======================================================================
 * mysql_real_query  (Ghidra `mysql_real_query` @ 004511d0)
 * Signature: uint8_t mysql_real_query(void)
 * Calls: (none)
 * Called by: `SQLDatabaseQueryProcessor`, `SQLDatabase__ExecuteQuery`, `mysql_real_query__00825120`
 */
void mysql_real_query(void)

{
  (*(code *)PTR_mysql_real_query_00815768)();
  return;
}

/* ======================================================================
 * alcProcessContext  (Ghidra `alcProcessContext` @ 004511e0)
 * Signature: uint8_t alcProcessContext(void)
 * Calls: (none)
 * Called by: `alcProcessContext__00825128`, `audCreateDevice`
 */
void alcProcessContext(void)

{
  (*(code *)PTR_alcProcessContext_00815770)();
  return;
}

/* ======================================================================
 * alcGetContextsDevice  (Ghidra `alcGetContextsDevice` @ 00451200)
 * Signature: uint8_t alcGetContextsDevice(void)
 * Calls: (none)
 * Called by: `alcGetContextsDevice__00825138`, `audDestroyDevice`
 */
void alcGetContextsDevice(void)

{
  (*(code *)PTR_alcGetContextsDevice_00815780)();
  return;
}

/* ======================================================================
 * SDL_GL_CreateContext  (Ghidra `SDL_GL_CreateContext` @ 00451220)
 * Signature: uint8_t SDL_GL_CreateContext(void)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`, `SDL_GL_CreateContext__00825148`
 */
void SDL_GL_CreateContext(void)

{
  (*(code *)PTR_SDL_GL_CreateContext_00815790)();
  return;
}

/* ======================================================================
 * SDL_GL_SetSwapInterval  (Ghidra `SDL_GL_SetSwapInterval` @ 00451250)
 * Signature: uint8_t SDL_GL_SetSwapInterval(void)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`, `SDL_GL_SetSwapInterval__00825160`
 */
void SDL_GL_SetSwapInterval(void)

{
  (*(code *)PTR_SDL_GL_SetSwapInterval_008157a8)();
  return;
}

/* ======================================================================
 * SDL_CreateSystemCursor  (Ghidra `SDL_CreateSystemCursor` @ 00451270)
 * Signature: uint8_t SDL_CreateSystemCursor(void)
 * Calls: (none)
 * Called by: `SDL_CreateSystemCursor__00825170`, `TWindow__TWindow`
 */
void SDL_CreateSystemCursor(void)

{
  (*(code *)PTR_SDL_CreateSystemCursor_008157b8)();
  return;
}

/* ======================================================================
 * mysql_free_result  (Ghidra `mysql_free_result` @ 00451280)
 * Signature: uint8_t mysql_free_result(void)
 * Calls: (none)
 * Called by: `SQLDatabaseQueryProcessor`, `SQLQuery__ReleaseResults`, `SQLQuery__SQLQuery`, `SQLResultSet__SQLResultSet__005b3ec0`, `mysql_free_result__00825178`
 */
void mysql_free_result(void)

{
  (*(code *)PTR_mysql_free_result_008157c0)();
  return;
}

/* ======================================================================
 * SDL_GameControllerGetAttached  (Ghidra `SDL_GameControllerGetAttached` @ 00451290)
 * Signature: uint8_t SDL_GameControllerGetAttached(void)
 * Calls: (none)
 * Called by: `SDL_GameControllerGetAttached__00825180`, `UpdateJoysticks`, `iptUpdateDevices`
 */
void SDL_GameControllerGetAttached(void)

{
  (*(code *)PTR_SDL_GameControllerGetAttached_008157c8)();
  return;
}

/* ======================================================================
 * SDL_GameControllerGetAxis  (Ghidra `SDL_GameControllerGetAxis` @ 004512d0)
 * Signature: uint8_t SDL_GameControllerGetAxis(void)
 * Calls: (none)
 * Called by: `ConvertSDLJoystickStateToJoyState`, `SDL_GameControllerGetAxis__008251a0`
 */
void SDL_GameControllerGetAxis(void)

{
  (*(code *)PTR_SDL_GameControllerGetAxis_008157e8)();
  return;
}

/* ======================================================================
 * SteamFriends  (Ghidra `SteamFriends` @ 00451330)
 * Signature: uint8_t SteamFriends(void)
 * Calls: (none)
 * Called by: `EditorForm_HelpButtonPress`, `OnLeaderboardFoundReadFinished`, `SMBLevelPortal__UploadPortalLevel`, `SteamFriends__008251d0`
 */
void SteamFriends(void)

{
  (*(code *)PTR_SteamFriends_00815818)();
  return;
}

/* ======================================================================
 * SDL_GetCurrentDisplayMode  (Ghidra `SDL_GetCurrentDisplayMode` @ 00451380)
 * Signature: uint8_t SDL_GetCurrentDisplayMode(void)
 * Calls: (none)
 * Called by: `SDL_GetCurrentDisplayMode__008251f8`, `TEngine__TEngine`
 */
void SDL_GetCurrentDisplayMode(void)

{
  (*(code *)PTR_SDL_GetCurrentDisplayMode_00815840)();
  return;
}

/* ======================================================================
 * alcOpenDevice  (Ghidra `alcOpenDevice` @ 00451390)
 * Signature: uint8_t alcOpenDevice(void)
 * Calls: (none)
 * Called by: `alcOpenDevice__00825200`, `audCreateDevice`
 */
void alcOpenDevice(void)

{
  (*(code *)PTR_alcOpenDevice_00815848)();
  return;
}

/* ======================================================================
 * alSourcei  (Ghidra `alSourcei` @ 00451410)
 * Signature: uint8_t alSourcei(void)
 * Calls: (none)
 * Called by: `alSourcei__00825240`, `audDestroyInstance`, `audPlayCue`, `audStopCue`
 */
void alSourcei(void)

{
  (*(code *)PTR_alSourcei_00815888)();
  return;
}

/* ======================================================================
 * SDL_WasInit  (Ghidra `SDL_WasInit` @ 00451420)
 * Signature: uint8_t SDL_WasInit(void)
 * Calls: (none)
 * Called by: `SDL_WasInit__00825248`, `iptCreateDevices`
 */
void SDL_WasInit(void)

{
  (*(code *)PTR_SDL_WasInit_00815890)();
  return;
}

/* ======================================================================
 * SDL_PollEvent  (Ghidra `SDL_PollEvent` @ 00451430)
 * Signature: uint8_t SDL_PollEvent(void)
 * Calls: (none)
 * Called by: `RunSDLEventQueue`, `SDL_PollEvent__00825250`
 */
void SDL_PollEvent(void)

{
  (*(code *)PTR_SDL_PollEvent_00815898)();
  return;
}

/* ======================================================================
 * SDL_GetKeyboardFocus  (Ghidra `SDL_GetKeyboardFocus` @ 00451450)
 * Signature: uint8_t SDL_GetKeyboardFocus(void)
 * Calls: (none)
 * Called by: `SDL_GetKeyboardFocus__00825260`, `UpdateKeyboard`, `UpdateMouse`
 */
void SDL_GetKeyboardFocus(void)

{
  (*(code *)PTR_SDL_GetKeyboardFocus_008158a8)();
  return;
}

/* ======================================================================
 * alcGetCurrentContext  (Ghidra `alcGetCurrentContext` @ 00451480)
 * Signature: uint8_t alcGetCurrentContext(void)
 * Calls: (none)
 * Called by: `alcGetCurrentContext__00825278`, `audDestroyDevice`
 */
void alcGetCurrentContext(void)

{
  (*(code *)PTR_alcGetCurrentContext_008158c0)();
  return;
}

/* ======================================================================
 * SDL_NumJoysticks  (Ghidra `SDL_NumJoysticks` @ 004514a0)
 * Signature: uint8_t SDL_NumJoysticks(void)
 * Calls: (none)
 * Called by: `SDL_NumJoysticks__00825288`, `iptCreateDevices`
 */
void SDL_NumJoysticks(void)

{
  (*(code *)PTR_SDL_NumJoysticks_008158d0)();
  return;
}

/* ======================================================================
 * SDL_GetError  (Ghidra `SDL_GetError` @ 00451500)
 * Signature: uint8_t SDL_GetError(void)
 * Calls: (none)
 * Called by: `SDL_GetError__008252b8`, `TWindow__TWindow`, `main`
 */
void SDL_GetError(void)

{
  (*(code *)PTR_SDL_GetError_00815900)();
  return;
}

/* ======================================================================
 * SDL_ShowSimpleMessageBox  (Ghidra `SDL_ShowSimpleMessageBox` @ 00451540)
 * Signature: uint8_t SDL_ShowSimpleMessageBox(void)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`, `SDL_ShowSimpleMessageBox__008252d8`
 */
void SDL_ShowSimpleMessageBox(void)

{
  (*(code *)PTR_SDL_ShowSimpleMessageBox_00815920)();
  return;
}

/* ======================================================================
 * SDL_GetDisplayMode  (Ghidra `SDL_GetDisplayMode` @ 00451570)
 * Signature: uint8_t SDL_GetDisplayMode(void)
 * Calls: (none)
 * Called by: `CreateGraphicsSettingsForm`, `MakeValidResolution`, `SDL_GetDisplayMode__008252f0`, `SMBSettingsMenu__Initialize`
 */
void SDL_GetDisplayMode(void)

{
  (*(code *)PTR_SDL_GetDisplayMode_00815938)();
  return;
}

/* ======================================================================
 * mysql_real_connect  (Ghidra `mysql_real_connect` @ 00451580)
 * Signature: uint8_t mysql_real_connect(void)
 * Calls: (none)
 * Called by: `SQLDatabaseQueryProcessor`, `SQLDatabase__Connect`, `SQLDatabase__ExecuteQuery`, `SQLDatabase__Reconnect`, `mysql_real_connect__008252f8`
 */
void mysql_real_connect(void)

{
  (*(code *)PTR_mysql_real_connect_00815940)();
  return;
}

/* ======================================================================
 * alDeleteSources  (Ghidra `alDeleteSources` @ 004515c0)
 * Signature: uint8_t alDeleteSources(void)
 * Calls: (none)
 * Called by: `alDeleteSources__00825318`, `audDestroyCue`, `audDestroyDevice`, `audDestroyInstance`, `audStopCue`, `audUpdateDevice`
 */
void alDeleteSources(void)

{
  (*(code *)PTR_alDeleteSources_00815960)();
  return;
}

/* ======================================================================
 * SteamAPI_IsSteamRunning  (Ghidra `SteamAPI_IsSteamRunning` @ 004515d0)
 * Signature: uint8_t SteamAPI_IsSteamRunning(void)
 * Calls: (none)
 * Called by: `AwardAchievement`, `GSuperMeatBoy__Initialize__00516f60`, `OnLeaderboardFoundRead`, `OnLeaderboardFoundReadFinished`, `OnLeaderboardFoundWrite`, `OnUserStatsReceived`, `ReadLeaderboard`, `SteamAPI_IsSteamRunning__00825320`, `TEngine__TEngine`, `WriteEntryToLeaderboard`
 */
void SteamAPI_IsSteamRunning(void)

{
  (*(code *)PTR_SteamAPI_IsSteamRunning_00815968)();
  return;
}

/* ======================================================================
 * mysql_store_result  (Ghidra `mysql_store_result` @ 004515f0)
 * Signature: uint8_t mysql_store_result(void)
 * Calls: (none)
 * Called by: `SQLDatabaseQueryProcessor`, `SQLDatabase__ExecuteQuery`, `mysql_store_result__00825330`
 */
void mysql_store_result(void)

{
  (*(code *)PTR_mysql_store_result_00815978)();
  return;
}

/* ======================================================================
 * SDL_Init  (Ghidra `SDL_Init` @ 00451620)
 * Signature: uint8_t SDL_Init(void)
 * Calls: (none)
 * Called by: `SDL_Init__00825348`, `iptCreateDevices`, `main`
 */
void SDL_Init(void)

{
  (*(code *)PTR_SDL_Init_00815990)();
  return;
}

/* ======================================================================
 * SDL_getenv  (Ghidra `SDL_getenv` @ 00451630)
 * Signature: uint8_t SDL_getenv(void)
 * Calls: (none)
 * Called by: `SDL_getenv__00825350`, `TEngine__TEngine`
 */
void SDL_getenv(void)

{
  (*(code *)PTR_SDL_getenv_00815998)();
  return;
}

/* ======================================================================
 * mysql_select_db  (Ghidra `mysql_select_db` @ 00451640)
 * Signature: uint8_t mysql_select_db(void)
 * Calls: (none)
 * Called by: `SQLDatabaseQueryProcessor`, `SQLDatabase__ChooseDatabase`, `SQLDatabase__ExecuteQuery`, `SQLDatabase__Reconnect`, `mysql_select_db__00825358`
 */
void mysql_select_db(void)

{
  (*(code *)PTR_mysql_select_db_008159a0)();
  return;
}

/* ======================================================================
 * SteamAPI_RegisterCallback  (Ghidra `SteamAPI_RegisterCallback` @ 00451650)
 * Signature: uint8_t SteamAPI_RegisterCallback(void)
 * Calls: (none)
 * Called by: `Achievements__Achievements`, `SteamAPI_RegisterCallback__00825360`
 */
void SteamAPI_RegisterCallback(void)

{
  (*(code *)PTR_SteamAPI_RegisterCallback_008159a8)();
  return;
}

/* ======================================================================
 * SDL_GameControllerOpen  (Ghidra `SDL_GameControllerOpen` @ 00451660)
 * Signature: uint8_t SDL_GameControllerOpen(void)
 * Calls: (none)
 * Called by: `SDL_GameControllerOpen__00825368`, `iptCreateDevices`
 */
void SDL_GameControllerOpen(void)

{
  (*(code *)PTR_SDL_GameControllerOpen_008159b0)();
  return;
}

/* ======================================================================
 * alSourceUnqueueBuffers  (Ghidra `alSourceUnqueueBuffers` @ 00451690)
 * Signature: uint8_t alSourceUnqueueBuffers(void)
 * Calls: (none)
 * Called by: `alSourceUnqueueBuffers__00825380`, `audUpdateDevice`
 */
void alSourceUnqueueBuffers(void)

{
  (*(code *)PTR_alSourceUnqueueBuffers_008159c8)();
  return;
}

/* ======================================================================
 * alcDestroyContext  (Ghidra `alcDestroyContext` @ 004516e0)
 * Signature: uint8_t alcDestroyContext(void)
 * Calls: (none)
 * Called by: `alcDestroyContext__008253a8`, `audDestroyDevice`
 */
void alcDestroyContext(void)

{
  (*(code *)PTR_alcDestroyContext_008159f0)();
  return;
}

/* ======================================================================
 * SDL_GL_ExtensionSupported  (Ghidra `SDL_GL_ExtensionSupported` @ 004516f0)
 * Signature: uint8_t SDL_GL_ExtensionSupported(void)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`, `SDL_GL_ExtensionSupported__008253b0`
 */
void SDL_GL_ExtensionSupported(void)

{
  (*(code *)PTR_SDL_GL_ExtensionSupported_008159f8)();
  return;
}

/* ======================================================================
 * alSourcePlay  (Ghidra `alSourcePlay` @ 00451720)
 * Signature: uint8_t alSourcePlay(void)
 * Calls: (none)
 * Called by: `alSourcePlay__008253c8`, `audPlayCue`, `audUpdateDevice`
 */
void alSourcePlay(void)

{
  (*(code *)PTR_alSourcePlay_00815a10)();
  return;
}

/* ======================================================================
 * SDL_GameControllerGetButton  (Ghidra `SDL_GameControllerGetButton` @ 00451730)
 * Signature: uint8_t SDL_GameControllerGetButton(void)
 * Calls: (none)
 * Called by: `ConvertSDLJoystickStateToJoyState`, `SDL_GameControllerGetButton__008253d0`
 */
void SDL_GameControllerGetButton(void)

{
  (*(code *)PTR_SDL_GameControllerGetButton_00815a18)();
  return;
}

/* ======================================================================
 * SteamAPI_UnregisterCallResult  (Ghidra `SteamAPI_UnregisterCallResult` @ 00451770)
 * Signature: uint8_t SteamAPI_UnregisterCallResult(void)
 * Calls: (none)
 * Called by: `OnLeaderboardFoundRead`, `OnLeaderboardFoundWrite`, `ReadLeaderboard`, `SteamAPI_UnregisterCallResult__008253f0`, `SteamLeaderBoards__SteamLeaderBoards__005ba650`, `WriteEntryToLeaderboard`
 */
void SteamAPI_UnregisterCallResult(void)

{
  (*(code *)PTR_SteamAPI_UnregisterCallResult_00815a38)();
  return;
}

/* ======================================================================
 * SDL_GetTicks  (Ghidra `SDL_GetTicks` @ 00451780)
 * Signature: uint8_t SDL_GetTicks(void)
 * Calls: (none)
 * Called by: `SDL_GetTicks__008253f8`, `TGraphics__Present`, `gfxPresent`
 */
void SDL_GetTicks(void)

{
  (*(code *)PTR_SDL_GetTicks_00815a40)();
  return;
}

/* ======================================================================
 * SteamAPI_RegisterCallResult  (Ghidra `SteamAPI_RegisterCallResult` @ 00451790)
 * Signature: uint8_t SteamAPI_RegisterCallResult(void)
 * Calls: (none)
 * Called by: `OnLeaderboardFoundRead`, `OnLeaderboardFoundWrite`, `ReadLeaderboard`, `SteamAPI_RegisterCallResult__00825400`, `WriteEntryToLeaderboard`
 */
void SteamAPI_RegisterCallResult(void)

{
  (*(code *)PTR_SteamAPI_RegisterCallResult_00815a48)();
  return;
}

/* ======================================================================
 * SDL_GameControllerClose  (Ghidra `SDL_GameControllerClose` @ 004517d0)
 * Signature: uint8_t SDL_GameControllerClose(void)
 * Calls: (none)
 * Called by: `SDL_GameControllerClose__00825420`, `UpdateJoysticks`, `iptDestroyDevices`, `iptUpdateDevices`
 */
void SDL_GameControllerClose(void)

{
  (*(code *)PTR_SDL_GameControllerClose_00815a68)();
  return;
}

/* ======================================================================
 * SteamApps  (Ghidra `SteamApps` @ 004517e0)
 * Signature: uint8_t SteamApps(void)
 * Calls: (none)
 * Called by: `SteamApps__00825428`, `System_GetLanguage`
 */
void SteamApps(void)

{
  (*(code *)PTR_SteamApps_00815a70)();
  return;
}

/* ======================================================================
 * alcCreateContext  (Ghidra `alcCreateContext` @ 00451850)
 * Signature: uint8_t alcCreateContext(void)
 * Calls: (none)
 * Called by: `alcCreateContext__00825460`, `audCreateDevice`
 */
void alcCreateContext(void)

{
  (*(code *)PTR_alcCreateContext_00815aa8)();
  return;
}

/* ======================================================================
 * alBufferData  (Ghidra `alBufferData` @ 00451860)
 * Signature: uint8_t alBufferData(void)
 * Calls: (none)
 * Called by: `alBufferData__00825468`, `audCreateCue`, `audPlayCue`, `audUpdateDevice`
 */
void alBufferData(void)

{
  (*(code *)PTR_alBufferData_00815ab0)();
  return;
}

/* ======================================================================
 * SDL_GetScancodeFromKey  (Ghidra `SDL_GetScancodeFromKey` @ 00451870)
 * Signature: uint8_t SDL_GetScancodeFromKey(void)
 * Calls: (none)
 * Called by: `SDL_GetScancodeFromKey__00825470`, `UpdateKeyboard`
 */
void SDL_GetScancodeFromKey(void)

{
  (*(code *)PTR_SDL_GetScancodeFromKey_00815ab8)();
  return;
}

/* ======================================================================
 * SDL_SetWindowFullscreen  (Ghidra `SDL_SetWindowFullscreen` @ 00451880)
 * Signature: uint8_t SDL_SetWindowFullscreen(void)
 * Calls: (none)
 * Called by: `SDL_SetWindowFullscreen__00825478`, `gfxResetDevice`
 */
void SDL_SetWindowFullscreen(void)

{
  (*(code *)PTR_SDL_SetWindowFullscreen_00815ac0)();
  return;
}

/* ======================================================================
 * mysql_fetch_row  (Ghidra `mysql_fetch_row` @ 004518a0)
 * Signature: uint8_t mysql_fetch_row(void)
 * Calls: (none)
 * Called by: `SQLResultSet__NextRow`, `mysql_fetch_row__00825488`
 */
void mysql_fetch_row(void)

{
  (*(code *)PTR_mysql_fetch_row_00815ad0)();
  return;
}

/* ======================================================================
 * alGenBuffers  (Ghidra `alGenBuffers` @ 004518b0)
 * Signature: uint8_t alGenBuffers(void)
 * Calls: (none)
 * Called by: `OpenALCueBufferInfo__OpenALCueBufferInfo`, `alGenBuffers__00825490`, `audCreateCue`
 */
void alGenBuffers(void)

{
  (*(code *)PTR_alGenBuffers_00815ad8)();
  return;
}

/* ======================================================================
 * SDL_QuitSubSystem  (Ghidra `SDL_QuitSubSystem` @ 004518e0)
 * Signature: uint8_t SDL_QuitSubSystem(void)
 * Calls: (none)
 * Called by: `SDL_QuitSubSystem__008254b0`, `iptDestroyDevices`
 */
void SDL_QuitSubSystem(void)

{
  (*(code *)PTR_SDL_QuitSubSystem_00815af0)();
  return;
}

/* ======================================================================
 * SDL_HideWindow  (Ghidra `SDL_HideWindow` @ 004518f0)
 * Signature: uint8_t SDL_HideWindow(void)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`, `SDL_HideWindow__008254b8`
 */
void SDL_HideWindow(void)

{
  (*(code *)PTR_SDL_HideWindow_00815af8)();
  return;
}

/* ======================================================================
 * SDL_GetNumDisplayModes  (Ghidra `SDL_GetNumDisplayModes` @ 00451910)
 * Signature: uint8_t SDL_GetNumDisplayModes(void)
 * Calls: (none)
 * Called by: `CreateGraphicsSettingsForm`, `MakeValidResolution`, `SDL_GetNumDisplayModes__008254c8`, `SMBSettingsMenu__Initialize`
 */
void SDL_GetNumDisplayModes(void)

{
  (*(code *)PTR_SDL_GetNumDisplayModes_00815b08)();
  return;
}

/* ======================================================================
 * SDL_GameControllerUpdate  (Ghidra `SDL_GameControllerUpdate` @ 00451940)
 * Signature: uint8_t SDL_GameControllerUpdate(void)
 * Calls: (none)
 * Called by: `SDL_GameControllerUpdate__008254e0`, `UpdateJoysticks`, `iptUpdateDevices`
 */
void SDL_GameControllerUpdate(void)

{
  (*(code *)PTR_SDL_GameControllerUpdate_00815b20)();
  return;
}

/* ======================================================================
 * SDL_DisableScreenSaver  (Ghidra `SDL_DisableScreenSaver` @ 00451950)
 * Signature: uint8_t SDL_DisableScreenSaver(void)
 * Calls: (none)
 * Called by: `SDL_DisableScreenSaver__008254e8`, `TWindow__TWindow`
 */
void SDL_DisableScreenSaver(void)

{
  (*(code *)PTR_SDL_DisableScreenSaver_00815b28)();
  return;
}

/* ======================================================================
 * SDL_fabs  (Ghidra `SDL_fabs` @ 00451990)
 * Signature: uint8_t SDL_fabs(void)
 * Calls: (none)
 * Called by: `SDL_fabs__00825508`, `TGraphics__Present`, `gfxPresent`
 */
void SDL_fabs(void)

{
  (*(code *)PTR_SDL_fabs_00815b48)();
  return;
}

/* ======================================================================
 * alSourcef  (Ghidra `alSourcef` @ 004519f0)
 * Signature: uint8_t alSourcef(void)
 * Calls: (none)
 * Called by: `TAudio__Mute`, `TAudio__UnMute`, `alSourcef__00825538`, `audMute`, `audPlayCue`, `audSetVolume`, `audUnMute`
 */
void alSourcef(void)

{
  (*(code *)PTR_alSourcef_00815b78)();
  return;
}

/* ======================================================================
 * SteamUser  (Ghidra `SteamUser` @ 00451a30)
 * Signature: uint8_t SteamUser(void)
 * Calls: (none)
 * Called by: `AwardAchievement`, `EditorForm_ChapterUploadFormOpen`, `EditorForm_UploadFormOpen`, `GSuperMeatBoy__Initialize__00516f60`, `OnLeaderboardFoundRead`, `OnLeaderboardFoundReadFinished`, `OnLeaderboardFoundWrite`, `ReadLeaderboard`, `SMBLevelPortal__AddChapter`, `SMBLevelPortal__GetUserLibrary` (+5 more)
 */
void SteamUser(void)

{
  (*(code *)PTR_SteamUser_00815b98)();
  return;
}

/* ======================================================================
 * SDL_strcmp  (Ghidra `SDL_strcmp` @ 00451a40)
 * Signature: uint8_t SDL_strcmp(void)
 * Calls: (none)
 * Called by: `SDL_strcmp__00825560`, `TEngine__TEngine`
 */
void SDL_strcmp(void)

{
  (*(code *)PTR_SDL_strcmp_00815ba0)();
  return;
}

/* ======================================================================
 * SDL_GL_SwapWindow  (Ghidra `SDL_GL_SwapWindow` @ 00451ab0)
 * Signature: uint8_t SDL_GL_SwapWindow(void)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`, `SDL_GL_SwapWindow__00825598`, `TGraphics__Present`, `gfxPresent`, `gfxResetDevice`
 */
void SDL_GL_SwapWindow(void)

{
  (*(code *)PTR_SDL_GL_SwapWindow_00815bd8)();
  return;
}

/* ======================================================================
 * SDL_GetWindowPosition  (Ghidra `SDL_GetWindowPosition` @ 00451af0)
 * Signature: uint8_t SDL_GetWindowPosition(void)
 * Calls: (none)
 * Called by: `SDL_GetWindowPosition__008255b8`, `TWindow__GetWindowPosition`
 */
void SDL_GetWindowPosition(void)

{
  (*(code *)PTR_SDL_GetWindowPosition_00815bf8)();
  return;
}

/* ======================================================================
 * SDL_SetCursor  (Ghidra `SDL_SetCursor` @ 00451b00)
 * Signature: uint8_t SDL_SetCursor(void)
 * Calls: (none)
 * Called by: `SDL_SetCursor__008255c0`, `TWindow__TWindow`
 */
void SDL_SetCursor(void)

{
  (*(code *)PTR_SDL_SetCursor_00815c00)();
  return;
}

/* ======================================================================
 * SDL_ceil  (Ghidra `SDL_ceil` @ 00451b20)
 * Signature: uint8_t SDL_ceil(void)
 * Calls: (none)
 * Called by: `SDL_ceil__008255d0`, `TGraphics__Present`, `gfxPresent`
 */
void SDL_ceil(void)

{
  (*(code *)PTR_SDL_ceil_00815c10)();
  return;
}

/* ======================================================================
 * alcCloseDevice  (Ghidra `alcCloseDevice` @ 00451b70)
 * Signature: uint8_t alcCloseDevice(void)
 * Calls: (none)
 * Called by: `alcCloseDevice__008255f8`, `audCreateDevice`, `audDestroyDevice`
 */
void alcCloseDevice(void)

{
  (*(code *)PTR_alcCloseDevice_00815c38)();
  return;
}

/* ======================================================================
 * SteamAPI_RunCallbacks  (Ghidra `SteamAPI_RunCallbacks` @ 00451b90)
 * Signature: uint8_t SteamAPI_RunCallbacks(void)
 * Calls: (none)
 * Called by: `SteamAPI_RunCallbacks__00825608`, `TEngine__Update`
 */
void SteamAPI_RunCallbacks(void)

{
  (*(code *)PTR_SteamAPI_RunCallbacks_00815c48)();
  return;
}

/* ======================================================================
 * mysql_errno  (Ghidra `mysql_errno` @ 00451bd0)
 * Signature: uint8_t mysql_errno(void)
 * Calls: (none)
 * Called by: `SQLDatabaseQueryProcessor`, `SQLDatabase__ExecuteQuery`, `mysql_errno__00825628`
 */
void mysql_errno(void)

{
  (*(code *)PTR_mysql_errno_00815c68)();
  return;
}

/* ======================================================================
 * SDL_GL_GetProcAddress  (Ghidra `SDL_GL_GetProcAddress` @ 00451c10)
 * Signature: uint8_t SDL_GL_GetProcAddress(void)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`, `SDL_GL_GetProcAddress__00825648`
 */
void SDL_GL_GetProcAddress(void)

{
  (*(code *)PTR_SDL_GL_GetProcAddress_00815c88)();
  return;
}

/* ======================================================================
 * mysql_init  (Ghidra `mysql_init` @ 00451c40)
 * Signature: uint8_t mysql_init(void)
 * Calls: (none)
 * Called by: `SQLDatabaseQueryProcessor`, `SQLDatabase__Connect`, `SQLDatabase__ExecuteQuery`, `SQLDatabase__Reconnect`, `mysql_init__00825658`
 */
void mysql_init(void)

{
  (*(code *)PTR_mysql_init_00815ca0)();
  return;
}

/* ======================================================================
 * SDL_GetMouseState  (Ghidra `SDL_GetMouseState` @ 00451c60)
 * Signature: uint8_t SDL_GetMouseState(void)
 * Calls: (none)
 * Called by: `SDL_GetMouseState__00825668`, `UpdateMouse`
 */
void SDL_GetMouseState(void)

{
  (*(code *)PTR_SDL_GetMouseState_00815cb0)();
  return;
}

/* ======================================================================
 * SDL_GetDesktopDisplayMode  (Ghidra `SDL_GetDesktopDisplayMode` @ 00451c80)
 * Signature: uint8_t SDL_GetDesktopDisplayMode(void)
 * Calls: (none)
 * Called by: `MakeValidResolution`, `SDL_GetDesktopDisplayMode__00825678`, `SMBSettingsMenu__Initialize`, `TEngine__TEngine`, `TWindow__TWindow`
 */
void SDL_GetDesktopDisplayMode(void)

{
  (*(code *)PTR_SDL_GetDesktopDisplayMode_00815cc0)();
  return;
}

/* ======================================================================
 * SteamUtils  (Ghidra `SteamUtils` @ 00451ca0)
 * Signature: uint8_t SteamUtils(void)
 * Calls: (none)
 * Called by: `SteamUtils__00825688`, `TEngine__TEngine`
 */
void SteamUtils(void)

{
  (*(code *)PTR_SteamUtils_00815cd0)();
  return;
}

/* ======================================================================
 * alGetSourceiv  (Ghidra `alGetSourceiv` @ 00451ce0)
 * Signature: uint8_t alGetSourceiv(void)
 * Calls: (none)
 * Called by: `alGetSourceiv__008256a0`, `audUpdateDevice`
 */
void alGetSourceiv(void)

{
  (*(code *)PTR_alGetSourceiv_00815cf0)();
  return;
}

/* ======================================================================
 * SDL_SetWindowSize  (Ghidra `SDL_SetWindowSize` @ 00451d00)
 * Signature: uint8_t SDL_SetWindowSize(void)
 * Calls: (none)
 * Called by: `SDL_SetWindowSize__008256b0`, `gfxResetDevice`
 */
void SDL_SetWindowSize(void)

{
  (*(code *)PTR_SDL_SetWindowSize_00815d00)();
  return;
}

/* ======================================================================
 * SDL_GL_SetAttribute  (Ghidra `SDL_GL_SetAttribute` @ 00451d20)
 * Signature: uint8_t SDL_GL_SetAttribute(void)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`, `SDL_GL_SetAttribute__008256c0`
 */
void SDL_GL_SetAttribute(void)

{
  (*(code *)PTR_SDL_GL_SetAttribute_00815d10)();
  return;
}

/* ======================================================================
 * SDL_GL_GetDrawableSize  (Ghidra `SDL_GL_GetDrawableSize` @ 00451d60)
 * Signature: uint8_t SDL_GL_GetDrawableSize(void)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`, `OpenGLGraphics__PrepBackbuffer__0055e590`, `SDL_GL_GetDrawableSize__008256e0`, `TGraphics__Present`, `gfxPresent`, `gfxResetDevice`
 */
void SDL_GL_GetDrawableSize(void)

{
  (*(code *)PTR_SDL_GL_GetDrawableSize_00815d30)();
  return;
}

/* ======================================================================
 * alcSuspendContext  (Ghidra `alcSuspendContext` @ 00451d70)
 * Signature: uint8_t alcSuspendContext(void)
 * Calls: (none)
 * Called by: `alcSuspendContext__008256e8`, `audDestroyDevice`
 */
void alcSuspendContext(void)

{
  (*(code *)PTR_alcSuspendContext_00815d38)();
  return;
}

/* ======================================================================
 * SDL_IsGameController  (Ghidra `SDL_IsGameController` @ 00451d90)
 * Signature: uint8_t SDL_IsGameController(void)
 * Calls: (none)
 * Called by: `SDL_IsGameController__008256f8`, `iptCreateDevices`
 */
void SDL_IsGameController(void)

{
  (*(code *)PTR_SDL_IsGameController_00815d48)();
  return;
}

/* ======================================================================
 * SteamUserStats  (Ghidra `SteamUserStats` @ 00451e20)
 * Signature: uint8_t SteamUserStats(void)
 * Calls: (none)
 * Called by: `AwardAchievement`, `GSuperMeatBoy__Initialize__00516f60`, `OnLeaderboardFoundRead`, `OnLeaderboardFoundReadFinished`, `OnLeaderboardFoundWrite`, `OnUserStatsReceived`, `ReadLeaderboard`, `SteamUserStats__00825740`, `WriteEntryToLeaderboard`
 */
void SteamUserStats(void)

{
  (*(code *)PTR_SteamUserStats_00815d90)();
  return;
}

/* ======================================================================
 * SDL_GetBasePath  (Ghidra `SDL_GetBasePath` @ 00451e30)
 * Signature: uint8_t SDL_GetBasePath(void)
 * Calls: (none)
 * Called by: `SDL_GetBasePath__00825750`, `main`
 */
void SDL_GetBasePath(void)

{
  (*(code *)PTR_SDL_GetBasePath_00815d98)();
  return;
}

/* ======================================================================
 * alSourceStop  (Ghidra `alSourceStop` @ 00451e60)
 * Signature: uint8_t alSourceStop(void)
 * Calls: (none)
 * Called by: `alSourceStop__00825760`, `audDestroyInstance`, `audStopCue`, `audUpdateDevice`
 */
void alSourceStop(void)

{
  (*(code *)PTR_alSourceStop_00815db0)();
  return;
}

/* ======================================================================
 * mysql_insert_id  (Ghidra `mysql_insert_id` @ 00451e80)
 * Signature: uint8_t mysql_insert_id(void)
 * Calls: (none)
 * Called by: `SQLDatabase__GetLastAutoIncrementID`, `mysql_insert_id__00825770`
 */
void mysql_insert_id(void)

{
  (*(code *)PTR_mysql_insert_id_00815dc0)();
  return;
}

/* ======================================================================
 * SDL_ShowCursor  (Ghidra `SDL_ShowCursor` @ 00451eb0)
 * Signature: uint8_t SDL_ShowCursor(void)
 * Calls: (none)
 * Called by: `SDL_ShowCursor__00825788`, `TWindow__TWindow`
 */
void SDL_ShowCursor(void)

{
  (*(code *)PTR_SDL_ShowCursor_00815dd8)();
  return;
}

/* ======================================================================
 * SDL_GameControllerName  (Ghidra `SDL_GameControllerName` @ 00451ec0)
 * Signature: uint8_t SDL_GameControllerName(void)
 * Calls: (none)
 * Called by: `SDL_GameControllerName__00825790`, `iptCreateDevices`
 */
void SDL_GameControllerName(void)

{
  (*(code *)PTR_SDL_GameControllerName_00815de0)();
  return;
}

/* ======================================================================
 * SDL_GetKeyboardState  (Ghidra `SDL_GetKeyboardState` @ 00451ed0)
 * Signature: uint8_t SDL_GetKeyboardState(void)
 * Calls: (none)
 * Called by: `SDL_GetKeyboardState__00825798`, `UpdateKeyboard`
 */
void SDL_GetKeyboardState(void)

{
  (*(code *)PTR_SDL_GetKeyboardState_00815de8)();
  return;
}

/* ======================================================================
 * SteamLeaderBoards__SteamLeaderBoards  (Ghidra `SteamLeaderBoards` @ 005ba530)
 * Signature: uint8_t __thiscall SteamLeaderBoards(SteamLeaderBoards * this, tagSteamLeaderboardFunc arg1)
 * Class: SteamLeaderBoards
 * Calls: (none)
 * Called by: `ReadLeaderboard`, `WriteEntryToLeaderboard`
 */
/* SteamLeaderBoards__SteamLeaderBoards(tagSteamLeaderboardFunc) */

void __thiscall SteamLeaderBoards__SteamLeaderBoards(SteamLeaderBoards *this, uint32_t arg2)

{
  *(uint32_t *)this = arg2;
  *(uint64_t *)(this + 0x20) = 0;
  *(uint64_t *)(this + 0x40) = 0;
  this[0x50] = (SteamLeaderBoards)0x0;
  *(uint8_t ***)(this + 0x48) = &PTR_Run_005deaf0;
  *(uint64_t *)(this + 0x58) = 0;
  *(uint64_t *)(this + 0x60) = 0;
  *(uint64_t *)(this + 0x68) = 0;
  *(uint64_t *)(this + 0x70) = 0;
  *(uint32_t *)(this + 0x54) = 0x450;
  this[0x80] = (SteamLeaderBoards)0x0;
  *(uint8_t ***)(this + 0x78) = &PTR_Run_005deb30;
  *(uint64_t *)(this + 0x88) = 0;
  *(uint64_t *)(this + 0x90) = 0;
  *(uint64_t *)(this + 0x98) = 0;
  *(uint64_t *)(this + 0xa0) = 0;
  *(uint32_t *)(this + 0x84) = 0x451;
  this[0xb0] = (SteamLeaderBoards)0x0;
  *(uint8_t ***)(this + 0xa8) = &PTR_Run_005deb70;
  *(uint64_t *)(this + 0xb8) = 0;
  *(uint64_t *)(this + 0xc0) = 0;
  *(uint64_t *)(this + 200) = 0;
  *(uint64_t *)(this + 0xd0) = 0;
  *(uint32_t *)(this + 0xb4) = 0x452;
  this[0xe0] = (SteamLeaderBoards)0x0;
  *(uint8_t ***)(this + 0xd8) = &PTR_Run_005deaf0;
  *(uint64_t *)(this + 0xe8) = 0;
  *(uint64_t *)(this + 0xf0) = 0;
  *(uint64_t *)(this + 0xf8) = 0;
  *(uint64_t *)(this + 0x100) = 0;
  *(uint32_t *)(this + 0xe4) = 0x450;
  return;
}

/* ======================================================================
 * SteamLeaderBoards__SteamLeaderBoards__005ba650  (Ghidra `~SteamLeaderBoards` @ 005ba650)
 * Signature: uint8_t __thiscall ~SteamLeaderBoards(SteamLeaderBoards * this)
 * Class: SteamLeaderBoards
 * Calls: `SteamAPI_UnregisterCallResult`, `operator_delete`
 * Called by: (none)
 */
/* SteamLeaderBoards__SteamLeaderBoards__005ba650() */

void __thiscall SteamLeaderBoards__SteamLeaderBoards__005ba650(SteamLeaderBoards *this)

{
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(uint64_t *)(this + 0x20) = 0;
  if (*(void **)(this + 0x40) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x40));
  }
  *(uint64_t *)(this + 0x40) = 0;
  *(uint8_t ***)(this + 0xd8) = &PTR_Run_005deaf0;
  if (*(long *)(this + 0xe8) != 0) {
    /* try { // try from 005ba70f to 005ba713 has its CatchHandler @ 005ba744 */
    SteamAPI_UnregisterCallResult(this + 0xd8);
    *(uint64_t *)(this + 0xe8) = 0;
  }
  *(uint8_t ***)(this + 0xa8) = &PTR_Run_005deb70;
  if (*(long *)(this + 0xb8) != 0) {
    /* try { // try from 005ba72f to 005ba733 has its CatchHandler @ 005ba7e2 */
    SteamAPI_UnregisterCallResult(this + 0xa8);
    *(uint64_t *)(this + 0xb8) = 0;
  }
  *(uint8_t ***)(this + 0x78) = &PTR_Run_005deb30;
  if (*(long *)(this + 0x88) != 0) {
    /* try { // try from 005ba6ca to 005ba6ce has its CatchHandler @ 005ba7e4 */
    SteamAPI_UnregisterCallResult(this + 0x78);
    *(uint64_t *)(this + 0x88) = 0;
  }
  *(uint8_t ***)(this + 0x48) = &PTR_Run_005deaf0;
  if (*(long *)(this + 0x58) != 0) {
    SteamAPI_UnregisterCallResult(this + 0x48);
    *(uint64_t *)(this + 0x58) = 0;
  }
  return;
}
