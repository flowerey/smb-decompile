# Rendering — TGraphics, layers, lightmaps

## TGraphics (`TGraphics.c`, 45 methods): D3D-shaped API on an OpenGL backend

The interface apes Direct3D9 (`Acquire/Release/ResetDevice`, render
targets, `BeginScene/EndScene/Present`, pixel stages, sampler states, fog,
`Draw`), but the implementation calls `gl*` (28+ sites) with shaders
cross-compiled at runtime by vendored **MOJOSHADER**
(`MOJOSHADER_glCreateContext/BindProgram/BestProfile`): content authored
against D3D bytecode (`emit_D3D_*`, `parse_*`) is translated to GLSL/ARB1
(`emit_GLSL_*`, `emit_ARB1_*`) — see `src/vendor/shader.c`. Matrix stack
(`Push/PopMatrix`, `SetMatrix/GetMatrix`, `RecalculatePushCacheMatrix`),
texture/sampler/vertex-declaration binding, `ForceAspectRatio`,
`AutoSetViewport`, `UnbindAll`. `OpenGLGraphics.c` is the thin proc-loader
(`SDL_GL_GetProcAddress` per entry point, hard error naming the missing
symbol). `GraphicsSettings.c` owns tunables; `GScreenMargins.c` letterbox.

Per-frame order (from `TEngine__EngineRun`): acquire → begin →
`RenderLayers__Render` (if `AllowRender`) → global `Render` → margins →
end/present → release; `__frameCounter++`, frame-time accounting with a
forced `0x10` under device reset.

## Layers and light

- `RenderLayers.c`: just `Render` + `RemoveAllLayers` (+ insert/remove
  used everywhere) — the compositor is a layer list; menus, game, cutscene
  manager and editor insert/remove themselves (see gsmb_menu.md).
- `TileLevelLightMap.c`: `GenerateFacesFromLevel`, `GenerateShadowMap` /
  `GenerateStaticShadows` / `GenerateLightMap`, `Create/DestroyLight`,
  `RegenerateLights`, `DestroyLightsAndMaps` (called on level teardown in
  `SwitchGameMode`). Baked 2D shadows from level geometry.
- `Camera.c` (10) + `GetCameraFocus` overrides per boss/level: what the
  viewport follows.

*See also: `tengine.md` (frame order), `flash_anim.md` (content), `world_tiles.md` (lightmaps).*
