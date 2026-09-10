# Module: runtime (201 functions, 1 files)

CRT entry, PLT-adjacent wrappers and startup glue.

## Files

- `src/runtime/startup.c` (201)

## Hubs (most called-by)

| function | addr | callers |
|---|---|---|
| `GSuperMeatBoy__getChar` | `00514c40` | 10 |
| `TileLevel__getLevelLayer` | `0058f5b0` | 10 |
| `UILabel__setText` | `005a5350` | 10 |
| `MeatBoyCharactor__getRenderPos` | `0047e0c0` | 6 |
| `UILabel__setAlign` | `005a5360` | 6 |
| `TWindow__getAspectRatio` | `005b9460` | 6 |
| `UIFormElement__setParent` | `005a1d30` | 4 |
| `SceneObject2D__getTransformationMatrix` | `0059b270` | 3 |
| `TileLevelLightMap__getNumLights` | `0046fcd0` | 2 |
| `SMBEditor__getCurrLight` | `004ab830` | 2 |
| `SMBEditor__getCurrAnimal` | `004b5700` | 2 |
| `UIForm__setEdgePadding` | `005a4110` | 2 |

## Most connected callers

| function | addr | calls |
|---|---|---|
| `main` | `00453b40` | 10 |
| `GLOBAL_sub_I_UserLoginCheck` | `00455cf0` | 10 |
| `GLOBAL_sub_I_SMBMenu` | `00456f60` | 10 |
| `GLOBAL_sub_I_pEscapeMusic` | `00452be0` | 5 |
| `GLOBAL_sub_I_AnimationCallbackSection` | `0045c3c0` | 5 |
| `GLOBAL_sub_I_SMBChapterData` | `00455680` | 4 |
| `GLOBAL_sub_I_SMB_GLOBAL_INVINCIBLE` | `00458480` | 4 |
| `GLOBAL_sub_I_Audio` | `0045c610` | 4 |
| `GLOBAL_sub_I_Plane` | `0045c8b0` | 4 |
| `GLOBAL_sub_I_GFXResetParams` | `0045d760` | 4 |
| `RenderLayer__RenderLayer` | `0045e760` | 4 |
| `handle_pp_ifdef` | `005398c0` | 4 |
