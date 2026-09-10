/* src/game/classes/SMBEditorForms.c — 3 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "SMBEditorForms.h"

/* ======================================================================
 * SMBEditorForms__Initialize  (Ghidra `Initialize` @ 004bc450)
 * Signature: uint8_t __stdcall Initialize(void)
 * Class: SMBEditorForms
 * Calls: `ActivateAnimProps`, `ActivateAnimalProps`, `ActivateEffectProps`, `ActivatePieceProps`, `ActivatePlayerProps`, `ActivateWayPointProps`, `ApplyAnimalProps`, `ApplyLayerProperties`, `ApplyLayerPropertiesToAllLayers`, `ApplyLightProperties` (+31 more)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* WARNING: Removing unreachable block (ram,0x004c18d7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SMBEditorForms__Initialize() */

void SMBEditorForms__Initialize(void)

{
  int *piVar1;
  uint64_t uVar2;
  UIForm *pUVar3;
  UILabel *pUVar4;
  UIButton *pUVar5;
  UITextField *pUVar6;
  UIDropDown *pUVar7;
  char *pcVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  byte bVar14;
  float fVar15;
  float local_c8c;
  uint8_t *local_c88;
  uint8_t *local_c80;
  uint8_t *local_c78;
  uint8_t *local_c70;
  uint8_t *local_c68;
  uint64_t local_c58;
  uint32_t local_c50;
  uint32_t local_c4c;
  uint64_t local_c48;
  uint8_t *local_c40;
  uint64_t local_c38;
  uint64_t local_c30;
  uint64_t *local_c28;
  uint32_t local_c20;
  uint32_t local_c1c;
  uint8_t *local_c18;
  uint64_t local_c10;
  uint8_t *local_c08;
  uint8_t local_bf8 [12];
  float local_bec;
  uint8_t local_be8 [8];
  float local_be0;
  float local_bdc;
  uint64_t *local_bd8 [2];
  uint32_t local_bc8;
  uint32_t local_bc4;
  uint32_t local_bb8;
  uint32_t local_bb4;
  uint32_t local_ba8;
  uint32_t local_ba4;
  uint32_t local_b98;
  uint32_t local_b94;
  uint32_t local_b88;
  uint32_t local_b84;
  uint32_t local_b78;
  uint32_t local_b74;
  float local_b68;
  float local_b64;
  float local_b58;
  float local_b54;
  uint32_t local_b48;
  uint32_t local_b44;
  float local_b38;
  float local_b34;
  float local_b28;
  float local_b24;
  uint32_t local_b18;
  uint32_t local_b14;
  float local_b08;
  float local_b04;
  float local_af8;
  float local_af4;
  uint32_t local_ae8;
  uint32_t local_ae4;
  uint32_t local_ad8;
  uint32_t local_ad4;
  FileList *local_ac8 [2];
  uint8_t *local_ab8 [2];
  uint32_t local_aa8;
  uint32_t local_aa4;
  uint32_t local_a98;
  uint32_t local_a94;
  uint32_t local_a88;
  uint32_t local_a84;
  uint32_t local_a78;
  uint32_t local_a74;
  float local_a68;
  float local_a64;
  float local_a58;
  float local_a54;
  uint32_t local_a48;
  uint32_t local_a44;
  float local_a38;
  float local_a34;
  float local_a28;
  float local_a24;
  uint32_t local_a18;
  uint32_t local_a14;
  float local_a08;
  float local_a04;
  float local_9f8;
  float local_9f4;
  uint32_t local_9e8;
  uint32_t local_9e4;
  uint32_t local_9d8;
  uint32_t local_9d4;
  uint32_t local_9c8;
  uint32_t local_9c4;
  uint32_t local_9b8;
  uint32_t local_9b4;
  uint32_t local_9a8;
  uint32_t local_9a4;
  uint32_t local_998;
  uint32_t local_994;
  uint32_t local_988;
  uint32_t local_984;
  float local_978;
  float local_974;
  uint32_t local_968;
  uint32_t local_964;
  uint32_t local_958;
  uint32_t local_954;
  float local_948;
  float local_944;
  uint32_t local_938;
  uint32_t local_934;
  uint32_t local_928;
  uint32_t local_924;
  float local_918;
  float local_914;
  uint32_t local_908;
  uint32_t local_904;
  uint32_t local_8f8;
  uint32_t local_8f4;
  float local_8e8;
  float local_8e4;
  uint32_t local_8d8;
  uint32_t local_8d4;
  uint32_t local_8c8;
  uint32_t local_8c4;
  float local_8b8;
  float local_8b4;
  uint32_t local_8a8;
  uint32_t local_8a4;
  float local_898;
  float local_894;
  float local_888;
  float local_884;
  float local_878;
  float local_874;
  float local_868;
  float local_864;
  uint32_t local_858;
  uint32_t local_854;
  uint32_t local_848;
  uint32_t local_844;
  float local_838;
  float local_834;
  float local_828;
  uint32_t local_824;
  uint32_t local_818;
  uint32_t local_814;
  float local_808;
  float local_804;
  float local_7f8;
  uint32_t local_7f4;
  uint32_t local_7e8;
  uint32_t local_7e4;
  float local_7d8;
  float local_7d4;
  float local_7c8;
  uint32_t local_7c4;
  uint32_t local_7b8;
  uint32_t local_7b4;
  float local_7a8;
  float local_7a4;
  float local_798;
  uint32_t local_794;
  uint32_t local_788;
  uint32_t local_784;
  float local_778;
  float local_774;
  float local_768;
  uint32_t local_764;
  uint32_t local_758;
  uint32_t local_754;
  float local_748;
  float local_744;
  float local_738;
  uint32_t local_734;
  uint32_t local_728;
  uint32_t local_724;
  float local_718;
  float local_714;
  float local_708;
  uint32_t local_704;
  uint32_t local_6f8;
  uint32_t local_6f4;
  float local_6e8;
  float local_6e4;
  float local_6d8;
  uint32_t local_6d4;
  uint32_t local_6c8;
  uint32_t local_6c4;
  float local_6b8;
  float local_6b4;
  float local_6a8;
  uint32_t local_6a4;
  uint32_t local_698;
  uint32_t local_694;
  float local_688;
  float local_684;
  float local_678;
  uint32_t local_674;
  uint32_t local_668;
  uint32_t local_664;
  float local_658;
  float local_654;
  float local_648;
  uint32_t local_644;
  uint32_t local_638;
  uint32_t local_634;
  float local_628;
  float local_624;
  float local_618;
  uint32_t local_614;
  uint32_t local_608;
  uint32_t local_604;
  float local_5f8;
  float local_5f4;
  float local_5e8;
  uint32_t local_5e4;
  uint32_t local_5d8;
  uint32_t local_5d4;
  uint32_t local_5c8;
  uint32_t local_5c4;
  uint32_t local_5b8;
  uint32_t local_5b4;
  uint32_t local_5a8;
  float local_5a4;
  float local_598;
  float local_594;
  float local_588;
  float local_584;
  float local_578;
  uint32_t local_574;
  float local_568;
  float local_564;
  float local_558;
  float local_554;
  float local_548;
  uint32_t local_544;
  uint32_t local_538;
  uint32_t local_534;
  uint32_t local_528;
  float local_524;
  float local_518;
  float local_514;
  float local_508;
  float local_504;
  float local_4f8;
  uint32_t local_4f4;
  float local_4e8;
  float local_4e4;
  float local_4d8;
  float local_4d4;
  float local_4c8;
  uint32_t local_4c4;
  float local_4b8;
  float local_4b4;
  float local_4a8;
  float local_4a4;
  float local_498;
  uint32_t local_494;
  uint32_t local_488;
  float local_484;
  float local_478;
  float local_474;
  float local_468;
  uint32_t local_464;
  uint32_t local_458;
  float local_454;
  float local_448;
  float local_444;
  float local_438;
  uint32_t local_434;
  uint32_t local_428;
  float local_424;
  float local_418;
  float local_414;
  float local_408;
  uint32_t local_404;
  uint32_t local_3f8;
  uint32_t local_3f4;
  uint32_t local_3e8;
  uint32_t local_3e4;
  uint32_t local_3d8;
  uint32_t local_3d4;
  uint32_t local_3c8;
  uint32_t local_3c4;
  uint32_t local_3b8;
  uint32_t local_3b4;
  uint32_t local_3a8;
  uint32_t local_3a4;
  float local_398;
  float local_394;
  uint32_t local_388;
  uint32_t local_384;
  uint32_t local_378;
  uint32_t local_374;
  float local_368;
  float local_364;
  uint32_t local_358;
  uint32_t local_354;
  uint32_t local_348;
  uint32_t local_344;
  float local_338;
  float local_334;
  uint32_t local_328;
  uint32_t local_324;
  uint32_t local_318;
  uint32_t local_314;
  uint32_t local_308;
  uint32_t local_304;
  uint32_t local_2f8;
  uint32_t local_2f4;
  uint32_t local_2e8;
  uint32_t local_2e4;
  uint32_t local_2d8;
  uint32_t local_2d4;
  uint32_t local_2c8;
  uint32_t local_2c4;
  uint32_t local_2b8;
  uint32_t local_2b4;
  float local_2a8;
  float local_2a4;
  uint32_t local_298;
  uint32_t local_294;
  uint32_t local_288;
  uint32_t local_284;
  float local_278;
  float local_274;
  uint32_t local_268;
  uint32_t local_264;
  uint32_t local_258;
  uint32_t local_254;
  uint32_t local_248;
  uint32_t local_244;
  uint32_t local_238;
  uint32_t local_234;
  uint32_t local_228;
  uint32_t local_224;
  uint32_t local_218;
  uint32_t local_214;
  float local_208;
  float local_204;
  uint32_t local_1f8;
  uint32_t local_1f4;
  uint32_t local_1e8;
  uint32_t local_1e4;
  float local_1d8;
  float local_1d4;
  uint32_t local_1c8;
  uint32_t local_1c4;
  uint32_t local_1b8;
  uint32_t local_1b4;
  float local_1a8;
  float local_1a4;
  uint32_t local_198;
  uint32_t local_194;
  uint32_t local_188;
  uint32_t local_184;
  float local_178;
  float local_174;
  uint32_t local_168;
  uint32_t local_164;
  uint32_t local_158;
  uint32_t local_154;
  float local_148;
  float local_144;
  uint32_t local_138;
  uint32_t local_134;
  uint32_t local_128;
  uint32_t local_124;
  float local_118;
  float local_114;
  uint32_t local_108;
  uint32_t local_104;
  uint32_t local_f8;
  uint32_t local_f4;
  uint32_t local_e8;
  uint32_t local_e4;
  uint32_t local_d8;
  uint32_t local_d4;
  uint32_t local_c8;
  uint32_t local_c4;
  float local_b8;
  float local_b4;
  uint32_t local_a8;
  uint32_t local_a4;
  float local_98;
  float local_94;
  float local_88 [4];
  uint32_t local_78;
  uint32_t local_74;
  float local_68;
  float local_64;
  uint32_t local_58;
  uint32_t local_54;
  float local_48;
  float local_44;
  float local_38 [4];
  
  bVar14 = 0;
  local_c58 = 0;
  local_c50 = 0;
  local_c48 = 0;
  local_c40 = _DEFAULT_UIFORM_STYLE;
  local_c4c = 0xf;
  pUVar3 = operator_new(0xa8);
                    /* try { // try from 004bc49f to 004bc4a3 has its CatchHandler @ 004c187d */
  UIForm__UIForm__005a3ce0(pUVar3,(UIFormCreation *)&local_c58);
  SMB_LOAD_LEVEL = pUVar3;
  pUVar3 = operator_new(0xa8);
                    /* try { // try from 004bc4c0 to 004bc4c4 has its CatchHandler @ 004c2235 */
  UIForm__UIForm__005a3ce0(pUVar3,(UIFormCreation *)&local_c58);
  SMB_NEW_LEVEL = pUVar3;
  pUVar3 = operator_new(0xa8);
                    /* try { // try from 004bc4e1 to 004bc4e5 has its CatchHandler @ 004c2225 */
  UIForm__UIForm__005a3ce0(pUVar3,(UIFormCreation *)&local_c58);
  SMB_SAVE_LEVEL = pUVar3;
  pUVar3 = operator_new(0xa8);
                    /* try { // try from 004bc502 to 004bc506 has its CatchHandler @ 004c2215 */
  UIForm__UIForm__005a3ce0(pUVar3,(UIFormCreation *)&local_c58);
  SMB_PLAYER_PROPS = pUVar3;
  pUVar3 = operator_new(0xa8);
                    /* try { // try from 004bc523 to 004bc527 has its CatchHandler @ 004c2205 */
  UIForm__UIForm__005a3ce0(pUVar3,(UIFormCreation *)&local_c58);
  SMB_PLAYER_ANIMS = pUVar3;
  pUVar3 = operator_new(0xa8);
                    /* try { // try from 004bc544 to 004bc548 has its CatchHandler @ 004c21f5 */
  UIForm__UIForm__005a3ce0(pUVar3,(UIFormCreation *)&local_c58);
  SMB_PLAYER_EFFECTS = pUVar3;
  pUVar3 = operator_new(0xa8);
                    /* try { // try from 004bc565 to 004bc569 has its CatchHandler @ 004c21e5 */
  UIForm__UIForm__005a3ce0(pUVar3,(UIFormCreation *)&local_c58);
  SMB_LEVEL_PROPS = pUVar3;
  pUVar3 = operator_new(0xa8);
                    /* try { // try from 004bc586 to 004bc58a has its CatchHandler @ 004c21d5 */
  UIForm__UIForm__005a3ce0(pUVar3,(UIFormCreation *)&local_c58);
  SMB_LIGHT_PROPS = pUVar3;
  pUVar3 = operator_new(0xa8);
                    /* try { // try from 004bc5a7 to 004bc5ab has its CatchHandler @ 004c21c5 */
  UIForm__UIForm__005a3ce0(pUVar3,(UIFormCreation *)&local_c58);
  SMB_WAYPOINT_PROPS = pUVar3;
  pUVar3 = operator_new(0xa8);
                    /* try { // try from 004bc5c8 to 004bc5cc has its CatchHandler @ 004c21b7 */
  UIForm__UIForm__005a3ce0(pUVar3,(UIFormCreation *)&local_c58);
  SMB_PIECE_PROPS = pUVar3;
  pUVar3 = operator_new(0xa8);
                    /* try { // try from 004bc5e9 to 004bc5ed has its CatchHandler @ 004c21b2 */
  UIForm__UIForm__005a3ce0(pUVar3,(UIFormCreation *)&local_c58);
  local_bd8[0] = (uint64_t *)_DEFAULT_UILABEL_STYLE;
  SMB_ANIMAL_PROPS = pUVar3;
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bc619 to 004bc61d has its CatchHandler @ 004c21a5 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
  UILabel__setText(pUVar4,L"Load Level");
  UILabel__setAlign(pUVar4,2);
  local_c18 = _DEFAULT_UILABEL_STYLE;
  local_c10 = 0;
  local_c08 = _DEFAULT_UIBUTTON_STYLE;
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004bc674 to 004bc678 has its CatchHandler @ 004c2196 */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"Load Level");
  local_bc8 = 0;
  local_bc4 = 0xc2a00000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_bc8);
  *(code **)(pUVar5 + 0x40) = SMB_LOAD_LEVEL_Submit;
  local_c38 = 0;
  local_c30 = 0;
  local_c28 = &_DEFAULT_UITEXTFIELD_STYLE;
  local_c20 = 0x43c80000;
  local_c1c = 0x42480000;
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bc6f6 to 004bc6fa has its CatchHandler @ 004c2194 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_bb8 = 0;
  local_bb4 = 0xc2200000;
  pSMBLoadFileName = pUVar6;
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x20),(Vector2 *)&local_bb8);
  UIForm__AddFormElement(SMB_LOAD_LEVEL,(UIFormElement *)pUVar4);
  UIForm__AddFormElement(SMB_LOAD_LEVEL,(UIFormElement *)pSMBLoadFileName);
  UIForm__AddFormElement(SMB_LOAD_LEVEL,(UIFormElement *)pUVar5);
  UIForm__setEdgePadding(SMB_LOAD_LEVEL,0x19,0x19);
  pUVar3 = SMB_LOAD_LEVEL;
  *(code **)(SMB_LOAD_LEVEL + 0x50) = SMB_LOAD_LEVEL_Submit;
  *(code **)(pUVar3 + 0x58) = SMB_LOAD_LEVEL_Activate;
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bc7a0 to 004bc7a4 has its CatchHandler @ 004c2192 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
  UILabel__setText(pUVar4,L"Save Level");
  UILabel__setAlign(pUVar4,2);
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004bc7d7 to 004bc7db has its CatchHandler @ 004c218d */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"Save Level");
  local_ba8 = 0;
  local_ba4 = 0xc2a00000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_ba8);
  *(code **)(pUVar5 + 0x40) = SMB_SAVE_LEVEL_Submit;
  local_c20 = 0x43c80000;
  local_c1c = 0x42480000;
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bc83e to 004bc842 has its CatchHandler @ 004c2175 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_b98 = 0;
  local_b94 = 0xc2200000;
  pSMBSAVEFileName = pUVar6;
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x20),(Vector2 *)&local_b98);
  UIForm__AddFormElement(SMB_SAVE_LEVEL,(UIFormElement *)pUVar4);
  UIForm__AddFormElement(SMB_SAVE_LEVEL,(UIFormElement *)pSMBSAVEFileName);
  UIForm__AddFormElement(SMB_SAVE_LEVEL,(UIFormElement *)pUVar5);
  UIForm__setEdgePadding(SMB_SAVE_LEVEL,0x19,0x19);
  pUVar3 = SMB_SAVE_LEVEL;
  *(code **)(SMB_SAVE_LEVEL + 0x50) = SMB_SAVE_LEVEL_Submit;
  *(code **)(pUVar3 + 0x58) = SMB_SAVE_LEVEL_Activate;
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bc8e8 to 004bc8ec has its CatchHandler @ 004c2167 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
  UILabel__setText(pUVar4,L"New Level");
  UILabel__setAlign(pUVar4,1);
  local_b88 = 0xc3160000;
  local_b84 = 0x43480000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_b88);
  UIForm__AddFormElement(SMB_NEW_LEVEL,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bc955 to 004bc959 has its CatchHandler @ 004c2162 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
  UILabel__setText(pUVar4,L"Width");
  UILabel__setAlign(pUVar4,1);
  local_b78 = 0xc3160000;
  local_b74 = 0x43160000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_b78);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_NEW_LEVEL,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bc9d0 to 004bc9d4 has its CatchHandler @ 004c2159 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_b68 = DAT_005c5b48 /* R:8.0f */ * *(float *)((long)local_bd8[0] + 0x18);
  local_b64 = *(float *)((long)local_bd8[0] + 0x18) * DAT_005c17f4 /* R:2.5f */;
  pSMBNEWLevelWidth = pUVar6;
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_b68);
  (**(code **)(*(long *)pSMBNEWLevelWidth + 0x58))(pSMBNEWLevelWidth,local_be8);
  local_b54 = ((*(float *)(pUVar4 + 0x24) - DAT_005be6e4 /* R:0.5f */ * local_bdc) - DAT_005be6e4 /* R:0.5f */ * local_bec) -
              _DAT_005bfd00 /* R:10.0f */;
  local_b58 = DAT_005be6e4 /* R:0.5f */ * local_be0 + *(float *)(pUVar4 + 0x20);
  Vector2__operator_assign((Vector2 *)(pSMBNEWLevelWidth + 0x20),(Vector2 *)&local_b58);
  UIForm__AddFormElement(SMB_NEW_LEVEL,(UIFormElement *)pSMBNEWLevelWidth);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bcad7 to 004bcadb has its CatchHandler @ 004c2154 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
  UILabel__setText(pUVar4,L"Height");
  UILabel__setAlign(pUVar4,1);
  local_b48 = 0x42c80000;
  local_b44 = 0x43160000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_b48);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_NEW_LEVEL,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bcb52 to 004bcb56 has its CatchHandler @ 004c2152 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_b38 = DAT_005c5b48 /* R:8.0f */ * *(float *)((long)local_bd8[0] + 0x18);
  local_b34 = *(float *)((long)local_bd8[0] + 0x18) * DAT_005c17f4 /* R:2.5f */;
  pSMBNEWLevelHeight = pUVar6;
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_b38);
  (**(code **)(*(long *)pSMBNEWLevelHeight + 0x58))(pSMBNEWLevelHeight,local_be8);
  local_b24 = ((*(float *)(pUVar4 + 0x24) - DAT_005be6e4 /* R:0.5f */ * local_bdc) - DAT_005be6e4 /* R:0.5f */ * local_bec) -
              _DAT_005bfd00 /* R:10.0f */;
  local_b28 = DAT_005be6e4 /* R:0.5f */ * local_be0 + *(float *)(pUVar4 + 0x20);
  Vector2__operator_assign((Vector2 *)(pSMBNEWLevelHeight + 0x20),(Vector2 *)&local_b28);
  UIForm__AddFormElement(SMB_NEW_LEVEL,(UIFormElement *)pSMBNEWLevelHeight);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bcc59 to 004bcc5d has its CatchHandler @ 004c214d */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
  UILabel__setText(pUVar4,L"Level Name");
  UILabel__setAlign(pUVar4,1);
  local_b18 = 0xc3160000;
  local_b14 = 0x41c80000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_b18);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_NEW_LEVEL,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bccd4 to 004bccd8 has its CatchHandler @ 004c2135 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_b08 = DAT_005c13fc /* R:20.0f */ * *(float *)((long)local_bd8[0] + 0x18);
  local_b04 = *(float *)((long)local_bd8[0] + 0x18) * DAT_005c17f4 /* R:2.5f */;
  pSMBNEWLevelName = pUVar6;
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_b08);
  (**(code **)(*(long *)pSMBNEWLevelName + 0x58))(pSMBNEWLevelName,local_be8);
  local_af4 = ((*(float *)(pUVar4 + 0x24) - DAT_005be6e4 /* R:0.5f */ * local_bdc) - DAT_005be6e4 /* R:0.5f */ * local_bec) -
              _DAT_005bfd00 /* R:10.0f */;
  local_af8 = DAT_005be6e4 /* R:0.5f */ * local_be0 + *(float *)(pUVar4 + 0x20);
  Vector2__operator_assign((Vector2 *)(pSMBNEWLevelName + 0x20),(Vector2 *)&local_af8);
  UIForm__AddFormElement(SMB_NEW_LEVEL,(UIFormElement *)pSMBNEWLevelName);
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004bcddb to 004bcddf has its CatchHandler @ 004c2125 */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"Create");
  local_ae8 = 0x43200000;
  local_ae4 = 0xc35c0000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_ae8);
  pUVar3 = SMB_NEW_LEVEL;
  *(code **)(pUVar5 + 0x40) = SMB_NEW_LEVEL_Submit;
  UIForm__AddFormElement(pUVar3,(UIFormElement *)pUVar5);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bce44 to 004bce48 has its CatchHandler @ 004c2119 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
  UILabel__setText(pUVar4,L"Tile Palette");
  UILabel__setAlign(pUVar4,1);
  local_ad8 = 0xc3160000;
  local_ad4 = 0xc2960000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_ad8);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_NEW_LEVEL,(UIFormElement *)pUVar4);
  local_c88 = _DEFAULT_UIDROPDOWN_STYLE;
  local_c80 = _DEFAULT_UIBUTTON_STYLE;
  local_c78 = _DEFAULT_UIBUTTON_STYLE;
  local_c70 = _DEFAULT_UIFRAME_STYLE;
  local_c68 = _DEFAULT_UIDROPDOWNFORM_STYLE;
  pUVar7 = operator_new(0x530);
                    /* try { // try from 004bceec to 004bcef0 has its CatchHandler @ 004c2114 */
  UIDropDown__UIDropDown__005a2c90(pUVar7,(UIDropDownCreation *)&local_c88);
  local_ab8[0] = &DAT_008184c8 /* R:0.00016803004837129265f */;
  pSMBNEWPaletteDropDown = pUVar7;
                    /* try { // try from 004bcf11 to 004bd01c has its CatchHandler @ 004c210c */
  pcVar8 = (char *)FormatResourcePath("/LevelPalettes/*.lp",local_ab8);
  File__ReadDirectory(pcVar8,local_ac8);
  if (local_ac8[0] != (FileList *)0x0) {
    if (0 < *(int *)local_ac8[0]) {
      lVar11 = 0;
      iVar13 = 0;
      do {
        ConvertCHARtoWCHAR(*(uint64_t *)(*(long *)(local_ac8[0] + 8) + lVar11),&strLargeStringW);
        UIDropDown__AddDropdownElement(pSMBNEWPaletteDropDown,strLargeStringW,(void *)0x0);
        iVar13 = iVar13 + 1;
        lVar11 = lVar11 + 0x10;
      } while (iVar13 < *(int *)local_ac8[0]);
    }
    free(local_ac8[0]);
  }
  local_aa8 = 0x437a0000;
  local_aa4 = 0x41c80000;
  Vector2__operator_assign((Vector2 *)(pSMBNEWPaletteDropDown + 0x28),(Vector2 *)&local_aa8);
  local_a98 = 0xc1c80000;
  local_a94 = 0xc2dc0000;
  Vector2__operator_assign((Vector2 *)(pSMBNEWPaletteDropDown + 0x20),(Vector2 *)&local_a98);
  UIForm__AddFormElement(SMB_NEW_LEVEL,(UIFormElement *)pSMBNEWPaletteDropDown);
  UIForm__setEdgePadding(SMB_NEW_LEVEL,0x19,0x19);
  *(code **)(SMB_NEW_LEVEL + 0x50) = SMB_NEW_LEVEL_Submit;
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bd02b to 004bd02f has its CatchHandler @ 004c20f9 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bd038 to 004bd089 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Level Props");
  UILabel__setAlign(pUVar4,1);
  local_a88 = 0xc3160000;
  local_a84 = 0x43480000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_a88);
  UIForm__AddFormElement(SMB_LEVEL_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bd098 to 004bd09c has its CatchHandler @ 004c20e6 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bd0a5 to 004bd107 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Width");
  UILabel__setAlign(pUVar4,1);
  local_a78 = 0xc3160000;
  local_a74 = 0x43160000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_a78);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_LEVEL_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bd113 to 004bd117 has its CatchHandler @ 004c20d6 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_a68 = DAT_005c5b48 /* R:8.0f */ * *(float *)((long)local_bd8[0] + 0x18);
  local_a64 = *(float *)((long)local_bd8[0] + 0x18) * DAT_005c17f4 /* R:2.5f */;
  pSMBLEVELPROPSWidth = pUVar6;
                    /* try { // try from 004bd15e to 004bd20b has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_a68);
  (**(code **)(*(long *)pSMBLEVELPROPSWidth + 0x58))(pSMBLEVELPROPSWidth,local_be8);
  local_a54 = ((*(float *)(pUVar4 + 0x24) - DAT_005be6e4 /* R:0.5f */ * local_bdc) - DAT_005be6e4 /* R:0.5f */ * local_bec) -
              _DAT_005bfd00 /* R:10.0f */;
  local_a58 = DAT_005be6e4 /* R:0.5f */ * local_be0 + *(float *)(pUVar4 + 0x20);
  Vector2__operator_assign((Vector2 *)(pSMBLEVELPROPSWidth + 0x20),(Vector2 *)&local_a58);
  UIForm__AddFormElement(SMB_LEVEL_PROPS,(UIFormElement *)pSMBLEVELPROPSWidth);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bd21a to 004bd21e has its CatchHandler @ 004c20c3 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bd227 to 004bd289 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Height");
  UILabel__setAlign(pUVar4,1);
  local_a48 = 0x42c80000;
  local_a44 = 0x43160000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_a48);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_LEVEL_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bd295 to 004bd299 has its CatchHandler @ 004c20b3 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_a38 = DAT_005c5b48 /* R:8.0f */ * *(float *)((long)local_bd8[0] + 0x18);
  local_a34 = *(float *)((long)local_bd8[0] + 0x18) * DAT_005c17f4 /* R:2.5f */;
  pSMBLEVELPROPSHeight = pUVar6;
                    /* try { // try from 004bd2e0 to 004bd38d has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_a38);
  (**(code **)(*(long *)pSMBLEVELPROPSHeight + 0x58))(pSMBLEVELPROPSHeight,local_be8);
  local_a24 = ((*(float *)(pUVar4 + 0x24) - DAT_005be6e4 /* R:0.5f */ * local_bdc) - DAT_005be6e4 /* R:0.5f */ * local_bec) -
              _DAT_005bfd00 /* R:10.0f */;
  local_a28 = DAT_005be6e4 /* R:0.5f */ * local_be0 + *(float *)(pUVar4 + 0x20);
  Vector2__operator_assign((Vector2 *)(pSMBLEVELPROPSHeight + 0x20),(Vector2 *)&local_a28);
  UIForm__AddFormElement(SMB_LEVEL_PROPS,(UIFormElement *)pSMBLEVELPROPSHeight);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bd39c to 004bd3a0 has its CatchHandler @ 004c20a0 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bd3a9 to 004bd40b has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Level Name");
  UILabel__setAlign(pUVar4,1);
  local_a18 = 0xc3160000;
  local_a14 = 0x41c80000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_a18);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_LEVEL_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bd417 to 004bd41b has its CatchHandler @ 004c2090 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_a08 = DAT_005c13fc /* R:20.0f */ * *(float *)((long)local_bd8[0] + 0x18);
  local_a04 = DAT_005c17f4 /* R:2.5f */ * *(float *)((long)local_bd8[0] + 0x18);
  pSMBLEVELPROPSName = pUVar6;
                    /* try { // try from 004bd466 to 004bd513 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_a08);
  (**(code **)(*(long *)pSMBLEVELPROPSName + 0x58))(pSMBLEVELPROPSName,local_be8);
  local_9f4 = ((*(float *)(pUVar4 + 0x24) - DAT_005be6e4 /* R:0.5f */ * local_bdc) - DAT_005be6e4 /* R:0.5f */ * local_bec) -
              _DAT_005bfd00 /* R:10.0f */;
  local_9f8 = DAT_005be6e4 /* R:0.5f */ * local_be0 + *(float *)(pUVar4 + 0x20);
  Vector2__operator_assign((Vector2 *)(pSMBLEVELPROPSName + 0x20),(Vector2 *)&local_9f8);
  UIForm__AddFormElement(SMB_LEVEL_PROPS,(UIFormElement *)pSMBLEVELPROPSName);
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004bd522 to 004bd526 has its CatchHandler @ 004c207d */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
                    /* try { // try from 004bd530 to 004bd5a9 has its CatchHandler @ 004c210c */
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"Create");
  local_9e8 = 0x43200000;
  local_9e4 = 0xc35c0000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_9e8);
  pUVar3 = SMB_LEVEL_PROPS;
  *(code **)(pUVar5 + 0x40) = SMB_LEVEL_PROPS_Submit;
  UIForm__AddFormElement(pUVar3,(UIFormElement *)pUVar5);
  UIForm__setEdgePadding(SMB_LEVEL_PROPS,0x19,0x19);
  pUVar3 = SMB_LEVEL_PROPS;
  *(code **)(SMB_LEVEL_PROPS + 0x50) = SMB_LEVEL_PROPS_Submit;
  *(code **)(pUVar3 + 0x58) = SMB_LEVEL_PROPS_Activate;
  pUVar3 = operator_new(0xa8);
                    /* try { // try from 004bd5b5 to 004bd5b9 has its CatchHandler @ 004c206a */
  UIForm__UIForm__005a3ce0(pUVar3,(UIFormCreation *)&local_c58);
  *(code **)(pUVar3 + 0x58) = LayerPropertiesActivate;
  SMB_LAYER_PROPS = pUVar3;
                    /* try { // try from 004bd5ce to 004bd5d2 has its CatchHandler @ 004c210c */
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004bd5e1 to 004bd5e5 has its CatchHandler @ 004c2057 */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
                    /* try { // try from 004bd5ef to 004bd63b has its CatchHandler @ 004c210c */
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"Apply");
  local_9d8 = 0x42c80000;
  local_9d4 = 0xc3480000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_9d8);
  pUVar3 = SMB_LAYER_PROPS;
  *(code **)(pUVar5 + 0x40) = ApplyLayerProperties;
  UIForm__AddFormElement(pUVar3,(UIFormElement *)pUVar5);
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004bd64a to 004bd64e has its CatchHandler @ 004c2044 */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
                    /* try { // try from 004bd658 to 004bd6a4 has its CatchHandler @ 004c210c */
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"Apply To All");
  local_9c8 = 0xc3160000;
  local_9c4 = 0xc3480000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_9c8);
  pUVar3 = SMB_LAYER_PROPS;
  *(code **)(pUVar5 + 0x40) = ApplyLayerPropertiesToAllLayers;
  UIForm__AddFormElement(pUVar3,(UIFormElement *)pUVar5);
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004bd6b3 to 004bd6b7 has its CatchHandler @ 004c2031 */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
                    /* try { // try from 004bd6c1 to 004bd70d has its CatchHandler @ 004c210c */
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"X");
  local_9b8 = 0x42fa0000;
  local_9b4 = 0x42c80000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_9b8);
  pUVar3 = SMB_LAYER_PROPS;
  *(code **)(pUVar5 + 0x40) = DeactivateForm;
  UIForm__AddFormElement(pUVar3,(UIFormElement *)pUVar5);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bd71c to 004bd720 has its CatchHandler @ 004c201e */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bd729 to 004bd77a has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Level Props");
  UILabel__setAlign(pUVar4,1);
  local_9a8 = 0xc3160000;
  local_9a4 = 0x42c80000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_9a8);
  UIForm__AddFormElement(SMB_LAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bd789 to 004bd78d has its CatchHandler @ 004c200b */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bd796 to 004bd7e7 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Color Tint");
  UILabel__setAlign(pUVar4,1);
  local_998 = 0xc3160000;
  local_994 = 0x42480000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_998);
  UIForm__AddFormElement(SMB_LAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bd7f6 to 004bd7fa has its CatchHandler @ 004c1ff8 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bd803 to 004bd845 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Red");
  UILabel__setAlign(pUVar4,1);
  local_988 = 0xc3160000;
  local_984 = 0;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_988);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bd851 to 004bd855 has its CatchHandler @ 004c1fe8 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_974 = *(float *)((long)local_bd8[0] + 0x18);
  local_978 = _DAT_005bff44 /* R:5.0f */ * local_974;
  local_974 = local_974 + local_974;
  pSMBLAYERPROPRed = pUVar6;
                    /* try { // try from 004bd898 to 004bd90b has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_978);
  (**(code **)(*(long *)pSMBLAYERPROPRed + 0x58))(pSMBLAYERPROPRed,local_be8);
  local_968 = 0;
  local_964 = 0;
  Vector2__operator_assign((Vector2 *)(pSMBLAYERPROPRed + 0x20),(Vector2 *)&local_968);
  UIForm__AddFormElement(SMB_LAYER_PROPS,(UIFormElement *)pSMBLAYERPROPRed);
  UIForm__AddFormElement(SMB_LAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bd91a to 004bd91e has its CatchHandler @ 004c1fd5 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bd927 to 004bd969 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Green");
  UILabel__setAlign(pUVar4,1);
  local_958 = 0xc3160000;
  local_954 = 0xc20c0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_958);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bd975 to 004bd979 has its CatchHandler @ 004c1fc5 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_944 = *(float *)((long)local_bd8[0] + 0x18);
  local_948 = _DAT_005bff44 /* R:5.0f */ * local_944;
  local_944 = local_944 + local_944;
  pSMBLAYERPROPGreen = pUVar6;
                    /* try { // try from 004bd9bc to 004bda2f has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_948);
  (**(code **)(*(long *)pSMBLAYERPROPGreen + 0x58))(pSMBLAYERPROPGreen,local_be8);
  local_938 = 0;
  local_934 = 0xc20c0000;
  Vector2__operator_assign((Vector2 *)(pSMBLAYERPROPGreen + 0x20),(Vector2 *)&local_938);
  UIForm__AddFormElement(SMB_LAYER_PROPS,(UIFormElement *)pSMBLAYERPROPGreen);
  UIForm__AddFormElement(SMB_LAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bda3e to 004bda42 has its CatchHandler @ 004c1fb2 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bda4b to 004bda8d has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Blue");
  UILabel__setAlign(pUVar4,1);
  local_928 = 0xc3160000;
  local_924 = 0xc28c0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_928);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bda99 to 004bda9d has its CatchHandler @ 004c1fa2 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_914 = *(float *)((long)local_bd8[0] + 0x18);
  local_918 = _DAT_005bff44 /* R:5.0f */ * local_914;
  local_914 = local_914 + local_914;
  pSMBLAYERPROPBlue = pUVar6;
                    /* try { // try from 004bdae0 to 004bdb53 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_918);
  (**(code **)(*(long *)pSMBLAYERPROPBlue + 0x58))(pSMBLAYERPROPBlue,local_be8);
  local_908 = 0;
  local_904 = 0xc28c0000;
  Vector2__operator_assign((Vector2 *)(pSMBLAYERPROPBlue + 0x20),(Vector2 *)&local_908);
  UIForm__AddFormElement(SMB_LAYER_PROPS,(UIFormElement *)pSMBLAYERPROPBlue);
  UIForm__AddFormElement(SMB_LAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bdb62 to 004bdb66 has its CatchHandler @ 004c1f8f */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bdb6f to 004bdbb1 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Alpha");
  UILabel__setAlign(pUVar4,1);
  local_8f8 = 0xc3160000;
  local_8f4 = 0xc2d20000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_8f8);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bdbbd to 004bdbc1 has its CatchHandler @ 004c1f7f */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_8e4 = *(float *)((long)local_bd8[0] + 0x18);
  local_8e8 = _DAT_005bff44 /* R:5.0f */ * local_8e4;
  local_8e4 = local_8e4 + local_8e4;
  pSMBLAYERPROPAlpha = pUVar6;
                    /* try { // try from 004bdc04 to 004bdc77 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_8e8);
  (**(code **)(*(long *)pSMBLAYERPROPAlpha + 0x58))(pSMBLAYERPROPAlpha,local_be8);
  local_8d8 = 0;
  local_8d4 = 0xc2d20000;
  Vector2__operator_assign((Vector2 *)(pSMBLAYERPROPAlpha + 0x20),(Vector2 *)&local_8d8);
  UIForm__AddFormElement(SMB_LAYER_PROPS,(UIFormElement *)pSMBLAYERPROPAlpha);
  UIForm__AddFormElement(SMB_LAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bdc86 to 004bdc8a has its CatchHandler @ 004c1f6c */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bdc93 to 004bdcd5 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Amount");
  UILabel__setAlign(pUVar4,1);
  local_8c8 = 0xc3160000;
  local_8c4 = 0xc30c0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_8c8);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bdce1 to 004bdce5 has its CatchHandler @ 004c1f5c */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_8b4 = *(float *)((long)local_bd8[0] + 0x18);
  local_8b8 = _DAT_005bff44 /* R:5.0f */ * local_8b4;
  local_8b4 = local_8b4 + local_8b4;
  pSMBLAYERPROPLerp = pUVar6;
                    /* try { // try from 004bdd28 to 004bddb9 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_8b8);
  (**(code **)(*(long *)pSMBLAYERPROPLerp + 0x58))(pSMBLAYERPROPLerp,local_be8);
  local_8a8 = 0;
  local_8a4 = 0xc30c0000;
  Vector2__operator_assign((Vector2 *)(pSMBLAYERPROPLerp + 0x20),(Vector2 *)&local_8a8);
  UIForm__AddFormElement(SMB_LAYER_PROPS,(UIFormElement *)pSMBLAYERPROPLerp);
  UIForm__AddFormElement(SMB_LAYER_PROPS,(UIFormElement *)pUVar4);
  UIForm__setEdgePadding(SMB_LAYER_PROPS,0x19,0x19);
  local_c4c = 5;
  pUVar3 = operator_new(0xa8);
                    /* try { // try from 004bddc5 to 004bddc9 has its CatchHandler @ 004c1f49 */
  UIForm__UIForm__005a3ce0(pUVar3,(UIFormCreation *)&local_c58);
  SMB_MASTER_FORM = pUVar3;
                    /* try { // try from 004bddd6 to 004bddda has its CatchHandler @ 004c210c */
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bdde9 to 004bdded has its CatchHandler @ 004c1f36 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
  SMBEditor__pGridCoordsLabel = pUVar4;
                    /* try { // try from 004bddfd to 004bde90 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Grid: (x,y)");
  UILabel__setAlign(SMBEditor__pGridCoordsLabel,2);
  local_894 = (float)*(ushort *)(Window + 10) * _DAT_005c5b50 /* R:-0.4399999976158142f */ + _DAT_005bfd00 /* R:10.0f */;
  local_898 = (float)*(ushort *)(Window + 8) * DAT_005be6e4 /* R:0.5f */ - _DAT_005bff44 /* R:5.0f */;
  Vector2__operator_assign((Vector2 *)(SMBEditor__pGridCoordsLabel + 0x20),(Vector2 *)&local_898);
  UIForm__AddFormElement(SMB_MASTER_FORM,(UIFormElement *)SMBEditor__pGridCoordsLabel);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bde9f to 004bdea3 has its CatchHandler @ 004c1f23 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
  SMBEditor__pCoordinatesLabel = pUVar4;
                    /* try { // try from 004bdeb3 to 004bdf56 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Pos: (x,y,z)");
  UILabel__setAlign(SMBEditor__pCoordinatesLabel,2);
  local_884 = _DEFAULT_UI_FONT_SIZE + _DEFAULT_UI_FONT_SIZE + _DAT_005bfd00 /* R:10.0f */ +
              (float)*(ushort *)(Window + 10) * _DAT_005c5b50 /* R:-0.4399999976158142f */;
  local_888 = (float)*(ushort *)(Window + 8) * DAT_005be6e4 /* R:0.5f */ - _DAT_005bff44 /* R:5.0f */;
  Vector2__operator_assign((Vector2 *)(SMBEditor__pCoordinatesLabel + 0x20),(Vector2 *)&local_888);
  UIForm__AddFormElement(SMB_MASTER_FORM,(UIFormElement *)SMBEditor__pCoordinatesLabel);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bdf65 to 004bdf69 has its CatchHandler @ 004c1f10 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
  SMBEditor__pScaleLabel = pUVar4;
                    /* try { // try from 004bdf79 to 004be020 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Scale: (x,y)");
  UILabel__setAlign(SMBEditor__pScaleLabel,2);
  local_874 = _DEFAULT_UI_FONT_SIZE * DAT_005c17e8 /* R:4.0f */ + _DAT_005bfd00 /* R:10.0f */ +
              (float)*(ushort *)(Window + 10) * _DAT_005c5b50 /* R:-0.4399999976158142f */;
  local_878 = (float)*(ushort *)(Window + 8) * DAT_005be6e4 /* R:0.5f */ - _DAT_005bff44 /* R:5.0f */;
  Vector2__operator_assign((Vector2 *)(SMBEditor__pScaleLabel + 0x20),(Vector2 *)&local_878);
  UIForm__AddFormElement(SMB_MASTER_FORM,(UIFormElement *)SMBEditor__pScaleLabel);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004be02f to 004be033 has its CatchHandler @ 004c1efd */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
  SMBEditor__pRotationLabel = pUVar4;
                    /* try { // try from 004be043 to 004be0ea has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Rot: 0 deg");
  UILabel__setAlign(SMBEditor__pRotationLabel,2);
  local_864 = _DEFAULT_UI_FONT_SIZE * DAT_005c0064 /* R:6.0f */ + _DAT_005bfd00 /* R:10.0f */ +
              (float)*(ushort *)(Window + 10) * _DAT_005c5b50 /* R:-0.4399999976158142f */;
  local_868 = (float)*(ushort *)(Window + 8) * DAT_005be6e4 /* R:0.5f */ - _DAT_005bff44 /* R:5.0f */;
  Vector2__operator_assign((Vector2 *)(SMBEditor__pRotationLabel + 0x20),(Vector2 *)&local_868);
  UIForm__AddFormElement(SMB_MASTER_FORM,(UIFormElement *)SMBEditor__pRotationLabel);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004be0f9 to 004be0fd has its CatchHandler @ 004c1eea */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004be106 to 004be165 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Player Properties");
  UILabel__setAlign(pUVar4,0);
  local_858 = 0;
  local_854 = 0x43160000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_858);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004be174 to 004be178 has its CatchHandler @ 004c1ed7 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004be181 to 004be1e3 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Run Speed");
  UILabel__setAlign(pUVar4,1);
  local_848 = 0xc3480000;
  local_844 = 0x42e60000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_848);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004be1ef to 004be1f3 has its CatchHandler @ 004c1ec7 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_834 = *(float *)((long)local_bd8[0] + 0x18);
  local_838 = _DAT_005bfd00 /* R:10.0f */ * local_834;
  local_834 = local_834 + local_834;
  pSMBPLAYERPROPRun = pUVar6;
                    /* try { // try from 004be236 to 004be29b has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_838);
  (**(code **)(*(long *)pSMBPLAYERPROPRun + 0x58))(pSMBPLAYERPROPRun,local_be8);
  local_824 = *(uint32_t *)(pUVar4 + 0x24);
  local_828 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYERPROPRun + 0x20),(Vector2 *)&local_828);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pSMBPLAYERPROPRun);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004be2aa to 004be2ae has its CatchHandler @ 004c1eb4 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004be2b7 to 004be319 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Walk Speed");
  UILabel__setAlign(pUVar4,1);
  local_818 = 0xc3480000;
  local_814 = 0x42a00000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_818);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004be325 to 004be329 has its CatchHandler @ 004c1ea4 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_804 = *(float *)((long)local_bd8[0] + 0x18);
  local_808 = _DAT_005bfd00 /* R:10.0f */ * local_804;
  local_804 = local_804 + local_804;
  pSMBPLAYERPROPWalk = pUVar6;
                    /* try { // try from 004be36c to 004be3d1 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_808);
  (**(code **)(*(long *)pSMBPLAYERPROPWalk + 0x58))(pSMBPLAYERPROPWalk,local_be8);
  local_7f4 = *(uint32_t *)(pUVar4 + 0x24);
  local_7f8 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYERPROPWalk + 0x20),(Vector2 *)&local_7f8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pSMBPLAYERPROPWalk);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004be3e0 to 004be3e4 has its CatchHandler @ 004c1e91 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004be3ed to 004be44f has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Jump");
  UILabel__setAlign(pUVar4,1);
  local_7e8 = 0xc3480000;
  local_7e4 = 0x42340000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_7e8);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004be45b to 004be45f has its CatchHandler @ 004c1e81 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_7d4 = *(float *)((long)local_bd8[0] + 0x18);
  local_7d8 = _DAT_005bfd00 /* R:10.0f */ * local_7d4;
  local_7d4 = local_7d4 + local_7d4;
  pSMBPLAYERPROPJump = pUVar6;
                    /* try { // try from 004be4a2 to 004be507 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_7d8);
  (**(code **)(*(long *)pSMBPLAYERPROPJump + 0x58))(pSMBPLAYERPROPJump,local_be8);
  local_7c4 = *(uint32_t *)(pUVar4 + 0x24);
  local_7c8 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYERPROPJump + 0x20),(Vector2 *)&local_7c8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pSMBPLAYERPROPJump);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004be516 to 004be51a has its CatchHandler @ 004c1e6e */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004be523 to 004be585 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"WallJump Up");
  UILabel__setAlign(pUVar4,1);
  local_7b8 = 0xc3480000;
  local_7b4 = 0x41200000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_7b8);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004be591 to 004be595 has its CatchHandler @ 004c1e5e */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_7a4 = *(float *)((long)local_bd8[0] + 0x18);
  local_7a8 = _DAT_005bfd00 /* R:10.0f */ * local_7a4;
  local_7a4 = local_7a4 + local_7a4;
  pSMBPLAYERPROPWallJumpUp = pUVar6;
                    /* try { // try from 004be5d8 to 004be63d has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_7a8);
  (**(code **)(*(long *)pSMBPLAYERPROPWallJumpUp + 0x58))(pSMBPLAYERPROPWallJumpUp,local_be8);
  local_794 = *(uint32_t *)(pUVar4 + 0x24);
  local_798 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYERPROPWallJumpUp + 0x20),(Vector2 *)&local_798);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pSMBPLAYERPROPWallJumpUp);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004be64c to 004be650 has its CatchHandler @ 004c1e4b */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004be659 to 004be6bb has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"WallJump Out");
  UILabel__setAlign(pUVar4,1);
  local_788 = 0xc3480000;
  local_784 = 0xc1c80000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_788);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004be6c7 to 004be6cb has its CatchHandler @ 004c1e3b */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_774 = *(float *)((long)local_bd8[0] + 0x18);
  local_778 = _DAT_005bfd00 /* R:10.0f */ * local_774;
  local_774 = local_774 + local_774;
  pSMBPLAYERPROPWallJumpOut = pUVar6;
                    /* try { // try from 004be70e to 004be773 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_778);
  (**(code **)(*(long *)pSMBPLAYERPROPWallJumpOut + 0x58))(pSMBPLAYERPROPWallJumpOut,local_be8);
  local_764 = *(uint32_t *)(pUVar4 + 0x24);
  local_768 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYERPROPWallJumpOut + 0x20),(Vector2 *)&local_768);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pSMBPLAYERPROPWallJumpOut);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004be782 to 004be786 has its CatchHandler @ 004c1e28 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004be78f to 004be7f1 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Wall Friction");
  UILabel__setAlign(pUVar4,1);
  local_758 = 0xc3480000;
  local_754 = 0xc2700000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_758);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004be7fd to 004be801 has its CatchHandler @ 004c1e18 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_744 = *(float *)((long)local_bd8[0] + 0x18);
  local_748 = _DAT_005bfd00 /* R:10.0f */ * local_744;
  local_744 = local_744 + local_744;
  pSMBPLAYERPROPWallJumpFriction = pUVar6;
                    /* try { // try from 004be844 to 004be8a9 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_748);
  (**(code **)(*(long *)pSMBPLAYERPROPWallJumpFriction + 0x58))
            (pSMBPLAYERPROPWallJumpFriction,local_be8);
  local_734 = *(uint32_t *)(pUVar4 + 0x24);
  local_738 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYERPROPWallJumpFriction + 0x20),(Vector2 *)&local_738);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pSMBPLAYERPROPWallJumpFriction);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004be8b8 to 004be8bc has its CatchHandler @ 004c1e05 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004be8c5 to 004be927 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Drag");
  UILabel__setAlign(pUVar4,1);
  local_728 = 0xc3480000;
  local_724 = 0xc2be0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_728);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004be933 to 004be937 has its CatchHandler @ 004c1df5 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_714 = *(float *)((long)local_bd8[0] + 0x18);
  local_718 = _DAT_005bfd00 /* R:10.0f */ * local_714;
  local_714 = local_714 + local_714;
  pSMBPLAYERPROPDrag = pUVar6;
                    /* try { // try from 004be97a to 004be9df has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_718);
  (**(code **)(*(long *)pSMBPLAYERPROPDrag + 0x58))(pSMBPLAYERPROPDrag,local_be8);
  local_704 = *(uint32_t *)(pUVar4 + 0x24);
  local_708 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYERPROPDrag + 0x20),(Vector2 *)&local_708);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pSMBPLAYERPROPDrag);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004be9ee to 004be9f2 has its CatchHandler @ 004c1de2 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004be9fb to 004bea5d has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Gravity");
  UILabel__setAlign(pUVar4,1);
  local_6f8 = 0xc3480000;
  local_6f4 = 0xc3020000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_6f8);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bea69 to 004bea6d has its CatchHandler @ 004c1dd2 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_6e4 = *(float *)((long)local_bd8[0] + 0x18);
  local_6e8 = _DAT_005bfd00 /* R:10.0f */ * local_6e4;
  local_6e4 = local_6e4 + local_6e4;
  pSMBPLAYERPROPGravity = pUVar6;
                    /* try { // try from 004beab0 to 004beb15 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_6e8);
  (**(code **)(*(long *)pSMBPLAYERPROPGravity + 0x58))(pSMBPLAYERPROPGravity,local_be8);
  local_6d4 = *(uint32_t *)(pUVar4 + 0x24);
  local_6d8 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYERPROPGravity + 0x20),(Vector2 *)&local_6d8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pSMBPLAYERPROPGravity);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004beb24 to 004beb28 has its CatchHandler @ 004c1dbf */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004beb31 to 004beb93 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Scale");
  UILabel__setAlign(pUVar4,1);
  local_6c8 = 0xc3480000;
  local_6c4 = 0xc3250000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_6c8);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004beb9f to 004beba3 has its CatchHandler @ 004c1daf */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_6b4 = *(float *)((long)local_bd8[0] + 0x18);
  local_6b8 = _DAT_005bfd00 /* R:10.0f */ * local_6b4;
  local_6b4 = local_6b4 + local_6b4;
  pSMBPLAYERPROPScale = pUVar6;
                    /* try { // try from 004bebe6 to 004bec4b has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_6b8);
  (**(code **)(*(long *)pSMBPLAYERPROPScale + 0x58))(pSMBPLAYERPROPScale,local_be8);
  local_6a4 = *(uint32_t *)(pUVar4 + 0x24);
  local_6a8 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYERPROPScale + 0x20),(Vector2 *)&local_6a8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pSMBPLAYERPROPScale);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bec5a to 004bec5e has its CatchHandler @ 004c1d9c */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bec67 to 004becc9 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Tile Bounds");
  UILabel__setAlign(pUVar4,1);
  local_698 = 0xc3480000;
  local_694 = 0xc3480000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_698);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004becd5 to 004becd9 has its CatchHandler @ 004c1d8c */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_684 = *(float *)((long)local_bd8[0] + 0x18);
  local_688 = _DAT_005bfd00 /* R:10.0f */ * local_684;
  local_684 = local_684 + local_684;
  pSMBPLAYERPROPTileBounds = pUVar6;
                    /* try { // try from 004bed1c to 004bed81 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_688);
  (**(code **)(*(long *)pSMBPLAYERPROPTileBounds + 0x58))(pSMBPLAYERPROPTileBounds,local_be8);
  local_674 = *(uint32_t *)(pUVar4 + 0x24);
  local_678 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYERPROPTileBounds + 0x20),(Vector2 *)&local_678);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pSMBPLAYERPROPTileBounds);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bed90 to 004bed94 has its CatchHandler @ 004c1d79 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bed9d to 004bedff has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Kill Bounds");
  UILabel__setAlign(pUVar4,1);
  local_668 = 0xc3480000;
  local_664 = 0xc36b0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_668);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bee0b to 004bee0f has its CatchHandler @ 004c1d69 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_654 = *(float *)((long)local_bd8[0] + 0x18);
  local_658 = _DAT_005bfd00 /* R:10.0f */ * local_654;
  local_654 = local_654 + local_654;
  pSMBPLAYERPROPKillBounds = pUVar6;
                    /* try { // try from 004bee52 to 004beeb7 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_658);
  (**(code **)(*(long *)pSMBPLAYERPROPKillBounds + 0x58))(pSMBPLAYERPROPKillBounds,local_be8);
  local_644 = *(uint32_t *)(pUVar4 + 0x24);
  local_648 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYERPROPKillBounds + 0x20),(Vector2 *)&local_648);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pSMBPLAYERPROPKillBounds);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004beec6 to 004beeca has its CatchHandler @ 004c1d56 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004beed3 to 004bef35 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Hill Damper");
  UILabel__setAlign(pUVar4,1);
  local_638 = 0xc3480000;
  local_634 = 0xc3870000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_638);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bef41 to 004bef45 has its CatchHandler @ 004c1d46 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_624 = *(float *)((long)local_bd8[0] + 0x18);
  local_628 = _DAT_005bfd00 /* R:10.0f */ * local_624;
  local_624 = local_624 + local_624;
  pSMBPLAYERPROPHillDamper = pUVar6;
                    /* try { // try from 004bef88 to 004befed has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_628);
  (**(code **)(*(long *)pSMBPLAYERPROPHillDamper + 0x58))(pSMBPLAYERPROPHillDamper,local_be8);
  local_614 = *(uint32_t *)(pUVar4 + 0x24);
  local_618 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYERPROPHillDamper + 0x20),(Vector2 *)&local_618);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pSMBPLAYERPROPHillDamper);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004beffc to 004bf000 has its CatchHandler @ 004c1d33 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bf009 to 004bf06b has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Turn Friction");
  UILabel__setAlign(pUVar4,1);
  local_608 = 0xc3480000;
  local_604 = 0xc3988000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_608);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bf077 to 004bf07b has its CatchHandler @ 004c1d23 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_5f4 = *(float *)((long)local_bd8[0] + 0x18);
  local_5f8 = _DAT_005bfd00 /* R:10.0f */ * local_5f4;
  local_5f4 = local_5f4 + local_5f4;
  pSMBPLAYERPROPTurnFriction = pUVar6;
                    /* try { // try from 004bf0be to 004bf177 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_5f8);
  (**(code **)(*(long *)pSMBPLAYERPROPTurnFriction + 0x58))(pSMBPLAYERPROPTurnFriction,local_be8);
  local_5e4 = *(uint32_t *)(pUVar4 + 0x24);
  local_5e8 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYERPROPTurnFriction + 0x20),(Vector2 *)&local_5e8);
  UIForm__AddFormElement(SMB_PLAYER_PROPS,(UIFormElement *)pSMBPLAYERPROPTurnFriction);
  UIForm__setEdgePadding(SMB_PLAYER_PROPS,0x19,0x19);
  pUVar3 = SMB_PLAYER_PROPS;
  local_5d8 = 0xc2480000;
  local_5d4 = 0;
  *(code **)(SMB_PLAYER_PROPS + 0x58) = ActivatePlayerProps;
  *(code **)(pUVar3 + 0x60) = DeactivatePlayerProps;
  Vector2__operator_assign((Vector2 *)(pUVar3 + 0x38),(Vector2 *)&local_5d8);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bf186 to 004bf18a has its CatchHandler @ 004c1d10 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bf193 to 004bf1f2 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Animation Properties");
  UILabel__setAlign(pUVar4,0);
  local_5c8 = 0;
  local_5c4 = 0x43480000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_5c8);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_ANIMS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bf201 to 004bf205 has its CatchHandler @ 004c1cfd */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bf20e to 004bf381 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Effect Properties");
  UILabel__setAlign(pUVar4,0);
  local_5b8 = 0;
  local_5b4 = 0x43480000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_5b8);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_EFFECTS,(UIFormElement *)pUVar4);
  puVar9 = operator_new(0x20);
  *(uint32_t *)puVar9 = 0;
  *(uint32_t *)((long)puVar9 + 4) = 0;
  *(uint32_t *)(puVar9 + 1) = 0;
  *(uint32_t *)((long)puVar9 + 0xc) = 0;
  uVar2 = ::cWhite;
  fVar15 = _DEFAULT_UI_FONT_SIZE;
  puVar9[2] = 0;
  fVar15 = fVar15 * DAT_005c1930 /* R:0.75f */;
  pAnimLabelStyle = puVar9;
  *(uint32_t *)(puVar9 + 3) = 0;
  *puVar9 = uVar2;
  puVar9[1] = DAT_0081afd8 /* R:6.367051806383385e-39f */;
  uVar2 = _DEFAULT_UI_FONT;
  puVar9 = pAnimLabelStyle;
  *(float *)(pAnimLabelStyle + 3) = fVar15;
  puVar9[2] = uVar2;
  puVar10 = operator_new(0x30);
  plVar12 = &DAT_0081ac88 /* R:2.872661851865875e-42f */;
  puVar9 = puVar10;
  for (lVar11 = 6; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + (ulong)bVar14 * -2 + 1;
  }
  iVar13 = 0;
  pAnimFieldStyle = puVar10;
  *puVar10 = _DEFAULT_UITEXTFIELD_STYLE;
  local_c8c = 150.0;
  puVar10[1] = DAT_00823348 /* R:7.56734801898545e-39f */;
  uVar2 = DAT_00823350 /* R:1.0930128021733573e-43f */;
  local_c28 = pAnimFieldStyle;
  *(float *)(pAnimFieldStyle + 5) = fVar15;
  local_c28[2] = uVar2;
  local_c28[3] = DAT_00823358 /* R:3.4400476000709934e-41f */;
  local_c28[4] = _DEFAULT_UI_FONT;
  local_bd8[0] = pAnimLabelStyle;
  do {
    pUVar4 = operator_new(0x50);
                    /* try { // try from 004bf390 to 004bf394 has its CatchHandler @ 004c1ced */
    UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bf3a7 to 004bf40e has its CatchHandler @ 004c210c */
    UILabel__setText(pUVar4,*(wchar_t **)(Initialize()::strAnimName + (long)(iVar13 >> 1) * 8));
    UILabel__setAlign(pUVar4,1);
    local_5a8 = 0xc3480000;
    local_5a4 = local_c8c;
    Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_5a8);
    (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
    UIForm__AddFormElement(SMB_PLAYER_ANIMS,(UIFormElement *)pUVar4);
    pUVar4 = operator_new(0x50);
                    /* try { // try from 004bf41d to 004bf421 has its CatchHandler @ 004c1cdd */
    UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bf42a to 004bf4b0 has its CatchHandler @ 004c210c */
    UILabel__setText(pUVar4,L"X");
    UILabel__setAlign(pUVar4,1);
    local_598 = Initialize()::fPlayerFieldPos - _DAT_005bff44 /* R:5.0f */ * *(float *)(local_bd8[0] + 3);
    local_594 = local_c8c;
    Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_598);
    (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
    UIForm__AddFormElement(SMB_PLAYER_ANIMS,(UIFormElement *)pUVar4);
    pUVar6 = operator_new(0x78);
                    /* try { // try from 004bf4bc to 004bf4c0 has its CatchHandler @ 004c1ccd */
    UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
    plVar12[-1] = (long)pUVar6;
    local_584 = *(float *)(local_bd8[0] + 3);
    local_588 = _DAT_005bff44 /* R:5.0f */ * local_584;
    local_584 = local_584 + local_584;
                    /* try { // try from 004bf501 to 004bf55d has its CatchHandler @ 004c210c */
    Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_588);
    (**(code **)(*(long *)plVar12[-1] + 0x58))((long *)plVar12[-1],local_be8);
    local_574 = *(uint32_t *)(pUVar4 + 0x24);
    local_578 = Initialize()::fPlayerFieldPos;
    Vector2__operator_assign((Vector2 *)(plVar12[-1] + 0x20),(Vector2 *)&local_578);
    UIForm__AddFormElement(SMB_PLAYER_ANIMS,(UIFormElement *)plVar12[-1]);
    pUVar4 = operator_new(0x50);
                    /* try { // try from 004bf56c to 004bf570 has its CatchHandler @ 004c1cbd */
    UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bf579 to 004bf5fb has its CatchHandler @ 004c210c */
    UILabel__setText(pUVar4,L"Y");
    UILabel__setAlign(pUVar4,1);
    local_568 = _DAT_005bff44 /* R:5.0f */ * *(float *)(local_bd8[0] + 3) + Initialize()::fPlayerFieldPos;
    local_564 = local_c8c;
    Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_568);
    (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
    UIForm__AddFormElement(SMB_PLAYER_ANIMS,(UIFormElement *)pUVar4);
    pUVar6 = operator_new(0x78);
                    /* try { // try from 004bf607 to 004bf60b has its CatchHandler @ 004c1cad */
    UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
    *plVar12 = (long)pUVar6;
    local_554 = *(float *)(local_bd8[0] + 3);
    local_558 = _DAT_005bff44 /* R:5.0f */ * local_554;
    local_554 = local_554 + local_554;
                    /* try { // try from 004bf64b to 004bf751 has its CatchHandler @ 004c210c */
    Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_558);
    (**(code **)(*(long *)*plVar12 + 0x58))((long *)*plVar12,local_be8);
    local_544 = *(uint32_t *)(pUVar4 + 0x24);
    local_548 = _DAT_005bfd00 /* R:10.0f */ * *(float *)(local_bd8[0] + 3) + Initialize()::fPlayerFieldPos;
    Vector2__operator_assign((Vector2 *)(*plVar12 + 0x20),(Vector2 *)&local_548);
    UIForm__AddFormElement(SMB_PLAYER_ANIMS,(UIFormElement *)*plVar12);
    iVar13 = iVar13 + 2;
    local_c8c = local_c8c - _DAT_005c5b4c /* R:25.0f */;
    plVar12 = plVar12 + 2;
  } while (iVar13 != 0x30);
  UIForm__setEdgePadding(SMB_PLAYER_ANIMS,0x19,0x19);
  pUVar3 = SMB_PLAYER_ANIMS;
  local_538 = 0xc2480000;
  local_534 = 0x42fa0000;
  *(code **)(SMB_PLAYER_ANIMS + 0x58) = ActivateAnimProps;
  *(code **)(pUVar3 + 0x60) = DeactivateAnimProps;
  Vector2__operator_assign((Vector2 *)(pUVar3 + 0x38),(Vector2 *)&local_538);
  Initialize()::fPlayerFieldPos = 150.0;
  plVar12 = &DAT_0081ab90 /* R:7.805232446289231e-43f */;
  iVar13 = 0;
  local_c8c = 150.0;
  do {
    pUVar4 = operator_new(0x50);
                    /* try { // try from 004bf760 to 004bf764 has its CatchHandler @ 004c1c9d */
    UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bf785 to 004bf7ec has its CatchHandler @ 004c210c */
    UILabel__setText(pUVar4,*(wchar_t **)(Initialize()::strEffectName + (long)(iVar13 / 3) * 8));
    UILabel__setAlign(pUVar4,1);
    local_528 = 0xc3480000;
    local_524 = local_c8c;
    Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_528);
    (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
    UIForm__AddFormElement(SMB_PLAYER_EFFECTS,(UIFormElement *)pUVar4);
    pUVar4 = operator_new(0x50);
                    /* try { // try from 004bf7fb to 004bf7ff has its CatchHandler @ 004c1c8d */
    UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bf808 to 004bf88e has its CatchHandler @ 004c210c */
    UILabel__setText(pUVar4,L"X");
    UILabel__setAlign(pUVar4,1);
    local_518 = Initialize()::fPlayerFieldPos - _DAT_005bff44 /* R:5.0f */ * *(float *)(local_bd8[0] + 3);
    local_514 = local_c8c;
    Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_518);
    (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
    UIForm__AddFormElement(SMB_PLAYER_EFFECTS,(UIFormElement *)pUVar4);
    pUVar6 = operator_new(0x78);
                    /* try { // try from 004bf89a to 004bf89e has its CatchHandler @ 004c1c7d */
    UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
    plVar12[-2] = (long)pUVar6;
    local_504 = *(float *)(local_bd8[0] + 3);
    local_508 = _DAT_005bff44 /* R:5.0f */ * local_504;
    local_504 = local_504 + local_504;
                    /* try { // try from 004bf8df to 004bf93b has its CatchHandler @ 004c210c */
    Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_508);
    (**(code **)(*(long *)plVar12[-2] + 0x58))((long *)plVar12[-2],local_be8);
    local_4f4 = *(uint32_t *)(pUVar4 + 0x24);
    local_4f8 = Initialize()::fPlayerFieldPos;
    Vector2__operator_assign((Vector2 *)(plVar12[-2] + 0x20),(Vector2 *)&local_4f8);
    UIForm__AddFormElement(SMB_PLAYER_EFFECTS,(UIFormElement *)plVar12[-2]);
    pUVar4 = operator_new(0x50);
                    /* try { // try from 004bf94a to 004bf94e has its CatchHandler @ 004c1c6d */
    UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bf957 to 004bf9d9 has its CatchHandler @ 004c210c */
    UILabel__setText(pUVar4,L"Y");
    UILabel__setAlign(pUVar4,1);
    local_4e8 = _DAT_005bff44 /* R:5.0f */ * *(float *)(local_bd8[0] + 3) + Initialize()::fPlayerFieldPos;
    local_4e4 = local_c8c;
    Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_4e8);
    (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
    UIForm__AddFormElement(SMB_PLAYER_EFFECTS,(UIFormElement *)pUVar4);
    pUVar6 = operator_new(0x78);
                    /* try { // try from 004bf9e5 to 004bf9e9 has its CatchHandler @ 004c1c5d */
    UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
    plVar12[-1] = (long)pUVar6;
    local_4d4 = *(float *)(local_bd8[0] + 3);
    local_4d8 = _DAT_005bff44 /* R:5.0f */ * local_4d4;
    local_4d4 = local_4d4 + local_4d4;
                    /* try { // try from 004bfa2a to 004bfa9f has its CatchHandler @ 004c210c */
    Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_4d8);
    (**(code **)(*(long *)plVar12[-1] + 0x58))((long *)plVar12[-1],local_be8);
    local_4c4 = *(uint32_t *)(pUVar4 + 0x24);
    local_4c8 = _DAT_005bfd00 /* R:10.0f */ * *(float *)(local_bd8[0] + 3) + Initialize()::fPlayerFieldPos;
    Vector2__operator_assign((Vector2 *)(plVar12[-1] + 0x20),(Vector2 *)&local_4c8);
    UIForm__AddFormElement(SMB_PLAYER_EFFECTS,(UIFormElement *)plVar12[-1]);
    pUVar4 = operator_new(0x50);
                    /* try { // try from 004bfaae to 004bfab2 has its CatchHandler @ 004c1c4d */
    UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bfabb to 004bfb3d has its CatchHandler @ 004c210c */
    UILabel__setText(pUVar4,L"S");
    UILabel__setAlign(pUVar4,1);
    local_4b8 = _DAT_005bf840 /* R:15.0f */ * *(float *)(local_bd8[0] + 3) + Initialize()::fPlayerFieldPos;
    local_4b4 = local_c8c;
    Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_4b8);
    (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
    UIForm__AddFormElement(SMB_PLAYER_EFFECTS,(UIFormElement *)pUVar4);
    pUVar6 = operator_new(0x78);
                    /* try { // try from 004bfb49 to 004bfb4d has its CatchHandler @ 004c1c3d */
    UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
    *plVar12 = (long)pUVar6;
    local_4a4 = *(float *)(local_bd8[0] + 3);
    local_4a8 = _DAT_005bff44 /* R:5.0f */ * local_4a4;
    local_4a4 = local_4a4 + local_4a4;
                    /* try { // try from 004bfb8d to 004bfc25 has its CatchHandler @ 004c210c */
    Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_4a8);
    (**(code **)(*(long *)*plVar12 + 0x58))((long *)*plVar12,local_be8);
    local_494 = *(uint32_t *)(pUVar4 + 0x24);
    local_498 = DAT_005c13fc /* R:20.0f */ * *(float *)(local_bd8[0] + 3) + Initialize()::fPlayerFieldPos;
    Vector2__operator_assign((Vector2 *)(*plVar12 + 0x20),(Vector2 *)&local_498);
    UIForm__AddFormElement(SMB_PLAYER_EFFECTS,(UIFormElement *)*plVar12);
    iVar13 = iVar13 + 3;
    local_c8c = local_c8c - _DAT_005c5b4c /* R:25.0f */;
    plVar12 = plVar12 + 3;
  } while (iVar13 != 0x1b);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bfc34 to 004bfc38 has its CatchHandler @ 004c1c2a */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bfc41 to 004bfca7 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Walk Delay");
  UILabel__setAlign(pUVar4,1);
  local_488 = 0xc3480000;
  local_484 = local_c8c;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_488);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_EFFECTS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bfcb3 to 004bfcb7 has its CatchHandler @ 004c1c1a */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_474 = *(float *)(local_bd8[0] + 3);
  local_478 = _DAT_005bff44 /* R:5.0f */ * local_474;
  local_474 = local_474 + local_474;
  pSMBPLAYEREFFECTWalkDelay = pUVar6;
                    /* try { // try from 004bfcfa to 004bfd5f has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_478);
  (**(code **)(*(long *)pSMBPLAYEREFFECTWalkDelay + 0x58))(pSMBPLAYEREFFECTWalkDelay,local_be8);
  local_464 = *(uint32_t *)(pUVar4 + 0x24);
  local_468 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYEREFFECTWalkDelay + 0x20),(Vector2 *)&local_468);
  UIForm__AddFormElement(SMB_PLAYER_EFFECTS,(UIFormElement *)pSMBPLAYEREFFECTWalkDelay);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bfd6e to 004bfd72 has its CatchHandler @ 004c1c07 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bfd7b to 004bfdef has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Run Delay");
  UILabel__setAlign(pUVar4,1);
  local_c8c = local_c8c - _DAT_005c5b4c /* R:25.0f */;
  local_458 = 0xc3480000;
  local_454 = local_c8c;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_458);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_EFFECTS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bfdfb to 004bfdff has its CatchHandler @ 004c1bf7 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_444 = *(float *)(local_bd8[0] + 3);
  local_448 = _DAT_005bff44 /* R:5.0f */ * local_444;
  local_444 = local_444 + local_444;
  pSMBPLAYEREFFECTRunDelay = pUVar6;
                    /* try { // try from 004bfe42 to 004bfea7 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_448);
  (**(code **)(*(long *)pSMBPLAYEREFFECTRunDelay + 0x58))(pSMBPLAYEREFFECTRunDelay,local_be8);
  local_434 = *(uint32_t *)(pUVar4 + 0x24);
  local_438 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYEREFFECTRunDelay + 0x20),(Vector2 *)&local_438);
  UIForm__AddFormElement(SMB_PLAYER_EFFECTS,(UIFormElement *)pSMBPLAYEREFFECTRunDelay);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004bfeb6 to 004bfeba has its CatchHandler @ 004c1be4 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004bfec3 to 004bff31 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Run Fast Delay");
  UILabel__setAlign(pUVar4,1);
  local_424 = local_c8c - _DAT_005c5b4c /* R:25.0f */;
  local_428 = 0xc3480000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_428);
  (**(code **)(*(long *)pUVar4 + 0x58))(pUVar4,local_bf8);
  UIForm__AddFormElement(SMB_PLAYER_EFFECTS,(UIFormElement *)pUVar4);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004bff3d to 004bff41 has its CatchHandler @ 004c1bd4 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_414 = *(float *)(local_bd8[0] + 3);
  local_418 = _DAT_005bff44 /* R:5.0f */ * local_414;
  local_414 = local_414 + local_414;
  pSMBPLAYEREFFECTRunFastDelay = pUVar6;
                    /* try { // try from 004bff84 to 004c0061 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_418);
  (**(code **)(*(long *)pSMBPLAYEREFFECTRunFastDelay + 0x58))
            (pSMBPLAYEREFFECTRunFastDelay,local_be8);
  local_404 = *(uint32_t *)(pUVar4 + 0x24);
  local_408 = Initialize()::fPlayerFieldPos;
  Vector2__operator_assign((Vector2 *)(pSMBPLAYEREFFECTRunFastDelay + 0x20),(Vector2 *)&local_408);
  UIForm__AddFormElement(SMB_PLAYER_EFFECTS,(UIFormElement *)pSMBPLAYEREFFECTRunFastDelay);
  UIForm__setEdgePadding(SMB_PLAYER_EFFECTS,0x19,0x19);
  pUVar3 = SMB_PLAYER_EFFECTS;
  local_3f8 = 0xc2960000;
  local_3f4 = 0;
  *(code **)(SMB_PLAYER_EFFECTS + 0x58) = ActivateEffectProps;
  *(code **)(pUVar3 + 0x60) = DeactivateEffectProps;
  Vector2__operator_assign((Vector2 *)(pUVar3 + 0x38),(Vector2 *)&local_3f8);
  local_bd8[0] = (uint64_t *)_DEFAULT_UILABEL_STYLE;
  local_c28 = &_DEFAULT_UITEXTFIELD_STYLE;
  *(code **)(SMB_LAYER_PROPS + 0x58) = LayerPropertiesActivate;
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004c0070 to 004c0074 has its CatchHandler @ 004c1bc1 */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
                    /* try { // try from 004c007e to 004c00ca has its CatchHandler @ 004c210c */
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"Apply");
  local_3e8 = 0x43480000;
  local_3e4 = 0xc3480000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_3e8);
  pUVar3 = SMB_LIGHT_PROPS;
  *(code **)(pUVar5 + 0x40) = ApplyLightProperties;
  UIForm__AddFormElement(pUVar3,(UIFormElement *)pUVar5);
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004c00d9 to 004c00dd has its CatchHandler @ 004c1bae */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
                    /* try { // try from 004c00e7 to 004c0133 has its CatchHandler @ 004c210c */
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"X");
  local_3d8 = 0x43610000;
  local_3d4 = 0x42c80000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_3d8);
  pUVar3 = SMB_LIGHT_PROPS;
  *(code **)(pUVar5 + 0x40) = DeactivateForm;
  UIForm__AddFormElement(pUVar3,(UIFormElement *)pUVar5);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c0142 to 004c0146 has its CatchHandler @ 004c1b9b */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c014f to 004c01a0 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Light Props");
  UILabel__setAlign(pUVar4,1);
  local_3c8 = 0xc3160000;
  local_3c4 = 0x42c80000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_3c8);
  UIForm__AddFormElement(SMB_LIGHT_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c01af to 004c01b3 has its CatchHandler @ 004c1b88 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c01bc to 004c020d has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Light Color");
  UILabel__setAlign(pUVar4,1);
  local_3b8 = 0xc3160000;
  local_3b4 = 0x42480000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_3b8);
  UIForm__AddFormElement(SMB_LIGHT_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c021c to 004c0220 has its CatchHandler @ 004c1b75 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c0229 to 004c026b has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Red");
  UILabel__setAlign(pUVar4,1);
  local_3a8 = 0xc3160000;
  local_3a4 = 0;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_3a8);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c0277 to 004c027b has its CatchHandler @ 004c1b65 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_394 = *(float *)((long)local_bd8[0] + 0x18);
  local_398 = _DAT_005bff44 /* R:5.0f */ * local_394;
  local_394 = local_394 + local_394;
  pSMBLIGHTPROPRed = pUVar6;
                    /* try { // try from 004c02be to 004c0331 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_398);
  (**(code **)(*(long *)pSMBLIGHTPROPRed + 0x58))(pSMBLIGHTPROPRed,local_be8);
  local_388 = 0;
  local_384 = 0;
  Vector2__operator_assign((Vector2 *)(pSMBLIGHTPROPRed + 0x20),(Vector2 *)&local_388);
  UIForm__AddFormElement(SMB_LIGHT_PROPS,(UIFormElement *)pSMBLIGHTPROPRed);
  UIForm__AddFormElement(SMB_LIGHT_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c0340 to 004c0344 has its CatchHandler @ 004c1b52 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c034d to 004c038f has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Green");
  UILabel__setAlign(pUVar4,1);
  local_378 = 0xc3160000;
  local_374 = 0xc20c0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_378);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c039b to 004c039f has its CatchHandler @ 004c1b42 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_364 = *(float *)((long)local_bd8[0] + 0x18);
  local_368 = _DAT_005bff44 /* R:5.0f */ * local_364;
  local_364 = local_364 + local_364;
  pSMBLIGHTPROPGreen = pUVar6;
                    /* try { // try from 004c03e2 to 004c0455 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_368);
  (**(code **)(*(long *)pSMBLIGHTPROPGreen + 0x58))(pSMBLIGHTPROPGreen,local_be8);
  local_358 = 0;
  local_354 = 0xc20c0000;
  Vector2__operator_assign((Vector2 *)(pSMBLIGHTPROPGreen + 0x20),(Vector2 *)&local_358);
  UIForm__AddFormElement(SMB_LIGHT_PROPS,(UIFormElement *)pSMBLIGHTPROPGreen);
  UIForm__AddFormElement(SMB_LIGHT_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c0464 to 004c0468 has its CatchHandler @ 004c1b2f */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c0471 to 004c04b3 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Blue");
  UILabel__setAlign(pUVar4,1);
  local_348 = 0xc3160000;
  local_344 = 0xc28c0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_348);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c04bf to 004c04c3 has its CatchHandler @ 004c1b1f */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_334 = *(float *)((long)local_bd8[0] + 0x18);
  local_338 = _DAT_005bff44 /* R:5.0f */ * local_334;
  local_334 = local_334 + local_334;
  pSMBLIGHTPROPBlue = pUVar6;
                    /* try { // try from 004c0506 to 004c0579 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_338);
  (**(code **)(*(long *)pSMBLIGHTPROPBlue + 0x58))(pSMBLIGHTPROPBlue,local_be8);
  local_328 = 0;
  local_324 = 0xc28c0000;
  Vector2__operator_assign((Vector2 *)(pSMBLIGHTPROPBlue + 0x20),(Vector2 *)&local_328);
  UIForm__AddFormElement(SMB_LIGHT_PROPS,(UIFormElement *)pSMBLIGHTPROPBlue);
  UIForm__AddFormElement(SMB_LIGHT_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c0588 to 004c058c has its CatchHandler @ 004c1b0c */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c0595 to 004c05d7 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Type");
  UILabel__setAlign(pUVar4,1);
  local_318 = 0xc3160000;
  local_314 = 0xc2d20000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_318);
  pUVar7 = operator_new(0x530);
                    /* try { // try from 004c05e3 to 004c05e7 has its CatchHandler @ 004c1afc */
  UIDropDown__UIDropDown__005a2c90(pUVar7,(UIDropDownCreation *)&local_c88);
  pSMBLIGHTPROPType = pUVar7;
                    /* try { // try from 004c05fc to 004c06f0 has its CatchHandler @ 004c210c */
  UIDropDown__AddDropdownElement(pUVar7,L"Dynamic Point",(void *)0x1);
  UIDropDown__AddDropdownElement(pSMBLIGHTPROPType,L"Dynamic Spot",(void *)0x2);
  UIDropDown__AddDropdownElement(pSMBLIGHTPROPType,L"Static Point",(void *)0x3);
  UIDropDown__AddDropdownElement(pSMBLIGHTPROPType,L"Static Spot",(void *)0x4);
  local_308 = 0x437a0000;
  local_304 = 0x41c80000;
  Vector2__operator_assign((Vector2 *)(pSMBLIGHTPROPType + 0x28),(Vector2 *)&local_308);
  local_2f8 = 0xc1c80000;
  local_2f4 = 0xc30c0000;
  Vector2__operator_assign((Vector2 *)(pSMBLIGHTPROPType + 0x20),(Vector2 *)&local_2f8);
  UIForm__AddFormElement(SMB_LIGHT_PROPS,(UIFormElement *)pSMBLIGHTPROPType);
  UIForm__AddFormElement(SMB_LIGHT_PROPS,(UIFormElement *)pUVar4);
  pUVar3 = SMB_LIGHT_PROPS;
  *(code **)(SMB_LIGHT_PROPS + 0x58) = LightPropertiesActivate;
  *(code **)(pUVar3 + 0x60) = ApplyLightProperties;
  UIForm__setEdgePadding(pUVar3,0x19,0x19);
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004c06ff to 004c0703 has its CatchHandler @ 004c1ae9 */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
                    /* try { // try from 004c070d to 004c0759 has its CatchHandler @ 004c210c */
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"Apply");
  local_2e8 = 0x43610000;
  local_2e4 = 0xc3480000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_2e8);
  pUVar3 = SMB_WAYPOINT_PROPS;
  *(code **)(pUVar5 + 0x40) = ApplyLightProperties;
  UIForm__AddFormElement(pUVar3,(UIFormElement *)pUVar5);
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004c0768 to 004c076c has its CatchHandler @ 004c1ad6 */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
                    /* try { // try from 004c0776 to 004c07c2 has its CatchHandler @ 004c210c */
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"X");
  local_2d8 = 0x437a0000;
  local_2d4 = 0x42c80000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_2d8);
  pUVar3 = SMB_WAYPOINT_PROPS;
  *(code **)(pUVar5 + 0x40) = DeactivateForm;
  UIForm__AddFormElement(pUVar3,(UIFormElement *)pUVar5);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c07d1 to 004c07d5 has its CatchHandler @ 004c1ac3 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c07de to 004c082f has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Camera WayPoint Props");
  UILabel__setAlign(pUVar4,1);
  local_2c8 = 0xc3160000;
  local_2c4 = 0x42c80000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_2c8);
  UIForm__AddFormElement(SMB_WAYPOINT_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c083e to 004c0842 has its CatchHandler @ 004c1ab0 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c084b to 004c088d has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Start Time");
  UILabel__setAlign(pUVar4,1);
  local_2b8 = 0xc3160000;
  local_2b4 = 0xc20c0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_2b8);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c0899 to 004c089d has its CatchHandler @ 004c1aa0 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_2a4 = *(float *)((long)local_bd8[0] + 0x18);
  local_2a8 = _DAT_005bfd00 /* R:10.0f */ * local_2a4;
  local_2a4 = local_2a4 + local_2a4;
  pWAYPOINTPROPDuration = pUVar6;
                    /* try { // try from 004c08e0 to 004c0953 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_2a8);
  (**(code **)(*(long *)pWAYPOINTPROPDuration + 0x58))(pWAYPOINTPROPDuration,local_be8);
  local_298 = 0x42c80000;
  local_294 = 0xc20c0000;
  Vector2__operator_assign((Vector2 *)(pWAYPOINTPROPDuration + 0x20),(Vector2 *)&local_298);
  UIForm__AddFormElement(SMB_WAYPOINT_PROPS,(UIFormElement *)pWAYPOINTPROPDuration);
  UIForm__AddFormElement(SMB_WAYPOINT_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c0962 to 004c0966 has its CatchHandler @ 004c1a8d */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c096f to 004c09b1 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Zoom");
  UILabel__setAlign(pUVar4,1);
  local_288 = 0xc3160000;
  local_284 = 0xc28c0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_288);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c09bd to 004c09c1 has its CatchHandler @ 004c1a7d */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_274 = *(float *)((long)local_bd8[0] + 0x18);
  local_278 = _DAT_005bfd00 /* R:10.0f */ * local_274;
  local_274 = local_274 + local_274;
  pWAYPOINTPROPZoom = pUVar6;
                    /* try { // try from 004c0a04 to 004c0a77 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_278);
  (**(code **)(*(long *)pWAYPOINTPROPZoom + 0x58))(pWAYPOINTPROPZoom,local_be8);
  local_268 = 0x42c80000;
  local_264 = 0xc28c0000;
  Vector2__operator_assign((Vector2 *)(pWAYPOINTPROPZoom + 0x20),(Vector2 *)&local_268);
  UIForm__AddFormElement(SMB_WAYPOINT_PROPS,(UIFormElement *)pWAYPOINTPROPZoom);
  UIForm__AddFormElement(SMB_WAYPOINT_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c0a86 to 004c0a8a has its CatchHandler @ 004c1a6a */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c0a93 to 004c0afb has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Type");
  UILabel__setAlign(pUVar4,1);
  local_258 = 0xc3160000;
  local_254 = 0xc2d20000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_258);
  pUVar3 = SMB_WAYPOINT_PROPS;
  *(code **)(SMB_WAYPOINT_PROPS + 0x58) = ActivateWayPointProps;
  *(code **)(pUVar3 + 0x60) = DeactivateWayPointProps;
  UIForm__setEdgePadding(pUVar3,0x19,0x19);
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004c0b0a to 004c0b0e has its CatchHandler @ 004c1a57 */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
                    /* try { // try from 004c0b18 to 004c0b64 has its CatchHandler @ 004c210c */
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"Apply");
  local_248 = 0x43610000;
  local_244 = 0xc3700000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_248);
  pUVar3 = SMB_PIECE_PROPS;
  *(code **)(pUVar5 + 0x40) = ApplySetPieceProps;
  UIForm__AddFormElement(pUVar3,(UIFormElement *)pUVar5);
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004c0b73 to 004c0b77 has its CatchHandler @ 004c1a44 */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
                    /* try { // try from 004c0b81 to 004c0bcd has its CatchHandler @ 004c210c */
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"X");
  local_238 = 0x437a0000;
  local_234 = 0x42c80000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_238);
  pUVar3 = SMB_PIECE_PROPS;
  *(code **)(pUVar5 + 0x40) = DeactivateForm;
  UIForm__AddFormElement(pUVar3,(UIFormElement *)pUVar5);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c0bdc to 004c0be0 has its CatchHandler @ 004c1a31 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c0be9 to 004c0c3a has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Set Piece Props");
  UILabel__setAlign(pUVar4,1);
  local_228 = 0xc3160000;
  local_224 = 0x42c80000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_228);
  UIForm__AddFormElement(SMB_PIECE_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c0c49 to 004c0c4d has its CatchHandler @ 004c1a1e */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c0c56 to 004c0c98 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Start Time");
  UILabel__setAlign(pUVar4,1);
  local_218 = 0xc3160000;
  local_214 = 0xc20c0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_218);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c0ca4 to 004c0ca8 has its CatchHandler @ 004c1a0e */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_204 = *(float *)((long)local_bd8[0] + 0x18);
  local_208 = _DAT_005bfd00 /* R:10.0f */ * local_204;
  local_204 = local_204 + local_204;
  pSETPIECEPROPStartTime = pUVar6;
                    /* try { // try from 004c0ceb to 004c0d5e has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_208);
  (**(code **)(*(long *)pSETPIECEPROPStartTime + 0x58))(pSETPIECEPROPStartTime,local_be8);
  local_1f8 = 0x430c0000;
  local_1f4 = 0xc20c0000;
  Vector2__operator_assign((Vector2 *)(pSETPIECEPROPStartTime + 0x20),(Vector2 *)&local_1f8);
  UIForm__AddFormElement(SMB_PIECE_PROPS,(UIFormElement *)pSETPIECEPROPStartTime);
  UIForm__AddFormElement(SMB_PIECE_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c0d6d to 004c0d71 has its CatchHandler @ 004c19fb */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c0d7a to 004c0dbc has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Time Mod");
  UILabel__setAlign(pUVar4,1);
  local_1e8 = 0xc3160000;
  local_1e4 = 0xc28c0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_1e8);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c0dc8 to 004c0dcc has its CatchHandler @ 004c19eb */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_1d4 = *(float *)((long)local_bd8[0] + 0x18);
  local_1d8 = _DAT_005bfd00 /* R:10.0f */ * local_1d4;
  local_1d4 = local_1d4 + local_1d4;
  pSETPIECEPROPSTimeMod = pUVar6;
                    /* try { // try from 004c0e0f to 004c0e82 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_1d8);
  (**(code **)(*(long *)pSETPIECEPROPSTimeMod + 0x58))(pSETPIECEPROPSTimeMod,local_be8);
  local_1c8 = 0x430c0000;
  local_1c4 = 0xc28c0000;
  Vector2__operator_assign((Vector2 *)(pSETPIECEPROPSTimeMod + 0x20),(Vector2 *)&local_1c8);
  UIForm__AddFormElement(SMB_PIECE_PROPS,(UIFormElement *)pSETPIECEPROPSTimeMod);
  UIForm__AddFormElement(SMB_PIECE_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c0e91 to 004c0e95 has its CatchHandler @ 004c19d8 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c0e9e to 004c0ee0 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Float Prop 1");
  UILabel__setAlign(pUVar4,1);
  local_1b8 = 0xc3160000;
  local_1b4 = 0xc2d20000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_1b8);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c0eec to 004c0ef0 has its CatchHandler @ 004c19c8 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_1a4 = *(float *)((long)local_bd8[0] + 0x18);
  local_1a8 = _DAT_005bfd00 /* R:10.0f */ * local_1a4;
  local_1a4 = local_1a4 + local_1a4;
  pSETPIECEPROPFloat1 = pUVar6;
                    /* try { // try from 004c0f33 to 004c0fa6 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_1a8);
  (**(code **)(*(long *)pSETPIECEPROPFloat1 + 0x58))(pSETPIECEPROPFloat1,local_be8);
  local_198 = 0x430c0000;
  local_194 = 0xc2d20000;
  Vector2__operator_assign((Vector2 *)(pSETPIECEPROPFloat1 + 0x20),(Vector2 *)&local_198);
  UIForm__AddFormElement(SMB_PIECE_PROPS,(UIFormElement *)pSETPIECEPROPFloat1);
  UIForm__AddFormElement(SMB_PIECE_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c0fb5 to 004c0fb9 has its CatchHandler @ 004c19b5 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c0fc2 to 004c1004 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Float Prop 2");
  UILabel__setAlign(pUVar4,1);
  local_188 = 0xc3160000;
  local_184 = 0xc30c0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_188);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c1010 to 004c1014 has its CatchHandler @ 004c19a5 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_174 = *(float *)((long)local_bd8[0] + 0x18);
  local_178 = _DAT_005bfd00 /* R:10.0f */ * local_174;
  local_174 = local_174 + local_174;
  pSETPIECEPROPFloat2 = pUVar6;
                    /* try { // try from 004c1057 to 004c10ca has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_178);
  (**(code **)(*(long *)pSETPIECEPROPFloat2 + 0x58))(pSETPIECEPROPFloat2,local_be8);
  local_168 = 0x430c0000;
  local_164 = 0xc30c0000;
  Vector2__operator_assign((Vector2 *)(pSETPIECEPROPFloat2 + 0x20),(Vector2 *)&local_168);
  UIForm__AddFormElement(SMB_PIECE_PROPS,(UIFormElement *)pSETPIECEPROPFloat2);
  UIForm__AddFormElement(SMB_PIECE_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c10d9 to 004c10dd has its CatchHandler @ 004c1992 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c10e6 to 004c1128 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Int Prop 1");
  UILabel__setAlign(pUVar4,1);
  local_158 = 0xc3160000;
  local_154 = 0xc32f0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_158);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c1134 to 004c1138 has its CatchHandler @ 004c1982 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_144 = *(float *)((long)local_bd8[0] + 0x18);
  local_148 = _DAT_005bfd00 /* R:10.0f */ * local_144;
  local_144 = local_144 + local_144;
  pSETPIECEPROPInt1 = pUVar6;
                    /* try { // try from 004c117b to 004c11ee has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_148);
  (**(code **)(*(long *)pSETPIECEPROPInt1 + 0x58))(pSETPIECEPROPInt1,local_be8);
  local_138 = 0x430c0000;
  local_134 = 0xc32f0000;
  Vector2__operator_assign((Vector2 *)(pSETPIECEPROPInt1 + 0x20),(Vector2 *)&local_138);
  UIForm__AddFormElement(SMB_PIECE_PROPS,(UIFormElement *)pSETPIECEPROPInt1);
  UIForm__AddFormElement(SMB_PIECE_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c11fd to 004c1201 has its CatchHandler @ 004c196f */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c120a to 004c124c has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Int Prop 2");
  UILabel__setAlign(pUVar4,1);
  local_128 = 0xc3160000;
  local_124 = 0xc3520000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_128);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c1258 to 004c125c has its CatchHandler @ 004c195f */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_114 = *(float *)((long)local_bd8[0] + 0x18);
  local_118 = _DAT_005bfd00 /* R:10.0f */ * local_114;
  local_114 = local_114 + local_114;
  pSETPIECEPROPInt2 = pUVar6;
                    /* try { // try from 004c129f to 004c1338 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_118);
  (**(code **)(*(long *)pSETPIECEPROPInt2 + 0x58))(pSETPIECEPROPInt2,local_be8);
  local_108 = 0x430c0000;
  local_104 = 0xc3520000;
  Vector2__operator_assign((Vector2 *)(pSETPIECEPROPInt2 + 0x20),(Vector2 *)&local_108);
  UIForm__AddFormElement(SMB_PIECE_PROPS,(UIFormElement *)pSETPIECEPROPInt2);
  UIForm__AddFormElement(SMB_PIECE_PROPS,(UIFormElement *)pUVar4);
  pUVar3 = SMB_PIECE_PROPS;
  *(code **)(SMB_PIECE_PROPS + 0x58) = ActivatePieceProps;
  *(code **)(pUVar3 + 0x60) = DeActivatePieceProps;
  UIForm__setEdgePadding(pUVar3,0x19,0x19);
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004c1347 to 004c134b has its CatchHandler @ 004c194c */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
                    /* try { // try from 004c1355 to 004c13a1 has its CatchHandler @ 004c210c */
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"Apply");
  local_f8 = 0x43610000;
  local_f4 = 0xc3700000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_f8);
  pUVar3 = SMB_ANIMAL_PROPS;
  *(code **)(pUVar5 + 0x40) = ApplyAnimalProps;
  UIForm__AddFormElement(pUVar3,(UIFormElement *)pUVar5);
  pUVar5 = operator_new(0x70);
                    /* try { // try from 004c13b0 to 004c13b4 has its CatchHandler @ 004c1939 */
  UIButton__UIButton__005a2560(pUVar5,(UIButtonCreation *)&local_c18);
                    /* try { // try from 004c13be to 004c140a has its CatchHandler @ 004c210c */
  UILabel__setText(*(UILabel **)(pUVar5 + 0x50),L"X");
  local_e8 = 0x437a0000;
  local_e4 = 0x42c80000;
  Vector2__operator_assign((Vector2 *)(pUVar5 + 0x20),(Vector2 *)&local_e8);
  pUVar3 = SMB_ANIMAL_PROPS;
  *(code **)(pUVar5 + 0x40) = DeactivateForm;
  UIForm__AddFormElement(pUVar3,(UIFormElement *)pUVar5);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c1419 to 004c141d has its CatchHandler @ 004c1929 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c1426 to 004c1477 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Animal Props");
  UILabel__setAlign(pUVar4,1);
  local_d8 = 0xc3160000;
  local_d4 = 0x42c80000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_d8);
  UIForm__AddFormElement(SMB_ANIMAL_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c1486 to 004c148a has its CatchHandler @ 004c1919 */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c1493 to 004c14d5 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Start Velocity");
  UILabel__setAlign(pUVar4,1);
  local_c8 = 0xc3160000;
  local_c4 = 0xc20c0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_c8);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c14e1 to 004c14e5 has its CatchHandler @ 004c190c */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_b4 = *(float *)((long)local_bd8[0] + 0x18);
  local_b8 = _DAT_005c5b58 /* R:7.0f */ * local_b4;
  local_b4 = local_b4 + local_b4;
  pANIMALPROPvelocityX = pUVar6;
                    /* try { // try from 004c1528 to 004c158c has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_b8);
  (**(code **)(*(long *)pANIMALPROPvelocityX + 0x58))(pANIMALPROPvelocityX,local_be8);
  local_a8 = 0x430c0000;
  local_a4 = 0xc20c0000;
  Vector2__operator_assign((Vector2 *)(pANIMALPROPvelocityX + 0x20),(Vector2 *)&local_a8);
  UIForm__AddFormElement(SMB_ANIMAL_PROPS,(UIFormElement *)pANIMALPROPvelocityX);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c1598 to 004c159c has its CatchHandler @ 004c18ff */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_94 = *(float *)((long)local_bd8[0] + 0x18);
  local_98 = _DAT_005c5b58 /* R:7.0f */ * local_94;
  local_94 = local_94 + local_94;
  pANIMALPROPvelocityY = pUVar6;
                    /* try { // try from 004c15df to 004c1659 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_98);
  local_88[1] = -35.0;
  local_88[0] = local_be0 + *(float *)((long)local_bd8[0] + 0x18) + _DAT_005c5b54 /* R:140.0f */;
  Vector2__operator_assign((Vector2 *)(pANIMALPROPvelocityY + 0x20),(Vector2 *)local_88);
  UIForm__AddFormElement(SMB_ANIMAL_PROPS,(UIFormElement *)pANIMALPROPvelocityY);
  UIForm__AddFormElement(SMB_ANIMAL_PROPS,(UIFormElement *)pUVar4);
  pUVar4 = operator_new(0x50);
                    /* try { // try from 004c1668 to 004c166c has its CatchHandler @ 004c18ef */
  UILabel__UILabel__005a5270(pUVar4,(UILabelCreation *)local_bd8);
                    /* try { // try from 004c1675 to 004c16b7 has its CatchHandler @ 004c210c */
  UILabel__setText(pUVar4,L"Start Gravity");
  UILabel__setAlign(pUVar4,1);
  local_78 = 0xc3160000;
  local_74 = 0xc28c0000;
  Vector2__operator_assign((Vector2 *)(pUVar4 + 0x20),(Vector2 *)&local_78);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c16c3 to 004c16c7 has its CatchHandler @ 004c18e2 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_64 = *(float *)((long)local_bd8[0] + 0x18);
  local_68 = _DAT_005c5b58 /* R:7.0f */ * local_64;
  local_64 = local_64 + local_64;
  pANIMALPROPgravityX = pUVar6;
                    /* try { // try from 004c170a to 004c176e has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_68);
  (**(code **)(*(long *)pANIMALPROPgravityX + 0x58))(pANIMALPROPgravityX,local_be8);
  local_58 = 0x430c0000;
  local_54 = 0xc28c0000;
  Vector2__operator_assign((Vector2 *)(pANIMALPROPgravityX + 0x20),(Vector2 *)&local_58);
  UIForm__AddFormElement(SMB_ANIMAL_PROPS,(UIFormElement *)pANIMALPROPgravityX);
  pUVar6 = operator_new(0x78);
                    /* try { // try from 004c177a to 004c177e has its CatchHandler @ 004c18b7 */
  UITextField__UITextField__005a5de0(pUVar6,(UITextFieldCreation *)&local_c38);
  local_44 = *(float *)((long)local_bd8[0] + 0x18);
  local_48 = _DAT_005c5b58 /* R:7.0f */ * local_44;
  local_44 = local_44 + local_44;
  pANIMALPROPgravityY = pUVar6;
                    /* try { // try from 004c17c1 to 004c1857 has its CatchHandler @ 004c210c */
  Vector2__operator_assign((Vector2 *)(pUVar6 + 0x70),(Vector2 *)&local_48);
  local_38[1] = -70.0;
  local_38[0] = local_be0 + *(float *)((long)local_bd8[0] + 0x18) + _DAT_005c5b54 /* R:140.0f */;
  Vector2__operator_assign((Vector2 *)(pANIMALPROPgravityY + 0x20),(Vector2 *)local_38);
  UIForm__AddFormElement(SMB_ANIMAL_PROPS,(UIFormElement *)pANIMALPROPgravityY);
  UIForm__AddFormElement(SMB_ANIMAL_PROPS,(UIFormElement *)pUVar4);
  pUVar3 = SMB_ANIMAL_PROPS;
  *(code **)(SMB_ANIMAL_PROPS + 0x58) = ActivateAnimalProps;
  *(code **)(pUVar3 + 0x60) = DeactivateAnimProps;
  UIForm__setEdgePadding(pUVar3,0x19,0x19);
  if ((allocator *)(local_ab8[0] + -0x18) != (allocator *)&std__string_Rep_S_empty_rep_storage)
  {
    LOCK();
    piVar1 = (int *)(local_ab8[0] + -8);
    iVar13 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar13 < 1) {
      std__string_Rep_M_destroy((allocator *)(local_ab8[0] + -0x18));
    }
  }
  return;
}

