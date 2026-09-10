# Class model — the real C++ design, recovered from the binary

The binary was never stripped, so alongside the code it keeps the
compiler's own description of the class design: 131 type-information
records (21 base classes, 101 single-inheritance, 9 multiple-inheritance)
and 133 virtual-function tables. By decoding those structures directly
out of the file — and cross-checking 2,724 of the 4,894 tree functions whose symbol table
entries still carry their real `Class::method(arguments)` signatures —
this folder reconstructs the actual object model:

- **`recovered/*.h`** (131 headers): real base classes, virtual methods
  in vtable order with real signatures, non-virtual members from the
  symbol table, factory sizes, and audited field layouts where known.
- **`docs/misfiled.md`**: 114 methods Ghidra filed in the wrong file
  (it missed the implicit `this` parameter on small accessors and
  forwarders, scattering them into generic engine files). Now indexed
  under their true classes.

## How the decoding works

A typeinfo record's first pointer says which flavor it is (offset past
the ABI tables): plain class, single-inheritance (base pointer right
after the name), or multiple-inheritance (base count, then base
pointers). Each vtable starts with bookkeeping followed by the function
pointers in declaration order — resolved through the symbol table and
demangled. Return types come from Ghidra's analysis by address
(`/* ? */` where unrecovered); local variable names and comments are
gone for good (no debug info survived — only symbols and type records).

The headline result: `SceneObject → SceneObject2D → MeatBoyCharactor →
{all 25 characters}`, plus gems like `GSuperMeatBoy : RenderLayerObject,
Game` and `Sprite : RenderLayerObject, SceneObject2D` (multiple
inheritance). AlienHominid's 30 vtable slots independently confirm the
call slots observed in decompiled bodies (`+0x50` Update, `+0x68`
Initialize, `+0x88` SpecialPress, `+0xb0` WallJump gate).

Nothing here is compiled — it is a reading aid, and it says so on every
page.
## Byte-level method (for reproducers)

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
