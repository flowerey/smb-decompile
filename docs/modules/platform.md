# Module: platform (99 functions, 1 files)

SDL/OpenAL/MySQL/Steam/GL import thunks (one-line GOT jumps).

## Files

- `src/platform/shims.c` (99)

## Hubs (most called-by)

| function | addr | callers |
|---|---|---|
| `SteamAPI_IsSteamRunning` | `004515d0` | 10 |
| `SteamUser` | `00451a30` | 10 |
| `SteamUserStats` | `00451e20` | 9 |
| `alSourcef` | `004519f0` | 7 |
| `alDeleteBuffers` | `00450fb0` | 6 |
| `alDeleteSources` | `004515c0` | 6 |
| `SteamAPI_UnregisterCallResult` | `00451770` | 6 |
| `SDL_GL_GetDrawableSize` | `00451d60` | 6 |
| `mysql_free_result` | `00451280` | 5 |
| `mysql_real_connect` | `00451580` | 5 |
| `mysql_select_db` | `00451640` | 5 |
| `SteamAPI_RegisterCallResult` | `00451790` | 5 |

## Most connected callers

| function | addr | calls |
|---|---|---|
| `SteamLeaderBoards__SteamLeaderBoards__005ba650` | `005ba650` | 2 |
| `SDL_DestroyWindow` | `00450f90` | 0 |
| `alDeleteBuffers` | `00450fb0` | 0 |
| `alcMakeContextCurrent` | `00450fc0` | 0 |
| `SDL_GL_LoadLibrary` | `00450fd0` | 0 |
| `SDL_CreateWindow` | `00451000` | 0 |
| `alGenSources` | `00451010` | 0 |
| `SDL_Quit` | `00451030` | 0 |
| `mysql_server_init` | `00451040` | 0 |
| `alGetError` | `00451050` | 0 |
| `SDL_GL_DeleteContext` | `00451070` | 0 |
| `SteamAPI_Init` | `00451080` | 0 |
