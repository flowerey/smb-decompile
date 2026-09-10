# Editor, input, files, UI, portal backend

## SMBEditor — modal level editor (`SMBEditor.c`, 34 methods)

One mode per asset class, switched by `SwitchEditorMode`:
`SetTo{Tile,Camera,Paralax,SetPiece,Animation,Obstacle,Lighting,Animal}Mode`.
`Update`/`Render`/`RenderSetPieceInfo`/`SetMouseOverText` drive the canvas;
`EditSetPieces`, `AddToSelectedPieces`, `ResizeLevel`/`SetLevelSize`;
`NewLevel/LoadLevel/SaveLevel/QuickSaveLevel` plus crash-safe
`InitiateTmpSave/OpenTmpFile/DeleteTmpSave`; publishing via
`PromptLevelUploadForm` → `SMBLevelPortal` (SQL-backed, see below).
`TileLevel::PlaceTile/PlaceSetPiece/RemoveSetPiece` are its paint engine.

## Input — callbacks + cheat codes

- `TInput.c`: `Update` pump, `JoystickPluggedIn` events,
  `Register/UnregisterCode` + `HasCodeBeenEntered` (**cheat-code
  registry**: `tagCheatCode` structs matched against the input stream),
  `AllowCallbacks` master switch.
- `TKeyboard.c` / `Joystick.c` / `TMouse.c`: `AddKey/Button/POV/AnyKey`
  callbacks with `Backup/RestoreCallbacks` (menus swap bindings in and
  out — cf. the GSMBMenu Show pattern), `Lock/UnLock`, exclusive state.
  Menus, gameplay and replays all consume input through these queues, and
  the packed per-frame record they produce is what the replay system
  stores (see meatboy_charactor.md).

## Files, config, registry

- `FilePackage.c`: pak archives (`GetFileFromPackage`, `Read`) — game
  data ships packed; `File.c` is the raw handle layer.
- `PropertiesFile.c`: the text config format both physics tunables and
  levels use — `ReadBlock`/`ParseData`, `FindPropertyBlock/Variable`,
  `GetNumPropertyBlocksByName`, `operator[]` lookup. (This is what the
  giant `MeatBoyCharactor` ctor parses.)
- `GameRegistry.c`: process-wide key-value store (`GetVariable`, `Flush`
  to disk) — engine tunables in, `TEngine` reads them at startup.
- `ResourcePool.c` / `BaseResource.c` (`Release` refcounts), `TMemory.c`
  (aligned alloc — cf. the `malloc`+align idiom in `ExplodeString`).

## UI widgets (`UIForm.c` + family)

`UIForm` (container: `Add/RemoveFormElement`, `CalculateFormArea`,
`Activate/DeActivate`, `Update/Render/Close`) with `UIButton`/`UILabel`/
`UITextField`/`UIDropDown`/`UIScrollBar`/`UIFrame`/`UIMessageBox`,
each with a `*Style` struct. Menus compose screens from these (the
`GSMBMenu` Show pattern resets their Flash clips and wires input).

## Portal backend (`SQLDatabase.c` + `SMBLevelPortal*.c`)

`SQLDatabase`: **queued, reconnecting** MySQL client (`AddQueuedQuery`,
`ExecuteQuery`, `PopQueuedQuery`, `Reconnect`, `ChooseDatabase`,
`GetLastAutoIncrementID`, `WaitForQuery`) — level sharing never blocks
the frame thread. `SMBLevelPortal(Interface).c`: upload/download flows
with SQL string building (see the `INSERT INTO smb_editor_leveldata`
construction), `UploadPortalLevel`, chapter/chapter-info queries;
`EditorFormChapterUpload.c` is the in-editor frontend.
