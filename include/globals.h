#pragma once
/* Externals: nm B/D/R symbols + Ghidra DAT_/PTR_ synthetics (stub types). */
#include "ghidra_types.h"

/* @00000000008205e0 [B] */
extern void *Audio;
/* @00000000005cf8c0 [r] orig `CSWTCH.103` */
extern void *CSWTCH_103;
/* @00000000005cf780 [r] orig `CSWTCH.108` */
extern void *CSWTCH_108;
/* @00000000005cf700 [r] orig `CSWTCH.116` */
extern void *CSWTCH_116;
/* @00000000005c5d00 [r] orig `CSWTCH.12` */
extern void *CSWTCH_12;
/* @00000000005c5d20 [r] orig `CSWTCH.13` */
extern void *CSWTCH_13;
/* @00000000005d5250 [r] orig `CSWTCH.284` */
extern void *CSWTCH_284;
/* @00000000005d5260 [r] orig `CSWTCH.285` */
extern void *CSWTCH_285;
/* @00000000005d5270 [r] orig `CSWTCH.286` */
extern void *CSWTCH_286;
/* @00000000005d5280 [r] orig `CSWTCH.288` */
extern void *CSWTCH_288;
/* @00000000005be6a0 [r] orig `CSWTCH.29` */
extern void *CSWTCH_29;
/* @00000000005d26a0 [r] orig `CSWTCH.42` */
extern void *CSWTCH_42;
/* @00000000005d26c0 [r] orig `CSWTCH.43` */
extern void *CSWTCH_43;
/* @00000000005c7138 [r] orig `CSWTCH.610` */
extern void *CSWTCH_610;
/* @00000000005c7144 [r] orig `CSWTCH.611` */
extern void *CSWTCH_611;
/* @00000000005c7150 [r] orig `CSWTCH.639` */
extern void *CSWTCH_639;
/* @00000000005c715c [r] orig `CSWTCH.640` */
extern void *CSWTCH_640;
/* @00000000005c7168 [r] orig `CSWTCH.713` */
extern void *CSWTCH_713;
/* @00000000005cf600 [r] orig `CSWTCH.98` */
extern void *CSWTCH_98;
/* @00000000005cf680 [r] orig `CSWTCH.99` */
extern void *CSWTCH_99;
/* @00000000008198a0 [B] */
extern void *CurrentSMBBoss;
/* @0000000000820ba8 [B] */
extern void *Engine;
/* @0000000000823e88 [B] */
extern void *EngineLog;
/* @0000000000820b78 [B] */
extern void *EngineRegistry;
/* @0000000000820300 [B] */
extern void *FlashEditableTextFieldStyle;
/* @0000000000820f60 [B] */
extern void *GFXDrawSection;
/* @000000000081ec10 [B] */
extern void *GLGraphics;
/* @00000000005c6800 [R] */
extern void *GLITCH_WARP_INDEX;
/* @00000000008179c4 [D] */
extern void *GLOBALDEFAULTMUSICVOLUME;
/* @00000000008179c0 [D] */
extern void *GLOBALDEFAULTSFXVOLUME;
/* @00000000008179cc [D] */
extern void *GLOBALMUSICVOLUME;
/* @00000000008179c8 [D] */
extern void *GLOBALSFXVOLUME;
/* @000000000081c550 [B] */
extern void *GLOBAL_SETTINGS_MENU;
/* @000000000081ec50 [B] */
extern void *GMojoShaderProfile;
/* @0000000000818488 [D] */
extern void *GUserDataPath;
/* @0000000000823a00 [B] */
extern void *GameAudioPackage;
/* @0000000000823a08 [B] */
extern void *GameFilePackage;
/* @0000000000823e80 [B] */
extern void *GameLog;
/* @0000000000820fb8 [B] */
extern void *Graphics;
/* @0000000000815e10 [D] */
extern void *HellWaitDurations;
/* @00000000008211d8 [B] */
extern void *Input;
/* @0000000000822280 [B] */
extern void *Keyboard;
/* @0000000000823ea0 [B] */
extern void *LastFrameSystemCaps;
/* @000000000081c1d0 [B] */
extern void *LoadedPortalChapter;
/* @000000000081c1c0 [B] */
extern void *LoadedPortalLevel;
/* @00000000008223c0 [B] */
extern void *LoaderAllocSection;
/* @0000000000820b00 [B] */
extern void *LoadingRenderThreadFinished;
/* @0000000000821260 [B] */
extern void *MAX_GAME_JOYSTICKS;
/* @0000000000817780 [D] */
extern void *MOJOSHADER_out_of_mem_data;
/* @0000000000817840 [D] */
extern void *MOJOSHADER_out_of_mem_error;
/* @0000000000823e90 [B] */
extern void *Memory;
/* @0000000000822480 [B] */
extern void *Mouse;
/* @000000000081eba0 [B] */
extern void *PixColor;
/* @000000000081ebe0 [B] */
extern void *PixPos;
/* @000000000081c1b0 [B] */
extern void *PortalInterfaceLibrary;
/* @000000000081eb60 [B] */
extern void *PosTrans;
/* @0000000000822820 [B] */
extern void *ResourceCreator;
/* @0000000000820670 [B] */
extern void *Resources;
/* @0000000000819c40 [B] */
extern void *SMBChapterData;
/* @0000000000819bc0 [B] */
extern void *SMBChapterSaveEvent;
/* @0000000000819cd8 [B] */
extern void *SMBCharactor;
/* @0000000000819c34 [B] */
extern void *SMBCurrLevelData;
/* @0000000000819de0 [B] */
extern void *SMBCutSceneManager;
/* @000000000081a330 [B] */
extern void *SMBEditorLayer;
/* @0000000000819350 [B] */
extern void *SMBHUD;
/* @000000000081b060 [B] */
extern void *SMBInstructions;
/* @000000000081c190 [B] */
extern void *SMBLevelChapterPortalInterface;
/* @000000000081bf10 [B] */
extern void *SMBMenu;
/* @000000000081bba0 [B] */
extern void *SMBMenuSection;
/* @000000000081c6b8 [B] */
extern void *SMBRegistry;
/* @0000000000822940 [B] */
extern void *SceneObjectManager;
/* @0000000000820b98 [B] */
extern void *ScreenDebugText;
/* @000000000081c760 [B] */
extern void *ScreenFlash;
/* @00000000008229d0 [B] */
extern void *ScreenMargins;
/* @0000000000822a70 [B] */
extern void *SetPieceWayPoints;
/* @000000000081c6d0 [B] */
extern void *SuperMeatBoy;
/* @000000000081a340 [B] */
extern void *SuperMeatBoyEditor;
/* @000000000081c1e0 [B] */
extern void *SuperMeatBoyPortal;
/* @0000000000823eb0 [B] */
extern void *SystemCaps;
/* @00000000008205a0 [B] */
extern void *TAudioSection;
/* @0000000000820f20 [B] */
extern void *TGraphicsSection;
/* @0000000000824c20 [B] */
extern void *UserProfiles;
/* @000000000081eb20 [B] */
extern void *VertexColor;
/* @0000000000824070 [B] */
extern void *Window;
/* @000000000081e7c0 [B] */
extern void *XAudioSection;
/* @0000000000822e98 [B] */
extern void *_CURRENT_EXCLUSIVE_FORM;
/* @0000000000822f40 [B] */
extern void *_DEFAULT_UIBUTTON_STYLE;
/* @0000000000823000 [B] */
extern void *_DEFAULT_UIDROPDOWNFORM_STYLE;
/* @0000000000823010 [B] */
extern void *_DEFAULT_UIDROPDOWN_STYLE;
/* @00000000008230b0 [B] */
extern void *_DEFAULT_UIFORM_STYLE;
/* @0000000000823140 [B] */
extern void *_DEFAULT_UIFRAME_STYLE;
/* @00000000008231e0 [B] */
extern void *_DEFAULT_UILABEL_STYLE;
/* @0000000000823280 [B] */
extern void *_DEFAULT_UISCROLLBAR_STYLE;
/* @0000000000823340 [B] */
extern void *_DEFAULT_UITEXTFIELD_STYLE;
/* @0000000000822e90 [B] */
extern void *_DEFAULT_UI_FONT;
/* @00000000005dd7e0 [R] */
extern void *_DEFAULT_UI_FONT_SIZE;
/* @00000000008153e8 [d] */
extern void *_DYNAMIC;
/* @0000000000820fc8 [B] */
extern void *_GFXResetParams;
/* @00000000008178e0 [D] */
extern void *_GLGRAPHICS_MAX_TEXTURE_HEIGHT;
/* @00000000008178e4 [D] */
extern void *_GLGRAPHICS_MAX_TEXTURE_WIDTH;
/* @0000000000815628 [d] */
extern void *_GLOBAL_OFFSET_TABLE_;
/* @00000000005be480 [R] */
extern void *_IO_stdin_used;
/* @00000000008211d0 [B] */
extern void *_Input_Callbacks_Allowed;
/* @00000000008226e0 [B] */
extern void *_RENDERLAYER_SECTION;
/* @000000000081c7e4 [B] */
extern void *_SMB_GLOBAL_INVINCIBLE;
/* @00000000008202c0 [b] */
extern void *_ZGVZ11UpdateMousevE15dwLastFrameTime;
/* @00000000008202e0 [b] */
extern void *_ZGVZ14UpdateKeyboardvE15dwLastFrameTime;
/* @0000000000819090 [b] */
extern void *_ZGVZ16IsOnTrianglePartP9GRIDBLOCKRK7Vector220tagTileCollisionTypeRiE11vDiagonalUp;
/* @000000000081a9a0 [b] */
extern void *_ZGVZ16PlaceCameraItemsPK14tagButtonPropsPvE14vStartWorldPos;
/* @000000000081a9c0 [b] */
extern void *_ZGVZ22AdjustSetPieceLayeringvE12pObjectOrder;
/* @0000000000819760 [b] */
extern void *_ZGVZ26SMBAnimalGroundEnemyUpdateE10vUpGravity;
/* @0000000000819770 [b] */
extern void *_ZGVZ26SMBAnimalGroundEnemyUpdateE12vDownGravity;
/* @0000000000819780 [b] */
extern void *_ZGVZ26SMBAnimalGroundEnemyUpdateE12vLeftGravity;
/* @0000000000819790 [b] */
extern void *_ZGVZ26SMBAnimalGroundEnemyUpdateE13vRightGravity;
/* @00000000008202a8 [b] */
extern void *_ZGVZL33ConvertSDLJoystickStateToJoyStateP14tagSDLJoystickE15dwLastFrameTime;
/* @0000000000818760 [b] */
extern void *_ZGVZN14CommanderVideo6RenderEvE7pColors;
/* @000000000081c220 [b] */
extern void
    *_ZGVZN14SMBLevelPortal25GetEnterTheUnknownChapterEPP16SMBPortalChapterE19iEnterUnknownLength;
/* @00000000008190b0 [b] */
extern void *_ZGVZN16MeatBoyCharactor6UpdateEvE11vDiagonalUp;
/* @00000000008190a0 [b] */
extern void *_ZGVZN16MeatBoyCharactor6UpdateEvE6vRight;
/* @0000000000818f10 [b] */
extern void
    *_ZGVZN17TileLevelLightMap17GenerateShadowMapEPK5LightPN3CGR18tagPos2ColorVertexERiE8vTriNorm;
