# Flash animation system — how every character moves

All 2D animation (characters, menus, bosses, particles' sprites) plays
through this vector-animation runtime, loaded from `.am` files
(`/Animations/ah.am`, `meatboyanim.am`, …). Three layers:

## Library (`FlashAnimationLibrary.c`)

Loaded once per character set (`MeatBoyCharactor` ctor builds one from the
`.am` path). Serves named assets: `GetMovieClip` ("shoot", "bullet",
"bulletbreak", "meatpoof", "float"… — the names behind every ability doc),
`GetTextField`, symbol/texture access (`GetSymbolTexture`,
`GetLibraryEntry`), clip index/name mapping, `Enable/DisableFlags`
(visibility/solo bits, used by `RenderClones` to spotlight one clone),
`IsDotIndex/GetDotIndex` (frame markers).

## Instances (`FlashLibraryInstance.c`)

Playhead objects bound to clips: `GotoAndPlay/GotoAndStop`, `IsPlaying`
(the predicate behind every "anim finished" transition, e.g. AlienHominid's
`specialActive` watchdog and shot state 1→2), `Reset`, `Render`
(vtab `+0x10`, fed via clip slots `+0x30` x / `+0x34` y / `+0x58` frame —
see alien_hominid.md), bounds queries (`GetInstanceBounds`,
`IsBoundsTouchingInstance`).

## Content (`FlashMovieClip`, `FlashSymbol`, `FlashTextField`,
`FlashEditableTextField`, `FlashLibraryEntry/Instance`, `FlashTimeline`,
`FlashLayer`, `FlashSoundLibrary`, `AnimationManager`)

Timelines, layers, keyframes, sound triggers; `AnimationManager`
(`PauseAnimations`) freezes the world for pause/mode switches.
`GSMBCutSceneManager` sequences clips for intros/outros/boss cinematics
(see cutscene doc when written — entry: `PlayCutScene`, `CancelCutScene`).

*See also: `alien_hominid.md` (clip slots in practice), `rendering.md` (draw path).*
