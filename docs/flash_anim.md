# Flash animation — how everything on screen moves

Nearly all 2D animation — characters, menus, bosses, particle sprites —
plays through a vector-animation runtime loaded from `.am` files (such as
`/Animations/ah.am` or `meatboyanim.am`). It has three layers:

## 1. The library: named animations on demand

One library object is loaded per character set and serves assets **by
name**: `GetMovieClip("shoot")`, `("bullet")`, `("meatpoof")`,
`("float")`… — these exact names are the animation sets behind every
ability doc in this folder. It also serves text fields and symbol
textures, maps between clip names and indexes, and toggles visibility
flags (the clone renderer uses these to spotlight one ghost at a time).

## 2. Instances: playheads with transport controls

A clip becomes visible through an instance object: go to a frame and
play, go to a frame and stop, ask "are you still playing?", reset,
render. Two facts about instances explain half the character code:

- "Is the animation finished?" (`IsPlaying`) is the predicate behind
  every animation-gated transition — AlienHominid's special flag clears
  when the shoot clip ends; spent shots retire when the break clip ends.
- Rendering a clip means pinning its x/y/frame slots and advancing one
  frame — the `+0x30/+0x34/+0x58` idiom repeated across every Render
  function.

## 3. Content: timelines, layers, sounds

`FlashMovieClip`, symbols, text fields (editable ones too), library
entries, timelines, layers, and a sound library. `AnimationManager`
freezes the world for pause and mode switches, and the cutscene manager
sequences clips for intros, outros, and boss cinematics.

*See also: `alien_hominid.md` (clip slots in practice), `rendering.md` (draw path).*
