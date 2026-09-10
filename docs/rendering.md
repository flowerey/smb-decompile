# Rendering — a Direct3D-shaped API running on OpenGL

`TGraphics.c` (45 methods) talks like Direct3D 9 — acquire/release/reset
the device, render targets, begin/end scene, present, pixel shader
stages, sampler states, fog — but underneath it calls OpenGL. The bridge
is the vendored **Mojoshader** library: game content is authored against
D3D shader bytecode, and at runtime the `emit_D3D_*` translators parse it
while `emit_GLSL_*` / `emit_ARB1_*` re-emit it for the actual GPU (that's
what the whole `src/vendor/shader.c` file is for). Matrix push/pop,
texture and vertex-buffer binding, aspect-ratio forcing, and viewport
setup round out the abstraction; `OpenGLGraphics.c` is just the function
loader (one `SDL_GL_GetProcAddress` per entry point, with a hard error
naming whichever symbol is missing).

## What a frame looks like (from `TEngine__EngineRun`)

Acquire device → begin scene → render all layers (if rendering is
allowed) → global render → screen margins → end scene → present →
release device → bump the frame counter. If the graphics device was
lost, the frame is skipped after a reset, with frame timing pinned to
16ms until it recovers.

## Layers and baked light

The compositor is deliberately dumb: `RenderLayers` is a list with
render/remove/insert operations, and the game, menus, cutscene manager,
and editor insert and remove themselves (this is half of the menu Show
pattern). `TileLevelLightMap` bakes 2D shadows out of level geometry
(generate faces → shadow map → static shadows → lightmap), creates and
destroys dynamic lights, and tears everything down on level switch
(called from the game-mode teardown). `Camera` (ortho projection,
screen/world conversion, per-frame update) follows whatever each
boss/level reports as the focus.

## Technical appendix

Display settings live in `GraphicsSettings.c`; letterboxing in
`GScreenMargins.c`. 28+ raw `gl*` call sites in `TGraphics.c`.

*See also: `tengine.md` (frame order), `flash_anim.md` (content), `world_tiles.md` (lightmaps).*
