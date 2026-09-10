/* src/game/classes/TEngine.c — 12 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "TEngine.h"

/* ======================================================================
 * TEngine__TEngine  (Ghidra `TEngine` @ 005828e0)
 * Signature: uint8_t __thiscall TEngine(TEngine * self, EngineParams * arg1)
 * Class: TEngine
 * Calls: `DestroyCGR`, `ExplodeString`, `ExplodeStringData__ExplodeStringData`, `FilePackage__FilePackage__005b5c90`, `GScreenMargins__GScreenMargins`, `GameRegistry__Flush`, `GameRegistry__GameRegistry__005b6430`, `GameRegistry__GetVariable`, `GraphicsBenchmark`, `GraphicsSettings__SetupGraphicsSettings` (+43 more)
 * Called by: `main`
 */
/* WARNING: Removing unreachable block (ram,0x005838b8) */
/* WARNING: Removing unreachable block (ram,0x005839e6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TEngine__TEngine(EngineParams const*) */

void __thiscall TEngine__TEngine(TEngine *self, EngineParams *arg1)

{
  allocator *paVar1;
  int *piVar2;
  ushort uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  char cVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  uint32_t uVar21;
  time_t tVar22;
  GameRegistry *pGVar23;
  TWindow *pTVar24;
  ResourcePool *pRVar25;
  TGraphics *pTVar26;
  TAudio *this_00;
  TInput *this_01;
  TSceneObjectManager *this_02;
  GScreenMargins *this_03;
  ulong uVar27;
  long *plVar28;
  FilePackage *pFVar29;
  long lVar30;
  uint uVar31;
  WindowSetupProps *pWVar32;
  bool bVar33;
  byte bVar34;
  float fVar35;
  uint32_t local_180;
  uint local_178;
  float local_13c;
  ushort local_138;
  ushort local_136;
  uint local_134;
  uint32_t local_130;
  uint local_12c;
  uint64_t local_128;
  uint64_t local_120;
  uint64_t local_118;
  uint64_t local_110;
  uint32_t local_108;
  uint8_t local_f8[4];
  int local_f4;
  int local_f0;
  uint32_t local_d8;
  uint32_t uStack_d4;
  ushort local_d0;
  uint local_b8[2];
  long local_b0;
  GameRegistryEntry *local_a8[2];
  GameRegistryEntry *local_98[2];
  GameRegistryEntry *local_88[2];
  string local_78[16];
  char *local_68[2];
  GameRegistryEntry *local_58;
  GameRegistryEntry *local_50;
  GameRegistryEntry *local_48;
  allocator local_3c;
  allocator local_3b[11];

  bVar34 = 0;
  *(uint32_t *)self = 0x3f800000;
  uVar21 = fOneFrameTimeStep;
  *(uint32_t *)(self + 4) = 0;
  *(uint32_t *)(self + 8) = 0;
  *(uint32_t *)(self + 0xc) = 0;
  *(uint32_t *)(self + 0x10) = 0;
  *(uint32_t *)(self + 0x24) = uVar21;
  *(uint64_t *)(self + 0x30) = 0;
  *(uint32_t *)(self + 0x38) = 0;
  tVar22 = time((time_t *)0x0);
  srand((uint)tVar22);
  tVar22 = time((time_t *)0x0);
  srandom((uint)tVar22);
  strLargeString = operator_new__(0x1000);
  strLargeStringW = operator_new__(0x4000);
  Engine = self;
  *(uint32_t *)(self + 0x2c) = 1;
  local_b8[0] = 0;
  local_b0 = 0;
  /* try { // try from 005829ad to 005829b1 has its CatchHandler @ 00583949 */
  ExplodeString(0x20, *(uint64_t *)arg1, local_b8);
  if (local_b8[0] == 0) {
    /* try { // try from 00582b05 to 00582b09 has its CatchHandler @ 00583949 */
    std__string_string((string *)&local_d8, *(char **)arg1, &local_3c);
    /* try { // try from 00582b12 to 00582b2b has its CatchHandler @ 00583952 */
    iVar19 = std__string_compare((char *)&local_d8);
    if (iVar19 == 0) {
      local_180 = 0;
      bVar18 = false;
      bVar8 = false;
      bVar9 = false;
      bVar10 = false;
      goto LAB_0058358a;
    }
    iVar19 = std__string_compare((char *)&local_d8);
    if (iVar19 == 0) {
      local_180 = 0;
      bVar18 = false;
      bVar8 = false;
      bVar9 = false;
      bVar10 = false;
      bVar5 = false;
      bVar11 = false;
      bVar12 = false;
      bVar13 = false;
      bVar7 = 0;
      goto LAB_00582b7a;
    }
    /* try { // try from 0058375e to 00583762 has its CatchHandler @ 00583952 */
    iVar19 = std__string_compare((char *)&local_d8);
    if (iVar19 == 0) {
      SystemCaps._4_4_ = 1;
    LAB_00583775:
      local_180 = 0;
      bVar18 = true;
      bVar8 = false;
      bVar9 = false;
      bVar10 = false;
    LAB_0058358a:
      bVar11 = false;
      bVar12 = false;
      bVar5 = true;
      bVar13 = false;
      bVar7 = 0;
    } else {
      /* try { // try from 00583822 to 00583826 has its CatchHandler @ 00583952 */
      iVar19 = std__string_compare((char *)&local_d8);
      if (iVar19 == 0) {
        SystemCaps._4_4_ = 2;
        goto LAB_00583775;
      }
      /* try { // try from 0058387e to 00583882 has its CatchHandler @ 00583952 */
      iVar19 = std__string_compare((char *)&local_d8);
      if (iVar19 == 0) {
        SystemCaps._4_4_ = 4;
        goto LAB_00583775;
      }
      /* try { // try from 005839a8 to 005839fd has its CatchHandler @ 00583952 */
      bVar18 = std__operator_eq((string *)&local_d8, "-ultralowdetail");
      if (bVar18) {
        SystemCaps._4_4_ = 8;
        bVar18 = true;
      LAB_005839c9:
        local_180 = 0;
        bVar9 = false;
        goto LAB_005839d9;
      }
      bVar18 = std__operator_eq((string *)&local_d8, "-fullscreen");
      if (!bVar18) {
        /* try { // try from 00583aa5 to 00583aa9 has its CatchHandler @ 00583952 */
        bVar18 = std__operator_eq((string *)&local_d8, "-windowed");
        if (bVar18) {
          local_180 = 0;
          bVar18 = false;
          bVar8 = false;
          bVar9 = false;
          bVar10 = false;
          bVar5 = true;
          bVar11 = false;
          bVar12 = false;
          bVar13 = true;
          bVar7 = 0;
          goto LAB_00582b7a;
        }
        /* try { // try from 00583b27 to 00583b2b has its CatchHandler @ 00583952 */
        bVar18 = std__operator_eq((string *)&local_d8, "-640x480");
        if (bVar18) {
          local_180 = 0;
          bVar18 = false;
          bVar8 = false;
          bVar9 = false;
          bVar10 = false;
          bVar5 = true;
          bVar11 = false;
          bVar12 = true;
          bVar13 = false;
          bVar7 = 0;
          goto LAB_00582b7a;
        }
        /* try { // try from 00583ba4 to 00583ba8 has its CatchHandler @ 00583952 */
        bVar18 = std__operator_eq((string *)&local_d8, "-800x600");
        if (bVar18) {
          local_180 = 0;
          bVar18 = false;
          bVar8 = false;
          bVar9 = false;
          bVar10 = false;
          bVar5 = true;
          bVar11 = true;
          bVar12 = false;
          bVar13 = false;
          bVar7 = 0;
          goto LAB_00582b7a;
        }
        /* try { // try from 00583c23 to 00583c27 has its CatchHandler @ 00583952 */
        bVar18 = std__operator_eq((string *)&local_d8, "-1024x768");
        if (bVar18) {
          local_180 = 0;
          bVar18 = false;
          bVar8 = false;
          bVar9 = false;
          bVar10 = true;
        } else {
          /* try { // try from 00583d25 to 00583dd9 has its CatchHandler @ 00583952 */
          bVar18 = std__operator_eq((string *)&local_d8, "-1280x720");
          if (bVar18) {
            local_180 = 0;
            bVar18 = false;
            bVar9 = true;
          } else {
            bVar18 = std__operator_eq((string *)&local_d8, "-1920x1080");
            if (bVar18) {
              local_180 = 0;
              bVar18 = false;
              bVar8 = true;
              bVar9 = false;
              bVar10 = false;
              goto LAB_0058358a;
            }
            bVar18 = std__operator_eq((string *)&local_d8, "-devmode");
            if (bVar18) {
              local_180 = 1;
              bVar18 = false;
              bVar9 = true;
            } else {
              bVar18 = std__operator_eq((string *)&local_d8, "-ignorefragcache");
              if (!bVar18) {
                bVar18 = false;
                goto LAB_005839c9;
              }
              bIgnoreFragmentCache = 1;
              local_180 = 0;
              bVar18 = false;
              bVar9 = false;
            }
          }
        LAB_005839d9:
          bVar8 = false;
          bVar10 = false;
        }
        goto LAB_0058358a;
      }
      local_180 = 0;
      bVar18 = false;
      bVar8 = false;
      bVar9 = false;
      bVar10 = false;
      bVar5 = true;
      bVar11 = false;
      bVar12 = false;
      bVar13 = false;
      bVar7 = 1;
    }
  LAB_00582b7a:
    paVar1 = (allocator *)(CONCAT44(uStack_d4, local_d8) + -0x18);
    if (paVar1 == (allocator *)&std__string_Rep_S_empty_rep_storage) {
      bVar4 = true;
    } else {
      LOCK();
      piVar2 = (int *)(CONCAT44(uStack_d4, local_d8) + -8);
      iVar19 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      bVar4 = true;
      if (iVar19 < 1) {
        std__string_Rep_M_destroy(paVar1);
      }
    }
  } else {
    uVar31 = 0;
    local_180 = 0;
    bVar18 = false;
    bVar8 = false;
    bVar9 = false;
    bVar5 = true;
    bVar10 = false;
    bVar11 = false;
    bVar4 = true;
    bVar12 = false;
    bVar13 = false;
    bVar7 = 0;
    do {
      /* try { // try from 00582a76 to 00582a7a has its CatchHandler @ 00583949 */
      std__string_string((string *)&local_d8, *(char **)(local_b0 + (ulong)uVar31 * 8), local_3b);
      /* try { // try from 00582a83 to 00582acc has its CatchHandler @ 0058395f */
      iVar19 = std__string_compare((char *)&local_d8);
      if (iVar19 == 0) {
        bVar4 = false;
      } else {
        /* try { // try from 00582a28 to 00582a2c has its CatchHandler @ 0058395f */
        iVar19 = std__string_compare((char *)&local_d8);
        if (iVar19 == 0) {
          bVar5 = false;
        } else {
          iVar19 = std__string_compare((char *)&local_d8);
          if (iVar19 == 0) {
            SystemCaps._4_4_ = 1;
            bVar18 = true;
          } else {
            iVar19 = std__string_compare((char *)&local_d8);
            if (iVar19 == 0) {
              SystemCaps._4_4_ = 2;
              bVar18 = true;
            } else {
              /* try { // try from 00583458 to 0058345c has its CatchHandler @ 0058395f */
              iVar19 = std__string_compare((char *)&local_d8);
              if (iVar19 == 0) {
                SystemCaps._4_4_ = 4;
                bVar18 = true;
              } else {
                /* try { // try from 005836c1 to 005836c5 has its CatchHandler @ 0058395f */
                iVar19 = std__string_compare((char *)&local_d8);
                if (iVar19 == 0) {
                  SystemCaps._4_4_ = 8;
                  bVar18 = true;
                } else {
                  /* try { // try from 005837a8 to 005837ac has its CatchHandler @ 0058395f */
                  iVar19 = std__string_compare((char *)&local_d8);
                  if (iVar19 == 0) {
                    bVar7 = 1;
                  } else {
                    /* try { // try from 00583842 to 00583846 has its CatchHandler @ 0058395f */
                    iVar19 = std__string_compare((char *)&local_d8);
                    if (iVar19 == 0) {
                      bVar13 = true;
                    } else {
                      /* try { // try from 005838a2 to 005838d2 has its CatchHandler @ 0058395f */
                      iVar19 = std__string_compare((char *)&local_d8);
                      if (iVar19 == 0) {
                        bVar12 = true;
                      } else {
                        bVar17 = std__operator_eq((string *)&local_d8, "-800x600");
                        if (bVar17) {
                          bVar11 = true;
                        } else {
                          /* try { // try from 0058390e to 00583912 has its CatchHandler @ 0058395f */
                          bVar17 = std__operator_eq((string *)&local_d8, "-1024x768");
                          if (bVar17) {
                            bVar10 = true;
                          } else {
                            /* try { // try from 00583a7d to 00583a81 has its CatchHandler @ 0058395f */
                            bVar17 = std__operator_eq((string *)&local_d8, "-1280x720");
                            if (bVar17) {
                            LAB_00583a86:
                              bVar9 = true;
                            } else {
                              /* try { // try from 00583b09 to 00583b0d has its CatchHandler @ 0058395f */
                              bVar17 = std__operator_eq((string *)&local_d8, "-1920x1080");
                              if (bVar17) {
                                bVar8 = true;
                              } else {
                                /* try { // try from 00583b86 to 00583b8a has its CatchHandler @ 0058395f */
                                bVar17 = std__operator_eq((string *)&local_d8, "-devmode");
                                if (bVar17) {
                                  local_180 = 1;
                                  goto LAB_00583a86;
                                }
                                /* try { // try from 00583c03 to 00583c07 has its CatchHandler @ 0058395f */
                                bVar17 = std__operator_eq((string *)&local_d8, "-ignorefragcache");
                                if (bVar17) {
                                  bIgnoreFragmentCache = 1;
                                } else {
                                  /* try { // try from 00583c6a to 00583c6e has its CatchHandler @ 0058395f */
                                  std__string_substr((ulong)local_78, (ulong)&local_d8);
                                  /* try { // try from 00583c7c to 00583c80 has its CatchHandler @ 00583d08 */
                                  bVar17 = std__operator_eq(local_78, "-mojoshaderprofile=");
                                  std__string_string(local_78);
                                  if (bVar17) {
                                    /* try { // try from 00583cb4 to 00583cb8 has its CatchHandler @ 0058395f */
                                    std__string_substr((ulong)local_68, (ulong)&local_d8);
                                    if (GMojoShaderProfile != (char *)0x0) {
                                      operator_delete__(GMojoShaderProfile);
                                    }
                                    /* try { // try from 00583cda to 00583cde has its CatchHandler @ 00583d4e */
                                    GMojoShaderProfile =
                                        operator_new__(*(long *)(local_68[0] + -0x18) + 1);
                                    strcpy(GMojoShaderProfile, local_68[0]);
                                    std__string_string((string *)local_68);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      paVar1 = (allocator *)(CONCAT44(uStack_d4, local_d8) + -0x18);
      if (paVar1 != (allocator *)&std__string_Rep_S_empty_rep_storage) {
        LOCK();
        piVar2 = (int *)(CONCAT44(uStack_d4, local_d8) + -8);
        iVar19 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar19 < 1) {
          std__string_Rep_M_destroy(paVar1);
        }
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 < local_b8[0]);
  }
  *(uint32_t *)(self + 0x28) = *(uint32_t *)(arg1 + 0x10);
  /* try { // try from 00582ba6 to 00582bdb has its CatchHandler @ 00583949 */
  System_Startup();
  lVar30 = 6;
  SystemCaps._0_4_ = 0;
  pWVar32 = (WindowSetupProps *)&local_138;
  while (true) {
    if (lVar30 == 0)
      break;
    lVar30 = lVar30 + -1;
    *(uint64_t *)pWVar32 = 0;
    pWVar32 = pWVar32 + (ulong)bVar34 * -0x10 + 8;
  }
  local_108 = local_180;
  pGVar23 = operator_new(0x20);
  /* try { // try from 00582be6 to 00582bea has its CatchHandler @ 0058393a */
  GameRegistry__GameRegistry__005b6430(pGVar23, 0);
  local_58 = (GameRegistryEntry *)0x0;
  local_a8[0] = (GameRegistryEntry *)0x0;
  EngineRegistry = pGVar23;
  /* try { // try from 00582c21 to 00582e69 has its CatchHandler @ 00583949 */
  iVar19 = GameRegistry__GetVariable(pGVar23, "winwidth", &local_58);
  iVar20 = GameRegistry__GetVariable(EngineRegistry, "winheight", local_a8);
  bVar33 = iVar20 == 0;
  bVar14 = bVar33 || iVar19 == 0;
  SDL_GetCurrentDisplayMode(0, local_f8);
  local_138 = 0x280;
  local_136 = 0x1e0;
  bVar17 =
      (float)((uint)(DAT_005c4894 /* R:1.7777777910232544f */ - (float)local_f4 / (float)local_f0) &
              DAT_005be880 /* R:u32=2147483647 */) <=
      (float)((uint)(DAT_005d547c /* R:1.3333333730697632f */ - (float)local_f4 / (float)local_f0) &
              DAT_005be880 /* R:u32=2147483647 */);
  local_178 = (uint)bVar17;
  local_128 = 0x654d207265707553;
  local_120 = 0x796f42207461;
  local_118 = 0;
  local_110 = 0;
  if (*(int *)(arg1 + 8) == 1) {
    local_130 = 1;
  }
  local_12c = (uint)(*(int *)(arg1 + 8) == 1);
  if (!bVar5) {
    if (((((bVar11 || bVar12) || bVar10) || bVar9) || bVar8) || !bVar33 && iVar19 != 0) {
      GameRegistry__GetVariable(EngineRegistry, "winwidth", &local_50);
      pGVar23 = EngineRegistry;
      *(uint32_t *)(local_58 + 8) = 1;
      local_138 = (ushort) * (uint32_t *)(local_50 + 0x10);
      GameRegistry__GetVariable(pGVar23, "winheight", &local_50);
      *(uint32_t *)(local_a8[0] + 8) = 1;
      local_136 = (ushort) * (uint32_t *)(local_50 + 0x10);
      if (bVar10) {
        local_138 = 0x400;
        local_136 = 0x300;
      } else {
        if (!bVar11)
          goto LAB_00582d5f;
        local_138 = 800;
        local_136 = 600;
      }
    } else {
      local_138 = 800;
      local_136 = 600;
      local_134 = 0;
    LAB_00582d5f:
      if (bVar12) {
        local_138 = 0x280;
        local_136 = 0x1e0;
      } else if (bVar9) {
        local_138 = 0x500;
        local_136 = 0x2d0;
      } else if (bVar8) {
        local_138 = 0x780;
        local_136 = 0x438;
      }
    }
    if ((bVar13) || (bVar7 != 0)) {
      local_134 = (uint)bVar7;
    }
  }
  lVar30 = SDL_getenv("SteamTenfoot");
  if ((lVar30 == 0) || (iVar20 = SDL_strcmp(lVar30, "1"), iVar20 != 0)) {
    bVar6 = false;
  } else {
    /* try { // try from 00583305 to 005833a7 has its CatchHandler @ 00583949 */
    iVar20 = SDL_GetDesktopDisplayMode(0, &local_d8);
    if (iVar20 != -1) {
      local_138 = (uint16_t)uStack_d4;
      local_136 = local_d0;
    }
    local_134 = 1;
    bVar6 = true;
    bVar5 = false;
  }
  pTVar24 = operator_new(0x50);
  /* try { // try from 00582e73 to 00582e77 has its CatchHandler @ 00583938 */
  TWindow__TWindow(pTVar24, (WindowSetupProps *)&local_138);
  /* try { // try from 00582e7d to 00582e81 has its CatchHandler @ 00583949 */
  pRVar25 = operator_new(0x78);
  /* try { // try from 00582e88 to 00582e8c has its CatchHandler @ 0058394e */
  ResourcePool__ResourcePool(pRVar25);
  /* try { // try from 00582e8d to 00582ea8 has its CatchHandler @ 00583949 */
  SteamAPI_Init();
  cVar16 = SteamAPI_IsSteamRunning();
  if (cVar16 != '\0') {
    /* try { // try from 0058349f to 005834d1 has its CatchHandler @ 00583949 */
    plVar28 = (long *)SteamUser();
    cVar16 = (**(code **)(*plVar28 + 8))(plVar28);
    if (cVar16 != '\0') {
      plVar28 = (long *)SteamUtils();
      (**(code **)(*plVar28 + 0x48))(plVar28);
    }
  }
  pTVar26 = operator_new(0xab0);
  /* try { // try from 00582eaf to 00582eb3 has its CatchHandler @ 005838e4 */
  TGraphics__TGraphics(pTVar26);
  /* try { // try from 00582eb4 to 00582f01 has its CatchHandler @ 00583949 */
  Loader__InitializeLoader();
  TResourceCreator__AddResourceCreationFunction((TResourceCreator *)ResourceCreator, InitializeCGR,
                                                (void *)0x0);
  InitializeCGR(0);
  TGraphics__ResetPixelStages(Graphics);
  TGraphics__DeleteMasterPixelStage(Graphics);
  if (bVar4) {
    pFVar29 = operator_new(0x40);
    /* try { // try from 005834dd to 005834e1 has its CatchHandler @ 00583a54 */
    FilePackage__FilePackage__005b5c90(pFVar29, "gamedata.dat");
    GameFilePackage = pFVar29;
    /* try { // try from 005834ee to 005834f2 has its CatchHandler @ 00583949 */
    pFVar29 = operator_new(0x40);
    /* try { // try from 005834fe to 00583502 has its CatchHandler @ 00583a59 */
    FilePackage__FilePackage__005b5c90(pFVar29, "gameaudio.dat");
    GameAudioPackage = pFVar29;
  }
  InitializeUserAlert();
  this_00 = operator_new(0xb8);
  /* try { // try from 00582f08 to 00582f0c has its CatchHandler @ 00583904 */
  TAudio__TAudio__0057b5e0(this_00);
  local_13c = 0.0;
  if (bVar5) {
    /* try { // try from 0058362f to 005836a0 has its CatchHandler @ 00583949 */
    local_13c = (float)GraphicsBenchmark();
    DestroyCGR();
    pRVar25 = Resources;
    if (Resources != (ResourcePool *)0x0) {
      ResourcePool__ResourcePool__0057d0b0(Resources);
      operator_delete(pRVar25);
    }
    pTVar26 = Graphics;
    Resources = (ResourcePool *)0x0;
    if (Graphics != (TGraphics *)0x0) {
      TGraphics__TGraphics__00588560(Graphics);
      operator_delete(pTVar26);
    }
    pTVar24 = Window;
    Graphics = (TGraphics *)0x0;
    if (Window != (TWindow *)0x0) {
      TWindow__TWindow__005b93e0(Window);
      operator_delete(pTVar24);
    }
    Window = (TWindow *)0x0;
  }
  bVar4 = false;
  if (!bVar18) {
    bVar4 = bVar18;
    if (local_13c <= _DAT_005dc000 /* R:125.0f */) {
      if (DAT_005c1400 /* R:100.0f */ < local_13c) {
        SystemCaps._4_4_ = 4;
      } else if (local_13c <= DAT_005be5e4 /* R:75.0f */) {
        SystemCaps._4_4_ = 1;
        bVar4 = local_13c < DAT_005c13fc /* R:20.0f */;
      } else {
        SystemCaps._4_4_ = 2;
      }
    } else {
      SystemCaps._4_4_ = 8;
    }
  }
  if (!bVar18 && !bVar5) {
    SystemCaps._4_4_ = 4;
  }
  /* try { // try from 00582f6a to 005830de has its CatchHandler @ 00583949 */
  iVar20 = GameRegistry__GetVariable(EngineRegistry, "widescreen", local_98);
  if (iVar20 == 1) {
    bVar14 = (bVar33 || iVar19 == 0) || (*(int *)(local_98[0] + 0x10) == 1) != bVar17;
  }
  *(uint32_t *)(local_98[0] + 8) = 1;
  *(uint *)(local_98[0] + 0x10) = local_178;
  if (bVar14) {
    if ((SystemCaps._4_4_ == 8) || (SystemCaps._4_4_ == 4)) {
      if (local_178 == 1) {
        local_138 = 0x355;
        local_136 = 0x1e0;
      } else {
        local_138 = 0x280;
        local_136 = 0x1e0;
      }
    } else if (SystemCaps._4_4_ == 2) {
      if (local_178 == 1) {
        local_138 = 0x500;
        local_136 = 0x2d0;
      } else {
        local_138 = 0x400;
        local_136 = 0x300;
      }
    } else if (local_178 == 1) {
      if (bVar4) {
        local_138 = 0x780;
        local_136 = 0x438;
      } else {
        local_138 = 0x690;
        local_136 = 0x41a;
      }
    } else if (bVar4) {
      local_138 = 0x780;
      local_136 = 0x5a0;
    } else {
      local_138 = 0x640;
      local_136 = 0x4b0;
    }
  } else {
    local_138 = (ushort) * (uint32_t *)(local_58 + 0x10);
    local_136 = (ushort) * (uint32_t *)(local_a8[0] + 0x10);
  }
  MakeValidResolution(&local_138, &local_136);
  GameRegistry__GetVariable(EngineRegistry, "winwidth", &local_58);
  *(uint32_t *)(local_58 + 8) = 1;
  *(uint *)(local_58 + 0x10) = (uint)local_138;
  GameRegistry__GetVariable(EngineRegistry, "winheight", local_a8);
  *(uint32_t *)(local_a8[0] + 8) = 1;
  *(uint *)(local_a8[0] + 0x10) = (uint)local_136;
  if (bVar10) {
    local_138 = 0x400;
    local_136 = 0x300;
  } else if (bVar11) {
    local_138 = 800;
    local_136 = 600;
  } else if (bVar12) {
    local_138 = 0x280;
    local_136 = 0x1e0;
  } else if (bVar9) {
    local_138 = 0x500;
    local_136 = 0x2d0;
  } else if (bVar8) {
    local_138 = 0x780;
    local_136 = 0x438;
  }
  iVar19 = GameRegistry__GetVariable(EngineRegistry, "fullscreen", local_88);
  if (iVar19 == 0) {
    *(uint32_t *)(local_88[0] + 8) = 1;
    *(uint32_t *)(local_88[0] + 0x10) = 1;
  }
  if (bVar13) {
    if (bVar7 != 0)
      goto LAB_00583374;
    local_134 = 0;
    uVar21 = 0;
  } else {
    if (bVar7 == 0) {
      local_134 = (uint)(*(int *)(local_88[0] + 0x10) == 1);
      goto joined_r0x00583398;
    }
  LAB_00583374:
    local_134 = 1;
    uVar21 = 1;
  }
  *(uint32_t *)(local_88[0] + 0x10) = uVar21;
joined_r0x00583398:
  if (bVar5) {
    pTVar24 = operator_new(0x50);
    /* try { // try from 005833b1 to 005833b5 has its CatchHandler @ 00583a5e */
    TWindow__TWindow(pTVar24, (WindowSetupProps *)&local_138);
    /* try { // try from 005833bb to 005833bf has its CatchHandler @ 00583949 */
    pRVar25 = operator_new(0x78);
    /* try { // try from 005833c6 to 005833ca has its CatchHandler @ 00583a93 */
    ResourcePool__ResourcePool(pRVar25);
    /* try { // try from 005833d0 to 005833d4 has its CatchHandler @ 00583949 */
    pTVar26 = operator_new(0xab0);
    /* try { // try from 005833db to 005833df has its CatchHandler @ 00583afc */
    TGraphics__TGraphics(pTVar26);
    /* try { // try from 005833e2 to 00583449 has its CatchHandler @ 00583949 */
    InitializeCGR(0);
    TGraphics__AcquireDevice();
    TGraphics__BeginScene();
    TGraphics__Clear(Graphics, (ColorTemplate *)::cNullColor, 1);
    TGraphics__EndScene();
    TGraphics__Present();
    TGraphics__ReleaseDevice();
    TGraphics__ForceAspectRatio(Graphics, 1);
  }
  SetupUI();
  GraphicsSettings__SetupGraphicsSettings();
  this_01 = operator_new(0x58);
  /* try { // try from 005830e5 to 005830e9 has its CatchHandler @ 00583928 */
  TInput__TInput__0058adc0(this_01);
  /* try { // try from 005830ef to 005830f3 has its CatchHandler @ 00583949 */
  this_02 = operator_new(0x50);
  /* try { // try from 005830fa to 005830fe has its CatchHandler @ 00583a65 */
  TSceneObjectManager__TSceneObjectManager(this_02);
  /* try { // try from 00583104 to 00583108 has its CatchHandler @ 00583949 */
  this_03 = operator_new(4);
  /* try { // try from 0058310f to 00583113 has its CatchHandler @ 00583a98 */
  GScreenMargins__GScreenMargins(this_03);
  /* try { // try from 0058311b to 00583275 has its CatchHandler @ 00583949 */
  TGraphics__ResetPixelStages(Graphics);
  TGraphics__DeleteMasterPixelStage(Graphics);
  InitializeUserProfiles();
  Players__Game_ReinitializePlayers();
  dwTestNowTime = System_GetTimeInMS();
  dwTestLastTime = System_GetTimeInMS();
  LoadLocalizationDatabase("locdb.txt");
  if (*(int *)(self + 0x28) == 0) {
    plVar28 = *(long **)(arg1 + 0x18);
    *(long **)(self + 0x30) = plVar28;
    (**(code **)(*plVar28 + 0x20))();
  }
  uVar21 = System_GetTimeInMS();
  *(uint32_t *)(self + 0x14) = uVar21;
  fVar15 = DAT_005be894 /* R:1.0f */;
  uVar27 = (ulong)dwMonitorRefreshRate;
  *(uint32_t *)(self + 0x18) = 0;
  *(uint32_t *)(self + 0x1c) = 0;
  *(uint32_t *)(self + 0x20) = 0;
  fVar35 = fVar15 / (float)uVar27;
  if (fVar15 / (float)uVar27 <= *(float *)(self + 0x38)) {
    fVar35 = *(float *)(self + 0x38);
  }
  *(float *)(self + 0x24) = fVar35;
  if (!bVar6) {
    GameRegistry__GetVariable(EngineRegistry, "winheight", &local_48);
    pGVar23 = EngineRegistry;
    uVar3 = *(ushort *)(Window + 10);
    *(uint32_t *)(local_48 + 8) = 1;
    *(uint *)(local_48 + 0x10) = (uint)uVar3;
    GameRegistry__GetVariable(pGVar23, "winwidth", &local_50);
    pGVar23 = EngineRegistry;
    uVar3 = *(ushort *)(Window + 8);
    *(uint32_t *)(local_50 + 8) = 1;
    *(uint *)(local_50 + 0x10) = (uint)uVar3;
    GameRegistry__GetVariable(pGVar23, "fullscreen", local_88);
    pTVar24 = Window;
    *(uint32_t *)(local_88[0] + 8) = 1;
    *(uint32_t *)(local_88[0] + 0x10) = *(uint32_t *)(pTVar24 + 0xc);
  }
  GameRegistry__Flush(EngineRegistry);
  ExplodeStringData__ExplodeStringData((ExplodeStringData *)local_b8);
  return;
}

/* ======================================================================
 * TEngine__TEngine__00583e20  (Ghidra `~TEngine` @ 00583e20)
 * Signature: uint8_t __thiscall ~TEngine(TEngine * self)
 * Class: TEngine
 * Calls: `DestroyCGR`, `DestroyLocalizationDatabase`, `DestroyUserProfiles`, `GScreenMargins__GScreenMargins__0059bb60`, `GameRegistry__GameRegistry__005b6a60`, `GraphicsSettings__DestroyGraphicsSettings`, `Loader__DestroyLoader`, `ResourcePool__ResourcePool__0057d0b0`, `ShutdownUI`, `System_ShutDown` (+6 more)
 * Called by: `main`
 */
/* TEngine__TEngine__00583e20() */

void __thiscall TEngine__TEngine__00583e20(TEngine *self)

{
  TAudio *pTVar1;
  ResourcePool *pRVar2;
  GameRegistry *pGVar3;
  TGraphics *pTVar4;
  TInput *pTVar5;
  TSceneObjectManager *pTVar6;
  GScreenMargins *pGVar7;
  TWindow *pTVar8;

  Loader__DestroyLoader();
  if ((*(long **)(self + 0x30) != (long *)0x0) && (*(int *)(self + 0x28) == 0)) {
    (**(code **)(**(long **)(self + 0x30) + 8))();
  }
  pTVar6 = SceneObjectManager;
  if (SceneObjectManager != (TSceneObjectManager *)0x0) {
    TSceneObjectManager__TSceneObjectManager__0059b460(SceneObjectManager);
    operator_delete(pTVar6);
  }
  GraphicsSettings__DestroyGraphicsSettings();
  DestroyUserProfiles();
  ShutdownUI();
  pGVar7 = ScreenMargins;
  if (ScreenMargins != (GScreenMargins *)0x0) {
    GScreenMargins__GScreenMargins__0059bb60(ScreenMargins);
    operator_delete(pGVar7);
  }
  DestroyCGR();
  pTVar1 = Audio;
  if (Audio != (TAudio *)0x0) {
    TAudio__TAudio(Audio);
    operator_delete(pTVar1);
  }
  pRVar2 = Resources;
  if (Resources != (ResourcePool *)0x0) {
    ResourcePool__ResourcePool__0057d0b0(Resources);
    operator_delete(pRVar2);
  }
  pTVar5 = Input;
  if (Input != (TInput *)0x0) {
    TInput__TInput(Input);
    operator_delete(pTVar5);
  }
  pTVar4 = Graphics;
  if (Graphics != (TGraphics *)0x0) {
    TGraphics__TGraphics__00588560(Graphics);
    operator_delete(pTVar4);
  }
  pTVar8 = Window;
  if (Window != (TWindow *)0x0) {
    TWindow__TWindow__005b93e0(Window);
    operator_delete(pTVar8);
  }
  System_ShutDown();
  pGVar3 = EngineRegistry;
  if (EngineRegistry != (GameRegistry *)0x0) {
    GameRegistry__GameRegistry__005b6a60(EngineRegistry);
    operator_delete(pGVar3);
  }
  if (strLargeString != (void *)0x0) {
    operator_delete__(strLargeString);
  }
  if (strLargeStringW != (void *)0x0) {
    operator_delete__(strLargeStringW);
  }
  DestroyLocalizationDatabase();
  return;
}

/* ======================================================================
 * TEngine__Update  (Ghidra `Update` @ 00583f70)
 * Signature: uint8_t __thiscall Update(TEngine * self)
 * Class: TEngine
 * Calls: `AllowUpdate`, `AnimationManager__UpdateCallbacks`, `CreatePendingMessage`, `Loader__Update`, `MessageActive`, `Players__AllPlayersInitialized`, `Players__GetNumPlayersInitialized`, `SteamAPI_RunCallbacks`, `System_Update`, `TAudio__Update` (+5 more)
 * Called by: (none)
 */
/* TEngine__Update() */

void __thiscall TEngine__Update(TEngine *self)

{
  int iVar1;

  SteamAPI_RunCallbacks();
  Loader__Update();
  System_Update();
  iVar1 = MessageActive();
  if (iVar1 == 1) {
    TInput__AllowCallbacks(Input, 1);
    TInput__Update(Input, 0);
  } else {
    iVar1 = Players__GetNumPlayersInitialized();
    if (iVar1 == 0) {
      TInput__AllowCallbacks(Input, 0);
    } else {
      TInput__AllowCallbacks(Input, 1);
    }
    TInput__Update(Input, 0);
    iVar1 = Players__AllPlayersInitialized();
    if (iVar1 == 0) {
      if (*(int *)(pGameJoysticks + 8) == 1) {
        iVar1 = Players__AddPlayer(pGameJoysticks);
        if (iVar1 == 1) {
          TInput__AllowCallbacks(Input, 1);
          TInput__Update(Input, 1);
        }
      }
      if (*(int *)(pGameJoysticks + 0x310) == 1) {
        iVar1 = Players__AddPlayer(pGameJoysticks + 0x308);
        if (iVar1 == 1) {
          TInput__AllowCallbacks(Input, 1);
          TInput__Update(Input, 1);
        }
      }
      if (*(int *)(pGameJoysticks + 0x618) == 1) {
        iVar1 = Players__AddPlayer(pGameJoysticks + 0x610);
        if (iVar1 == 1) {
          TInput__AllowCallbacks(Input, 1);
          TInput__Update(Input, 1);
        }
      }
      if (*(int *)(pGameJoysticks + 0x920) == 1) {
        iVar1 = Players__AddPlayer(pGameJoysticks + 0x918);
        if (iVar1 == 1) {
          TInput__AllowCallbacks(Input, 1);
          TInput__Update(Input, 1);
        }
      }
    }
  }
  TAudio__Update(Audio);
  AnimationManager__UpdateCallbacks();
  if (*(int *)(Keyboard + 0x1e4) == 1) {
    bBoundsDrawing = (uint)(bBoundsDrawing == 0);
  }
  TSceneObjectManager__Update(SceneObjectManager);
  ::Update();
  if (*(long *)(self + 0x30) != 0) {
    iVar1 = AllowUpdate();
    if (iVar1 == 1) {
      (**(code **)(**(long **)(self + 0x30) + 0x10))();
      UpdateUI();
      CreatePendingMessage();
      return;
    }
  }
  UpdateUI();
  CreatePendingMessage();
  return;
}

/* ======================================================================
 * TEngine__Render  (Ghidra `Render` @ 005841f0)
 * Signature: uint8_t __stdcall Render(void)
 * Class: TEngine
 * Calls: `AllowRender`, `GScreenMargins__Render`, `Render`, `RenderLayers__Render`, `System_GetTimeInMS`, `TGraphics__AcquireDevice`, `TGraphics__BeginScene`, `TGraphics__EndScene`, `TGraphics__Present`, `TGraphics__ReleaseDevice`
 * Called by: (none)
 */
/* TEngine__Render() */

void TEngine__Render(void)

{
  int iVar1;
  int iVar2;

  if (bLoadThreadRunning != 1) {
    TGraphics__AcquireDevice();
    TGraphics__BeginScene();
    iVar1 = AllowRender();
    if (iVar1 == 1) {
      RenderLayers__Render();
    }
    ::Render();
    GScreenMargins__Render(ScreenMargins);
    iVar1 = System_GetTimeInMS();
    TGraphics__EndScene();
    TGraphics__Present();
    iVar2 = System_GetTimeInMS();
    Render()::dwRenderTime = iVar2 - iVar1;
    TGraphics__ReleaseDevice();
    return;
  }
  return;
}

/* ======================================================================
 * TEngine__EngineRun  (Ghidra `EngineRun` @ 005842a0)
 * Signature: uint8_t __thiscall EngineRun(TEngine * self)
 * Class: TEngine
 * Calls: `AllowRender`, `GScreenMargins__Render`, `Render`, `RenderLayers__Render`, `System_GetTimeInMS`, `TGraphics__AcquireDevice`, `TGraphics__BeginScene`, `TGraphics__EndScene`, `TGraphics__Present`, `TGraphics__ReleaseDevice` (+4 more)
 * Called by: (none)
 */
/* TEngine__EngineRun() */

void __thiscall TEngine__EngineRun(TEngine *self)

{
  float fVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;

  if (gfxCurrState != 0) {
    TGraphics__ResetDevice(Graphics, (tagResetDeviceParams *)_GFXResetParams);
    TGraphics__ResetTexCoordGen(Graphics);
    TGraphics__ResetPixelStages(Graphics);
    return;
  }
  iVar2 = System_GetTimeInMS();
  iVar3 = *(int *)(self + 0x14);
  *(int *)(self + 0x18) = iVar2;
  *(int *)(self + 0x20) = *(int *)(self + 0x20) + (iVar2 - iVar3);
  *(int *)(self + 0x14) = iVar2;
  *(int *)(self + 4) = iVar2 - iVar3;
  Update(self);
  if (bLoadThreadRunning != 1) {
    TGraphics__AcquireDevice();
    TGraphics__BeginScene();
    iVar3 = AllowRender();
    if (iVar3 == 1) {
      RenderLayers__Render();
    }
    ::Render();
    GScreenMargins__Render(ScreenMargins);
    iVar3 = System_GetTimeInMS();
    TGraphics__EndScene();
    TGraphics__Present();
    iVar2 = System_GetTimeInMS();
    Render()::dwRenderTime = iVar2 - iVar3;
    TGraphics__ReleaseDevice();
  }
  __frameCounter = __frameCounter + 1;
  LastFrameSystemCaps = SystemCaps;
  iVar3 = System_GetTimeInMS();
  dwActualFrameElapsedTime = iVar3 - *(int *)(self + 0x18);
  if (0 < iResetTime) {
    dwActualFrameElapsedTime = 0x10;
  }
  System_GetTimeInMS();
  fVar1 = DAT_005c01d0 /* R:0.0010000000474974513f */;
  uVar4 = (ulong)dwActualFrameElapsedTime;
  *(int *)(self + 0x10) = *(int *)(self + 0x10) + 1;
  iVar3 = *(int *)(self + 0x1c);
  *(int *)(self + 0x1c) = iVar3 + 1;
  fVar6 = (float)uVar4 * fVar1;
  *(float *)(self + 0x38) = fVar6;
  if (999 < *(uint *)(self + 0x20)) {
    dwFrameRate = iVar3 + 1;
    *(uint32_t *)(self + 0x1c) = 0;
    *(uint32_t *)(self + 0x20) = 0;
  }
  dwTestLastTime = dwTestNowTime;
  fVar5 = DAT_005be894 /* R:1.0f */ / (float)dwMonitorRefreshRate;
  if (fVar6 <= DAT_005be894 /* R:1.0f */ / (float)dwMonitorRefreshRate) {
    fVar5 = fVar6;
  }
  *(float *)(self + 0x24) = fVar5;
  dwTestNowTime = System_GetTimeInMS();
  fOneFrameTimeStep = fOneFrameTimeStepVSync;
  if (iResetTime < 1) {
    fOneFrameTimeStep = (float)(uint)(dwTestNowTime - dwTestLastTime) * fVar1;
  }
  *(float *)(self + 0x38) = fOneFrameTimeStep;
  iResetTime = iResetTime + -1;
  return;
}

/* ======================================================================
 * TEngine__Run  (Ghidra `Run` @ 005844a0)
 * Signature: uint8_t __thiscall Run(TEngine * self)
 * Class: TEngine
 * Calls: `RunSDLEventQueue`
 * Called by: `main`
 */
/* TEngine__Run() */

void __thiscall TEngine__Run(TEngine *self)

{
  char cVar1;

  do {
    cVar1 = RunSDLEventQueue();
    if (cVar1 == '\0') {
      return;
    }
    EngineRun(self);
  } while (*(int *)(*(long *)(self + 0x30) + 8) == 0);
  return;
}

/* ======================================================================
 * TEngine__LoadGame  (Ghidra `LoadGame` @ 005844d0)
 * Signature: uint8_t __thiscall LoadGame(TEngine * self)
 * Class: TEngine
 * Calls: (none)
 * Called by: (none)
 */
/* TEngine__LoadGame() */

void __thiscall TEngine__LoadGame(TEngine *self)

{
  /* WARNING: Could not recover jumptable at 0x005844db. Too many branches */
  /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(self + 0x30) + 0x20))();
  return;
}

/* ======================================================================
 * TEngine__UnloadGame  (Ghidra `UnloadGame` @ 005844e0)
 * Signature: uint8_t __thiscall UnloadGame(TEngine * self)
 * Class: TEngine
 * Calls: (none)
 * Called by: (none)
 */
/* TEngine__UnloadGame() */

void __thiscall TEngine__UnloadGame(TEngine *self)

{
  if (*(long **)(self + 0x30) != (long *)0x0) {
    /* WARNING: Could not recover jumptable at 0x005844f0. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(self + 0x30) + 8))();
    return;
  }
  return;
}

/* ======================================================================
 * TEngine__LoadEditor  (Ghidra `LoadEditor` @ 00584500)
 * Signature: uint8_t __stdcall LoadEditor(void)
 * Class: TEngine
 * Calls: (none)
 * Called by: (none)
 */
/* TEngine__LoadEditor() */

void TEngine__LoadEditor(void)

{
  return;
}

/* ======================================================================
 * TEngine__UnloadEditor  (Ghidra `UnloadEditor` @ 00584510)
 * Signature: uint8_t __stdcall UnloadEditor(void)
 * Class: TEngine
 * Calls: (none)
 * Called by: (none)
 */
/* TEngine__UnloadEditor() */

void TEngine__UnloadEditor(void)

{
  return;
}

/* ======================================================================
 * TEngine__ResetTimer  (Ghidra `ResetTimer` @ 00584530)
 * Signature: uint8_t __stdcall ResetTimer(void)
 * Class: TEngine
 * Calls: (none)
 * Called by: `SMBPalette__ResetObstacles`
 */
/* TEngine__ResetTimer() */

void TEngine__ResetTimer(void)

{
  iResetTime = 2;
  return;
}

/* ======================================================================
 * TEngine__WaitForStartupLogos  (Ghidra `WaitForStartupLogos` @ 00584540)
 * Signature: uint8_t __stdcall WaitForStartupLogos(void)
 * Class: TEngine
 * Calls: `TGraphics__ForceAspectRatio`
 * Called by: `GMeatHUD__GMeatHUD__004800c0`
 */
/* TEngine__WaitForStartupLogos() */

void TEngine__WaitForStartupLogos(void)

{
  TGraphics__ForceAspectRatio(Graphics, 1);
  return;
}
