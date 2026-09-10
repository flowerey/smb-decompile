# Editor, input, files, UI, and the level-sharing backend

## The level editor is eight editors in one

`SMBEditor.c` (34 methods) is modal: tiles, camera, parallax, set
pieces, animations, obstacles, lighting, and animals each get a mode
with its own tools, switched by `SwitchEditorMode`. Around the canvas
sits project management — new/load/save/quick-save, crash-safe
temporary saves, level resizing — and publishing, which hands off to an
upload form backed by the level-sharing database below. Painting itself
runs through the tile grid's place/remove calls (see the world doc).

## Input is callbacks plus a cheat-code registry

The input pump (`TInput`) tracks controllers being plugged in, gates all
callbacks behind one master switch, and maintains a registry of cheat
codes (`tagCheatCode` structs matched against the button stream, with
register/unregister and "has this code been entered?" queries).
Keyboards, controllers, and mice each offer per-button/key callbacks
with save/restore, so menus can swap bindings in and out — that
swap is half of every menu's Show pattern (see the menu doc). The packed
per-frame input these queues produce is exactly what the replay system
records.

## Files, config, and the settings registry

- **Packed data** (`FilePackage` + raw `File` handles): game data ships
  in archives, read through package queries.
- **Text configs** (`PropertiesFile`): the block/variable format behind
  both physics tuning and levels — this is what the giant character
  constructor parses to give each character its feel.
- **Settings registry** (`GameRegistry`): a process-wide key-value store
  flushed to disk; the engine reads a dozen tunables from it at startup.
- **Resources** (`ResourcePool`/`BaseResource` with refcounted release;
  `TMemory` aligned allocation).

## UI widgets and the level-sharing backend

Menus are composed from a widget family — forms (containers with
add/remove, area calculation, activate/deactivate), buttons, labels,
text fields, dropdowns, scrollbars, frames, message boxes, each with a
style struct. Behind the portal (level-sharing) UI sits `SQLDatabase`: a
**queued, auto-reconnecting** MySQL client, so sharing a level never
blocks the frame thread, with upload/download flows that build their SQL
by hand (you can read the literal `INSERT INTO smb_editor_leveldata`
construction in the portal code).

*See also: `gsmb_menu.md` (menu wiring), `world_tiles.md` (paint engine), `meatboy_charactor.md` (tunable loading).*