/* @000000000081aa50 [b] */
extern void *_ZGVZN9SMBEditor6RenderEvE16vLastMouseScreen;
/* @00000000005d5440 [r] */
extern void *_ZL10GLFillMode;
/* @00000000005d5230 [r] */
extern void *_ZL10GLPrimType;
/* @0000000000818690 [b] */
extern void *_ZL10cNullColor;
/* @0000000000818740 [b] */
extern void *_ZL10cNullColor;
/* @0000000000818840 [b] */
extern void *_ZL10cNullColor;
/* @00000000008188c0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000818940 [b] */
extern void *_ZL10cNullColor;
/* @00000000008189c0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000818b10 [b] */
extern void *_ZL10cNullColor;
/* @0000000000818b90 [b] */
extern void *_ZL10cNullColor;
/* @0000000000818c10 [b] */
extern void *_ZL10cNullColor;
/* @0000000000818c90 [b] */
extern void *_ZL10cNullColor;
/* @0000000000818d10 [b] */
extern void *_ZL10cNullColor;
/* @0000000000818d90 [b] */
extern void *_ZL10cNullColor;
/* @0000000000818e20 [b] */
extern void *_ZL10cNullColor;
/* @0000000000818e40 [b] */
extern void *_ZL10cNullColor;
/* @0000000000818f00 [b] */
extern void *_ZL10cNullColor;
/* @0000000000818ff0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000819070 [b] */
extern void *_ZL10cNullColor;
/* @0000000000819140 [b] */
extern void *_ZL10cNullColor;
/* @00000000008193d0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000819450 [b] */
extern void *_ZL10cNullColor;
/* @00000000008194d0 [b] */
extern void *_ZL10cNullColor;
/* @00000000008194f0 [b] */
extern void *_ZL10cNullColor;
/* @00000000008195d0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000819650 [b] */
extern void *_ZL10cNullColor;
/* @00000000008196d0 [b] */
extern void *_ZL10cNullColor;
/* @00000000008196f0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000819810 [b] */
extern void *_ZL10cNullColor;
/* @0000000000819890 [b] */
extern void *_ZL10cNullColor;
/* @0000000000819920 [b] */
extern void *_ZL10cNullColor;
/* @00000000008199e0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000819b90 [b] */
extern void *_ZL10cNullColor;
/* @0000000000819cc0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000819d50 [b] */
extern void *_ZL10cNullColor;
/* @0000000000819dd0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000819df0 [b] */
extern void *_ZL10cNullColor;
/* @000000000081aad0 [b] */
extern void *_ZL10cNullColor;
/* @000000000081b040 [b] */
extern void *_ZL10cNullColor;
/* @000000000081b0e0 [b] */
extern void *_ZL10cNullColor;
/* @000000000081b170 [b] */
extern void *_ZL10cNullColor;
/* @000000000081b9c0 [b] */
extern void *_ZL10cNullColor;
/* @000000000081ba40 [b] */
extern void *_ZL10cNullColor;
/* @000000000081baf0 [b] */
extern void *_ZL10cNullColor;
/* @000000000081bf40 [b] */
extern void *_ZL10cNullColor;
/* @000000000081c010 [b] */
extern void *_ZL10cNullColor;
/* @000000000081c110 [b] */
extern void *_ZL10cNullColor;
/* @000000000081c2b0 [b] */
extern void *_ZL10cNullColor;
/* @000000000081c3d0 [b] */
extern void *_ZL10cNullColor;
/* @000000000081c450 [b] */
extern void *_ZL10cNullColor;
/* @000000000081c4d0 [b] */
extern void *_ZL10cNullColor;
/* @000000000081c5d0 [b] */
extern void *_ZL10cNullColor;
/* @000000000081c650 [b] */
extern void *_ZL10cNullColor;
/* @000000000081c840 [b] */
extern void *_ZL10cNullColor;
/* @000000000081c910 [b] */
extern void *_ZL10cNullColor;
/* @000000000081c990 [b] */
extern void *_ZL10cNullColor;
/* @000000000081ca10 [b] */
extern void *_ZL10cNullColor;
/* @000000000081e860 [b] */
extern void *_ZL10cNullColor;
/* @000000000081e8e0 [b] */
extern void *_ZL10cNullColor;
/* @000000000081e960 [b] */
extern void *_ZL10cNullColor;
/* @000000000081e9e0 [b] */
extern void *_ZL10cNullColor;
/* @000000000081ea60 [b] */
extern void *_ZL10cNullColor;
/* @000000000081eae0 [b] */
extern void *_ZL10cNullColor;
/* @00000000008201f0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000820440 [b] */
extern void *_ZL10cNullColor;
/* @0000000000820660 [b] */
extern void *_ZL10cNullColor;
/* @00000000008207d0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000820880 [b] */
extern void *_ZL10cNullColor;
/* @0000000000820900 [b] */
extern void *_ZL10cNullColor;
/* @0000000000820980 [b] */
extern void *_ZL10cNullColor;
/* @0000000000820a10 [b] */
extern void *_ZL10cNullColor;
/* @0000000000820bc0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000820cd0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000820e90 [b] */
extern void *_ZL10cNullColor;
/* @0000000000820f10 [b] */
extern void *_ZL10cNullColor;
/* @0000000000821050 [b] */
extern void *_ZL10cNullColor;
/* @0000000000821140 [b] */
extern void *_ZL10cNullColor;
/* @00000000008211c0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000821250 [b] */
extern void *_ZL10cNullColor;
/* @0000000000822330 [b] */
extern void *_ZL10cNullColor;
/* @0000000000822470 [b] */
extern void *_ZL10cNullColor;
/* @0000000000822520 [b] */
extern void *_ZL10cNullColor;
/* @00000000008225a0 [b] */
extern void *_ZL10cNullColor;
/* @00000000008226c0 [b] */
extern void *_ZL10cNullColor;
/* @00000000008227e0 [b] */
extern void *_ZL10cNullColor;
/* @00000000008228d0 [b] */
extern void *_ZL10cNullColor;
/* @00000000008229c0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000822a60 [b] */
extern void *_ZL10cNullColor;
/* @0000000000822af0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000822b70 [b] */
extern void *_ZL10cNullColor;
/* @0000000000822bf0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000822c70 [b] */
extern void *_ZL10cNullColor;
/* @0000000000822d00 [b] */
extern void *_ZL10cNullColor;
/* @0000000000822d80 [b] */
extern void *_ZL10cNullColor;
/* @0000000000822e00 [b] */
extern void *_ZL10cNullColor;
/* @0000000000822e80 [b] */
extern void *_ZL10cNullColor;
/* @0000000000822f20 [b] */
extern void *_ZL10cNullColor;
/* @0000000000822ff0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000823020 [b] */
extern void *_ZL10cNullColor;
/* @0000000000823130 [b] */
extern void *_ZL10cNullColor;
/* @0000000000823160 [b] */
extern void *_ZL10cNullColor;
/* @0000000000823270 [b] */
extern void *_ZL10cNullColor;
/* @0000000000823320 [b] */
extern void *_ZL10cNullColor;
/* @0000000000823370 [b] */
extern void *_ZL10cNullColor;
/* @0000000000823470 [b] */
extern void *_ZL10cNullColor;
/* @00000000008234f0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000823570 [b] */
extern void *_ZL10cNullColor;
/* @00000000008235f0 [b] */
extern void *_ZL10cNullColor;
/* @00000000008240f0 [b] */
extern void *_ZL10cNullColor;
/* @0000000000824ce0 [b] */
extern void *_ZL10cNullColor;
/* @000000000081a980 [b] */
extern void *_ZL10vTileScale;
/* @00000000005d5360 [r] */
extern void *_ZL11GLACompFunc;
/* @00000000005d53f0 [r] */
extern void *_ZL11GLMipFilter;
/* @00000000005d5420 [r] */
extern void *_ZL11GLZCompFunc;
/* @000000000081aa30 [b] */
extern void *_ZL11bUploadMode;
/* @00000000005db760 [r] */
extern void *_ZL11bySDLKeyMap;
/* @000000000081ba70 [b] */
extern void *_ZL11cUnSelected;
/* @000000000081c200 [b] */
extern void *_ZL11strPortalIP;
/* @00000000005d5470 [r] */
extern void *_ZL12GLColorWrite;
/* @0000000000820060 [b] */
extern void *_ZL12PixelOutputs;
/* @000000000081c820 [b] */
extern void *_ZL12iLoadCounter;
/* @00000000005c13e0 [r] */
extern void *_ZL12pBallIndices;
/* @00000000005c0b60 [r] */
extern void *_ZL12pUnlockProps;
/* @00000000005d5400 [r] */
extern void *_ZL13GLZBufferType;
/* @0000000000820bd0 [b] */
extern void *_ZL13dwTestNowTime;
/* @000000000081eca0 [b] */
extern void *_ZL13pglfn_glClear;
/* @000000000081aae0 [b] */
extern void *_ZL13vTileOpposite;
/* @0000000000820be0 [b] */
extern void *_ZL14dwTestLastTime;
/* @00000000005c42d0 [r] */
extern void *_ZL14fTileRotations;
/* @00000000005c6820 [r] */
extern void *_ZL14pauseMenuProps;
/* @000000000081ed90 [b] */
extern void *_ZL14pglfn_glEnable;
/* @0000000000817100 [d] */
extern void *_ZL14smbSwitchChars;
/* @00000000005c68e0 [r] */
extern void *_ZL14titleMenuProps;
/* @00000000005d53e0 [r] */
extern void *_ZL15GLTextureFilter;
/* @0000000000818470 [d] */
extern void *_ZL15ogg_page_header;
/* @00000000008172e0 [d] */
extern void *_ZL15pAchievementsDB;
/* @000000000081ed50 [b] */
extern void *_ZL15pglfn_glDisable;
/* @000000000081ee00 [b] */
extern void *_ZL15pglfn_glScissor;
/* @000000000081ee40 [b] */
extern void *_ZL15pglfn_glTexEnvf;
/* @00000000005d4bb8 [r] */
extern void *_ZL16GLTextureFormats;
/* @000000000081f480 [b] */
extern void *_ZL16PixelTexCoordsIn;
/* @000000000081c800 [b] */
extern void *_ZL16bIsGamePauseable;
/* @00000000005de340 [r] */
extern void *_ZL16channel_position;
/* @00000000005ddf20 [r] */
extern void *_ZL16inverse_db_table;
/* @000000000081ed00 [b] */
extern void *_ZL16pglfn_glCullFace;
/* @000000000081ee90 [b] */
extern void *_ZL16pglfn_glViewport;
/* @000000000081a970 [b] */
extern void *_ZL16vSelectionPoint1;
/* @000000000081a978 [b] */
extern void *_ZL16vSelectionPoint2;
/* @00000000005dced4 [r] */
extern void *_ZL17TILELEVEL_FILEEND;
/* @000000000081f000 [b] */
extern void *_ZL17VertexTexCoordOut;
/* @00000000005c07a0 [r] */
extern void *_ZL17iCharPropsFileVer;
/* @0000000000817280 [d] */
extern void *_ZL17pLeaderboardProps;
/* @0000000000820ce0 [b] */
extern void *_ZL17pPixelDeclCounter;
/* @000000000081ec60 [b] */
extern void *_ZL17pglfn_glAlphaFunc;
/* @000000000081ec90 [b] */
extern void *_ZL17pglfn_glBlendFunc;
/* @000000000081ece0 [b] */
extern void *_ZL17pglfn_glColorMask;
/* @000000000081ed20 [b] */
extern void *_ZL17pglfn_glDepthFunc;
/* @000000000081ed30 [b] */
extern void *_ZL17pglfn_glDepthMask;
/* @000000000081eda0 [b] */
extern void *_ZL17pglfn_glFrontFace;
/* @000000000081edc0 [b] */
extern void *_ZL17pglfn_glGetString;
/* @000000000081ee30 [b] */
extern void *_ZL17pglfn_glStencilOp;
/* @00000000005c8940 [r] */
extern void *_ZL18pUnknownDifficulty;
/* @0000000000820d80 [b] */
extern void *_ZL18pVertexDeclCounter;
/* @000000000081ecb0 [b] */
extern void *_ZL18pglfn_glClearColor;
/* @000000000081ecc0 [b] */
extern void *_ZL18pglfn_glClearDepth;
/* @000000000081ed40 [b] */
extern void *_ZL18pglfn_glDepthRange;
/* @000000000081ed60 [b] */
extern void *_ZL18pglfn_glDrawArrays;
/* @000000000081ed80 [b] */
extern void *_ZL18pglfn_glDrawBuffer;
/* @000000000081ee50 [b] */
extern void *_ZL18pglfn_glTexImage2D;
/* @00000000005d52a0 [r] */
extern void *_ZL19GLRenderStateValues;
/* @00000000005d53c0 [r] */
extern void *_ZL19GLTextureAddressing;
/* @000000000081aa40 [b] */
extern void *_ZL19bEditorTmpLevelSave;
/* @000000000081eff4 [b] */
extern void *_ZL19bRenderingToTexture;
/* @000000000081ec70 [b] */
extern void *_ZL19pglfn_glBindTexture;
/* @000000000081edd0 [b] */
extern void *_ZL19pglfn_glGenTextures;
/* @000000000081edb0 [b] */
extern void *_ZL19pglfn_glGetIntegerv;
/* @000000000081ede0 [b] */
extern void *_ZL19pglfn_glPixelStorei;
/* @000000000081edf0 [b] */
extern void *_ZL19pglfn_glPolygonMode;
/* @000000000081ee10 [b] */
extern void *_ZL19pglfn_glStencilFunc;
/* @000000000081ee20 [b] */
extern void *_ZL19pglfn_glStencilMask;
/* @0000000000817900 [d] */
extern void *_ZL20GLSamplerStateValues;
/* @00000000005d4bac [r] */
extern void *_ZL20GLTextureFormatTypes;
/* @000000000081f640 [b] */
extern void *_ZL20PixelChannel1Sources;
/* @000000000081fa60 [b] */
extern void *_ZL20PixelChannel2Sources;
/* @000000000081ecd0 [b] */
extern void *_ZL20pglfn_glClearStencil;
/* @000000000081ed70 [b] */
extern void *_ZL20pglfn_glDrawElements;
/* @000000000081eef0 [b] */
extern void *_ZL20pglfn_glMapBufferARB;
/* @000000000081ec58 [b] */
extern void *_ZL21pglfn_glActiveTexture;
/* @000000000081eea0 [b] */
extern void *_ZL21pglfn_glBindBufferARB;
/* @000000000081ec80 [b] */
extern void *_ZL21pglfn_glBlendEquation;
/* @000000000081eed0 [b] */
extern void *_ZL21pglfn_glBufferDataARB;
/* @000000000081eec0 [b] */
extern void *_ZL21pglfn_glGenBuffersARB;
/* @000000000081ee70 [b] */
extern void *_ZL21pglfn_glTexParameterf;
/* @000000000081ee60 [b] */
extern void *_ZL21pglfn_glTexParameteri;
/* @000000000081ee80 [b] */
extern void *_ZL21pglfn_glTexSubImage2D;
/* @000000000081f180 [b] */
extern void *_ZL22VertexTexCoordMatTrans;
/* @000000000081ed10 [b] */
extern void *_ZL22pglfn_glDeleteTextures;
/* @000000000081eef8 [b] */
extern void *_ZL22pglfn_glUnmapBufferARB;
/* @00000000005dced0 [r] */
extern void *_ZL23TILELEVEL_BASEVERSION02;
/* @000000000081efa0 [b] */
extern void *_ZL23matRenderTargetRotation;
/* @000000000081bf30 [b] */
extern void *_ZL23vWorldMenuMeatBoyOffset;
/* @00000000005d4bc4 [r] */
extern void *_ZL24GLInternalTextureFormats;
/* @000000000081eee0 [b] */
extern void *_ZL24pglfn_glBufferSubDataARB;
/* @000000000081eeb0 [b] */
extern void *_ZL24pglfn_glDeleteBuffersARB;
/* @0000000000817be0 [d] */
extern void *_ZL24strPixelShaderDeclLookup;
/* @0000000000817ac0 [d] */
extern void *_ZL25strPixelShaderParamLookup;
/* @0000000000817e80 [d] */
extern void *_ZL25strVertexShaderDeclLookup;
/* @000000000081bf20 [b] */
extern void *_ZL25vChapterMenuMeatBoyOffset;
/* @000000000081ef40 [b] */
extern void *_ZL26pglfn_glBindFramebufferEXT;
/* @000000000081ef90 [b] */
extern void *_ZL26pglfn_glBlitFramebufferEXT;
/* @000000000081ef60 [b] */
extern void *_ZL26pglfn_glGenFramebuffersEXT;
/* @0000000000817d40 [d] */
extern void *_ZL26strVertexShaderParamLookup;
/* @000000000081ef00 [b] */
extern void *_ZL27pglfn_glBindRenderbufferEXT;
/* @000000000081ef20 [b] */
extern void *_ZL27pglfn_glGenRenderbuffersEXT;
/* @000000000081ef98 [b] */
extern void *_ZL28have_GL_EXT_framebuffer_blit;
/* @000000000081ecf0 [b] */
extern void *_ZL28pglfn_glCompressedTexImage2D;
/* @0000000000817a20 [d] */
extern void *_ZL28strPixelShaderFragmentLookup;
/* @000000000081ef50 [b] */
extern void *_ZL29pglfn_glDeleteFramebuffersEXT;
/* @0000000000817d00 [d] */
extern void *_ZL29strVertexShaderFragmentLookup;
/* @000000000081efe1 [b] */
extern void *_ZL30have_GL_EXT_framebuffer_object;
/* @000000000081ef10 [b] */
extern void *_ZL30pglfn_glDeleteRenderbuffersEXT;
/* @000000000081ef30 [b] */
extern void *_ZL30pglfn_glRenderbufferStorageEXT;
/* @000000000081ef80 [b] */
extern void *_ZL31pglfn_glFramebufferTexture2DEXT;
/* @000000000081efe0 [b] */
extern void *_ZL32have_GL_ARB_vertex_buffer_object;
/* @000000000081ef70 [b] */
extern void *_ZL33pglfn_glCheckFramebufferStatusEXT;
/* @000000000081ef88 [b] */
extern void *_ZL34pglfn_glFramebufferRenderbufferEXT;
/* @0000000000818660 [b] */
extern void *_ZL4cRed;
/* @0000000000818710 [b] */
extern void *_ZL4cRed;
/* @0000000000818810 [b] */
extern void *_ZL4cRed;
/* @0000000000818890 [b] */
extern void *_ZL4cRed;
/* @0000000000818910 [b] */
extern void *_ZL4cRed;
/* @0000000000818990 [b] */
extern void *_ZL4cRed;
/* @0000000000818ae0 [b] */
extern void *_ZL4cRed;
/* @0000000000818b60 [b] */
extern void *_ZL4cRed;
/* @0000000000818be0 [b] */
extern void *_ZL4cRed;
/* @0000000000818c60 [b] */
extern void *_ZL4cRed;
/* @0000000000818ce0 [b] */
extern void *_ZL4cRed;
/* @0000000000818d60 [b] */
extern void *_ZL4cRed;
/* @0000000000818df0 [b] */
extern void *_ZL4cRed;
/* @0000000000818e80 [b] */
extern void *_ZL4cRed;
/* @0000000000818f50 [b] */
extern void *_ZL4cRed;
/* @0000000000818fc0 [b] */
extern void *_ZL4cRed;
/* @0000000000819040 [b] */
extern void *_ZL4cRed;
/* @0000000000819110 [b] */
extern void *_ZL4cRed;
/* @00000000008193a0 [b] */
extern void *_ZL4cRed;
/* @0000000000819420 [b] */
extern void *_ZL4cRed;
/* @00000000008194a0 [b] */
extern void *_ZL4cRed;
/* @0000000000819530 [b] */
extern void *_ZL4cRed;
/* @00000000008195a0 [b] */
extern void *_ZL4cRed;
/* @0000000000819620 [b] */
extern void *_ZL4cRed;
/* @00000000008196a0 [b] */
extern void *_ZL4cRed;
/* @0000000000819700 [b] */
extern void *_ZL4cRed;
/* @00000000008197e0 [b] */
extern void *_ZL4cRed;
/* @0000000000819860 [b] */
extern void *_ZL4cRed;
/* @00000000008198f0 [b] */
extern void *_ZL4cRed;
/* @00000000008199b0 [b] */
extern void *_ZL4cRed;
/* @0000000000819b60 [b] */
extern void *_ZL4cRed;
/* @0000000000819c90 [b] */
extern void *_ZL4cRed;
/* @0000000000819d20 [b] */
extern void *_ZL4cRed;
/* @0000000000819da0 [b] */
extern void *_ZL4cRed;
/* @0000000000819e40 [b] */
extern void *_ZL4cRed;
/* @000000000081aa70 [b] */
extern void *_ZL4cRed;
/* @000000000081b010 [b] */
extern void *_ZL4cRed;
/* @000000000081b0b0 [b] */
extern void *_ZL4cRed;
/* @000000000081b140 [b] */
extern void *_ZL4cRed;
/* @000000000081b990 [b] */
extern void *_ZL4cRed;
/* @000000000081ba10 [b] */
extern void *_ZL4cRed;
/* @000000000081bac0 [b] */
extern void *_ZL4cRed;
/* @000000000081bf90 [b] */
extern void *_ZL4cRed;
/* @000000000081bfe0 [b] */
extern void *_ZL4cRed;
/* @000000000081c0e0 [b] */
extern void *_ZL4cRed;
/* @000000000081c280 [b] */
extern void *_ZL4cRed;
/* @000000000081c3a0 [b] */
extern void *_ZL4cRed;
/* @000000000081c420 [b] */
extern void *_ZL4cRed;
/* @000000000081c4a0 [b] */
extern void *_ZL4cRed;
/* @000000000081c5a0 [b] */
extern void *_ZL4cRed;
/* @000000000081c620 [b] */
extern void *_ZL4cRed;
/* @000000000081c870 [b] */
extern void *_ZL4cRed;
/* @000000000081c8e0 [b] */
extern void *_ZL4cRed;
/* @000000000081c960 [b] */
extern void *_ZL4cRed;
/* @000000000081c9e0 [b] */
extern void *_ZL4cRed;
/* @000000000081e830 [b] */
extern void *_ZL4cRed;
/* @000000000081e8b0 [b] */
extern void *_ZL4cRed;
/* @000000000081e930 [b] */
extern void *_ZL4cRed;
/* @000000000081e9b0 [b] */
extern void *_ZL4cRed;
/* @000000000081ea30 [b] */
extern void *_ZL4cRed;
/* @000000000081eab0 [b] */
extern void *_ZL4cRed;
/* @00000000008201c0 [b] */
extern void *_ZL4cRed;
/* @0000000000820410 [b] */
extern void *_ZL4cRed;
/* @0000000000820630 [b] */
extern void *_ZL4cRed;
/* @00000000008207a0 [b] */
extern void *_ZL4cRed;
/* @0000000000820850 [b] */
extern void *_ZL4cRed;
/* @00000000008208d0 [b] */
extern void *_ZL4cRed;
/* @0000000000820950 [b] */
extern void *_ZL4cRed;
/* @00000000008209e0 [b] */
extern void *_ZL4cRed;
/* @0000000000820c30 [b] */
extern void *_ZL4cRed;
/* @0000000000820ca0 [b] */
extern void *_ZL4cRed;
/* @0000000000820e60 [b] */
extern void *_ZL4cRed;
/* @0000000000820ee0 [b] */
extern void *_ZL4cRed;
/* @0000000000821020 [b] */
extern void *_ZL4cRed;
/* @0000000000821110 [b] */
extern void *_ZL4cRed;
/* @0000000000821190 [b] */
extern void *_ZL4cRed;
/* @0000000000821220 [b] */
extern void *_ZL4cRed;
/* @0000000000822300 [b] */
extern void *_ZL4cRed;
/* @0000000000822440 [b] */
extern void *_ZL4cRed;
/* @00000000008224f0 [b] */
extern void *_ZL4cRed;
/* @0000000000822570 [b] */
extern void *_ZL4cRed;
/* @0000000000822690 [b] */
extern void *_ZL4cRed;
/* @00000000008227b0 [b] */
extern void *_ZL4cRed;
/* @0000000000822910 [b] */
extern void *_ZL4cRed;
/* @0000000000822990 [b] */
extern void *_ZL4cRed;
/* @0000000000822a40 [b] */
extern void *_ZL4cRed;
/* @0000000000822ac0 [b] */
extern void *_ZL4cRed;
/* @0000000000822b40 [b] */
extern void *_ZL4cRed;
/* @0000000000822bc0 [b] */
extern void *_ZL4cRed;
/* @0000000000822c40 [b] */
extern void *_ZL4cRed;
/* @0000000000822cd0 [b] */
extern void *_ZL4cRed;
/* @0000000000822d50 [b] */
extern void *_ZL4cRed;
/* @0000000000822dd0 [b] */
extern void *_ZL4cRed;
/* @0000000000822e50 [b] */
extern void *_ZL4cRed;
/* @0000000000822ef0 [b] */
extern void *_ZL4cRed;
/* @0000000000822fc0 [b] */
extern void *_ZL4cRed;
/* @0000000000823070 [b] */
extern void *_ZL4cRed;
/* @0000000000823100 [b] */
extern void *_ZL4cRed;
/* @00000000008231b0 [b] */
extern void *_ZL4cRed;
/* @0000000000823240 [b] */
extern void *_ZL4cRed;
/* @00000000008232f0 [b] */
extern void *_ZL4cRed;
/* @00000000008233c0 [b] */
extern void *_ZL4cRed;
/* @0000000000823440 [b] */
extern void *_ZL4cRed;
/* @00000000008234c0 [b] */
extern void *_ZL4cRed;
/* @0000000000823540 [b] */
extern void *_ZL4cRed;
/* @00000000008235c0 [b] */
extern void *_ZL4cRed;
/* @00000000008240c0 [b] */
extern void *_ZL4cRed;
/* @0000000000824cb0 [b] */
extern void *_ZL4cRed;
/* @0000000000818680 [b] */
extern void *_ZL5cBlue;
/* @0000000000818730 [b] */
extern void *_ZL5cBlue;
/* @0000000000818830 [b] */
extern void *_ZL5cBlue;
/* @00000000008188b0 [b] */
extern void *_ZL5cBlue;
/* @0000000000818930 [b] */
extern void *_ZL5cBlue;
/* @00000000008189b0 [b] */
extern void *_ZL5cBlue;
/* @0000000000818b00 [b] */
extern void *_ZL5cBlue;
/* @0000000000818b80 [b] */
extern void *_ZL5cBlue;
/* @0000000000818c00 [b] */
extern void *_ZL5cBlue;
/* @0000000000818c80 [b] */
extern void *_ZL5cBlue;
/* @0000000000818d00 [b] */
extern void *_ZL5cBlue;
/* @0000000000818d80 [b] */
extern void *_ZL5cBlue;
/* @0000000000818e10 [b] */
extern void *_ZL5cBlue;
/* @0000000000818ea0 [b] */
extern void *_ZL5cBlue;
/* @0000000000818f70 [b] */
extern void *_ZL5cBlue;
/* @0000000000818fe0 [b] */
extern void *_ZL5cBlue;
/* @0000000000819060 [b] */
extern void *_ZL5cBlue;
/* @0000000000819130 [b] */
extern void *_ZL5cBlue;
/* @00000000008193c0 [b] */
extern void *_ZL5cBlue;
/* @0000000000819440 [b] */
extern void *_ZL5cBlue;
/* @00000000008194c0 [b] */
extern void *_ZL5cBlue;
/* @0000000000819550 [b] */
extern void *_ZL5cBlue;
/* @00000000008195c0 [b] */
extern void *_ZL5cBlue;
/* @0000000000819640 [b] */
extern void *_ZL5cBlue;
/* @00000000008196c0 [b] */
extern void *_ZL5cBlue;
/* @0000000000819750 [b] */
extern void *_ZL5cBlue;
/* @0000000000819800 [b] */
extern void *_ZL5cBlue;
/* @0000000000819880 [b] */
extern void *_ZL5cBlue;
/* @0000000000819910 [b] */
extern void *_ZL5cBlue;
/* @00000000008199d0 [b] */
extern void *_ZL5cBlue;
/* @0000000000819b80 [b] */
extern void *_ZL5cBlue;
/* @0000000000819cb0 [b] */
extern void *_ZL5cBlue;
/* @0000000000819d40 [b] */
extern void *_ZL5cBlue;
/* @0000000000819dc0 [b] */
extern void *_ZL5cBlue;
/* @0000000000819e60 [b] */
extern void *_ZL5cBlue;
/* @000000000081aac0 [b] */
extern void *_ZL5cBlue;
/* @000000000081b030 [b] */
extern void *_ZL5cBlue;
/* @000000000081b0d0 [b] */
extern void *_ZL5cBlue;
/* @000000000081b160 [b] */
extern void *_ZL5cBlue;
/* @000000000081b9b0 [b] */
extern void *_ZL5cBlue;
/* @000000000081ba30 [b] */
extern void *_ZL5cBlue;
/* @000000000081bae0 [b] */
extern void *_ZL5cBlue;
/* @000000000081bfb0 [b] */
extern void *_ZL5cBlue;
/* @000000000081c050 [b] */
extern void *_ZL5cBlue;
/* @000000000081c100 [b] */
extern void *_ZL5cBlue;
/* @000000000081c2a0 [b] */
extern void *_ZL5cBlue;
/* @000000000081c3c0 [b] */
extern void *_ZL5cBlue;
/* @000000000081c440 [b] */
extern void *_ZL5cBlue;
/* @000000000081c4c0 [b] */
extern void *_ZL5cBlue;
/* @000000000081c5c0 [b] */
extern void *_ZL5cBlue;
/* @000000000081c640 [b] */
extern void *_ZL5cBlue;
/* @000000000081c890 [b] */
extern void *_ZL5cBlue;
/* @000000000081c900 [b] */
extern void *_ZL5cBlue;
/* @000000000081c980 [b] */
extern void *_ZL5cBlue;
/* @000000000081ca00 [b] */
extern void *_ZL5cBlue;
/* @000000000081e850 [b] */
extern void *_ZL5cBlue;
/* @000000000081e8d0 [b] */
extern void *_ZL5cBlue;
/* @000000000081e950 [b] */
extern void *_ZL5cBlue;
/* @000000000081e9d0 [b] */
extern void *_ZL5cBlue;
/* @000000000081ea50 [b] */
extern void *_ZL5cBlue;
/* @000000000081ead0 [b] */
extern void *_ZL5cBlue;
/* @00000000008201e0 [b] */
extern void *_ZL5cBlue;
/* @0000000000820480 [b] */
extern void *_ZL5cBlue;
/* @0000000000820650 [b] */
extern void *_ZL5cBlue;
/* @00000000008207c0 [b] */
extern void *_ZL5cBlue;
/* @0000000000820870 [b] */
extern void *_ZL5cBlue;
/* @00000000008208f0 [b] */
extern void *_ZL5cBlue;
/* @0000000000820970 [b] */
extern void *_ZL5cBlue;
/* @0000000000820a00 [b] */
extern void *_ZL5cBlue;
/* @0000000000820c50 [b] */
extern void *_ZL5cBlue;
/* @0000000000820cc0 [b] */
extern void *_ZL5cBlue;
/* @0000000000820e80 [b] */
extern void *_ZL5cBlue;
/* @0000000000820f00 [b] */
extern void *_ZL5cBlue;
/* @0000000000821040 [b] */
extern void *_ZL5cBlue;
/* @0000000000821130 [b] */
extern void *_ZL5cBlue;
/* @00000000008211b0 [b] */
extern void *_ZL5cBlue;
/* @0000000000821240 [b] */
extern void *_ZL5cBlue;
/* @0000000000822320 [b] */
extern void *_ZL5cBlue;
/* @0000000000822460 [b] */
extern void *_ZL5cBlue;
/* @0000000000822510 [b] */
extern void *_ZL5cBlue;
/* @0000000000822590 [b] */
extern void *_ZL5cBlue;
/* @00000000008226b0 [b] */
extern void *_ZL5cBlue;
/* @00000000008227d0 [b] */
extern void *_ZL5cBlue;
/* @0000000000822930 [b] */
extern void *_ZL5cBlue;
/* @00000000008229b0 [b] */
extern void *_ZL5cBlue;
/* @0000000000822a50 [b] */
extern void *_ZL5cBlue;
/* @0000000000822ae0 [b] */
extern void *_ZL5cBlue;
/* @0000000000822b60 [b] */
extern void *_ZL5cBlue;
/* @0000000000822be0 [b] */
extern void *_ZL5cBlue;
/* @0000000000822c60 [b] */
extern void *_ZL5cBlue;
/* @0000000000822cf0 [b] */
extern void *_ZL5cBlue;
/* @0000000000822d70 [b] */
extern void *_ZL5cBlue;
/* @0000000000822df0 [b] */
extern void *_ZL5cBlue;
/* @0000000000822e70 [b] */
extern void *_ZL5cBlue;
/* @0000000000822f10 [b] */
extern void *_ZL5cBlue;
/* @0000000000822fe0 [b] */
extern void *_ZL5cBlue;
/* @0000000000823090 [b] */
extern void *_ZL5cBlue;
/* @0000000000823120 [b] */
extern void *_ZL5cBlue;
/* @00000000008231d0 [b] */
extern void *_ZL5cBlue;
/* @0000000000823260 [b] */
extern void *_ZL5cBlue;
/* @0000000000823310 [b] */
extern void *_ZL5cBlue;
/* @00000000008233e0 [b] */
extern void *_ZL5cBlue;
/* @0000000000823460 [b] */
extern void *_ZL5cBlue;
/* @00000000008234e0 [b] */
extern void *_ZL5cBlue;
/* @0000000000823560 [b] */
extern void *_ZL5cBlue;
/* @00000000008235e0 [b] */
extern void *_ZL5cBlue;
/* @00000000008240e0 [b] */
extern void *_ZL5cBlue;
/* @0000000000824cd0 [b] */
extern void *_ZL5cBlue;
/* @00000000005d5464 [r] */
extern void *_ZL6GLCull;
/* @0000000000818630 [b] */
extern void *_ZL6cBlack;
/* @00000000008186e0 [b] */
extern void *_ZL6cBlack;
/* @00000000008187e0 [b] */
extern void *_ZL6cBlack;
/* @0000000000818860 [b] */
extern void *_ZL6cBlack;
/* @00000000008188e0 [b] */
extern void *_ZL6cBlack;
/* @0000000000818960 [b] */
extern void *_ZL6cBlack;
/* @0000000000818ab0 [b] */
extern void *_ZL6cBlack;
/* @0000000000818b30 [b] */
extern void *_ZL6cBlack;
/* @0000000000818bb0 [b] */
extern void *_ZL6cBlack;
/* @0000000000818c30 [b] */
extern void *_ZL6cBlack;
/* @0000000000818cb0 [b] */
extern void *_ZL6cBlack;
/* @0000000000818d30 [b] */
extern void *_ZL6cBlack;
/* @0000000000818dc0 [b] */
extern void *_ZL6cBlack;
/* @0000000000818e50 [b] */
extern void *_ZL6cBlack;
/* @0000000000818f20 [b] */
extern void *_ZL6cBlack;
/* @0000000000818f90 [b] */
extern void *_ZL6cBlack;
/* @0000000000819010 [b] */
extern void *_ZL6cBlack;
/* @00000000008190d0 [b] */
extern void *_ZL6cBlack;
/* @0000000000819370 [b] */
extern void *_ZL6cBlack;
/* @00000000008193f0 [b] */
extern void *_ZL6cBlack;
/* @0000000000819470 [b] */
extern void *_ZL6cBlack;
/* @0000000000819510 [b] */
extern void *_ZL6cBlack;
/* @0000000000819570 [b] */
extern void *_ZL6cBlack;
/* @00000000008195f0 [b] */
extern void *_ZL6cBlack;
/* @0000000000819670 [b] */
extern void *_ZL6cBlack;
/* @0000000000819710 [b] */
extern void *_ZL6cBlack;
/* @00000000008197b0 [b] */
extern void *_ZL6cBlack;
/* @0000000000819830 [b] */
extern void *_ZL6cBlack;
/* @00000000008198c0 [b] */
extern void *_ZL6cBlack;
/* @0000000000819980 [b] */
extern void *_ZL6cBlack;
/* @0000000000819b30 [b] */
extern void *_ZL6cBlack;
/* @0000000000819c60 [b] */
extern void *_ZL6cBlack;
/* @0000000000819cf0 [b] */
extern void *_ZL6cBlack;
/* @0000000000819d70 [b] */
extern void *_ZL6cBlack;
/* @0000000000819e10 [b] */
extern void *_ZL6cBlack;
/* @000000000081aa80 [b] */
extern void *_ZL6cBlack;
/* @000000000081afe0 [b] */
extern void *_ZL6cBlack;
/* @000000000081b080 [b] */
extern void *_ZL6cBlack;
/* @000000000081b110 [b] */
extern void *_ZL6cBlack;
/* @000000000081b960 [b] */
extern void *_ZL6cBlack;
/* @000000000081b9e0 [b] */
extern void *_ZL6cBlack;
/* @000000000081ba90 [b] */
extern void *_ZL6cBlack;
/* @000000000081bf60 [b] */
extern void *_ZL6cBlack;
/* @000000000081c020 [b] */
extern void *_ZL6cBlack;
/* @000000000081c0b0 [b] */
extern void *_ZL6cBlack;
/* @000000000081c250 [b] */
extern void *_ZL6cBlack;
/* @000000000081c370 [b] */
extern void *_ZL6cBlack;
/* @000000000081c3f0 [b] */
extern void *_ZL6cBlack;
/* @000000000081c470 [b] */
extern void *_ZL6cBlack;
/* @000000000081c570 [b] */
extern void *_ZL6cBlack;
/* @000000000081c5f0 [b] */
extern void *_ZL6cBlack;
/* @000000000081c830 [b] */
extern void *_ZL6cBlack;
/* @000000000081c8b0 [b] */
extern void *_ZL6cBlack;
/* @000000000081c930 [b] */
extern void *_ZL6cBlack;
/* @000000000081c9b0 [b] */
extern void *_ZL6cBlack;
/* @000000000081e800 [b] */
extern void *_ZL6cBlack;
/* @000000000081e880 [b] */
extern void *_ZL6cBlack;
/* @000000000081e900 [b] */
extern void *_ZL6cBlack;
/* @000000000081e980 [b] */
extern void *_ZL6cBlack;
/* @000000000081ea00 [b] */
extern void *_ZL6cBlack;
/* @000000000081ea80 [b] */
extern void *_ZL6cBlack;
/* @0000000000820190 [b] */
extern void *_ZL6cBlack;
/* @0000000000820430 [b] */
extern void *_ZL6cBlack;
/* @0000000000820600 [b] */
extern void *_ZL6cBlack;
/* @0000000000820770 [b] */
extern void *_ZL6cBlack;
/* @0000000000820820 [b] */
extern void *_ZL6cBlack;
/* @00000000008208a0 [b] */
extern void *_ZL6cBlack;
/* @0000000000820920 [b] */
extern void *_ZL6cBlack;
/* @00000000008209b0 [b] */
extern void *_ZL6cBlack;
/* @0000000000820c00 [b] */
extern void *_ZL6cBlack;
/* @0000000000820c60 [b] */
extern void *_ZL6cBlack;
/* @0000000000820e30 [b] */
extern void *_ZL6cBlack;
/* @0000000000820eb0 [b] */
extern void *_ZL6cBlack;
/* @0000000000820ff0 [b] */
extern void *_ZL6cBlack;
/* @00000000008210e0 [b] */
extern void *_ZL6cBlack;
/* @0000000000821160 [b] */
extern void *_ZL6cBlack;
/* @00000000008211f0 [b] */
extern void *_ZL6cBlack;
/* @00000000008222d0 [b] */
extern void *_ZL6cBlack;
/* @0000000000822410 [b] */
extern void *_ZL6cBlack;
/* @00000000008224c0 [b] */
extern void *_ZL6cBlack;
/* @0000000000822540 [b] */
extern void *_ZL6cBlack;
/* @0000000000822660 [b] */
extern void *_ZL6cBlack;
/* @0000000000822780 [b] */
extern void *_ZL6cBlack;
/* @00000000008228e0 [b] */
extern void *_ZL6cBlack;
/* @0000000000822960 [b] */
extern void *_ZL6cBlack;
/* @0000000000822a20 [b] */
extern void *_ZL6cBlack;
/* @0000000000822a90 [b] */
extern void *_ZL6cBlack;
/* @0000000000822b10 [b] */
extern void *_ZL6cBlack;
/* @0000000000822b90 [b] */
extern void *_ZL6cBlack;
/* @0000000000822c10 [b] */
extern void *_ZL6cBlack;
/* @0000000000822ca0 [b] */
extern void *_ZL6cBlack;
/* @0000000000822d20 [b] */
extern void *_ZL6cBlack;
/* @0000000000822da0 [b] */
extern void *_ZL6cBlack;
/* @0000000000822e20 [b] */
extern void *_ZL6cBlack;
/* @0000000000822ec0 [b] */
extern void *_ZL6cBlack;
/* @0000000000822f90 [b] */
extern void *_ZL6cBlack;
/* @0000000000823040 [b] */
extern void *_ZL6cBlack;
/* @00000000008230d0 [b] */
extern void *_ZL6cBlack;
/* @0000000000823180 [b] */
extern void *_ZL6cBlack;
/* @0000000000823210 [b] */
extern void *_ZL6cBlack;
/* @00000000008232c0 [b] */
extern void *_ZL6cBlack;
/* @0000000000823390 [b] */
extern void *_ZL6cBlack;
/* @0000000000823410 [b] */
extern void *_ZL6cBlack;
/* @0000000000823490 [b] */
extern void *_ZL6cBlack;
/* @0000000000823510 [b] */
extern void *_ZL6cBlack;
/* @0000000000823590 [b] */
extern void *_ZL6cBlack;
/* @0000000000824090 [b] */
extern void *_ZL6cBlack;
/* @0000000000824c80 [b] */
extern void *_ZL6cBlack;
/* @0000000000818670 [b] */
extern void *_ZL6cGreen;
/* @0000000000818720 [b] */
extern void *_ZL6cGreen;
/* @0000000000818820 [b] */
extern void *_ZL6cGreen;
/* @00000000008188a0 [b] */
extern void *_ZL6cGreen;
/* @0000000000818920 [b] */
extern void *_ZL6cGreen;
/* @00000000008189a0 [b] */
extern void *_ZL6cGreen;
/* @0000000000818af0 [b] */
extern void *_ZL6cGreen;
/* @0000000000818b70 [b] */
extern void *_ZL6cGreen;
/* @0000000000818bf0 [b] */
extern void *_ZL6cGreen;
/* @0000000000818c70 [b] */
extern void *_ZL6cGreen;
/* @0000000000818cf0 [b] */
extern void *_ZL6cGreen;
/* @0000000000818d70 [b] */
extern void *_ZL6cGreen;
/* @0000000000818e00 [b] */
extern void *_ZL6cGreen;
/* @0000000000818e90 [b] */
extern void *_ZL6cGreen;
/* @0000000000818f60 [b] */
extern void *_ZL6cGreen;
/* @0000000000818fd0 [b] */
extern void *_ZL6cGreen;
/* @0000000000819050 [b] */
extern void *_ZL6cGreen;
/* @0000000000819120 [b] */
extern void *_ZL6cGreen;
/* @00000000008193b0 [b] */
extern void *_ZL6cGreen;
/* @0000000000819430 [b] */
extern void *_ZL6cGreen;
/* @00000000008194b0 [b] */
extern void *_ZL6cGreen;
/* @0000000000819540 [b] */
extern void *_ZL6cGreen;
/* @00000000008195b0 [b] */
extern void *_ZL6cGreen;
/* @0000000000819630 [b] */
extern void *_ZL6cGreen;
/* @00000000008196b0 [b] */
extern void *_ZL6cGreen;
/* @0000000000819740 [b] */
extern void *_ZL6cGreen;
/* @00000000008197f0 [b] */
extern void *_ZL6cGreen;
/* @0000000000819870 [b] */
extern void *_ZL6cGreen;
/* @0000000000819900 [b] */
extern void *_ZL6cGreen;
/* @00000000008199c0 [b] */
extern void *_ZL6cGreen;
/* @0000000000819b70 [b] */
extern void *_ZL6cGreen;
/* @0000000000819ca0 [b] */
extern void *_ZL6cGreen;
/* @0000000000819d30 [b] */
extern void *_ZL6cGreen;
/* @0000000000819db0 [b] */
extern void *_ZL6cGreen;
/* @0000000000819e50 [b] */
extern void *_ZL6cGreen;
/* @000000000081aab0 [b] */
extern void *_ZL6cGreen;
/* @000000000081b020 [b] */
extern void *_ZL6cGreen;
/* @000000000081b0c0 [b] */
extern void *_ZL6cGreen;
/* @000000000081b150 [b] */
extern void *_ZL6cGreen;
/* @000000000081b9a0 [b] */
extern void *_ZL6cGreen;
/* @000000000081ba20 [b] */
extern void *_ZL6cGreen;
/* @000000000081bad0 [b] */
extern void *_ZL6cGreen;
/* @000000000081bfa0 [b] */
extern void *_ZL6cGreen;
/* @000000000081c040 [b] */
extern void *_ZL6cGreen;
/* @000000000081c0f0 [b] */
extern void *_ZL6cGreen;
/* @000000000081c290 [b] */
extern void *_ZL6cGreen;
/* @000000000081c3b0 [b] */
extern void *_ZL6cGreen;
/* @000000000081c430 [b] */
extern void *_ZL6cGreen;
/* @000000000081c4b0 [b] */
extern void *_ZL6cGreen;
/* @000000000081c5b0 [b] */
extern void *_ZL6cGreen;
/* @000000000081c630 [b] */
extern void *_ZL6cGreen;
/* @000000000081c880 [b] */
extern void *_ZL6cGreen;
/* @000000000081c8f0 [b] */
extern void *_ZL6cGreen;
/* @000000000081c970 [b] */
extern void *_ZL6cGreen;
/* @000000000081c9f0 [b] */
extern void *_ZL6cGreen;
/* @000000000081e840 [b] */
extern void *_ZL6cGreen;
/* @000000000081e8c0 [b] */
extern void *_ZL6cGreen;
/* @000000000081e940 [b] */
extern void *_ZL6cGreen;
/* @000000000081e9c0 [b] */
extern void *_ZL6cGreen;
/* @000000000081ea40 [b] */
extern void *_ZL6cGreen;
/* @000000000081eac0 [b] */
extern void *_ZL6cGreen;
/* @00000000008201d0 [b] */
extern void *_ZL6cGreen;
/* @0000000000820470 [b] */
extern void *_ZL6cGreen;
/* @0000000000820640 [b] */
extern void *_ZL6cGreen;
/* @00000000008207b0 [b] */
extern void *_ZL6cGreen;
/* @0000000000820860 [b] */
extern void *_ZL6cGreen;
/* @00000000008208e0 [b] */
extern void *_ZL6cGreen;
/* @0000000000820960 [b] */
extern void *_ZL6cGreen;
/* @00000000008209f0 [b] */
extern void *_ZL6cGreen;
/* @0000000000820c40 [b] */
extern void *_ZL6cGreen;
/* @0000000000820cb0 [b] */
extern void *_ZL6cGreen;
/* @0000000000820e70 [b] */
extern void *_ZL6cGreen;
/* @0000000000820ef0 [b] */
extern void *_ZL6cGreen;
/* @0000000000821030 [b] */
extern void *_ZL6cGreen;
/* @0000000000821120 [b] */
extern void *_ZL6cGreen;
/* @00000000008211a0 [b] */
extern void *_ZL6cGreen;
/* @0000000000821230 [b] */
extern void *_ZL6cGreen;
/* @0000000000822310 [b] */
extern void *_ZL6cGreen;
/* @0000000000822450 [b] */
extern void *_ZL6cGreen;
/* @0000000000822500 [b] */
extern void *_ZL6cGreen;
/* @0000000000822580 [b] */
extern void *_ZL6cGreen;
/* @00000000008226a0 [b] */
extern void *_ZL6cGreen;
/* @00000000008227c0 [b] */
extern void *_ZL6cGreen;
/* @0000000000822920 [b] */
extern void *_ZL6cGreen;
/* @00000000008229a0 [b] */
extern void *_ZL6cGreen;
/* @00000000008229f0 [b] */
extern void *_ZL6cGreen;
/* @0000000000822ad0 [b] */
extern void *_ZL6cGreen;
/* @0000000000822b50 [b] */
extern void *_ZL6cGreen;
/* @0000000000822bd0 [b] */
extern void *_ZL6cGreen;
/* @0000000000822c50 [b] */
extern void *_ZL6cGreen;
/* @0000000000822ce0 [b] */
extern void *_ZL6cGreen;
/* @0000000000822d60 [b] */
extern void *_ZL6cGreen;
/* @0000000000822de0 [b] */
extern void *_ZL6cGreen;
/* @0000000000822e60 [b] */
extern void *_ZL6cGreen;
/* @0000000000822f00 [b] */
extern void *_ZL6cGreen;
/* @0000000000822fd0 [b] */
extern void *_ZL6cGreen;
/* @0000000000823080 [b] */
extern void *_ZL6cGreen;
/* @0000000000823110 [b] */
extern void *_ZL6cGreen;
/* @00000000008231c0 [b] */
extern void *_ZL6cGreen;
/* @0000000000823250 [b] */
extern void *_ZL6cGreen;
/* @0000000000823300 [b] */
extern void *_ZL6cGreen;
/* @00000000008233d0 [b] */
extern void *_ZL6cGreen;
/* @0000000000823450 [b] */
extern void *_ZL6cGreen;
/* @00000000008234d0 [b] */
extern void *_ZL6cGreen;
/* @0000000000823550 [b] */
extern void *_ZL6cGreen;
/* @00000000008235d0 [b] */
extern void *_ZL6cGreen;
/* @00000000008240d0 [b] */
extern void *_ZL6cGreen;
/* @0000000000824cc0 [b] */
extern void *_ZL6cGreen;
/* @0000000000818620 [b] */
extern void *_ZL6cWhite;
/* @00000000008186d0 [b] */
extern void *_ZL6cWhite;
/* @00000000008187d0 [b] */
extern void *_ZL6cWhite;
/* @0000000000818850 [b] */
extern void *_ZL6cWhite;
/* @00000000008188d0 [b] */
extern void *_ZL6cWhite;
/* @0000000000818950 [b] */
extern void *_ZL6cWhite;
/* @0000000000818aa0 [b] */
extern void *_ZL6cWhite;
/* @0000000000818b20 [b] */
extern void *_ZL6cWhite;
/* @0000000000818ba0 [b] */
extern void *_ZL6cWhite;
/* @0000000000818c20 [b] */
extern void *_ZL6cWhite;
/* @0000000000818ca0 [b] */
extern void *_ZL6cWhite;
/* @0000000000818d20 [b] */
extern void *_ZL6cWhite;
/* @0000000000818db0 [b] */
extern void *_ZL6cWhite;
/* @0000000000818e30 [b] */
extern void *_ZL6cWhite;
/* @0000000000818ef0 [b] */
extern void *_ZL6cWhite;
/* @0000000000818f80 [b] */
extern void *_ZL6cWhite;
/* @0000000000819000 [b] */
extern void *_ZL6cWhite;
/* @00000000008190e0 [b] */
extern void *_ZL6cWhite;
/* @0000000000819360 [b] */
extern void *_ZL6cWhite;
/* @00000000008193e0 [b] */
extern void *_ZL6cWhite;
/* @0000000000819460 [b] */
extern void *_ZL6cWhite;
/* @00000000008194e0 [b] */
extern void *_ZL6cWhite;
/* @0000000000819560 [b] */
extern void *_ZL6cWhite;
/* @00000000008195e0 [b] */
extern void *_ZL6cWhite;
/* @0000000000819660 [b] */
extern void *_ZL6cWhite;
/* @00000000008196e0 [b] */
extern void *_ZL6cWhite;
/* @00000000008197a0 [b] */
extern void *_ZL6cWhite;
/* @0000000000819820 [b] */
extern void *_ZL6cWhite;
/* @00000000008198b0 [b] */
extern void *_ZL6cWhite;
/* @0000000000819970 [b] */
extern void *_ZL6cWhite;
/* @0000000000819b20 [b] */
extern void *_ZL6cWhite;
/* @0000000000819c50 [b] */
extern void *_ZL6cWhite;
/* @0000000000819ce0 [b] */
extern void *_ZL6cWhite;
/* @0000000000819d60 [b] */
extern void *_ZL6cWhite;
/* @0000000000819e00 [b] */
extern void *_ZL6cWhite;
/* @000000000081a960 [b] */
extern void *_ZL6cWhite;
/* @000000000081afd0 [b] */
extern void *_ZL6cWhite;
/* @000000000081b070 [b] */
extern void *_ZL6cWhite;
/* @000000000081b100 [b] */
extern void *_ZL6cWhite;
/* @000000000081b950 [b] */
extern void *_ZL6cWhite;
/* @000000000081b9d0 [b] */
extern void *_ZL6cWhite;
/* @000000000081ba80 [b] */
extern void *_ZL6cWhite;
/* @000000000081bf50 [b] */
extern void *_ZL6cWhite;
/* @000000000081c000 [b] */
extern void *_ZL6cWhite;
/* @000000000081c0a0 [b] */
extern void *_ZL6cWhite;
/* @000000000081c240 [b] */
extern void *_ZL6cWhite;
/* @000000000081c360 [b] */
extern void *_ZL6cWhite;
/* @000000000081c3e0 [b] */
extern void *_ZL6cWhite;
/* @000000000081c460 [b] */
extern void *_ZL6cWhite;
/* @000000000081c560 [b] */
extern void *_ZL6cWhite;
/* @000000000081c5e0 [b] */
extern void *_ZL6cWhite;
/* @000000000081c7f0 [b] */
extern void *_ZL6cWhite;
/* @000000000081c8a0 [b] */
extern void *_ZL6cWhite;
/* @000000000081c920 [b] */
extern void *_ZL6cWhite;
/* @000000000081c9a0 [b] */
extern void *_ZL6cWhite;
/* @000000000081e7f0 [b] */
extern void *_ZL6cWhite;
/* @000000000081e870 [b] */
extern void *_ZL6cWhite;
/* @000000000081e8f0 [b] */
extern void *_ZL6cWhite;
/* @000000000081e970 [b] */
extern void *_ZL6cWhite;
/* @000000000081e9f0 [b] */
extern void *_ZL6cWhite;
/* @000000000081ea70 [b] */
extern void *_ZL6cWhite;
/* @0000000000820180 [b] */
extern void *_ZL6cWhite;
/* @0000000000820450 [b] */
extern void *_ZL6cWhite;
/* @00000000008205f0 [b] */
extern void *_ZL6cWhite;
/* @0000000000820760 [b] */
extern void *_ZL6cWhite;
/* @0000000000820810 [b] */
extern void *_ZL6cWhite;
/* @0000000000820890 [b] */
extern void *_ZL6cWhite;
/* @0000000000820910 [b] */
extern void *_ZL6cWhite;
/* @00000000008209a0 [b] */
extern void *_ZL6cWhite;
/* @0000000000820bf0 [b] */
extern void *_ZL6cWhite;
/* @0000000000820c70 [b] */
extern void *_ZL6cWhite;
/* @0000000000820e20 [b] */
extern void *_ZL6cWhite;
/* @0000000000820ea0 [b] */
extern void *_ZL6cWhite;
/* @0000000000820fe0 [b] */
extern void *_ZL6cWhite;
/* @00000000008210d0 [b] */
extern void *_ZL6cWhite;
/* @0000000000821150 [b] */
extern void *_ZL6cWhite;
/* @00000000008211e0 [b] */
extern void *_ZL6cWhite;
/* @00000000008222c0 [b] */
extern void *_ZL6cWhite;
/* @0000000000822400 [b] */
extern void *_ZL6cWhite;
/* @00000000008224b0 [b] */
extern void *_ZL6cWhite;
/* @0000000000822530 [b] */
extern void *_ZL6cWhite;
/* @0000000000822650 [b] */
extern void *_ZL6cWhite;
/* @0000000000822770 [b] */
extern void *_ZL6cWhite;
/* @00000000008228c0 [b] */
extern void *_ZL6cWhite;
/* @0000000000822950 [b] */
extern void *_ZL6cWhite;
/* @0000000000822a10 [b] */
extern void *_ZL6cWhite;
/* @0000000000822aa0 [b] */
extern void *_ZL6cWhite;
/* @0000000000822b00 [b] */
extern void *_ZL6cWhite;
/* @0000000000822b80 [b] */
extern void *_ZL6cWhite;
/* @0000000000822c00 [b] */
extern void *_ZL6cWhite;
/* @0000000000822c90 [b] */
extern void *_ZL6cWhite;
/* @0000000000822d10 [b] */
extern void *_ZL6cWhite;
/* @0000000000822d90 [b] */
extern void *_ZL6cWhite;
/* @0000000000822e10 [b] */
extern void *_ZL6cWhite;
/* @0000000000822eb0 [b] */
extern void *_ZL6cWhite;
/* @0000000000822f80 [b] */
extern void *_ZL6cWhite;
/* @0000000000823030 [b] */
extern void *_ZL6cWhite;
/* @00000000008230c0 [b] */
extern void *_ZL6cWhite;
/* @0000000000823170 [b] */
extern void *_ZL6cWhite;
/* @0000000000823200 [b] */
extern void *_ZL6cWhite;
/* @00000000008232b0 [b] */
extern void *_ZL6cWhite;
/* @0000000000823380 [b] */
extern void *_ZL6cWhite;
/* @0000000000823400 [b] */
extern void *_ZL6cWhite;
/* @0000000000823480 [b] */
extern void *_ZL6cWhite;
/* @0000000000823500 [b] */
extern void *_ZL6cWhite;
/* @0000000000823580 [b] */
extern void *_ZL6cWhite;
/* @0000000000824080 [b] */
extern void *_ZL6cWhite;
/* @0000000000824c70 [b] */
extern void *_ZL6cWhite;
/* @00000000005d5320 [r] */
extern void *_ZL7GLBlend;
/* @0000000000818640 [b] */
extern void *_ZL7cOrange;
/* @00000000008186f0 [b] */
extern void *_ZL7cOrange;
/* @00000000008187f0 [b] */
extern void *_ZL7cOrange;
/* @0000000000818870 [b] */
extern void *_ZL7cOrange;
/* @00000000008188f0 [b] */
extern void *_ZL7cOrange;
/* @0000000000818970 [b] */
extern void *_ZL7cOrange;
/* @0000000000818ac0 [b] */
extern void *_ZL7cOrange;
/* @0000000000818b40 [b] */
extern void *_ZL7cOrange;
/* @0000000000818bc0 [b] */
extern void *_ZL7cOrange;
/* @0000000000818c40 [b] */
extern void *_ZL7cOrange;
/* @0000000000818cc0 [b] */
extern void *_ZL7cOrange;
/* @0000000000818d40 [b] */
extern void *_ZL7cOrange;
/* @0000000000818dd0 [b] */
extern void *_ZL7cOrange;
/* @0000000000818e60 [b] */
extern void *_ZL7cOrange;
/* @0000000000818f30 [b] */
extern void *_ZL7cOrange;
/* @0000000000818fa0 [b] */
extern void *_ZL7cOrange;
/* @0000000000819020 [b] */
extern void *_ZL7cOrange;
/* @00000000008190f0 [b] */
extern void *_ZL7cOrange;
/* @0000000000819380 [b] */
extern void *_ZL7cOrange;
/* @0000000000819400 [b] */
extern void *_ZL7cOrange;
/* @0000000000819480 [b] */
extern void *_ZL7cOrange;
/* @0000000000819500 [b] */
extern void *_ZL7cOrange;
/* @0000000000819580 [b] */
extern void *_ZL7cOrange;
/* @0000000000819600 [b] */
extern void *_ZL7cOrange;
/* @0000000000819680 [b] */
extern void *_ZL7cOrange;
/* @0000000000819720 [b] */
extern void *_ZL7cOrange;
/* @00000000008197c0 [b] */
extern void *_ZL7cOrange;
/* @0000000000819840 [b] */
extern void *_ZL7cOrange;
/* @00000000008198d0 [b] */
extern void *_ZL7cOrange;
/* @0000000000819990 [b] */
extern void *_ZL7cOrange;
/* @0000000000819b40 [b] */
extern void *_ZL7cOrange;
/* @0000000000819c70 [b] */
extern void *_ZL7cOrange;
/* @0000000000819d00 [b] */
extern void *_ZL7cOrange;
/* @0000000000819d80 [b] */
extern void *_ZL7cOrange;
/* @0000000000819e20 [b] */
extern void *_ZL7cOrange;
/* @000000000081aa90 [b] */
extern void *_ZL7cOrange;
/* @000000000081aff0 [b] */
extern void *_ZL7cOrange;
/* @000000000081b090 [b] */
extern void *_ZL7cOrange;
/* @000000000081b120 [b] */
extern void *_ZL7cOrange;
/* @000000000081b970 [b] */
extern void *_ZL7cOrange;
/* @000000000081b9f0 [b] */
extern void *_ZL7cOrange;
/* @000000000081baa0 [b] */
extern void *_ZL7cOrange;
/* @000000000081bf70 [b] */
extern void *_ZL7cOrange;
/* @000000000081c030 [b] */
extern void *_ZL7cOrange;
/* @000000000081c0c0 [b] */
extern void *_ZL7cOrange;
/* @000000000081c260 [b] */
extern void *_ZL7cOrange;
/* @000000000081c380 [b] */
extern void *_ZL7cOrange;
/* @000000000081c400 [b] */
extern void *_ZL7cOrange;
/* @000000000081c480 [b] */
extern void *_ZL7cOrange;
/* @000000000081c580 [b] */
extern void *_ZL7cOrange;
/* @000000000081c600 [b] */
extern void *_ZL7cOrange;
/* @000000000081c850 [b] */
extern void *_ZL7cOrange;
/* @000000000081c8c0 [b] */
extern void *_ZL7cOrange;
/* @000000000081c940 [b] */
extern void *_ZL7cOrange;
/* @000000000081c9c0 [b] */
extern void *_ZL7cOrange;
/* @000000000081e810 [b] */
extern void *_ZL7cOrange;
/* @000000000081e890 [b] */
extern void *_ZL7cOrange;
/* @000000000081e910 [b] */
extern void *_ZL7cOrange;
/* @000000000081e990 [b] */
extern void *_ZL7cOrange;
/* @000000000081ea10 [b] */
extern void *_ZL7cOrange;
/* @000000000081ea90 [b] */
extern void *_ZL7cOrange;
/* @00000000008201a0 [b] */
extern void *_ZL7cOrange;
/* @0000000000820420 [b] */
extern void *_ZL7cOrange;
/* @0000000000820610 [b] */
extern void *_ZL7cOrange;
/* @0000000000820780 [b] */
extern void *_ZL7cOrange;
/* @0000000000820830 [b] */
extern void *_ZL7cOrange;
/* @00000000008208b0 [b] */
extern void *_ZL7cOrange;
/* @0000000000820930 [b] */
extern void *_ZL7cOrange;
/* @00000000008209c0 [b] */
extern void *_ZL7cOrange;
/* @0000000000820c10 [b] */
extern void *_ZL7cOrange;
/* @0000000000820c80 [b] */
extern void *_ZL7cOrange;
/* @0000000000820e40 [b] */
extern void *_ZL7cOrange;
/* @0000000000820ec0 [b] */
extern void *_ZL7cOrange;
/* @0000000000821000 [b] */
extern void *_ZL7cOrange;
/* @00000000008210f0 [b] */
extern void *_ZL7cOrange;
/* @0000000000821170 [b] */
extern void *_ZL7cOrange;
/* @0000000000821200 [b] */
extern void *_ZL7cOrange;
/* @00000000008222e0 [b] */
extern void *_ZL7cOrange;
/* @0000000000822420 [b] */
extern void *_ZL7cOrange;
/* @00000000008224d0 [b] */
extern void *_ZL7cOrange;
/* @0000000000822550 [b] */
extern void *_ZL7cOrange;
/* @0000000000822670 [b] */
extern void *_ZL7cOrange;
/* @0000000000822790 [b] */
extern void *_ZL7cOrange;
/* @00000000008228f0 [b] */
extern void *_ZL7cOrange;
/* @0000000000822970 [b] */
extern void *_ZL7cOrange;
/* @0000000000822a00 [b] */
extern void *_ZL7cOrange;
/* @0000000000822a80 [b] */
extern void *_ZL7cOrange;
/* @0000000000822b20 [b] */
extern void *_ZL7cOrange;
/* @0000000000822ba0 [b] */
extern void *_ZL7cOrange;
/* @0000000000822c20 [b] */
extern void *_ZL7cOrange;
/* @0000000000822cb0 [b] */
extern void *_ZL7cOrange;
/* @0000000000822d30 [b] */
extern void *_ZL7cOrange;
/* @0000000000822db0 [b] */
extern void *_ZL7cOrange;
/* @0000000000822e30 [b] */
extern void *_ZL7cOrange;
/* @0000000000822ed0 [b] */
extern void *_ZL7cOrange;
/* @0000000000822fa0 [b] */
extern void *_ZL7cOrange;
/* @0000000000823050 [b] */
extern void *_ZL7cOrange;
/* @00000000008230e0 [b] */
extern void *_ZL7cOrange;
/* @0000000000823190 [b] */
extern void *_ZL7cOrange;
/* @0000000000823220 [b] */
extern void *_ZL7cOrange;
/* @00000000008232d0 [b] */
extern void *_ZL7cOrange;
/* @00000000008233a0 [b] */
extern void *_ZL7cOrange;
/* @0000000000823420 [b] */
extern void *_ZL7cOrange;
/* @00000000008234a0 [b] */
extern void *_ZL7cOrange;
/* @0000000000823520 [b] */
extern void *_ZL7cOrange;
/* @00000000008235a0 [b] */
extern void *_ZL7cOrange;
/* @00000000008240a0 [b] */
extern void *_ZL7cOrange;
/* @0000000000824c90 [b] */
extern void *_ZL7cOrange;
/* @0000000000818650 [b] */
extern void *_ZL7cYellow;
/* @0000000000818700 [b] */
extern void *_ZL7cYellow;
/* @0000000000818800 [b] */
extern void *_ZL7cYellow;
/* @0000000000818880 [b] */
extern void *_ZL7cYellow;
/* @0000000000818900 [b] */
extern void *_ZL7cYellow;
/* @0000000000818980 [b] */
extern void *_ZL7cYellow;
/* @0000000000818ad0 [b] */
extern void *_ZL7cYellow;
/* @0000000000818b50 [b] */
extern void *_ZL7cYellow;
/* @0000000000818bd0 [b] */
extern void *_ZL7cYellow;
/* @0000000000818c50 [b] */
extern void *_ZL7cYellow;
/* @0000000000818cd0 [b] */
extern void *_ZL7cYellow;
/* @0000000000818d50 [b] */
extern void *_ZL7cYellow;
/* @0000000000818de0 [b] */
extern void *_ZL7cYellow;
/* @0000000000818e70 [b] */
extern void *_ZL7cYellow;
/* @0000000000818f40 [b] */
extern void *_ZL7cYellow;
/* @0000000000818fb0 [b] */
extern void *_ZL7cYellow;
/* @0000000000819030 [b] */
extern void *_ZL7cYellow;
/* @0000000000819100 [b] */
extern void *_ZL7cYellow;
/* @0000000000819390 [b] */
extern void *_ZL7cYellow;
/* @0000000000819410 [b] */
extern void *_ZL7cYellow;
/* @0000000000819490 [b] */
extern void *_ZL7cYellow;
/* @0000000000819520 [b] */
extern void *_ZL7cYellow;
/* @0000000000819590 [b] */
extern void *_ZL7cYellow;
/* @0000000000819610 [b] */
extern void *_ZL7cYellow;
/* @0000000000819690 [b] */
extern void *_ZL7cYellow;
/* @0000000000819730 [b] */
extern void *_ZL7cYellow;
/* @00000000008197d0 [b] */
extern void *_ZL7cYellow;
/* @0000000000819850 [b] */
extern void *_ZL7cYellow;
/* @00000000008198e0 [b] */
extern void *_ZL7cYellow;
/* @00000000008199a0 [b] */
extern void *_ZL7cYellow;
/* @0000000000819b50 [b] */
extern void *_ZL7cYellow;
/* @0000000000819c80 [b] */
extern void *_ZL7cYellow;
/* @0000000000819d10 [b] */
extern void *_ZL7cYellow;
/* @0000000000819d90 [b] */
extern void *_ZL7cYellow;
/* @0000000000819e30 [b] */
extern void *_ZL7cYellow;
/* @000000000081aaa0 [b] */
extern void *_ZL7cYellow;
/* @000000000081b000 [b] */
extern void *_ZL7cYellow;
/* @000000000081b0a0 [b] */
extern void *_ZL7cYellow;
/* @000000000081b130 [b] */
extern void *_ZL7cYellow;
/* @000000000081b980 [b] */
extern void *_ZL7cYellow;
/* @000000000081ba00 [b] */
extern void *_ZL7cYellow;
/* @000000000081bab0 [b] */
extern void *_ZL7cYellow;
/* @000000000081bf80 [b] */
extern void *_ZL7cYellow;
/* @000000000081bff0 [b] */
extern void *_ZL7cYellow;
/* @000000000081c0d0 [b] */
extern void *_ZL7cYellow;
/* @000000000081c270 [b] */
extern void *_ZL7cYellow;
/* @000000000081c390 [b] */
extern void *_ZL7cYellow;
/* @000000000081c410 [b] */
extern void *_ZL7cYellow;
/* @000000000081c490 [b] */
extern void *_ZL7cYellow;
/* @000000000081c590 [b] */
extern void *_ZL7cYellow;
/* @000000000081c610 [b] */
extern void *_ZL7cYellow;
/* @000000000081c860 [b] */
extern void *_ZL7cYellow;
/* @000000000081c8d0 [b] */
extern void *_ZL7cYellow;
/* @000000000081c950 [b] */
extern void *_ZL7cYellow;
/* @000000000081c9d0 [b] */
extern void *_ZL7cYellow;
/* @000000000081e820 [b] */
extern void *_ZL7cYellow;
/* @000000000081e8a0 [b] */
extern void *_ZL7cYellow;
/* @000000000081e920 [b] */
extern void *_ZL7cYellow;
/* @000000000081e9a0 [b] */
extern void *_ZL7cYellow;
/* @000000000081ea20 [b] */
extern void *_ZL7cYellow;
/* @000000000081eaa0 [b] */
extern void *_ZL7cYellow;
/* @00000000008201b0 [b] */
extern void *_ZL7cYellow;
/* @0000000000820460 [b] */
extern void *_ZL7cYellow;
/* @0000000000820620 [b] */
extern void *_ZL7cYellow;
/* @0000000000820790 [b] */
extern void *_ZL7cYellow;
/* @0000000000820840 [b] */
extern void *_ZL7cYellow;
/* @00000000008208c0 [b] */
extern void *_ZL7cYellow;
/* @0000000000820940 [b] */
extern void *_ZL7cYellow;
/* @00000000008209d0 [b] */
extern void *_ZL7cYellow;
/* @0000000000820c20 [b] */
extern void *_ZL7cYellow;
/* @0000000000820c90 [b] */
extern void *_ZL7cYellow;
/* @0000000000820e50 [b] */
extern void *_ZL7cYellow;
/* @0000000000820ed0 [b] */
extern void *_ZL7cYellow;
/* @0000000000821010 [b] */
extern void *_ZL7cYellow;
/* @0000000000821100 [b] */
extern void *_ZL7cYellow;
/* @0000000000821180 [b] */
extern void *_ZL7cYellow;
/* @0000000000821210 [b] */
extern void *_ZL7cYellow;
/* @00000000008222f0 [b] */
extern void *_ZL7cYellow;
/* @0000000000822430 [b] */
extern void *_ZL7cYellow;
/* @00000000008224e0 [b] */
extern void *_ZL7cYellow;
/* @0000000000822560 [b] */
extern void *_ZL7cYellow;
/* @0000000000822680 [b] */
extern void *_ZL7cYellow;
/* @00000000008227a0 [b] */
extern void *_ZL7cYellow;
/* @0000000000822900 [b] */
extern void *_ZL7cYellow;
/* @0000000000822980 [b] */
extern void *_ZL7cYellow;
/* @0000000000822a30 [b] */
extern void *_ZL7cYellow;
/* @0000000000822ab0 [b] */
extern void *_ZL7cYellow;
/* @0000000000822b30 [b] */
extern void *_ZL7cYellow;
/* @0000000000822bb0 [b] */
extern void *_ZL7cYellow;
/* @0000000000822c30 [b] */
extern void *_ZL7cYellow;
/* @0000000000822cc0 [b] */
extern void *_ZL7cYellow;
/* @0000000000822d40 [b] */
extern void *_ZL7cYellow;
/* @0000000000822dc0 [b] */
extern void *_ZL7cYellow;
/* @0000000000822e40 [b] */
extern void *_ZL7cYellow;
/* @0000000000822ee0 [b] */
extern void *_ZL7cYellow;
/* @0000000000822fb0 [b] */
extern void *_ZL7cYellow;
/* @0000000000823060 [b] */
extern void *_ZL7cYellow;
/* @00000000008230f0 [b] */
extern void *_ZL7cYellow;
/* @00000000008231a0 [b] */
extern void *_ZL7cYellow;
/* @0000000000823230 [b] */
extern void *_ZL7cYellow;
/* @00000000008232e0 [b] */
extern void *_ZL7cYellow;
/* @00000000008233b0 [b] */
extern void *_ZL7cYellow;
/* @0000000000823430 [b] */
extern void *_ZL7cYellow;
/* @00000000008234b0 [b] */
extern void *_ZL7cYellow;
/* @0000000000823530 [b] */
extern void *_ZL7cYellow;
/* @00000000008235b0 [b] */
extern void *_ZL7cYellow;
/* @00000000008240b0 [b] */
extern void *_ZL7cYellow;
/* @0000000000824ca0 [b] */
extern void *_ZL7cYellow;
/* @000000000081fe80 [b] */
extern void *_ZL8PixelOps;
/* @00000000005d5450 [r] */
extern void *_ZL9GLBlendOp;
/* @000000000081ba60 [b] */
extern void *_ZL9cDisabled;
/* @000000000081ba50 [b] */
extern void *_ZL9cSelected;
/* @0000000000823600 [b] */
extern void *_ZL9crc_table;
/* @0000000000824c40 [B] */
extern void *_ZN12Achievements16iNumAchievementsE;
/* @0000000000824c50 [B] */
extern void *_ZN12Achievements20pAchievementDatabaseE;
/* @0000000000823a10 [B] */
extern void *_ZN12Leaderboards11uNumLBPropsE;
/* @0000000000823a40 [B] */
extern void *_ZN12Leaderboards6pLBIDsE;
/* @0000000000823a20 [B] */
extern void *_ZN12Leaderboards8pLBPropsE;
/* @0000000000823a30 [B] */
extern void *_ZN12Leaderboards9uNumLBIDsE;
/* @0000000000822760 [B] */
extern void *_ZN12RenderLayers10pHeadLayerE;
/* @0000000000822750 [B] */
extern void *_ZN12RenderLayers10pLastLayerE;
/* @0000000000822720 [B] */
extern void *_ZN12RenderLayers19MasterRenderSectionE;
/* @000000000081c090 [B] */
extern void *_ZN12SMBPopupMenu12pSMBPopupLibE;
/* @000000000081c6c0 [B] */
extern void *_ZN13GSuperMeatBoy13pLevelPaletteE;
/* @000000000081c680 [B] */
extern void *_ZN13GSuperMeatBoy7pReplayE;
/* @000000000081afb0 [B] */
extern void *_ZN14SMBEditorForms13SMB_NEW_LEVELE;
/* @000000000081afa0 [B] */
extern void *_ZN14SMBEditorForms14SMB_LOAD_LEVELE;
/* @000000000081af90 [B] */
extern void *_ZN14SMBEditorForms14SMB_SAVE_LEVELE;
/* @000000000081af80 [B] */
extern void *_ZN14SMBEditorForms15SMB_LAYER_PROPSE;
/* @000000000081af40 [B] */
extern void *_ZN14SMBEditorForms15SMB_LEVEL_PROPSE;
/* @000000000081af30 [B] */
extern void *_ZN14SMBEditorForms15SMB_LIGHT_PROPSE;
/* @000000000081afc0 [B] */
extern void *_ZN14SMBEditorForms15SMB_MASTER_FORME;
/* @000000000081af10 [B] */
extern void *_ZN14SMBEditorForms15SMB_PIECE_PROPSE;
/* @000000000081af00 [B] */
extern void *_ZN14SMBEditorForms16SMB_ANIMAL_PROPSE;
/* @000000000081af60 [B] */
extern void *_ZN14SMBEditorForms16SMB_PLAYER_ANIMSE;
/* @000000000081af70 [B] */
extern void *_ZN14SMBEditorForms16SMB_PLAYER_PROPSE;
/* @000000000081af50 [B] */
extern void *_ZN14SMBEditorForms18SMB_PLAYER_EFFECTSE;
/* @000000000081af20 [B] */
extern void *_ZN14SMBEditorForms18SMB_WAYPOINT_PROPSE;
/* @0000000000824c60 [B] */
extern void *_ZN15BroadcastString14pStringParamDBE;
/* @0000000000824c5c [B] */
extern void *_ZN15BroadcastString15iStringDBLengthE;
/* @0000000000824c58 [B] */
extern void *_ZN15BroadcastString20iStringParamDBLengthE;
/* @0000000000824c68 [B] */
extern void *_ZN15BroadcastString9pStringDBE;
/* @0000000000820380 [B] */
extern void *_ZN16AnimationManager14pAnimCallbacksE;
/* @00000000008203e0 [B] */
extern void *_ZN16AnimationManager24AnimationCallbackSectionE;
/* @00000000008210c0 [B] */
extern void *_ZN16GraphicsSettings13_GRAPHICSFORME;
/* @0000000000818ec0 [B] */
extern void *_ZN17TileLevelLightMap16ShadowMapSectionE;
/* @00000000008207f8 [B] */
extern void *_ZN3CGR12pPos2TexDeclE;
/* @00000000008207f0 [B] */
extern void *_ZN3CGR12pPos3TexDeclE;
/* @00000000008207e8 [B] */
extern void *_ZN3CGR14pPos2ColorDeclE;
/* @0000000000820800 [B] */
extern void *_ZN3CGR17pSingleQuadStreamE;
/* @00000000008207e0 [B] */
extern void *_ZN3CGR9pPos2DeclE;
/* @0000000000823f40 [B] */
extern void *_ZN4File13strFileStringE;
/* @0000000000822340 [B] */
extern void *_ZN6Loader8pCurrNetE;
/* @00000000008225c0 [B] */
extern void *_ZN7Players22iNumPlayersInitializedE;
/* @00000000008225e0 [B] */
extern void *_ZN7Players6PlayerE;
/* @0000000000820b90 [B] */
extern void *_ZN7TEngine11dwFrameRateE;
/* @00000000008179e0 [D] */
extern void *_ZN7TEngine24dwActualFrameElapsedTimeE;
/* @0000000000820bb0 [B] */
extern void *_ZN7TEngine26dwDefaultTimeBetweenFramesE;
/* @0000000000820990 [B] */
extern void *_ZN8Cursor3D16p3DCursorTextureE;
/* @0000000000819ef8 [B] */
extern void *_ZN9SMBEditor11pScaleLabelE;
/* @0000000000819ea0 [B] */
extern void *_ZN9SMBEditor13editorSectionE;
/* @0000000000819ef0 [B] */
extern void *_ZN9SMBEditor14pRotationLabelE;
/* @0000000000819ee8 [B] */
extern void *_ZN9SMBEditor16pGridCoordsLabelE;
/* @0000000000819f00 [B] */
extern void *_ZN9SMBEditor17pCoordinatesLabelE;
/* @0000000000817fa8 [D] */
extern void *_ZN9TGraphics8GPUState19MAX_DRIVER_TEXTURESE;
/* @00000000008222a0 [B] */
extern void *_ZN9TileLevel11fnLevelLoadE;
/* @00000000008222b0 [B] */
extern void *_ZN9TileLevel11fnLevelSaveE;
/* @0000000000818440 [D] */
extern void *_ZN9TileLevel12fLevelGridWHE;
/* @0000000000822290 [B] */
extern void *_ZN9TileLevel13fnLevelVerifyE;
/* @00000000008241a0 [B] */
extern void *_ZN9UserAlert13currInterruptE;
/* @0000000000824c00 [B] */
extern void *_ZN9UserAlert18fnMessageBoxRenderE;
/* @0000000000824bf0 [B] */
extern void *_ZN9UserAlert18fnMessageBoxUpdateE;
/* @0000000000822640 [b] */
extern void *_ZStL8__ioinit;
/* @000000000081eff0 [b] */
extern void *_ZZ10gfxPresentE9frametime;
/* @0000000000824060 [b] */
extern void *_ZZ11IsMultiCorevE6retval;
/* @0000000000824050 [b] */
extern void *_ZZ11IsMultiCorevE7checked;
/* @00000000008202d0 [b] */
extern void *_ZZ11UpdateMousevE15dwLastFrameTime;
/* @00000000008202f0 [b] */
extern void *_ZZ14UpdateKeyboardvE15dwLastFrameTime;
/* @0000000000819098 [b] */
extern void *_ZZ16IsOnTrianglePartP9GRIDBLOCKRK7Vector220tagTileCollisionTypeRiE11vDiagonalUp;
/* @000000000081a9b0 [b] */
extern void *_ZZ16PlaceCameraItemsPK14tagButtonPropsPvE14vStartWorldPos;
/* @00000000005d4ba0 [r] */
extern void *_ZZ16gfxCreateTextureE12byUTGAHeader;
/* @00000000005d5200 [r] */
extern void *_ZZ18CreateOpenGLShaderPK17tagShaderCreationE12swizzle_bgra;
/* @00000000005d5380 [r] */
extern void *_ZZ20gfxSetTexCoordMatrixE10iTexMatMap;
/* @000000000081a9e0 [b] */
extern void *_ZZ22AdjustSetPieceLayeringvE12pObjectOrder;
/* @00000000005c1ba0 [r] */
extern void *_ZZ24GetInternetsChapterMusiciE14strMusicTracks;
/* @0000000000819768 [b] */
extern void *_ZZ26SMBAnimalGroundEnemyUpdateE10vUpGravity;
/* @0000000000819778 [b] */
extern void *_ZZ26SMBAnimalGroundEnemyUpdateE12vDownGravity;
/* @0000000000819788 [b] */
extern void *_ZZ26SMBAnimalGroundEnemyUpdateE12vLeftGravity;
/* @0000000000819798 [b] */
extern void *_ZZ26SMBAnimalGroundEnemyUpdateE13vRightGravity;
/* @000000000081c810 [b] */
extern void *_ZZ9MuteAudioPK14tagButtonPropsPvE6bMuted;
/* @00000000005d1a60 [r] */
extern void *_ZZL15do_adpcm_nibblehP16ADPCMBLOCKHEADERiE13AdaptionTable;
/* @0000000000818474 [d] */
extern void *_ZZL15vorbis_validatePhE6vorbis;
/* @00000000005de320 [r] */
extern void *_ZZL21convert_samples_shortiPPsiiPPfiiE16channel_selector;
/* @00000000005ddf10 [r] */
extern void *_ZZL25vorbis_decode_packet_restP10stb_vorbisPiP4ModeiiiiS1_E10range_list;
/* @00000000008202b0 [b] */
extern void *_ZZL33ConvertSDLJoystickStateToJoyStateP14tagSDLJoystickE15dwLastFrameTime;
/* @00000000005ddf00 [r] */
extern void *_ZZL4ilogiE6log2_4;
/* @00000000005c16e0 [r] */
extern void *_ZZN10SMBAnimals17InitializeAnimalsEPKcE10strAnimals;
/* @00000000005c1780 [r] */
extern void *_ZZN10SMBAnimals17InitializeAnimalsEPKcE13strAnimations;
/* @00000000005c1b40 [r] */
extern void *_ZZN10SMBChapter14GetChapterFileE14tagChapterNameE13pChapterFiles;
/* @0000000000818450 [d] */
extern void *_ZZN12IndexTexture10SetTextureEhiiE12fPixelOffset;
/* @0000000000818460 [d] */
extern void *_ZZN12IndexTexture16GetTextureCoordsEiP7Vector2E12fPixelOffset;
/* @0000000000817760 [d] */
extern void *_ZZN13GSuperMeatBoy18DeferLoadCharactorE24tagSuperMeatBoyCharactorE14bFirstCharLoad;
/* @0000000000817260 [d] */
extern void *_ZZN13GSuperMeatBoy6UpdateEvE16bFirstDevmodeRun;
/* @0000000000818780 [b] */
extern void *_ZZN14CommanderVideo6RenderEvE7pColors;
/* @00000000005c5a40 [r] */
extern void *_ZZN14SMBEditorForms10InitializeEvE11strAnimName;
/* @00000000005c5b00 [r] */
extern void *_ZZN14SMBEditorForms10InitializeEvE13strEffectName;
/* @00000000008170d0 [d] */
extern void *_ZZN14SMBEditorForms10InitializeEvE15fPlayerFieldPos;
/* @000000000081c230 [b] */
extern void
    *_ZZN14SMBLevelPortal25GetEnterTheUnknownChapterEPP16SMBPortalChapterE19iEnterUnknownLength;
