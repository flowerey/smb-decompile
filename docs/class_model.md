# Class model — recovered from RTTI + vtables + symtab

The binary keeps full Itanium RTTI (131 typeinfos: 21 roots, 101 single,
9 multiple inheritance) and 133 vtables, and is not stripped (2,724 of
4,894 tree functions carry real `Class::method(args)` symbols).
`recovered/*.h` (131 headers) declares every RTTI class: real bases,
vtable-ordered virtuals with real signatures, non-virtuals from the
symtab, factory sizes, and audited fields where known. NOT compiled.

## How it was read

- Typeinfo kind by vtable pointer (`+16` past the ABI tables: single / si / vmi);
  si base at +16, vmi count at +20, base pointers from +24.
- Vtable at `_ZTV`: `[off_to_top, rtti, fns…]`, entries resolved via symtab
  and demangled (e.g. AlienHominid slot `+0x50` = `Update()`, `+0x68` =
  `MeatBoyCharactor::Initialize()`, `+0x88` = `SpecialPress(…)`).
- Return types are Ghidra's (by address); `/* ? */` where unrecovered.

## Inheritance forest (21 roots)

### EditorForm
  - EditorForm
    - EditorFormNewLevel
    - EditorFormCharacter
    - EditorFormChapterUpload

### RenderLayer
  - RenderLayer
    - LightLayer
    - AnimalLayer
    - ResolutionLayer
    - LevelRenderLayer
      - TileLevelLayer
    - RenderSetupLayer
    - GSMBCutSceneManager
    - SMBEditorRenderLayer
    - GMeatHUD
    - GSMBMenu
    - BossLayer
    - LastLayer

### SceneObject
  - SceneObject
    - SceneObject2D
      - MeatBoyCharactor
        - BandageGirl
        - Machinarium
        - MeatBoy4Bit
        - MeatBoy8Bit
        - MrMinecraft
        - AlienHominid
        - MeatBoy4Color
        - MeatboyEnding
        - SprintMeatBoy
        - CommanderVideo
        - DefaultMeatBoy
        - Tim
        - Jill
        - Ogmo
        - Naija
        - Runman
        - TheKid
        - VVVVVV
        - Brownie
        - DrFetus
        - GooBall
        - TofuBoy
        - HeadCrab
        - FlyWrench
        - MeatNinja
        - PotatoBoy
      - Sprite
      - SMBAnimal
    - SceneObject3D
      - ReimplmentThisSprite
        - Cursor3D

### TilePalette
  - TilePalette
    - SMBPalette

### UserProfile
  - UserProfile
    - UnixUserProfile

### BaseResource
  - BaseResource
    - SMBPalette
    - IndexBuffer
    - VertexBuffer
    - VertexStream
    - TextEmitterFont
    - VertexDeclaration
    - Model
    - Shader
      - PixelShader
      - VertexShader
    - Texture

### EditorButton
  - EditorButton
    - EditorTextField

### RemoteFolder
  - RemoteFolder

### SMBPopupMenu
  - SMBPopupMenu
    - SMBCharSwitch
    - SMBCreditMenu
    - SMBUpsellMenu
    - SMBControlsMenu
    - SMBHowToPlayMenu
    - SMBSelectionMenu
      - SMBSettingsMenu
      - SMBReplayManager
      - SMBLeaderBoardMenu
      - SMBInternetChapterSel
      - SMBLevelPortalInterface
    - SMBStatisticsMenu
    - SMBMoveOn

### CCallbackBase
  - CCallbackBase
    - CCallResult<SteamLeaderBoards, LeaderboardFindResult_t>
    - CCallResult<SteamLeaderBoards, LeaderboardScoreUploaded_t>
    - CCallResult<SteamLeaderBoards, LeaderboardScoresDownloaded_t>
    - CCallback<Achievements, UserStatsReceived_t, false>

### UIFormElement
  - UIFormElement
    - UIDropDown
    - UIScrollBar
    - UITextField
    - UIFrame
    - UILabel
    - UIButton

### AudioEffectBase
  - AudioEffectBase
    - AudioEffectFade

### ParticleEmitter
  - ParticleEmitter
    - QuakeEmitter
    - SmokeEmitter
    - SparkEmitter
    - RibbonEmitter

### RenderableObject
  - RenderableObject
    - ReimplmentThisSprite
      - Cursor3D
    - Model

### FlashLibraryEntry
  - FlashLibraryEntry
    - FlashSymbol
    - FlashMovieClip
      - FlashEditableTextField
    - FlashTextField

### RenderLayerObject
  - RenderLayerObject
    - BloodyTiles
    - FontEmitter
    - GSuperMeatBoy
    - TileLevelSetPiece
    - FlashLibraryInstance
    - Sprite
    - UIForm
      - UIMessageBox
    - SMBBoss
      - ForestBoss
      - FactoryBoss
      - RaptureBoss
      - HospitalBoss
      - HellBoss
      - FinalBoss

### TommunismEngineError
  - TommunismEngineError

### Game
  - Game
    - GSuperMeatBoy

### TweenBase<ColorTemplate<float> >
  - TweenBase<ColorTemplate<float> >
    - Tweening::Basic<ColorTemplate<float> >

### TweenBase<FPUVector>
  - TweenBase<FPUVector>
    - Tweening::Basic<FPUVector>

### TweenBase<float>
  - TweenBase<float>
    - Tweening::Basic<float>

## Multiple inheritance (all 9)

- `SMBPalette` : `BaseResource`, `TilePalette`
- `CCallResult<SteamLeaderBoards, LeaderboardFindResult_t>` : `CCallbackBase`
- `CCallResult<SteamLeaderBoards, LeaderboardScoreUploaded_t>` : `CCallbackBase`
- `CCallResult<SteamLeaderBoards, LeaderboardScoresDownloaded_t>` : `CCallbackBase`
- `GSuperMeatBoy` : `RenderLayerObject`, `Game`
- `ReimplmentThisSprite` : `SceneObject3D`, `RenderableObject`
- `Model` : `BaseResource`, `RenderableObject`
- `Sprite` : `RenderLayerObject`, `SceneObject2D`
- `CCallback<Achievements, UserStatsReceived_t, false>` : `CCallbackBase`

## Misfiled methods (114)

Ghidra missed the implicit `this` on ~114 small methods (accessors,
press-forwards, predicates), filing them into `core_*`/`startup.c`/`shader.c`.
Full list: `docs/misfiled.md`. Largest groups: SMBPalette (6), FlashTextField (5), UnixUserProfile (5), MeatBoyCharactor (5), GSMBMenu (5), PixelShader (4), VertexShader (4), Shader (4).

*See also: `alien_hominid.md` (vtable walkthrough), `meatboy_charactor.md` (subclass contract), `characters.md` (roster).*