/* ======================================================================
 * SMBEditorForms__Destroy  (Ghidra `Destroy` @ 004c2250)
 * Signature: uint8_t __stdcall Destroy(void)
 * Class: SMBEditorForms
 * Calls: `AutoLockSection__AutoLockSection`, `AutoLockSection__AutoLockSection__005b59d0`, `operator_delete`
 * Called by: `SMBEditor__SMBEditor`
 */
/* SMBEditorForms__Destroy() */

void SMBEditorForms__Destroy(void)

{
  AutoLockSection local_18 [24];
  
  AutoLockSection__AutoLockSection(local_18,(CriticalSection *)(__UILayer + 0x3d8));
  if (SMB_LOAD_LEVEL != (long *)0x0) {
                    /* try { // try from 004c227b to 004c2355 has its CatchHandler @ 004c2387 */
    (**(code **)(*SMB_LOAD_LEVEL + 8))();
  }
  if (SMB_SAVE_LEVEL != (long *)0x0) {
    (**(code **)(*SMB_SAVE_LEVEL + 8))();
  }
  if (SMB_NEW_LEVEL != (long *)0x0) {
    (**(code **)(*SMB_NEW_LEVEL + 8))();
  }
  if (SMB_LAYER_PROPS != (long *)0x0) {
    (**(code **)(*SMB_LAYER_PROPS + 8))();
  }
  if (SMB_PLAYER_PROPS != (long *)0x0) {
    (**(code **)(*SMB_PLAYER_PROPS + 8))();
  }
  if (SMB_PLAYER_ANIMS != (long *)0x0) {
    (**(code **)(*SMB_PLAYER_ANIMS + 8))();
  }
  if (SMB_PLAYER_EFFECTS != (long *)0x0) {
    (**(code **)(*SMB_PLAYER_EFFECTS + 8))();
  }
  if (SMB_LEVEL_PROPS != (long *)0x0) {
    (**(code **)(*SMB_LEVEL_PROPS + 8))();
  }
  if (SMB_LIGHT_PROPS != (long *)0x0) {
    (**(code **)(*SMB_LIGHT_PROPS + 8))();
  }
  if (SMB_WAYPOINT_PROPS != (long *)0x0) {
    (**(code **)(*SMB_WAYPOINT_PROPS + 8))();
  }
  if (SMB_PIECE_PROPS != (long *)0x0) {
    (**(code **)(*SMB_PIECE_PROPS + 8))();
  }
  if (SMB_ANIMAL_PROPS != (long *)0x0) {
    (**(code **)(*SMB_ANIMAL_PROPS + 8))();
  }
  if (SMB_MASTER_FORM != (long *)0x0) {
    (**(code **)(*SMB_MASTER_FORM + 8))();
  }
  if (pAnimFieldStyle != (void *)0x0) {
    operator_delete(pAnimFieldStyle);
  }
  if (pAnimLabelStyle != (void *)0x0) {
    operator_delete(pAnimLabelStyle);
  }
  AutoLockSection__AutoLockSection__005b59d0(local_18);
  return;
}