/* @0000000000815e80 [d] */
extern void *_ZZN15GSMBChapterData28ChapterLowestAchievementTimeE14tagChapterNameE12pLowAchTimes;
/* @00000000005c8d20 [r] */
extern void *_ZZN15SMBSettingsMenu10InitializeEvE10GSaneModes;
/* @00000000008190c0 [b] */
extern void *_ZZN16MeatBoyCharactor6UpdateEvE11vDiagonalUp;
/* @00000000008190a8 [b] */
extern void *_ZZN16MeatBoyCharactor6UpdateEvE6vRight;
/* @0000000000818f18 [b] */
extern void
    *_ZZN17TileLevelLightMap17GenerateShadowMapEPK5LightPN3CGR18tagPos2ColorVertexERiE8vTriNorm;
/* @00000000005dbcc0 [r] */
extern void *_ZZN21FlashAnimationLibrary12GetTextFieldEPKcE12strAlignment;
/* @00000000005c06e0 [r] */
extern void *_ZZN21MeatBoyCharFoundation10InitializeEPK27MeatBoyCharFoundationCreateE12strClipNames;
/* @00000000005c8960 [r] */
extern void *_ZZN23SMBLevelPortalInterface16GetOrderingOrderEvE17strOrderingString;
/* @00000000005c8980 [r] */
extern void *_ZZN23SMBLevelPortalInterface16GetOrderingParamEvE22strOrderingParamString;
/* @00000000005c89a0 [r] */
extern void *_ZZN23SMBLevelPortalInterface16GetOrderingParamEvE22strOrderingParamString_0;
/* @00000000008223f0 [b] */
extern void *_ZZN6Loader20GenerateLoadCallerIDEvE20__MasterLoadCallerID;
/* @0000000000820be4 [b] */
extern void *_ZZN7TEngine6RenderEvE12dwRenderTime;
/* @00000000005de5b0 [r] */
extern void *_ZZN8ErrorLog5WriteEPKcE10logNewLine;
/* @00000000005de5af [r] */
extern void *_ZZN8ErrorLog5WriteEPKcE6logTab;
/* @000000000081aa60 [b] */
extern void *_ZZN9SMBEditor6RenderEvE16vLastMouseScreen;
/* @0000000000816f70 [d] */
extern void *_ZZN9SMBEditor8ActivateEvE16bShowBetaMessage;
/* @0000000000816dc0 [d] */
extern void *_ZZN9SMBEditorC1EvE17strFanObjectNames;
/* @0000000000816d40 [d] */
extern void *_ZZN9SMBEditorC1EvE17strKeyObjectNames;
/* @0000000000816e00 [d] */
extern void *_ZZN9SMBEditorC1EvE17strOrbObjectNames;
/* @0000000000816f40 [d] */
extern void *_ZZN9SMBEditorC1EvE19strLaserObjectNames;
/* @0000000000816e80 [d] */
extern void *_ZZN9SMBEditorC1EvE20strQuakeEmitterNames;
/* @0000000000816e40 [d] */
extern void *_ZZN9SMBEditorC1EvE20strSwitchObjectNames;
/* @0000000000816d00 [d] */
extern void *_ZZN9SMBEditorC1EvE21strDefaultObjectNames;
/* @0000000000816d80 [d] */
extern void *_ZZN9SMBEditorC1EvE21strShooterObjectNames;
/* @0000000000816f00 [d] */
extern void *_ZZN9SMBEditorC1EvE26strSmokeEmitterObjectNames;
/* @0000000000816ec0 [d] */
extern void *_ZZN9SMBEditorC1EvE29strParticleEmitterObjectNames;
/* @00000000008153c8 [d] */
extern void *__CTOR_END__;
/* @0000000000815000 [d] */
extern void *__CTOR_LIST__;
/* @00000000008153d8 [d] */
extern void *__DTOR_END__;
/* @00000000008153d0 [d] */
extern void *__DTOR_LIST__;
/* @000000000060fcf8 [r] */
extern void *__FRAME_END__;
/* @00000000008153e0 [d] */
extern void *__JCR_END__;
/* @00000000008153e0 [d] */
extern void *__JCR_LIST__;
/* @0000000000822ea0 [B] */
extern void *__UILayer;
/* @0000000000815e00 [D] */
extern void *__data_start;
/* @0000000000815e08 [d] */
extern void *__dso_handle;
/* @0000000000820ba0 [B] */
extern void *__frameCounter;
/* @0000000000815000 [d] */
extern void *__init_array_end;
/* @0000000000815000 [d] */
extern void *__init_array_start;
/* @00000000008229e0 [B] */
extern void *__pMarginStream;
/* @0000000000822800 [B] */
extern void *_bBulkDeleteResources;
/* @00000000005dacc0 [R] */
extern void *_dist_code;
/* @00000000005dabc0 [R] */
extern void *_length_code;
/* @0000000000822c80 [B] */
extern void *_uNumTextures;
/* @00000000008233f0 [B] */
extern void *_uNumVertexBuffers;
/* @0000000000819c30 [B] */
extern void *bAHSteamAllowed;
/* @000000000081bec0 [B] */
extern void *bAutoUnlock;
/* @000000000081c6a0 [B] */
extern void *bBossEditMode;
/* @000000000081bed0 [B] */
extern void *bBossJustDefeated;
/* @000000000081bee0 [B] */
extern void *bBossJustUnlocked;
/* @0000000000820680 [B] */
extern void *bBoundsDrawing;
/* @00000000008170f4 [D] */
extern void *bContinueThreadRemoteLevelLoad;
/* @000000000081c740 [B] */
extern void *bCurrLevelTransitioning;
/* @0000000000820350 [B] */
extern void *bDrawInstanceBounds;
/* @000000000081bb80 [B] */
extern void *bEnterTitleMenu;
/* @000000000081bf04 [B] */
extern void *bFirstShowWorldMap;
/* @0000000000820f90 [B] */
extern void *bGXAntiAlias;
/* @000000000081c790 [B] */
extern void *bGameOfficiallyStarted;
/* @0000000000820360 [B] */
extern void *bGlobalAnimationPause;
/* @0000000000817a00 [D] */
extern void *bIgnoreFragmentCache;
/* @000000000081c7b0 [B] */
extern void *bJustPurchased;
/* @000000000081c750 [B] */
extern void *bLevelReady;
/* @0000000000820b80 [B] */
extern void *bLoadThreadRunning;
/* @000000000081bf00 [B] */
extern void *bMenuTransitioning;
/* @0000000000817240 [D] */
extern void *bNeedToWriteData;
/* @00000000008205d0 [B] */
extern void *bOverrideMusicVolume;
/* @000000000081b050 [B] */
extern void *bPageShowing;
/* @000000000081c7a0 [B] */
extern void *bProcessDisconnect;
/* @000000000081c7c0 [B] */
extern void *bProcessProfileSignOut;
/* @000000000081c7d0 [B] */
extern void *bProcessStorageChange;
/* @000000000081a2f0 [B] */
extern void *bRenderCopiedElements;
/* @000000000081bef0 [B] */
extern void *bRenderingUnlocks;
/* @0000000000820fa4 [B] */
extern void *bResetDevice;
/* @000000000081c4e0 [B] */
extern void *bSelectedResFullScreen;
/* @000000000081a0d0 [B] */
extern void *bSetPieceWayPointMode;
/* @0000000000824100 [B] */
extern void *bShouldCreateUserAlert;
/* @0000000000817220 [D] */
extern void *bShowHud;
/* @000000000081c690 [B] */
extern void *bShowMargins;
/* @000000000081c7e0 [B] */
extern void *bShowMeatNinjaMessage;
/* @000000000081beb0 [B] */
extern void *bShowingIntroEnd;
/* @000000000081beb4 [B] */
extern void *bTransitionFromWorldToChapter;
/* @0000000000824040 [B] */
extern void *bTrial;
/* @0000000000815e28 [D] */
extern void *bUseLeftJoyAsPOV;
/* @0000000000817250 [D] */
extern void *bUseLighting;
/* @00000000005db560 [r] */
extern void *base_dist;
/* @00000000005db4e0 [r] */
extern void *base_length;
/* @00000000005db4c0 [r] */
extern void *bl_order;
/* @00000000008186a0 [B] */
extern void *bloodRender;
/* @0000000000819aa0 [B] */
extern void *bossIntroEvent;
/* @0000000000819a20 [B] */
extern void *bossOutroEvent;
/* @0000000000819084 [B] */
extern void *buttonJump;
/* @0000000000815e2c [D] */
extern void *buttonSpecial;
/* @00000000008204a0 [B] */
extern void *cacheCueSection;
/* @0000000000819940 [B] */
extern void *cameraUpdateSection;
/* @00000000008171e0 [D] */
extern void *christmasLevels;
/* @0000000000818608 [b] orig `completed.5889` */
extern void *completed_5889;
/* @00000000005cf880 [r] orig `comps.5462` */
extern void *comps_5462;
/* @00000000005cf840 [r] orig `comps.6042` */
extern void *comps_6042;
/* @00000000005cf800 [r] orig `comps.6046` */
extern void *comps_6046;
/* @00000000005cf940 [r] orig `comps.7227` */
extern void *comps_7227;
/* @00000000005d94e0 [r] */
extern void *configuration_table;
/* @0000000000815f18 [D] */
extern void *cr10;
/* @0000000000815f10 [D] */
extern void *cr11;
/* @0000000000815f08 [D] */
extern void *cr12;
/* @0000000000815f00 [D] */
extern void *cr13;
/* @0000000000815f30 [D] */
extern void *cr7;
/* @0000000000815f28 [D] */
extern void *cr8;
/* @0000000000815f20 [D] */
extern void *cr9;
/* @00000000005d54a0 [r] */
extern void *crc_table;
/* @000000000081ce40 [b] */
extern void *ctx;
/* @00000000008170f0 [D] */
extern void *currCharMoveState;
/* @00000000005dab00 [r] orig `dbase.2814` */
extern void *dbase_2814;
/* @0000000000817230 [D] */
extern void *defaultChapterName;
/* @000000000081c6b0 [B] */
extern void *defaultChar;
/* @000000000081a790 [B] */
extern void *defaultObjectDefault;
/* @000000000081a640 [B] */
extern void *defaultObjectForm;
/* @00000000005d94a0 [R] */
extern void *deflate_copyright;
/* @000000000081bfc0 [B] */
extern void *demonSpawnCircle;
/* @00000000005dab80 [r] orig `dext.2815` */
extern void *dext_2815;
/* @00000000005d9f60 [r] orig `distfix.2863` */
extern void *distfix_2863;
/* @00000000005da9c0 [r] orig `distfix.2884` */
extern void *distfix_2884;
/* @0000000000818610 [b] orig `dtor_idx.5891` */
extern void *dtor_idx_5891;
/* @000000000081c34c [B] */
extern void *dwFrameEndTime;
/* @000000000081c348 [B] */
extern void *dwFrameInbetweenTime;
/* @000000000081c350 [B] */
extern void *dwFrameStartTime;
/* @0000000000820fa8 [B] */
extern void *dwMonitorRefreshRate;
/* @00000000008189e0 [B] */
extern void *endLibLoaded;
/* @00000000005d19d1 [r] orig `endline.6116` */
extern void *endline_6116;
/* @000000000081ca40 [b] */
extern void *error_buffer;
/* @0000000000818a60 [B] */
extern void *escapeMusic;
/* @00000000005db5e0 [r] */
extern void *extra_blbits;
/* @00000000005daf40 [r] */
extern void *extra_dbits;
/* @00000000005db440 [r] */
extern void *extra_lbits;
/* @0000000000815fb0 [D] */
extern void *fAnimationScale;
/* @0000000000819f60 [B] */
extern void *fAnimationZ;
/* @0000000000815fa0 [D] */
extern void *fObstacleScale;
/* @0000000000819f50 [B] */
extern void *fObstacleZ;
/* @0000000000820f8c [B] */
extern void *fOneFrameTimeStep;
/* @0000000000820f88 [B] */
extern void *fOneFrameTimeStepVSync;
/* @0000000000815fd0 [D] */
extern void *fParalaxScale;
/* @0000000000815fe0 [D] */
extern void *fParalaxZ;
/* @0000000000815fc0 [D] */
extern void *fPieceScale;
/* @0000000000819f70 [B] */
extern void *fPieceZ;
/* @000000000081a670 [B] */
extern void *fanObjectDefault;
/* @000000000081a400 [B] */
extern void *fanObjectForm;
/* @0000000000823f00 [B] */
extern void *fileOpenSection;
/* @00000000005d3d80 [r] */
extern void *fourbppswaptable;
/* @0000000000820fa0 [B] */
extern void *gfxCurrState;
/* @0000000000819a90 [B] */
extern void *hBossIntroThread;
/* @0000000000819a00 [B] */
extern void *hBossOutroThread;
/* @000000000081be30 [B] */
extern void *hChapterLoadThreadHandle;
/* @0000000000818a48 [B] */
extern void *hEndingLoadThread;
/* @000000000081bb20 [B] */
extern void *hInternetsThreadLoading;
/* @000000000081bdc0 [B] */
extern void *hLevelLoadThread;
/* @0000000000820ae0 [B] */
extern void *hRenderThreadHandle;
/* @000000000081c2c0 [B] */
extern void *hReplayWriteDataThread;
/* @0000000000819ba0 [B] */
extern void *hSMBChapterSaveHandle;
/* @0000000000819320 [B] */
extern void *hudUpdate;
/* @000000000081a0b0 [B] */
extern void *iAnimalIDX;
/* @0000000000815fe4 [D] */
extern void *iAutoCreateBossIndex;
/* @0000000000819b10 [B] */
extern void *iCurrentLevel;
/* @0000000000819080 [B] */
extern void *iKillCount;
/* @0000000000815e50 [D] */
extern void *iMessageCancelButton;
/* @0000000000815e60 [D] */
extern void *iMessageOkButton;
/* @000000000081a300 [B] */
extern void *iNumIDX;
/* @000000000081a910 [B] */
extern void *iNumObjectArrayEntries;
/* @000000000081c080 [B] */
extern void *iPopupMenuLibReferences;
/* @0000000000820b70 [B] */
extern void *iResetTime;
/* @000000000081c4f0 [B] */
extern void *iSelectedResolutionIndex;
/* @000000000081a0a0 [B] */
extern void *iSelectedRotation;
/* @000000000081a090 [B] */
extern void *iSelectedScale;
/* @0000000000823a50 [B] */
extern void *iTotalNumLocStrings;
/* @00000000008230a0 [B] */
extern void *iUIMessageBoxesActive;
/* @0000000000817208 [D] */
extern void *iWebButtonFrame;
/* @00000000005daa80 [R] */
extern void *inflate_copyright;
/* @00000000005cdda0 [r] */
extern void *instructions;
/* @00000000005d01a0 [r] */
extern void *instructions;
/* @0000000000815e30 [D] */
extern void *keyDown;
/* @0000000000815e44 [D] */
extern void *keyJump;
/* @0000000000815e3c [D] */
extern void *keyLeft;
/* @000000000081a6d0 [B] */
extern void *keyObjectDefault;
/* @000000000081a4c0 [B] */
extern void *keyObjectForm;
/* @0000000000815e38 [D] */
extern void *keyRight;
/* @0000000000815e40 [D] */
extern void *keySpecial;
/* @0000000000815e34 [D] */
extern void *keyUp;
/* @0000000000820200 [B] */
extern void *keyboard;
/* @000000000081a710 [B] */
extern void *laserObjectDefault;
/* @000000000081a540 [B] */
extern void *laserObjectForm;
/* @000000000081a180 [B] */
extern void *lastAnimation;
/* @000000000081a100 [B] */
extern void *lastObstacle;
/* @000000000081a280 [B] */
extern void *lastParalax;
/* @000000000081a200 [B] */
extern void *lastSetPiece;
/* @00000000005daac0 [r] orig `lbase.2812` */
extern void *lbase_2812;
/* @00000000005d9760 [r] orig `lenfix.2862` */
extern void *lenfix_2862;
/* @00000000005da1c0 [r] orig `lenfix.2883` */
extern void *lenfix_2883;
/* @00000000005dab40 [r] orig `lext.2813` */
extern void *lext_2813;
/* @000000000081be40 [B] */
extern void *loadChapterEvent;
/* @00000000005ded40 [R] */
extern void *matIdentity;
/* @0000000000820210 [B] */
extern void *mouse;
/* @00000000005d3640 [r] orig `msg.6331` */
extern void *msg_6331;
/* @0000000000816000 [D] */
extern void *objectFormDefaults;
/* @00000000005d3b80 [r] */
extern void *onebppswaptable;
/* @00000000005d1920 [r] orig `ops.5934` */
extern void *ops_5934;
/* @000000000081a6b0 [B] */
extern void *orbObjectDefault;
/* @000000000081a480 [B] */
extern void *orbObjectForm;
/* @00000000005d9fe0 [r] orig `order.2884` */
extern void *order_2884;
/* @00000000005daa40 [r] orig `order.2912` */
extern void *order_2912;
/* @00000000005d19e0 [r] */
extern void *out_of_mem_data_preprocessor;
/* @0000000000816240 [D] */
extern void *p4BitObjectNames;
/* @000000000081ab08 [B] */
extern void *pANIMALPROPgravityX;
/* @000000000081ab00 [B] */
extern void *pANIMALPROPgravityY;
/* @000000000081ab18 [B] */
extern void *pANIMALPROPvelocityX;
/* @000000000081ab10 [B] */
extern void *pANIMALPROPvelocityY;
/* @000000000081ce60 [B] */
extern void *pActiveCues;
/* @000000000081ac70 [B] */
extern void *pAnimFieldStyle;
/* @000000000081ac60 [B] */
extern void *pAnimLabelStyle;
/* @000000000081c6f0 [B] */
extern void *pAnimalLayer;
/* @00000000008204e0 [B] */
extern void *pAudioCueCache;
/* @0000000000820330 [B] */
extern void *pAudioPosition;
/* @0000000000821280 [B] */
extern void *pBackupKeys;
/* @0000000000819250 [B] */
extern void *pBandageGet;
/* @000000000081c700 [B] */
extern void *pBossLayer;
/* @0000000000820748 [B] */
extern void *pBoundsBuffer;
/* @00000000008206a0 [B] */
extern void *pBoundsStream;
/* @000000000081a040 [B] */
extern void *pCopiedBlocks;
/* @0000000000819f80 [B] */
extern void *pCopiedSetPieces;
/* @000000000081bdd0 [B] */
extern void *pCurrInternetsChapter;
/* @0000000000819218 [B] */
extern void *pCurrLevelTrans;
/* @000000000081c060 [B] */
extern void *pCurrMoveOnMenu;
/* @000000000081a310 [B] */
extern void *pCurrSelectionIDX;
/* @000000000081c070 [B] */
extern void *pCurrUpsellMenu;
/* @0000000000820750 [B] */
extern void *pCurrentBoundsCheck;
/* @000000000081a810 [B] */
extern void *pCurrentFunctionButton;
/* @000000000081a870 [B] */
extern void *pCurrentLayerButton;
/* @000000000081a0e0 [B] */
extern void *pCurrentLayerField;
/* @000000000081a920 [B] */
extern void *pCurrentObjectArray;
/* @0000000000820340 [B] */
extern void *pCurrentRenderInstance;
/* @000000000081a0c0 [B] */
extern void *pCurrentSetPieceWayPoint;
/* @000000000081a7b0 [B] */
extern void *pCurrentVisibleForm;
/* @0000000000820a20 [B] */
extern void *pEditableCategories;
/* @0000000000820a80 [B] */
extern void *pEditableItems;
/* @000000000081a3a0 [B] */
extern void *pEditorAnimalPropsForm;
/* @000000000081a8c0 [B] */
extern void *pEditorButtons;
/* @000000000081a380 [B] */
extern void *pEditorCameraPropsForm;
/* @000000000081a350 [B] */
extern void *pEditorChapterUploadForm;
/* @000000000081a360 [B] */
extern void *pEditorCharForm;
/* @000000000081a820 [B] */
extern void *pEditorFunctionButtons;
/* @000000000081a940 [B] */
extern void *pEditorInstance;
/* @000000000081a3c0 [B] */
extern void *pEditorLayerPropsForm;
/* @000000000081a950 [B] */
extern void *pEditorLib;
/* @000000000081a390 [B] */
extern void *pEditorLightPropsForm;
/* @000000000081a3f0 [B] */
extern void *pEditorLoadForm;
/* @000000000081a3d0 [B] */
extern void *pEditorNewLevelForm;
/* @000000000081a3b0 [B] */
extern void *pEditorObjectPropsForm;
/* @000000000081a868 [B] */
extern void *pEditorPropertiesButton;
/* @000000000081a3e0 [B] */
extern void *pEditorSaveForm;
/* @000000000081a370 [B] */
extern void *pEditorUploadForm;
/* @000000000081a860 [B] */
extern void *pEditorWaypointsButton;
/* @0000000000818a90 [B] */
extern void *pEscapeMusic;
/* @000000000081a928 [B] */
extern void *pF1Text;
/* @00000000008168e0 [D] */
extern void *pFactoryObjectNames;
/* @000000000081c720 [B] */
extern void *pFirstLayer;
/* @0000000000816bc0 [D] */
extern void *pForestObjectNames;
/* @0000000000820fc0 [B] */
extern void *pFullScreenTexture;
/* @000000000081ec30 [B] */
extern void *pGPUStateDesired;
/* @000000000081ec40 [B] */
extern void *pGPUStateSet;
/* @0000000000821268 [B] */
extern void *pGameJoysticks;
/* @0000000000816180 [D] */
extern void *pGameboyObjectNames;
/* @0000000000819220 [B] */
extern void *pGradeA;
/* @00000000008166e0 [D] */
extern void *pHellObjectNames;
/* @0000000000816a80 [D] */
extern void *pHospitalObjectNames;
/* @0000000000819168 [B] */
extern void *pHudLevelText;
/* @00000000008192a0 [B] */
extern void *pHudLib;
/* @0000000000819170 [B] */
extern void *pHudTimerField;
/* @000000000081bde0 [B] */
extern void *pInternetsChapters;
/* @00000000008192f0 [B] */
extern void *pIntroInstancePart1;
/* @00000000008192d0 [B] */
extern void *pIntroInstancePart2;
/* @0000000000819300 [B] */
extern void *pIntroLibPart1;
/* @00000000008192e0 [B] */
extern void *pIntroLibPart2;
/* @0000000000820220 [B] */
extern void *pJoysticks;
/* @000000000081c730 [B] */
extern void *pLastLayer;
/* @000000000081a880 [B] */
extern void *pLayerButtons;
/* @000000000081a7c0 [B] */
extern void *pLayerColorTweens;
/* @000000000081b180 [B] */
extern void *pLeaderboards;
/* @0000000000819240 [B] */
extern void *pLevelComplete;
/* @0000000000819ed0 [B] */
extern void *pLightCross;
/* @000000000081c710 [B] */
extern void *pLightLayer;
/* @0000000000822360 [B] */
extern void *pLoaderFuncs;
/* @0000000000823a68 [B] */
extern void *pLocalizedDatabase;
/* @0000000000823a60 [B] */
extern void *pLocalizedStrings;
/* @0000000000819210 [B] */
extern void *pMessageBoxLib;
/* @00000000008191b0 [B] */
extern void *pMessageBoxPage;
/* @0000000000819200 [B] */
extern void *pMessageBoxPopup;
/* @00000000008191f0 [B] */
extern void *pMessageBoxTransIn;
/* @00000000008191e0 [B] */
extern void *pMessageBoxTransOut;
/* @00000000008191c0 [B] */
extern void *pMessageCancelButton;
/* @00000000008191d0 [B] */
extern void *pMessageOkButton;
/* @0000000000820540 [B] */
extern void *pMusicInstances;
/* @000000000081c6c8 [B] */
extern void *pNewCue;
/* @000000000081a0d8 [B] */
extern void *pObjectInfoField;
/* @000000000081bfd0 [B] */
extern void *pPalProps;
/* @000000000081eb10 [B] */
extern void *pPixelLinker;
/* @000000000081c1a0 [B] */
extern void *pPortalConnection;
/* @000000000081bb00 [B] */
extern void *pPortalLevel;
/* @000000000081c678 [B] */
extern void *pPrePauseButtonCallbacks;
/* @000000000081c668 [B] */
extern void *pPrePauseKeyboardCallbacks;
/* @000000000081c670 [B] */
extern void *pPrePausePOVCallbacks;
/* @000000000081bb30 [B] */
extern void *pPreUnlockButtonCallback;
/* @000000000081bb28 [B] */
extern void *pPreUnlockPOVCallback;
/* @0000000000816560 [D] */
extern void *pRaptureObjectNames;
/* @0000000000819160 [B] */
extern void *pRatingStars;
/* @0000000000819290 [B] */
extern void *pReplayHud;
/* @0000000000819270 [B] */
extern void *pReplayHudDemo;
/* @0000000000819280 [B] */
extern void *pReplayHudInternets;
/* @0000000000819260 [B] */
extern void *pReplayHudNormal;
/* @0000000000819230 [B] */
extern void *pReplayViewer;
/* @00000000008210b0 [B] */
extern void *pResolutionDropDown;
/* @000000000081c6e0 [B] */
extern void *pResolutionLayer;
/* @00000000008162a0 [D] */
extern void *pRetroObjectNames;
/* @000000000081ab38 [B] */
extern void *pSETPIECEPROPFloat1;
/* @000000000081ab30 [B] */
extern void *pSETPIECEPROPFloat2;
/* @000000000081ab28 [B] */
extern void *pSETPIECEPROPInt1;
/* @000000000081ab20 [B] */
extern void *pSETPIECEPROPInt2;
/* @000000000081ab40 [B] */
extern void *pSETPIECEPROPSTimeMod;
/* @000000000081ab48 [B] */
extern void *pSETPIECEPROPStartTime;
/* @000000000081ae90 [B] */
extern void *pSMBLAYERPROPAlpha;
/* @000000000081aea0 [B] */
extern void *pSMBLAYERPROPBlue;
/* @000000000081ae98 [B] */
extern void *pSMBLAYERPROPGreen;
/* @000000000081ae88 [B] */
extern void *pSMBLAYERPROPLerp;
/* @000000000081aea8 [B] */
extern void *pSMBLAYERPROPRed;
/* @000000000081aeb8 [B] */
extern void *pSMBLEVELPROPSHeight;
/* @000000000081aeb0 [B] */
extern void *pSMBLEVELPROPSName;
/* @000000000081aec0 [B] */
extern void *pSMBLEVELPROPSWidth;
/* @000000000081ae78 [B] */
extern void *pSMBLIGHTPROPBlue;
/* @000000000081ae70 [B] */
extern void *pSMBLIGHTPROPGreen;
/* @000000000081ae80 [B] */
extern void *pSMBLIGHTPROPRed;
/* @000000000081ae68 [B] */
extern void *pSMBLIGHTPROPType;
/* @000000000081aef8 [B] */
extern void *pSMBLoadFileName;
/* @000000000081aee0 [B] */
extern void *pSMBNEWLevelHeight;
/* @000000000081aed8 [B] */
extern void *pSMBNEWLevelName;
/* @000000000081aee8 [B] */
extern void *pSMBNEWLevelWidth;
/* @000000000081aed0 [B] */
extern void *pSMBNEWPaletteDropDown;
/* @000000000081ac80 [B] */
extern void *pSMBPLAYERANIMFields;
/* @000000000081ab80 [B] */
extern void *pSMBPLAYEREFFECTFields;
/* @000000000081ab68 [B] */
extern void *pSMBPLAYEREFFECTRunDelay;
/* @000000000081ab60 [B] */
extern void *pSMBPLAYEREFFECTRunFastDelay;
/* @000000000081ab70 [B] */
extern void *pSMBPLAYEREFFECTWalkDelay;
/* @000000000081ae30 [B] */
extern void *pSMBPLAYERPROPDrag;
/* @000000000081ae28 [B] */
extern void *pSMBPLAYERPROPGravity;
/* @000000000081ae08 [B] */
extern void *pSMBPLAYERPROPHillDamper;
/* @000000000081ae50 [B] */
extern void *pSMBPLAYERPROPJump;
/* @000000000081ae10 [B] */
extern void *pSMBPLAYERPROPKillBounds;
/* @000000000081ae60 [B] */
extern void *pSMBPLAYERPROPRun;
/* @000000000081ae20 [B] */
extern void *pSMBPLAYERPROPScale;
/* @000000000081ae18 [B] */
extern void *pSMBPLAYERPROPTileBounds;
/* @000000000081ae00 [B] */
extern void *pSMBPLAYERPROPTurnFriction;
/* @000000000081ae58 [B] */
extern void *pSMBPLAYERPROPWalk;
/* @000000000081ae38 [B] */
extern void *pSMBPLAYERPROPWallJumpFriction;
/* @000000000081ae40 [B] */
extern void *pSMBPLAYERPROPWallJumpOut;
/* @000000000081ae48 [B] */
extern void *pSMBPLAYERPROPWallJumpUp;
/* @000000000081aef0 [B] */
extern void *pSMBSAVEFileName;
/* @00000000008192b0 [B] */
extern void *pSaveGameScreen;
/* @00000000008192c0 [B] */
extern void *pSaveGameScreenLib;
/* @000000000081c500 [B] */
extern void *pScreenResolutions;
/* @0000000000821060 [B] */
extern void *pSelectableResolutions;
/* @0000000000819f10 [B] */
extern void *pSelectedAnimal;
/* @0000000000819f20 [B] */
extern void *pSelectedLight;
/* @0000000000819f30 [B] */
extern void *pSelectionBox;
/* @000000000081a320 [B] */
extern void *pSelectionIDX;
/* @0000000000822a78 [B] */
extern void *pSetPieceWayPointStream;
/* @000000000081a930 [B] */
extern void *pStartPosition;
/* @0000000000819fe0 [B] */
extern void *pTempSetSelection;
/* @0000000000816400 [D] */
extern void *pTheEndObjectNames;
/* @0000000000819180 [B] */
extern void *pTimerHudCurrLevel;
/* @0000000000819190 [B] */
extern void *pTimerHudInstance;
/* @00000000008191a0 [B] */
extern void *pTimerLib;
/* @000000000081bb70 [B] */
extern void *pTitleMenuMusic;
/* @000000000081eb00 [B] */
extern void *pVertexLinker;
/* @000000000081cec0 [B] */
extern void *pVoices;
/* @000000000081ab50 [B] */
extern void *pWAYPOINTPROPDuration;
/* @000000000081ab58 [B] */
extern void *pWAYPOINTPROPZoom;
/* @0000000000819ee0 [B] */
extern void *pWaypointStream;
/* @0000000000823ec0 [B] */
extern void *packageRead;
/* @000000000081a770 [B] */
extern void *particleEmitterDefault;
/* @000000000081a600 [B] */
extern void *particleEmitterForm;
/* @0000000000824120 [B] */
extern void *pendingCreation;
/* @000000000081bd60 [B] */
extern void *playAsBrownie;
/* @000000000081bd00 [B] */
extern void *playAsDrFetus;
/* @000000000081bbe0 [B] */
extern void *playAsTim;
/* @000000000081bca0 [B] */
extern void *playAsTofuBoy;
/* @000000000081bc40 [B] */
extern void *playAsWOG;
/* @00000000008178c7 [D] */
extern void *png_IDAT;
/* @00000000008178c2 [D] */
extern void *png_IEND;
/* @00000000008178cc [D] */
extern void *png_IHDR;
/* @00000000008178bd [D] */
extern void *png_PLTE;
/* @00000000008178b8 [D] */
extern void *png_bKGD;
/* @00000000008178b3 [D] */
extern void *png_cHRM;
/* @00000000005d1df0 [r] */
extern void *png_digit;
/* @00000000008178ae [D] */
extern void *png_gAMA;
/* @00000000005d26e0 [r] */
extern void *png_gamma_shift;
/* @00000000008178a9 [D] */
extern void *png_hIST;
/* @00000000008178a4 [D] */
extern void *png_iCCP;
/* @000000000081789f [D] */
extern void *png_iTXt;
/* @00000000005d1d10 [R] */
extern void *png_libpng_ver;
/* @000000000081789a [D] */
extern void *png_oFFs;
/* @0000000000817895 [D] */
extern void *png_pCAL;
/* @000000000081788b [D] */
extern void *png_pHYs;
/* @00000000005d1c40 [R] */
extern void *png_pass_dsp_mask;
/* @00000000005d1cc0 [R] */
extern void *png_pass_inc;
/* @00000000005d1c60 [R] */
extern void *png_pass_mask;
/* @00000000005d1ce0 [R] */
extern void *png_pass_start;
/* @00000000005d1c80 [R] */
extern void *png_pass_yinc;
/* @00000000005d1ca0 [R] */
extern void *png_pass_ystart;
/* @0000000000817886 [D] */
extern void *png_sBIT;
/* @0000000000817890 [D] */
extern void *png_sCAL;
/* @0000000000817881 [D] */
extern void *png_sPLT;
/* @000000000081787c [D] */
extern void *png_sRGB;
/* @00000000005d1cfc [R] */
extern void *png_sig;
/* @0000000000817877 [D] */
extern void *png_tEXt;
/* @0000000000817872 [D] */
extern void *png_tIME;
/* @000000000081786d [D] */
extern void *png_tRNS;
/* @0000000000817868 [D] */
extern void *png_zTXt;
/* @000000000081c660 [B] */
extern void *prePauseGameState;
/* @00000000005cdbc0 [r] */
extern void *profileMap;
/* @00000000005cdc00 [r] */
extern void *profiles;
/* @000000000081a730 [B] */
extern void *quakeEmitterDefault;
/* @000000000081a580 [B] */
extern void *quakeEmitterForm;
/* @0000000000817860 [d] orig `retval.10870` */
extern void *retval_10870;
/* @000000000081b0f0 [B] */
extern void *rmChapterStatus;
/* @000000000081ca20 [b] */
extern void *sentinel;
/* @000000000081ec20 [B] */
extern void *shaderContext;
/* @000000000081a6f0 [B] */
extern void *shooterObjectDefault;
/* @000000000081a500 [B] */
extern void *shooterObjectForm;
/* @00000000005d1d40 [r] orig `short_months.6416` */
extern void *short_months_6416;
/* @000000000081a750 [B] */
extern void *smokeEmitterDefault;
/* @000000000081a5c0 [B] */
extern void *smokeEmitterForm;
/* @00000000005d19d0 [r] orig `space.5792` */
extern void *space_5792;
/* @0000000000817864 [d] orig `spaces.6087` */
extern void *spaces_6087;
/* @000000000081c160 [B] */
extern void *sqlQuery;
/* @000000000081c120 [B] */
extern void *sqlQuery2;
/* @00000000008179a0 [d] */
extern void *static_bl_desc;
/* @0000000000817980 [d] */
extern void *static_d_desc;
/* @00000000005daec0 [r] */
extern void *static_dtree;
/* @0000000000817960 [d] */
extern void *static_l_desc;
/* @00000000005dafc0 [r] */
extern void *static_ltree;
/* @00000000008185a8 [B] orig `stderr@@GLIBC_2.2.5` */
extern void *stderr_GLIBC_2_2_5;
/* @00000000008184a0 [B] orig `stdout@@GLIBC_2.2.5` */
extern void *stdout_GLIBC_2_2_5;
/* @0000000000815f88 [D] */
extern void *strAfter;
/* @0000000000815f90 [D] */
extern void *strBefore;
/* @0000000000819cd0 [B] */
extern void *strCharPath;
/* @0000000000818480 [D] */
extern void *strCoreVersion;
/* @0000000000819e80 [B] */
extern void *strEditorTmpLevelFile;
/* @0000000000820fb0 [B] */
extern void *strGraphicsDriverName;
/* @0000000000817fc0 [D] */
extern void *strKeyNames;
/* @0000000000824d00 [B] */
extern void *strLargeString;
/* @0000000000824cf0 [B] */
extern void *strLargeStringW;
/* @0000000000823a80 [B] */
extern void *strLogMsg;
/* @000000000081c1f0 [B] */
extern void *strPortalUploadQuery;
/* @000000000081c6a8 [B] */
extern void *strStartingPalette;
/* @0000000000815f80 [D] */
extern void *strTitle;
/* @0000000000815f78 [D] */
extern void *strTitle2;
/* @0000000000815f70 [D] */
extern void *strTitle3;
/* @0000000000815f68 [D] */
extern void *strTitle4;
/* @0000000000815f60 [D] */
extern void *strcr1;
/* @0000000000815f58 [D] */
extern void *strcr2;
/* @0000000000815f50 [D] */
extern void *strcr3;
/* @0000000000815f48 [D] */
extern void *strcr4;
/* @0000000000815f40 [D] */
extern void *strcr5;
/* @0000000000815f38 [D] */
extern void *strcr6;
/* @0000000000815ef8 [D] */
extern void *strend;
/* @0000000000815ee8 [D] */
extern void *strend2;
/* @0000000000815ef0 [D] */
extern void *strendalt;
/* @000000000081a690 [B] */
extern void *switchObjectDefault;
/* @000000000081a440 [B] */
extern void *switchObjectForm;
/* @00000000005cf5e0 [r] */
extern void *swizzle_channels;
/* @000000000081bb10 [B] */
extern void *thInternetParams;
/* @000000000081bb40 [B] */
extern void *titleMusicInstance;
/* @00000000005d3c80 [r] */
extern void *twobppswaptable;
/* @00000000008170e0 [D] */
extern void *uAdjustedWorldMenuChapter;
/* @0000000000820ad0 [B] */
extern void *uMasterCategoryID;
/* @00000000008202a0 [B] */
extern void *uMasterInputFrameCounter;
/* @00000000008179d0 [D] */
extern void *uMasterInvokeID;
/* @00000000008191a8 [B] */
extern void *uPreUnlockVolume;
/* @0000000000818da0 [B] */
extern void *uSwitchResetCount;
/* @000000000081c7d4 [B] */
extern void *uTmpGlobalMusicVolume;
/* @00000000005cf980 [r] */
extern void *usagestrs;
/* @0000000000822490 [B] */
extern void *vDefaultStart2D;
/* @00000000008224a0 [B] */
extern void *vDefaultStart3D;
/* @000000000081c780 [B] */
extern void *vLastEyePos;
/* @0000000000819f28 [B] */
extern void *vWorldCursorPos;
/* @0000000000819f40 [B] */
extern void *vXYCOM;
/* @000000000081c2e0 [B] */
extern void *writeReplayEvent;
/* @00000000005db6a0 [R] */
extern void *z_errmsg;

