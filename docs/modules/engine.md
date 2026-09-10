# Module: engine (927 functions, 12 files)

Tommunism-engine core: containers, files, threads, UI, audio/video plumbing.

## Files

- `src/engine/core_00.c` (78)
- `src/engine/core_01.c` (78)
- `src/engine/core_02.c` (78)
- `src/engine/core_03.c` (78)
- `src/engine/core_04.c` (78)
- `src/engine/core_05.c` (78)
- `src/engine/core_06.c` (78)
- `src/engine/core_07.c` (78)
- `src/engine/core_08.c` (78)
- `src/engine/core_09.c` (78)
- `src/engine/core_10.c` (78)
- `src/engine/core_11.c` (69)

## Hubs (most called-by)

| function | addr | callers |
|---|---|---|
| `AddEditorLayerTween` | `004a2be0` | 10 |
| `Apply2DPhysics` | `00595a10` | 10 |
| `CloseThread` | `005b8a10` | 10 |
| `DisableLoadingRenderThread` | `005845b0` | 10 |
| `CreateMessage` | `005b9500` | 10 |
| `FreeBridge` | `00519830` | 10 |
| `GetLocalizedText` | `005b6c60` | 10 |
| `FormatResourcePath` | `005b7610` | 10 |
| `IsFlashFormActive` | `004a62d0` | 10 |
| `GetRandomINT` | `005bd150` | 10 |
| `MallocBridge` | `00519800` | 10 |
| `RegisterAudioPosition` | `00573600` | 10 |

## Most connected callers

| function | addr | calls |
|---|---|---|
| `AdjustSetPieceLayering` | `004aa6e0` | 10 |
| `CreateGraphicsSettingsForm` | `00589ba0` | 10 |
| `EditorForm_LoadFormOk` | `004af600` | 10 |
| `EditorForm_UploadFormOk` | `004b52a0` | 10 |
| `LoadDeferredCharactor` | `00512f20` | 10 |
| `GraphicsBenchmark` | `00582340` | 10 |
| `PasteSelectedTiles` | `004a8830` | 10 |
| `PasteSelectedPieces` | `004a8cd0` | 10 |
| `RemoveSetPieces` | `004a9170` | 10 |
| `PlaceSetPiece` | `004b1a80` | 10 |
| `RenderSetPiece` | `004dd820` | 10 |
| `Render__00571c10` | `00571c10` | 10 |