/* ======================================================================
 * SMBEditorForms__IsFormActive  (Ghidra `IsFormActive` @ 004c23b0)
 * Signature: uint8_t __stdcall IsFormActive(void)
 * Class: SMBEditorForms
 * Calls: `GetUIMessageBoxesActive`
 * Called by: `CancelPastePiecesRendering`, `ChangeBlockID`, `CopySelected`, `DeSelectTile`, `DeleteSelected`, `DeleteSelectedAnimal`, `EditorButton_SetLayerToActive_Click`, `EditorButton_SetLayerToBackGeneral1_Click`, `EditorButton_SetLayerToBackGeneral2_Click`, `EditorButton_SetLayerToBackGeneral3_Click` (+32 more)
 */
/* SMBEditorForms__IsFormActive() */

bool SMBEditorForms__IsFormActive(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
  if ((((((*(int *)(SMB_LOAD_LEVEL + 0x90) != 1) && (*(int *)(SMB_SAVE_LEVEL + 0x90) != 1)) &&
        (*(int *)(SMB_NEW_LEVEL + 0x90) != 1)) &&
       ((*(int *)(SMB_LAYER_PROPS + 0x90) != 1 && (*(int *)(SMB_PLAYER_PROPS + 0x90) != 1)))) &&
      ((*(int *)(SMB_LEVEL_PROPS + 0x90) != 1 &&
       ((*(int *)(SMB_LIGHT_PROPS + 0x90) != 1 && (*(int *)(SMB_WAYPOINT_PROPS + 0x90) != 1)))))) &&
     ((*(int *)(SMB_PIECE_PROPS + 0x90) != 1 && (*(int *)(SMB_ANIMAL_PROPS + 0x90) != 1)))) {
    iVar2 = GetUIMessageBoxesActive();
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}