/* Ghidra synthetics (814) */
extern byte DAT_0000004c;
extern byte DAT_00000058;
extern byte DAT_005be5e0;
extern byte DAT_005be5e4;
extern byte DAT_005be6e4;
extern byte DAT_005be6e8;
extern byte DAT_005be6f0;
extern byte DAT_005be880;
extern byte DAT_005be890;
extern byte DAT_005be894;
extern byte DAT_005be898;
extern byte DAT_005bf760;
extern byte DAT_005bf764;
extern byte DAT_005bfba0;
extern byte DAT_005bfba4;
extern byte DAT_005bff40;
extern byte DAT_005c0060;
extern byte DAT_005c0064;
extern byte DAT_005c0068;
extern byte DAT_005c006c;
extern byte DAT_005c0070;
extern byte DAT_005c01c0;
extern byte DAT_005c01c4;
extern byte DAT_005c01cc;
extern byte DAT_005c01d0;
extern byte DAT_005c04cf;
extern byte DAT_005c04d3;
extern byte DAT_005c0513;
extern byte DAT_005c07a4;
extern byte DAT_005c07a8;
extern byte DAT_005c07ac;
extern byte DAT_005c07b0;
extern byte DAT_005c07b4;
extern byte DAT_005c07b8;
extern byte DAT_005c07bc;
extern byte DAT_005c07c0;
extern byte DAT_005c07c4;
extern byte DAT_005c07dc;
extern byte DAT_005c0945;
extern byte DAT_005c0952;
extern byte DAT_005c0c90;
extern byte DAT_005c0c94;
extern byte DAT_005c0c98;
extern byte DAT_005c0e00;
extern byte DAT_005c10c0;
extern byte DAT_005c10c4;
extern byte DAT_005c13fc;
extern byte DAT_005c1400;
extern byte DAT_005c1404;
extern byte DAT_005c1408;
extern byte DAT_005c17d0;
extern byte DAT_005c17d8;
extern byte DAT_005c17dc;
extern byte DAT_005c17e0;
extern byte DAT_005c17e4;
extern byte DAT_005c17e8;
extern byte DAT_005c17f0;
extern byte DAT_005c17f4;
extern byte DAT_005c1930;
extern byte DAT_005c1938;
extern byte DAT_005c1990;
extern byte DAT_005c1af0;
extern byte DAT_005c1d05;
extern byte DAT_005c1d0a;
extern byte DAT_005c1e93;
extern byte DAT_005c206c;
extern byte DAT_005c2070;
extern byte DAT_005c2074;
extern byte DAT_005c2078;
extern byte DAT_005c2b74;
extern byte DAT_005c2bc4;
extern byte DAT_005c2bd7;
extern byte DAT_005c2bde;
extern byte DAT_005c2c85;
extern byte DAT_005c2c8f;
extern byte DAT_005c2d3e;
extern byte DAT_005c2d4b;
extern byte DAT_005c2d5a;
extern byte DAT_005c2e70;
extern byte DAT_005c2ebe;
extern byte DAT_005c2f4c;
extern byte DAT_005c2f54;
extern byte DAT_005c2f56;
extern byte DAT_005c2f5e;
extern byte DAT_005c2f60;
extern byte DAT_005c2f68;
extern byte DAT_005c2f6a;
extern byte DAT_005c2f72;
extern byte DAT_005c2f8c;
extern byte DAT_005c302c;
extern byte DAT_005c3036;
extern byte DAT_005c30ac;
extern byte DAT_005c31dc;
extern byte DAT_005c31dd;
extern byte DAT_005c328c;
extern byte DAT_005c35e8;
extern byte DAT_005c3660;
extern byte DAT_005c488c;
extern byte DAT_005c4890;
extern byte DAT_005c4894;
extern byte DAT_005c4898;
extern byte DAT_005c48a0;
extern byte DAT_005c48a4;
extern byte DAT_005c48a8;
extern byte DAT_005c48ac;
extern byte DAT_005c48b0;
extern byte DAT_005c48b4;
extern byte DAT_005c48d0;
extern byte DAT_005c5b48;
extern byte DAT_005c5c10;
extern byte DAT_005c5d60;
extern byte DAT_005c5d70;
extern byte DAT_005c5d74;
extern byte DAT_005c619f;
extern byte DAT_005c6618;
extern byte DAT_005c6630;
extern byte DAT_005c6634;
extern byte DAT_005c6638;
extern byte DAT_005c6644;
extern byte DAT_005c6654;
extern byte DAT_005c6660;
extern byte DAT_005c72c0;
extern byte DAT_005c72c4;
extern byte DAT_005c72c8;
extern byte DAT_005c72cc;
extern byte DAT_005c72d0;
extern byte DAT_005c72d4;
extern byte DAT_005c72e0;
extern byte DAT_005c7300;
extern byte DAT_005c7308;
extern byte DAT_005c7310;
extern byte DAT_005c7318;
extern byte DAT_005c7320;
extern byte DAT_005c7328;
extern byte DAT_005c741a;
extern byte DAT_005c741f;
extern byte DAT_005c749c;
extern byte DAT_005c7aae;
extern byte DAT_005c7af1;
extern byte DAT_005c7af3;
extern byte DAT_005c7bfc;
extern byte DAT_005c8a00;
extern byte DAT_005c8bd8;
extern byte DAT_005c8be4;
extern byte DAT_005c8bf4;
extern byte DAT_005c8bf9;
extern byte DAT_005c8bfa;
extern byte DAT_005c8d24;
extern byte DAT_005c8e4f;
extern byte DAT_005c9200;
extern byte DAT_005c9670;
extern byte DAT_005c9a59;
extern byte DAT_005c9a5e;
extern byte DAT_005c9a77;
extern byte DAT_005c9a9a;
extern byte DAT_005c9aa4;
extern byte DAT_005c9aa9;
extern byte DAT_005c9ab5;
extern byte DAT_005c9ab8;
extern byte DAT_005c9be1;
extern byte DAT_005c9c06;
extern byte DAT_005c9c75;
extern byte DAT_005c9c78;
extern byte DAT_005c9c7b;
extern byte DAT_005c9dfd;
extern byte DAT_005c9e9d;
extern byte DAT_005c9ed6;
extern byte DAT_005c9f9d;
extern byte DAT_005c9fa1;
extern byte DAT_005c9fa5;
extern byte DAT_005c9fa9;
extern byte DAT_005c9fad;
extern byte DAT_005c9fb1;
extern byte DAT_005c9fb5;
extern byte DAT_005c9fb9;
extern byte DAT_005c9fbd;
extern byte DAT_005c9fe1;
extern byte DAT_005ca008;
extern byte DAT_005ca057;
extern byte DAT_005ca05b;
extern byte DAT_005ca05f;
extern byte DAT_005ca063;
extern byte DAT_005ca219;
extern byte DAT_005ca3d2;
extern byte DAT_005ca49a;
extern byte DAT_005ca4c7;
extern byte DAT_005ca4ca;
extern byte DAT_005ca4ce;
extern byte DAT_005ca4d2;
extern byte DAT_005ca4d6;
extern byte DAT_005ca4e3;
extern byte DAT_005ca4e7;
extern byte DAT_005ca4eb;
extern byte DAT_005ca4ee;
extern byte DAT_005ca4f3;
extern byte DAT_005ca4f6;
extern byte DAT_005ca51c;
extern byte DAT_005ca521;
extern byte DAT_005ca549;
extern byte DAT_005ca550;
extern byte DAT_005ca57b;
extern byte DAT_005ca57e;
extern byte DAT_005ca582;
extern byte DAT_005ca587;
extern byte DAT_005ca58b;
extern byte DAT_005ca58f;
extern byte DAT_005ca593;
extern byte DAT_005ca597;
extern byte DAT_005ca59b;
extern byte DAT_005ca59f;
extern byte DAT_005ca5a3;
extern byte DAT_005ca5a7;
extern byte DAT_005ca5d9;
extern byte DAT_005ca5dd;
extern byte DAT_005ca5e1;
extern byte DAT_005ca5e6;
extern byte DAT_005ca5eb;
extern byte DAT_005ca5f0;
extern byte DAT_005ca7a8;
extern byte DAT_005ca7ac;
extern byte DAT_005ca7ce;
extern byte DAT_005ca998;
extern byte DAT_005caac4;
extern byte DAT_005caad6;
extern byte DAT_005cada9;
extern byte DAT_005cadad;
extern byte DAT_005cadb1;
extern byte DAT_005cadd2;
extern byte DAT_005d1d11;
extern byte DAT_005d1d12;
extern byte DAT_005d2718;
extern byte DAT_005d2720;
extern byte DAT_005d2728;
extern byte DAT_005d2730;
extern byte DAT_005d2738;
extern byte DAT_005d2740;
extern byte DAT_005d2750;
extern byte DAT_005d3660;
extern byte DAT_005d3b70;
extern byte DAT_005d3b78;
extern byte DAT_005d42b8;
extern byte DAT_005d547c;
extern byte DAT_005d5480;
extern byte DAT_005db9a0;
extern byte DAT_005db9a4;
extern byte DAT_005db9d2;
extern byte DAT_005db9de;
extern byte DAT_005db9f0;
extern byte DAT_005db9f3;
extern byte DAT_005dbd04;
extern byte DAT_005dbd08;
extern byte DAT_005dbd0c;
extern byte DAT_005dc108;
extern byte DAT_005dcc98;
extern byte DAT_005dd440;
extern byte DAT_005dd444;
extern byte DAT_005dd524;
extern byte DAT_005dd650;
extern byte DAT_005dd9f0;
extern byte DAT_005de36c;
extern byte DAT_005de370;
extern byte DAT_005de398;
extern byte DAT_005de598;
extern byte DAT_005de711;
extern byte DAT_005ded48;
extern byte DAT_005ded50;
extern byte DAT_005ded58;
extern byte DAT_005ded60;
extern byte DAT_005ded68;
extern byte DAT_005ded70;
extern byte DAT_005ded78;
extern byte DAT_005ded90;
extern byte DAT_00815e84;
extern byte DAT_00815e88;
extern byte DAT_00815e8c;
extern byte DAT_00815e90;
extern byte DAT_00815e94;
extern byte DAT_00815ea8;
extern byte DAT_00815ebc;
extern byte DAT_00815ed0;
extern byte DAT_00817108;
extern byte DAT_0081710c;
extern byte DAT_00817110;
extern byte DAT_00817118;
extern byte DAT_00817120;
extern byte DAT_00817128;
extern byte DAT_00817130;
extern byte DAT_00817138;
extern byte DAT_00817140;
extern byte DAT_00817148;
extern byte DAT_00817150;
extern byte DAT_00817158;
extern byte DAT_00817160;
extern byte DAT_00817168;
extern byte DAT_00817170;
extern byte DAT_00817178;
extern byte DAT_00817180;
extern byte DAT_00817188;
extern byte DAT_00817190;
extern byte DAT_00817198;
extern byte DAT_008171a0;
extern byte DAT_008171a8;
extern byte DAT_008171b0;
extern byte DAT_008171b8;
extern byte DAT_008171c0;
extern byte DAT_008171c8;
extern byte DAT_008171e8;
extern byte DAT_008171ec;
extern byte DAT_008171f0;
extern byte DAT_008171f4;
extern byte DAT_008171f8;
extern byte DAT_008171fc;
extern byte DAT_00817200;
extern byte DAT_00817204;
extern byte DAT_00817930;
extern byte DAT_00817938;
extern byte DAT_00817940;
extern byte DAT_008184c8;
extern byte DAT_00818e58;
extern byte DAT_00818ef8;
extern byte DAT_00818f1c;
extern byte DAT_00819f44;
extern byte DAT_0081a648;
extern byte DAT_0081a658;
extern byte DAT_0081a660;
extern byte DAT_0081a828;
extern byte DAT_0081a830;
extern byte DAT_0081a838;
extern byte DAT_0081a840;
extern byte DAT_0081a848;
extern byte DAT_0081a850;
extern byte DAT_0081a858;
extern byte DAT_0081a888;
extern byte DAT_0081a890;
extern byte DAT_0081a898;
extern byte DAT_0081a8a0;
extern byte DAT_0081a8a8;
extern byte DAT_0081a8b0;
extern byte DAT_0081a8b8;
extern byte DAT_0081a968;
extern byte DAT_0081a974;
extern byte DAT_0081a9b4;
extern byte DAT_0081ab88;
extern byte DAT_0081ab90;
extern byte DAT_0081ab98;
extern byte DAT_0081aba0;
extern byte DAT_0081aba8;
extern byte DAT_0081abb0;
extern byte DAT_0081abb8;
extern byte DAT_0081abc0;
extern byte DAT_0081abc8;
extern byte DAT_0081abd0;
extern byte DAT_0081abd8;
extern byte DAT_0081abe0;
extern byte DAT_0081abe8;
extern byte DAT_0081abf0;
extern byte DAT_0081abf8;
extern byte DAT_0081ac00;
extern byte DAT_0081ac08;
extern byte DAT_0081ac10;
extern byte DAT_0081ac18;
extern byte DAT_0081ac20;
extern byte DAT_0081ac28;
extern byte DAT_0081ac30;
extern byte DAT_0081ac38;
extern byte DAT_0081ac40;
extern byte DAT_0081ac48;
extern byte DAT_0081ac50;
extern byte DAT_0081ac88;
extern byte DAT_0081afd8;
extern byte DAT_0081ba88;
extern byte DAT_0081bf34;
extern byte DAT_0081bf38;
extern byte DAT_0081bf3c;
extern byte DAT_0081bfe8;
extern byte DAT_0081c008;
extern byte DAT_0081c768;
extern byte DAT_0081c774;
extern byte DAT_0081c7f8;
extern byte DAT_0081c838;
extern byte DAT_0081ca27;
extern byte DAT_0081ca28;
extern byte DAT_0081cec8;
extern byte DAT_0081ced0;
extern byte DAT_0081ced8;
extern byte DAT_0081cedc;
extern byte DAT_00820448;
extern byte DAT_00820458;
extern byte DAT_00820c68;
extern byte DAT_008224a8;
extern byte DAT_00822778;
extern byte DAT_008228c8;
extern byte DAT_008228d8;
extern byte DAT_00822b88;
extern byte DAT_00823178;
extern byte DAT_00823348;
extern byte DAT_00823350;
extern byte DAT_00823358;
extern byte DAT_00823f41;
extern byte DAT_00823f42;
extern byte DAT_008241a4;
extern byte DAT_008243a4;
extern byte DAT_008247a4;
extern byte DAT_008249a4;
extern byte DAT_00824ba8;
extern byte DAT_00824bb0;
extern byte DAT_00824bc0;
extern byte DAT_00824bc8;
extern byte DAT_00824bd0;
extern byte DAT_00824bd8;
extern byte DAT_00824be0;
extern byte DAT_00824be8;
extern byte DAT_00824c28;
extern byte DAT_00824c30;
extern byte DAT_00824c38;
extern void *PTR_00815638;
extern void *PTR_Calculate_005c4490;
extern void *PTR_Calculate_005c44d0;
extern void *PTR_Calculate_005c4510;
extern void *PTR_Calculate_005c4550;
extern void *PTR_Calculate_005c6ab0;
extern void *PTR_Calculate_005c6af0;
extern void *PTR_DAT_008160f0;
extern void *PTR_DAT_00816120;
extern void *PTR_DAT_00816150;
extern void *PTR_GLMipFilter_00817928;
extern void *PTR_GLTextureAddressing_00817908;
extern void *PTR_GLTextureAddressing_00817910;
extern void *PTR_GLTextureFilter_00817918;
extern void *PTR_GLTextureFilter_00817920;
extern void *PTR_Init_00815c78;
extern void *PTR_Run_005dea10;
extern void *PTR_Run_005deaf0;
extern void *PTR_Run_005deb30;
extern void *PTR_Run_005deb70;
extern void *PTR_SDL_CreateSystemCursor_008157b8;
extern void *PTR_SDL_CreateWindow_00815680;
extern void *PTR_SDL_DestroyWindow_00815648;
extern void *PTR_SDL_DisableScreenSaver_00815b28;
extern void *PTR_SDL_EnableScreenSaver_00815728;
extern void *PTR_SDL_GL_CreateContext_00815790;
extern void *PTR_SDL_GL_DeleteContext_008156b8;
extern void *PTR_SDL_GL_ExtensionSupported_008159f8;
extern void *PTR_SDL_GL_GetDrawableSize_00815d30;
extern void *PTR_SDL_GL_GetProcAddress_00815c88;
extern void *PTR_SDL_GL_LoadLibrary_00815668;
extern void *PTR_SDL_GL_SetAttribute_00815d10;
extern void *PTR_SDL_GL_SetSwapInterval_008157a8;
extern void *PTR_SDL_GL_SwapWindow_00815bd8;
extern void *PTR_SDL_GameControllerClose_00815a68;
extern void *PTR_SDL_GameControllerGetAttached_008157c8;
extern void *PTR_SDL_GameControllerGetAxis_008157e8;
extern void *PTR_SDL_GameControllerGetButton_00815a18;
extern void *PTR_SDL_GameControllerName_00815de0;
extern void *PTR_SDL_GameControllerOpen_008159b0;
extern void *PTR_SDL_GameControllerUpdate_00815b20;
extern void *PTR_SDL_GetBasePath_00815d98;
extern void *PTR_SDL_GetCurrentDisplayMode_00815840;
extern void *PTR_SDL_GetDesktopDisplayMode_00815cc0;
extern void *PTR_SDL_GetDisplayMode_00815938;
extern void *PTR_SDL_GetError_00815900;
extern void *PTR_SDL_GetKeyboardFocus_008158a8;
extern void *PTR_SDL_GetKeyboardState_00815de8;
extern void *PTR_SDL_GetMouseState_00815cb0;
extern void *PTR_SDL_GetNumDisplayModes_00815b08;
extern void *PTR_SDL_GetScancodeFromKey_00815ab8;
extern void *PTR_SDL_GetTicks_00815a40;
extern void *PTR_SDL_GetWindowDisplayMode_008156d8;
extern void *PTR_SDL_GetWindowPosition_00815bf8;
extern void *PTR_SDL_HideWindow_00815af8;
extern void *PTR_SDL_Init_00815990;
extern void *PTR_SDL_IsGameController_00815d48;
extern void *PTR_SDL_NumJoysticks_008158d0;
extern void *PTR_SDL_PollEvent_00815898;
extern void *PTR_SDL_QuitSubSystem_00815af0;
extern void *PTR_SDL_Quit_00815698;
extern void *PTR_SDL_SetCursor_00815c00;
extern void *PTR_SDL_SetWindowFullscreen_00815ac0;
extern void *PTR_SDL_SetWindowSize_00815d00;
extern void *PTR_SDL_ShowCursor_00815dd8;
extern void *PTR_SDL_ShowSimpleMessageBox_00815920;
extern void *PTR_SDL_WasInit_00815890;
extern void *PTR_SDL_ceil_00815c10;
extern void *PTR_SDL_fabs_00815b48;
extern void *PTR_SDL_getenv_00815998;
extern void *PTR_SDL_strcmp_00815ba0;
extern void *PTR_StartPaletteRendering_005c7268;
extern void *PTR_StartPaletteRendering_005dd690;
extern void *PTR_SteamAPI_Init_008156c0;
extern void *PTR_SteamAPI_IsSteamRunning_00815968;
extern void *PTR_SteamAPI_RegisterCallResult_00815a48;
extern void *PTR_SteamAPI_RegisterCallback_008159a8;
extern void *PTR_SteamAPI_RunCallbacks_00815c48;
extern void *PTR_SteamAPI_UnregisterCallResult_00815a38;
extern void *PTR_SteamApps_00815a70;
extern void *PTR_SteamFriends_00815818;
extern void *PTR_SteamUserStats_00815d90;
extern void *PTR_SteamUser_00815b98;
extern void *PTR_SteamUtils_00815cd0;
extern void *PTR_Update_005dbdd0;
extern void *PTR__AlienHominid_005be4f0;
extern void *PTR__AnimalLayer_005c94b0;
extern void *PTR__BandageGirl_005bf0b0;
extern void *PTR__BaseResource_005dbe30;
extern void *PTR__BloodyTiles_005be630;
extern void *PTR__BossLayer_005c9470;
extern void *PTR__Brownie_005bf1b0;
extern void *PTR__CommanderVideo_005be790;
extern void *PTR__Cursor3D_005dbed0;
extern void *PTR__DefaultMeatBoy_005bebb0;
extern void *PTR__DrFetus_005bf610;
extern void *PTR__EditorButton_005c4390;
extern void *PTR__EditorFormChapterUpload_005c46b0;
extern void *PTR__EditorFormCharacter_005c4630;
extern void *PTR__EditorFormNewLevel_005c45f0;
extern void *PTR__EditorForm_005c4670;
extern void *PTR__EditorTextField_005c43f0;
extern void *PTR__FactoryBoss_005bf7f0;
extern void *PTR__FinalBoss_005bf8f0;
extern void *PTR__FlashEditableTextField_005dbc50;
extern void *PTR__FlashLibraryEntry_005dbc90;
extern void *PTR__FlashLibraryInstance_005dbb50;
extern void *PTR__FlashMovieClip_005dbb90;
extern void *PTR__FlashSymbol_005dbbd0;
extern void *PTR__FlashTextField_005dbc10;
extern void *PTR__FlyWrench_005bf9b0;
extern void *PTR__FontEmitter_005dc0f0;
extern void *PTR__ForestBoss_005bfb50;
extern void *PTR__GLOBAL__sub_I_ConvertColorToColor8_008153c0;
extern void *PTR__GMeatHUD_005c0b30;
extern void *PTR__GSMBCutSceneManager_005c2af0;
extern void *PTR__GSMBMenu_005c6a70;
extern void *PTR__GSuperMeatBoy_005c9350;
extern void *PTR__GSuperMeatBoy_005c9390;
extern void *PTR__Game_005dcbb0;
extern void *PTR__GooBall_005bfc10;
extern void *PTR__HeadCrab_005bfd70;
extern void *PTR__HellBoss_005bfef0;
extern void *PTR__HospitalBoss_005c0010;
extern void *PTR__IndexBuffer_005dcd50;
extern void *PTR__Jill_005c00d0;
extern void *PTR__LastLayer_005c9530;
extern void *PTR__LevelRenderLayer_005dcfb0;
extern void *PTR__LightLayer_005c9430;
extern void *PTR__M_destroy_00815750;
extern void *PTR__M_destroy_00815930;
extern void *PTR__M_leak_hard_00815700;
extern void *PTR__Machinarium_005c0230;
extern void *PTR__MeatBoy4Bit_005beeb0;
extern void *PTR__MeatBoy4Color_005befb0;
extern void *PTR__MeatBoy8Bit_005bedb0;
extern void *PTR__MeatBoyCharactor_005c05f0;
extern void *PTR__MeatNinja_005c0d10;
extern void *PTR__MeatboyEnding_005bf2b0;
extern void *PTR__Model_005dd0b0;
extern void *PTR__MrMinecraft_005c0e70;
extern void *PTR__Naija_005c0fd0;
extern void *PTR__Ogmo_005c1130;
extern void *PTR__ParticleEmitter_005c12b0;
extern void *PTR__PixelShader_005dd170;
extern void *PTR__PotatoBoy_005bf4b0;
extern void *PTR__QuakeEmitter_005c1270;
extern void *PTR__RaptureBoss_005c1390;
extern void *PTR__ReimplmentThisSprite_005dd270;
extern void *PTR__RenderLayerObject_005be670;
extern void *PTR__RenderLayer_005dd2d0;
extern void *PTR__RenderSetupLayer_005c93f0;
extern void *PTR__ResolutionLayer_005c94f0;
extern void *PTR__RibbonEmitter_005dd330;
extern void *PTR__Runman_005c1470;
extern void *PTR__SMBAnimal_005c16b0;
extern void *PTR__SMBBoss_005c18b0;
extern void *PTR__SMBCharSwitch_005c7910;
extern void *PTR__SMBControlsMenu_005c77f0;
extern void *PTR__SMBCreditMenu_005c7730;
extern void *PTR__SMBEditorRenderLayer_005c4450;
extern void *PTR__SMBHowToPlayMenu_005c7790;
extern void *PTR__SMBInternetChapterSel_005c5c90;
extern void *PTR__SMBLeaderBoardMenu_005c5e70;
extern void *PTR__SMBLevelPortalInterface_005c88d0;
extern void *PTR__SMBMoveOn_005c7970;
extern void *PTR__SMBPalette_005c71f0;
extern void *PTR__SMBPopupMenu_005c76d0;
extern void *PTR__SMBReplayManager_005c8a90;
extern void *PTR__SMBSelectionMenu_005c8b70;
extern void *PTR__SMBSettingsMenu_005c8cb0;
extern void *PTR__SMBStatisticsMenu_005c7850;
extern void *PTR__SMBUpsellMenu_005c78b0;
extern void *PTR__SceneObject2D_005dd3d0;
extern void *PTR__SceneObject3D_005dd410;
extern void *PTR__SceneObject_005bf710;
extern void *PTR__SmokeEmitter_005c8db0;
extern void *PTR__SparkEmitter_005dd4f0;
extern void *PTR__SprintMeatBoy_005becb0;
extern void *PTR__Sprite_005dd590;
extern void *PTR__Sprite_005dd5b8;
extern void *PTR__TextEmitterFont_005dc0b0;
extern void *PTR__Texture_005dd630;
extern void *PTR__TheKid_005c96d0;
extern void *PTR__TileLevelLayer_005dcff0;
extern void *PTR__TileLevelSetPiece_005dd030;
extern void *PTR__Tim_005c9810;
extern void *PTR__TofuBoy_005bf3b0;
extern void *PTR__UIButton_005dd8d0;
extern void *PTR__UIDropDown_005dd990;
extern void *PTR__UIFormElement_005dd830;
extern void *PTR__UIForm_005dda70;
extern void *PTR__UIFrame_005ddb10;
extern void *PTR__UILabel_005ddbb0;
extern void *PTR__UIMessageBox_005ddab0;
extern void *PTR__UIScrollBar_005ddc50;
extern void *PTR__UITextField_005ddcf0;
extern void *PTR__UnixUserProfile_005de790;
extern void *PTR__Unwind_Resume_00815d28;
extern void *PTR__UserProfile_005de8f0;
extern void *PTR__VVVVVV_005c9950;
extern void *PTR__VertexBuffer_005ddd90;
extern void *PTR__VertexDeclaration_005dde10;
extern void *PTR__VertexShader_005dde70;
extern void *PTR__VertexStream_005dded0;
extern void *PTR___acosf_finite_008157f8;
extern void *PTR___atan2_finite_00815a88;
extern void *PTR___cxa_atexit_00815980;
extern void *PTR___cxa_guard_abort_008158c8;
extern void *PTR___cxa_guard_acquire_00815d58;
extern void *PTR___cxa_guard_release_008158d8;
extern void *PTR___cxa_pure_virtual_005c6b30;
extern void *PTR___cxa_pure_virtual_005dbd30;
extern void *PTR___dso_handle_00815618;
extern void *PTR___errno_location_00815670;
extern void *PTR___exp_finite_00815950;
extern void *PTR___fxstat_00815a60;
extern void *PTR___getMessage_005de620;
extern void *PTR___gmon_start___00815620;
extern void *PTR___isoc99_sscanf_00815a08;
extern void *PTR___libc_start_main_00815d80;
extern void *PTR___logf_finite_00815740;
extern void *PTR___pow_finite_008156b0;
extern void *PTR___throw_out_of_range_00815c08;
extern void *PTR___xstat_00815a30;
extern void *PTR__setjmp_00815bf0;
extern void *PTR__wstring_00815d68;
extern void *PTR_abort_00815868;
extern void *PTR_access_00815cf8;
extern void *PTR_alBufferData_00815ab0;
extern void *PTR_alDeleteBuffers_00815658;
extern void *PTR_alDeleteSources_00815960;
extern void *PTR_alGenBuffers_00815ad8;
extern void *PTR_alGenSources_00815688;
extern void *PTR_alGetError_008156a8;
extern void *PTR_alGetSourcefv_00815758;
extern void *PTR_alGetSourceiv_00815cf0;
extern void *PTR_alSourcePlay_00815a10;
extern void *PTR_alSourceQueueBuffers_00815748;
extern void *PTR_alSourceStop_00815db0;
extern void *PTR_alSourceUnqueueBuffers_008159c8;
extern void *PTR_alSourcef_00815b78;
extern void *PTR_alSourcei_00815888;
extern void *PTR_alcCloseDevice_00815c38;
extern void *PTR_alcCreateContext_00815aa8;
extern void *PTR_alcDestroyContext_008159f0;
extern void *PTR_alcGetContextsDevice_00815780;
extern void *PTR_alcGetCurrentContext_008158c0;
extern void *PTR_alcMakeContextCurrent_00815660;
extern void *PTR_alcOpenDevice_00815848;
extern void *PTR_alcProcessContext_00815770;
extern void *PTR_alcSuspendContext_00815d38;
extern void *PTR_append_008156e0;
extern void *PTR_append_00815a78;
extern void *PTR_append_00815d60;
extern void *PTR_assign_00815760;
extern void *PTR_assign_008159d0;
extern void *PTR_assign_00815b10;
extern void *PTR_assign_00815b68;
extern void *PTR_assign_00815bd0;
extern void *PTR_chdir_00815c20;
extern void *PTR_clearerr_008156c8;
extern void *PTR_close_00815dd0;
extern void *PTR_closedir_00815cb8;
extern void *PTR_compare_00815720;
extern void *PTR_cos_00815d78;
extern void *PTR_cosf_008158f8;
extern void *PTR_exit_00815b38;
extern void *PTR_fclose_00815a20;
extern void *PTR_fdopen_00815a58;
extern void *PTR_ferror_00815d88;
extern void *PTR_fflush_00815ae8;
extern void *PTR_fgetc_00815c90;
extern void *PTR_find_00815710;
extern void *PTR_find_00815918;
extern void *PTR_floor_00815d08;
extern void *PTR_fopen_00815b00;
extern void *PTR_fprintf_00815be0;
extern void *PTR_fputc_00815b50;
extern void *PTR_fread_00815c30;
extern void *PTR_free_00815b18;
extern void *PTR_fseek_00815a98;
extern void *PTR_ftell_00815640;
extern void *PTR_fwrite_00815dc8;
extern void *PTR_getenv_00815b40;
extern void *PTR_gettimeofday_00815cc8;
extern void *PTR_glob_00815b80;
extern void *PTR_globfree_008156f0;
extern void *PTR_gmtime_00815970;
extern void *PTR_ldexp_00815c58;
extern void *PTR_localtime_r_00815858;
extern void *PTR_longjmp_008157b0;
extern void *PTR_lseek_00815d70;
extern void *PTR_malloc_00815b88;
extern void *PTR_memchr_00815aa0;
extern void *PTR_memcmp_00815800;
extern void *PTR_memcpy_00815948;
extern void *PTR_memmove_00815cd8;
extern void *PTR_memset_00815860;
extern void *PTR_mkdir_00815808;
extern void *PTR_mysql_close_008156e8;
extern void *PTR_mysql_errno_00815c68;
extern void *PTR_mysql_fetch_lengths_008156f8;
extern void *PTR_mysql_fetch_row_00815ad0;
extern void *PTR_mysql_free_result_008157c0;
extern void *PTR_mysql_init_00815ca0;
extern void *PTR_mysql_insert_id_00815dc0;
extern void *PTR_mysql_real_connect_00815940;
extern void *PTR_mysql_real_query_00815768;
extern void *PTR_mysql_select_db_008159a0;
extern void *PTR_mysql_server_init_008156a0;
extern void *PTR_mysql_store_result_00815978;
extern void *PTR_open_008158f0;
extern void *PTR_opendir_00815c40;
extern void *PTR_operator_delete_008159d8;
extern void *PTR_operator_delete___00815b60;
extern void *PTR_operator_new_00815a28;
extern void *PTR_operator_new___00815650;
extern void *PTR_parse_args_NULL_005d01a8;
extern void *PTR_printf_00815678;
extern void *PTR_pthread_cond_broadcast_00815788;
extern void *PTR_pthread_cond_destroy_00815db8;
extern void *PTR_pthread_cond_init_00815b30;
extern void *PTR_pthread_cond_wait_00815c60;
extern void *PTR_pthread_create_00815880;
extern void *PTR_pthread_detach_00815a50;
extern void *PTR_pthread_getschedparam_00815d20;
extern void *PTR_pthread_join_00815830;
extern void *PTR_pthread_mutex_destroy_00815ae0;
extern void *PTR_pthread_mutex_init_00815c28;
extern void *PTR_pthread_mutex_lock_00815c18;
extern void *PTR_pthread_mutex_trylock_00815738;
extern void *PTR_pthread_mutex_unlock_00815908;
extern void *PTR_pthread_mutexattr_destroy_008157f0;
extern void *PTR_pthread_mutexattr_init_00815ba8;
extern void *PTR_pthread_mutexattr_settype_00815d50;
extern void *PTR_pthread_setschedparam_008158e8;
extern void *PTR_qsort_00815da8;
extern void *PTR_random_00815850;
extern void *PTR_read_00815be8;
extern void *PTR_readdir_00815c70;
extern void *PTR_realloc_00815ce0;
extern void *PTR_rename_008158b0;
extern void *PTR_reserve_008157d0;
extern void *PTR_reserve_00815928;
extern void *PTR_rfind_00815bb0;
extern void *PTR_s_buttholeidle_00816090;
extern void *PTR_s_cannon_00816078;
extern void *PTR_s_defaultform_00816168;
extern void *PTR_s_hominglazeron_008160d8;
extern void *PTR_s_launcher2shoot_00816138;
extern void *PTR_s_lazeroff_005c6e3d_6_008160c0;
extern void *PTR_s_quake_00816018;
extern void *PTR_s_shooter1_00816048;
extern void *PTR_s_shooter2_00816060;
extern void *PTR_s_smoke_00816030;
extern void *PTR_s_switchidle_00816108;
extern void *PTR_s_turret1idle_008160a8;
extern void *PTR_sched_get_priority_max_00815a00;
extern void *PTR_sched_get_priority_min_00815b70;
extern void *PTR_setlocale_00815988;
extern void *PTR_sin_00815708;
extern void *PTR_sincos_008158a0;
extern void *PTR_sincosf_008157d8;
extern void *PTR_snprintf_00815ca8;
extern void *PTR_sprintf_008156d0;
extern void *PTR_srand_008159e8;
extern void *PTR_srandom_00815730;
extern void *PTR_strcasecmp_00815a80;
extern void *PTR_strcat_00815d40;
extern void *PTR_strchr_008157a0;
extern void *PTR_strcmp_00815bb8;
extern void *PTR_strcpy_008159c0;
extern void *PTR_strerror_00815778;
extern void *PTR_string_00815878;
extern void *PTR_string_00815ac8;
extern void *PTR_string_00815c80;
extern void *PTR_strlen_008157e0;
extern void *PTR_strncasecmp_00815b58;
extern void *PTR_strncmp_00815828;
extern void *PTR_strrchr_00815a90;
extern void *PTR_strstr_00815718;
extern void *PTR_strtod_00815910;
extern void *PTR_strtol_00815bc0;
extern void *PTR_substr_00815d18;
extern void *PTR_sysconf_008158e0;
extern void *PTR_tan_00815870;
extern void *PTR_time_008159b8;
extern void *PTR_unlink_00815820;
extern void *PTR_usleep_00815bc8;
extern void *PTR_vfprintf_00815b90;
extern void *PTR_vsnprintf_008158b8;
extern void *PTR_vsprintf_00815810;
extern void *PTR_vswprintf_008159e0;
extern void *PTR_wcslen_00815958;
extern void *PTR_wcstof_00815838;
extern void *PTR_wcstol_00815c50;
extern void *PTR_write_00815798;
extern void *PTR_wstring_00815df0;
