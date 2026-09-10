# TEngine — frame loop and subsystem startup

`src/game/classes/TEngine.c` (1199 lines, 12 methods). Built once in `main`
(`TEngine::TEngine` + `TEngine::Run`); owns window, graphics, audio, input,
resource pools, file packages.

## The loop (the whole game in 8 lines)

```c
TEngine__Run:  do {
                 if (!RunSDLEventQueue()) return;  // SDL quit => exit
                 EngineRun(self);
               } while (!quit_flag);               // self+0x30 + 8
```

`EngineRun` @ 005842a0, per frame: device-reset check → timestamp bookkeeping
(`+0x14/0x18/0x20`, `dwActualFrameElapsedTime`, forced `0x10` under reset) →
`Update(self)` (game logic) → unless the load thread runs: acquire device,
`BeginScene`, `RenderLayers__Render` (if `AllowRender`), global `Render`,
margins, `EndScene`/`Present`, frame-time accounting, `ReleaseDevice`,
`__frameCounter++`.

`Update` @ 00583f70 / `Render` @ 005841f0 dispatch into the loaded
game/editor (`LoadGame/UnloadGame`, `LoadEditor/UnloadEditor` split the two
worlds). `ResetTimer`, `WaitForStartupLogos` (logo gate before `main`
proceeds).

## Startup (ctor @ 005828e0)

Registry (`GameRegistry`, flushed), `TWindow`, `TGraphics` (+ graphics
settings, aspect, pixel stages), `TAudio`, `TInput`, scene-object manager,
resource pools/creators, screen margins, file packages (`FilePackage`),
`ExplodeStringData`. Tunables come from `GameRegistry__GetVariable` (12
reads) — engine config lives in the registry, same as character physics
living in data files (see base-class doc).

## Where to go next

- Rendering: `TGraphics` (1961 lines), `OpenGLGraphics` (GL proc-loader),
  `RenderLayers`, `TileLevelLightMap`.
- Audio: `TAudio` (1751 lines).
- Input: `TInput`, `TKeyboard`, `Joystick`, `TMouse`.
