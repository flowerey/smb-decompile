/* src/vendor/shader.c — 571 function(s)
 * Original binary: `decompile` (Super Meat Boy, ELF64 x86-64)
 * Produced by: Ghidra 12.1.2 headless + tree generator
 * NOTE: decompiler output — types/names are best-effort, not build-verified.
 */
#include "ghidra_types.h"
#include "globals.h"
#include "game_types.h"

#include "shader.h"

/* ======================================================================
 * GLOBAL_sub_I_gfxCreatePixelShader  (Ghidra `_GLOBAL__sub_I_gfxCreatePixelShader` @ 00458d70)
 * Signature: uint8_t _GLOBAL__sub_I_gfxCreatePixelShader(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_gfxCreatePixelShader(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cWhite,&__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cBlack,&__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cOrange,&__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cYellow,&__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cRed,&__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cGreen,&__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cBlue,&__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cNullColor,&__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_gfxCreateVertexShader  (Ghidra `_GLOBAL__sub_I_gfxCreateVertexShader` @ 00459370)
 * Signature: uint8_t _GLOBAL__sub_I_gfxCreateVertexShader(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
void _GLOBAL__sub_I_gfxCreateVertexShader(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cWhite,&__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cBlack,&__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cOrange,&__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cYellow,&__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cRed,&__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cGreen,&__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cBlue,&__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cNullColor,&__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_GMojoShaderProfile  (Ghidra `_GLOBAL__sub_I_GMojoShaderProfile` @ 004594f0)
 * Signature: uint8_t _GLOBAL__sub_I_GMojoShaderProfile(void)
 * Calls: `ColorTemplate_float__ColorTemplate`, `ShaderFragment__ShaderFragment`
 * Called by: (none)
 */
void _GLOBAL__sub_I_GMojoShaderProfile(void)

{
  cWhite._0_4_ = 0x3f800000;
  cWhite._4_4_ = 0x3f800000;
  cWhite._8_4_ = 0x3f800000;
  cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cWhite,&__dso_handle);
  cBlack._0_4_ = 0;
  cBlack._4_4_ = 0;
  cBlack._8_4_ = 0;
  cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cBlack,&__dso_handle);
  cOrange._0_4_ = 0x3f800000;
  cOrange._8_4_ = 0;
  cOrange._12_4_ = 0x3f800000;
  cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cOrange,&__dso_handle);
  cYellow._0_4_ = 0x3f800000;
  cYellow._4_4_ = 0x3f800000;
  cYellow._8_4_ = 0;
  cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cYellow,&__dso_handle);
  cRed._0_4_ = 0x3f800000;
  cRed._4_4_ = 0;
  cRed._8_4_ = 0;
  cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cRed,&__dso_handle);
  cGreen._0_4_ = 0;
  cGreen._4_4_ = 0x3f800000;
  cGreen._8_4_ = 0;
  cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cGreen,&__dso_handle);
  cBlue._0_4_ = 0;
  cBlue._4_4_ = 0;
  cBlue._8_4_ = 0x3f800000;
  cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cBlue,&__dso_handle);
  cNullColor._0_4_ = 0;
  cNullColor._4_4_ = 0;
  cNullColor._8_4_ = 0;
  cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,cNullColor,&__dso_handle);
  DAT_00817930 /* R:0.0f */ = 1;
  DAT_00817938 /* R:0.0f */ = 2;
  DAT_00817940 /* R:0.0f */ = 1;
  PixelOps._0_4_ = 0;
  PixelOps._4_4_ = 0;
  PixelOps._8_4_ = 0;
  PixelOps._48_4_ = 0xd;
  PixelOps._52_4_ = 0;
  PixelOps._56_4_ = 0;
  PixelOps._60_4_ = 0;
  PixelOps._64_4_ = 0;
  PixelOps._68_4_ = 0;
  PixelOps._72_4_ = 0;
  PixelOps._76_4_ = 0;
  PixelOps._80_4_ = 0;
  PixelOps._84_4_ = 0;
  PixelOps._88_4_ = 0;
  PixelOps._92_4_ = 0;
  PixelOps._96_4_ = 0;
  PixelOps._100_4_ = 0;
  PixelOps._104_4_ = 0;
  PixelOps._144_4_ = 0xc;
  PixelOps._148_4_ = 0;
  PixelOps._152_4_ = 0;
  PixelOps._156_4_ = 0;
  PixelOps._160_4_ = 0;
  PixelOps._164_4_ = 0;
  PixelOps._168_4_ = 0;
  PixelOps._172_4_ = 0;
  PixelOps._176_4_ = 0;
  PixelOps._180_4_ = 0;
  PixelOps._184_4_ = 0;
  PixelOps._188_4_ = 0;
  PixelOps._192_4_ = 0xe;
  PixelOps._196_4_ = 1;
  PixelOps._200_4_ = 0x1e;
  PixelOps._204_4_ = 0;
  PixelOps._208_4_ = 0;
  PixelOps._212_4_ = 0;
  PixelOps._216_4_ = 0;
  PixelOps._220_4_ = 0;
  PixelOps._224_4_ = 0;
  PixelOps._228_4_ = 0;
  PixelOps._232_4_ = 0;
  PixelOps._236_4_ = 0;
  PixelOps._240_4_ = 0xe;
  PixelOps._244_4_ = 1;
  PixelOps._248_4_ = 0x1f;
  PixelOps._252_4_ = 0;
  PixelOps._256_4_ = 0;
  PixelOps._260_4_ = 0;
  PixelOps._264_4_ = 0;
  PixelOps._268_4_ = 0;
  PixelOps._272_4_ = 0;
  PixelOps._276_4_ = 0;
  PixelOps._280_4_ = 0;
  PixelOps._284_4_ = 0;
  PixelOps._288_4_ = 0xe;
  PixelOps._292_4_ = 1;
  PixelOps._296_4_ = 0x20;
  PixelOps._300_4_ = 0;
  PixelOps._304_4_ = 0;
  PixelOps._308_4_ = 0;
  PixelOps._312_4_ = 0;
  PixelOps._316_4_ = 0;
  PixelOps._320_4_ = 0;
  PixelOps._324_4_ = 0;
  PixelOps._328_4_ = 0;
  PixelOps._332_4_ = 0;
  PixelOps._336_4_ = 0xe;
  PixelOps._340_4_ = 1;
  PixelOps._344_4_ = 0x21;
  PixelOps._348_4_ = 0;
  PixelOps._352_4_ = 0;
  PixelOps._356_4_ = 0;
  PixelOps._360_4_ = 0;
  PixelOps._364_4_ = 0;
  PixelOps._368_4_ = 0;
  PixelOps._372_4_ = 0;
  PixelOps._376_4_ = 0;
  PixelOps._380_4_ = 0;
  PixelOps._384_4_ = 0x12;
  PixelOps._388_4_ = 0;
  PixelOps._392_4_ = 0;
  PixelOps._396_4_ = 0;
  PixelOps._400_4_ = 0;
  PixelOps._404_4_ = 0;
  PixelOps._408_4_ = 0;
  PixelOps._412_4_ = 0;
  PixelOps._416_4_ = 0;
  PixelOps._420_4_ = 0;
  PixelOps._424_4_ = 0;
  PixelOps._428_4_ = 0;
  PixelOps._432_4_ = 0x13;
  PixelOps._436_4_ = 0;
  PixelOps._440_4_ = 0;
  PixelOps._444_4_ = 0;
  PixelOps._448_4_ = 0;
  PixelOps._452_4_ = 0;
  PixelOps._456_4_ = 0;
  PixelOps._460_4_ = 0;
  PixelOps._464_4_ = 0;
  PixelOps._468_4_ = 0;
  PixelOps._472_4_ = 0;
  PixelOps._476_4_ = 0;
  __cxa_atexit(__tcf_0,0,&__dso_handle);
  PixelOutputs._0_4_ = 0;
  PixelOutputs._4_4_ = 0;
  PixelOutputs._8_4_ = 0;
  PixelOutputs._48_4_ = 0x10;
  PixelOutputs._52_4_ = 0;
  PixelOutputs._56_4_ = 0;
  PixelOutputs._60_4_ = 0;
  PixelOutputs._64_4_ = 0;
  PixelOutputs._68_4_ = 0;
  PixelOutputs._72_4_ = 0;
  PixelOutputs._76_4_ = 0;
  PixelOutputs._80_4_ = 0;
  PixelOutputs._84_4_ = 0;
  PixelOutputs._88_4_ = 0;
  PixelOutputs._92_4_ = 0;
  PixelOutputs._96_4_ = 0x11;
  PixelOutputs._100_4_ = 0;
  PixelOutputs._104_4_ = 0;
  PixelOutputs._108_4_ = 0;
  PixelOutputs._112_4_ = 0;
  PixelOutputs._116_4_ = 0;
  PixelOutputs._120_4_ = 0;
  PixelOutputs._124_4_ = 0;
  PixelOutputs._128_4_ = 0;
  PixelOutputs._132_4_ = 0;
  PixelOutputs._136_4_ = 0;
  PixelOutputs._140_4_ = 0;
  PixelOutputs._144_4_ = 0xf;
  PixelOutputs._148_4_ = 0;
  PixelOutputs._152_4_ = 0;
  PixelOutputs._156_4_ = 0;
  PixelOutputs._160_4_ = 0;
  PixelOutputs._164_4_ = 0;
  PixelOutputs._168_4_ = 0;
  PixelOutputs._172_4_ = 0;
  PixelOutputs._176_4_ = 0;
  PixelOutputs._180_4_ = 0;
  PixelOutputs._184_4_ = 0;
  PixelOutputs._188_4_ = 0;
  PixelOutputs._192_4_ = 10;
  PixelOutputs._196_4_ = 0;
  PixelOutputs._200_4_ = 0;
  PixelOutputs._204_4_ = 0;
  PixelOutputs._208_4_ = 0;
  PixelOutputs._212_4_ = 0;
  PixelOutputs._216_4_ = 0;
  PixelOutputs._220_4_ = 0;
  PixelOutputs._224_4_ = 0;
  PixelOutputs._228_4_ = 0;
  PixelOutputs._232_4_ = 0;
  PixelOutputs._236_4_ = 0;
  PixelOutputs._240_4_ = 0xb;
  PixelOutputs._244_4_ = 0;
  PixelOutputs._248_4_ = 0;
  PixelOutputs._252_4_ = 0;
  PixelOutputs._256_4_ = 0;
  PixelOutputs._260_4_ = 0;
  PixelOutputs._264_4_ = 0;
  PixelOutputs._268_4_ = 0;
  PixelOutputs._272_4_ = 0;
  PixelOutputs._276_4_ = 0;
  PixelOutputs._280_4_ = 0;
  PixelOutputs._284_4_ = 0;
  __cxa_atexit(__tcf_1,0,&__dso_handle);
  PixelChannel1Sources._0_4_ = 0;
  PixelChannel1Sources._4_4_ = 0;
  PixelChannel1Sources._8_4_ = 0;
  PixelChannel1Sources._48_4_ = 6;
  PixelChannel1Sources._52_4_ = 1;
  PixelChannel1Sources._56_4_ = 0x19;
  PixelChannel1Sources._60_4_ = 0;
  PixelChannel1Sources._64_4_ = 0;
  PixelChannel1Sources._68_4_ = 0;
  PixelChannel1Sources._72_4_ = 0;
  PixelChannel1Sources._76_4_ = 0;
  PixelChannel1Sources._80_4_ = 0;
  PixelChannel1Sources._84_4_ = 0;
  PixelChannel1Sources._88_4_ = 0;
  PixelChannel1Sources._92_4_ = 0;
  PixelChannel1Sources._96_4_ = 6;
  PixelChannel1Sources._100_4_ = 1;
  PixelChannel1Sources._104_4_ = 0x1a;
  PixelChannel1Sources._108_4_ = 0;
  PixelChannel1Sources._112_4_ = 0;
  PixelChannel1Sources._116_4_ = 0;
  PixelChannel1Sources._120_4_ = 0;
  PixelChannel1Sources._124_4_ = 0;
  PixelChannel1Sources._128_4_ = 0;
  PixelChannel1Sources._132_4_ = 0;
  PixelChannel1Sources._136_4_ = 0;
  PixelChannel1Sources._140_4_ = 0;
  PixelChannel1Sources._144_4_ = 6;
  PixelChannel1Sources._148_4_ = 1;
  PixelChannel1Sources._152_4_ = 0x1b;
  PixelChannel1Sources._156_4_ = 0;
  PixelChannel1Sources._160_4_ = 0;
  PixelChannel1Sources._164_4_ = 0;
  PixelChannel1Sources._168_4_ = 0;
  PixelChannel1Sources._172_4_ = 0;
  PixelChannel1Sources._176_4_ = 0;
  PixelChannel1Sources._180_4_ = 0;
  PixelChannel1Sources._184_4_ = 0;
  PixelChannel1Sources._188_4_ = 0;
  PixelChannel1Sources._192_4_ = 2;
  PixelChannel1Sources._196_4_ = 1;
  PixelChannel1Sources._200_4_ = 0x1c;
  PixelChannel1Sources._204_4_ = 0;
  PixelChannel1Sources._208_4_ = 0;
  PixelChannel1Sources._212_4_ = 0;
  PixelChannel1Sources._216_4_ = 0;
  PixelChannel1Sources._220_4_ = 0;
  PixelChannel1Sources._224_4_ = 0;
  PixelChannel1Sources._228_4_ = 0;
  PixelChannel1Sources._232_4_ = 0;
  PixelChannel1Sources._236_4_ = 0;
  PixelChannel1Sources._240_4_ = 8;
  PixelChannel1Sources._244_4_ = 1;
  PixelChannel1Sources._248_4_ = 9;
  PixelChannel1Sources._252_4_ = 0;
  PixelChannel1Sources._256_4_ = 0;
  PixelChannel1Sources._260_4_ = 0;
  PixelChannel1Sources._264_4_ = 0;
  PixelChannel1Sources._268_4_ = 0;
  PixelChannel1Sources._272_4_ = 0;
  PixelChannel1Sources._276_4_ = 0;
  PixelChannel1Sources._280_4_ = 0;
  PixelChannel1Sources._284_4_ = 0;
  PixelChannel1Sources._288_4_ = 8;
  PixelChannel1Sources._292_4_ = 1;
  PixelChannel1Sources._296_4_ = 10;
  PixelChannel1Sources._300_4_ = 0;
  PixelChannel1Sources._304_4_ = 0;
  PixelChannel1Sources._308_4_ = 0;
  PixelChannel1Sources._312_4_ = 0;
  PixelChannel1Sources._316_4_ = 0;
  PixelChannel1Sources._320_4_ = 0;
  PixelChannel1Sources._324_4_ = 0;
  PixelChannel1Sources._328_4_ = 0;
  PixelChannel1Sources._332_4_ = 0;
  PixelChannel1Sources._336_4_ = 8;
  PixelChannel1Sources._340_4_ = 1;
  PixelChannel1Sources._344_4_ = 0xb;
  PixelChannel1Sources._348_4_ = 0;
  PixelChannel1Sources._352_4_ = 0;
  PixelChannel1Sources._356_4_ = 0;
  PixelChannel1Sources._360_4_ = 0;
  PixelChannel1Sources._364_4_ = 0;
  PixelChannel1Sources._368_4_ = 0;
  PixelChannel1Sources._372_4_ = 0;
  PixelChannel1Sources._376_4_ = 0;
  PixelChannel1Sources._380_4_ = 0;
  PixelChannel1Sources._384_4_ = 8;
  PixelChannel1Sources._388_4_ = 1;
  PixelChannel1Sources._392_4_ = 0xc;
  PixelChannel1Sources._396_4_ = 0;
  PixelChannel1Sources._400_4_ = 0;
  PixelChannel1Sources._404_4_ = 0;
  PixelChannel1Sources._408_4_ = 0;
  PixelChannel1Sources._412_4_ = 0;
  PixelChannel1Sources._416_4_ = 0;
  PixelChannel1Sources._420_4_ = 0;
  PixelChannel1Sources._424_4_ = 0;
  PixelChannel1Sources._428_4_ = 0;
  PixelChannel1Sources._432_4_ = 8;
  PixelChannel1Sources._436_4_ = 1;
  PixelChannel1Sources._440_4_ = 0xd;
  PixelChannel1Sources._444_4_ = 0;
  PixelChannel1Sources._448_4_ = 0;
  PixelChannel1Sources._452_4_ = 0;
  PixelChannel1Sources._456_4_ = 0;
  PixelChannel1Sources._460_4_ = 0;
  PixelChannel1Sources._464_4_ = 0;
  PixelChannel1Sources._468_4_ = 0;
  PixelChannel1Sources._472_4_ = 0;
  PixelChannel1Sources._476_4_ = 0;
  PixelChannel1Sources._480_4_ = 8;
  PixelChannel1Sources._484_4_ = 1;
  PixelChannel1Sources._488_4_ = 0xe;
  PixelChannel1Sources._492_4_ = 0;
  PixelChannel1Sources._496_4_ = 0;
  PixelChannel1Sources._500_4_ = 0;
  PixelChannel1Sources._504_4_ = 0;
  PixelChannel1Sources._508_4_ = 0;
  PixelChannel1Sources._512_4_ = 0;
  PixelChannel1Sources._516_4_ = 0;
  PixelChannel1Sources._520_4_ = 0;
  PixelChannel1Sources._524_4_ = 0;
  PixelChannel1Sources._528_4_ = 8;
  PixelChannel1Sources._532_4_ = 1;
  PixelChannel1Sources._536_4_ = 0xf;
  PixelChannel1Sources._540_4_ = 0;
  PixelChannel1Sources._544_4_ = 0;
  PixelChannel1Sources._548_4_ = 0;
  PixelChannel1Sources._552_4_ = 0;
  PixelChannel1Sources._556_4_ = 0;
  PixelChannel1Sources._560_4_ = 0;
  PixelChannel1Sources._564_4_ = 0;
  PixelChannel1Sources._568_4_ = 0;
  PixelChannel1Sources._572_4_ = 0;
  PixelChannel1Sources._576_4_ = 8;
  PixelChannel1Sources._580_4_ = 1;
  PixelChannel1Sources._584_4_ = 0x10;
  PixelChannel1Sources._588_4_ = 0;
  PixelChannel1Sources._592_4_ = 0;
  PixelChannel1Sources._596_4_ = 0;
  PixelChannel1Sources._600_4_ = 0;
  PixelChannel1Sources._604_4_ = 0;
  PixelChannel1Sources._608_4_ = 0;
  PixelChannel1Sources._612_4_ = 0;
  PixelChannel1Sources._616_4_ = 0;
  PixelChannel1Sources._620_4_ = 0;
  PixelChannel1Sources._624_4_ = 8;
  PixelChannel1Sources._628_4_ = 1;
  PixelChannel1Sources._632_4_ = 0x11;
  PixelChannel1Sources._636_4_ = 0;
  PixelChannel1Sources._640_4_ = 0;
  PixelChannel1Sources._644_4_ = 0;
  PixelChannel1Sources._648_4_ = 0;
  PixelChannel1Sources._652_4_ = 0;
  PixelChannel1Sources._656_4_ = 0;
  PixelChannel1Sources._660_4_ = 0;
  PixelChannel1Sources._664_4_ = 0;
  PixelChannel1Sources._668_4_ = 0;
  PixelChannel1Sources._672_4_ = 8;
  PixelChannel1Sources._676_4_ = 1;
  PixelChannel1Sources._680_4_ = 0x12;
  PixelChannel1Sources._684_4_ = 0;
  PixelChannel1Sources._688_4_ = 0;
  PixelChannel1Sources._692_4_ = 0;
  PixelChannel1Sources._696_4_ = 0;
  PixelChannel1Sources._700_4_ = 0;
  PixelChannel1Sources._704_4_ = 0;
  PixelChannel1Sources._708_4_ = 0;
  PixelChannel1Sources._712_4_ = 0;
  PixelChannel1Sources._716_4_ = 0;
  PixelChannel1Sources._720_4_ = 8;
  PixelChannel1Sources._724_4_ = 1;
  PixelChannel1Sources._728_4_ = 0x13;
  PixelChannel1Sources._732_4_ = 0;
  PixelChannel1Sources._736_4_ = 0;
  PixelChannel1Sources._740_4_ = 0;
  PixelChannel1Sources._744_4_ = 0;
  PixelChannel1Sources._748_4_ = 0;
  PixelChannel1Sources._752_4_ = 0;
  PixelChannel1Sources._756_4_ = 0;
  PixelChannel1Sources._760_4_ = 0;
  PixelChannel1Sources._764_4_ = 0;
  PixelChannel1Sources._768_4_ = 8;
  PixelChannel1Sources._772_4_ = 1;
  PixelChannel1Sources._776_4_ = 0x14;
  PixelChannel1Sources._780_4_ = 0;
  PixelChannel1Sources._784_4_ = 0;
  PixelChannel1Sources._788_4_ = 0;
  PixelChannel1Sources._792_4_ = 0;
  PixelChannel1Sources._796_4_ = 0;
  PixelChannel1Sources._800_4_ = 0;
  PixelChannel1Sources._804_4_ = 0;
  PixelChannel1Sources._808_4_ = 0;
  PixelChannel1Sources._812_4_ = 0;
  PixelChannel1Sources._816_4_ = 8;
  PixelChannel1Sources._820_4_ = 1;
  PixelChannel1Sources._824_4_ = 0x15;
  PixelChannel1Sources._828_4_ = 0;
  PixelChannel1Sources._832_4_ = 0;
  PixelChannel1Sources._836_4_ = 0;
  PixelChannel1Sources._840_4_ = 0;
  PixelChannel1Sources._844_4_ = 0;
  PixelChannel1Sources._848_4_ = 0;
  PixelChannel1Sources._852_4_ = 0;
  PixelChannel1Sources._856_4_ = 0;
  PixelChannel1Sources._860_4_ = 0;
  PixelChannel1Sources._864_4_ = 8;
  PixelChannel1Sources._868_4_ = 1;
  PixelChannel1Sources._872_4_ = 0x16;
  PixelChannel1Sources._876_4_ = 0;
  PixelChannel1Sources._880_4_ = 0;
  PixelChannel1Sources._884_4_ = 0;
  PixelChannel1Sources._888_4_ = 0;
  PixelChannel1Sources._892_4_ = 0;
  PixelChannel1Sources._896_4_ = 0;
  PixelChannel1Sources._900_4_ = 0;
  PixelChannel1Sources._904_4_ = 0;
  PixelChannel1Sources._908_4_ = 0;
  PixelChannel1Sources._912_4_ = 8;
  PixelChannel1Sources._916_4_ = 1;
  PixelChannel1Sources._920_4_ = 0x17;
  PixelChannel1Sources._924_4_ = 0;
  PixelChannel1Sources._928_4_ = 0;
  PixelChannel1Sources._932_4_ = 0;
  PixelChannel1Sources._936_4_ = 0;
  PixelChannel1Sources._940_4_ = 0;
  PixelChannel1Sources._944_4_ = 0;
  PixelChannel1Sources._948_4_ = 0;
  PixelChannel1Sources._952_4_ = 0;
  PixelChannel1Sources._956_4_ = 0;
  PixelChannel1Sources._960_4_ = 8;
  PixelChannel1Sources._964_4_ = 1;
  PixelChannel1Sources._968_4_ = 0x18;
  PixelChannel1Sources._972_4_ = 0;
  PixelChannel1Sources._976_4_ = 0;
  PixelChannel1Sources._980_4_ = 0;
  PixelChannel1Sources._984_4_ = 0;
  PixelChannel1Sources._988_4_ = 0;
  PixelChannel1Sources._992_4_ = 0;
  PixelChannel1Sources._996_4_ = 0;
  PixelChannel1Sources._1000_4_ = 0;
  PixelChannel1Sources._1004_4_ = 0;
  PixelChannel1Sources._1008_4_ = 4;
  PixelChannel1Sources._1012_4_ = 0;
  PixelChannel1Sources._1016_4_ = 0;
  PixelChannel1Sources._1020_4_ = 0;
  PixelChannel1Sources._1024_4_ = 0;
  PixelChannel1Sources._1028_4_ = 0;
  PixelChannel1Sources._1032_4_ = 0;
  PixelChannel1Sources._1036_4_ = 0;
  PixelChannel1Sources._1040_4_ = 0;
  PixelChannel1Sources._1044_4_ = 0;
  PixelChannel1Sources._1048_4_ = 0;
  PixelChannel1Sources._1052_4_ = 0;
  __cxa_atexit(__tcf_2,0,&__dso_handle);
  PixelChannel2Sources._0_4_ = 0;
  PixelChannel2Sources._4_4_ = 0;
  PixelChannel2Sources._8_4_ = 0;
  PixelChannel2Sources._48_4_ = 7;
  PixelChannel2Sources._52_4_ = 1;
  PixelChannel2Sources._56_4_ = 0x19;
  PixelChannel2Sources._60_4_ = 0;
  PixelChannel2Sources._64_4_ = 0;
  PixelChannel2Sources._68_4_ = 0;
  PixelChannel2Sources._72_4_ = 0;
  PixelChannel2Sources._76_4_ = 0;
  PixelChannel2Sources._80_4_ = 0;
  PixelChannel2Sources._84_4_ = 0;
  PixelChannel2Sources._88_4_ = 0;
  PixelChannel2Sources._92_4_ = 0;
  PixelChannel2Sources._96_4_ = 7;
  PixelChannel2Sources._100_4_ = 1;
  PixelChannel2Sources._104_4_ = 0x1a;
  PixelChannel2Sources._108_4_ = 0;
  PixelChannel2Sources._112_4_ = 0;
  PixelChannel2Sources._116_4_ = 0;
  PixelChannel2Sources._120_4_ = 0;
  PixelChannel2Sources._124_4_ = 0;
  PixelChannel2Sources._128_4_ = 0;
  PixelChannel2Sources._132_4_ = 0;
  PixelChannel2Sources._136_4_ = 0;
  PixelChannel2Sources._140_4_ = 0;
  PixelChannel2Sources._144_4_ = 7;
  PixelChannel2Sources._148_4_ = 1;
  PixelChannel2Sources._152_4_ = 0x1b;
  PixelChannel2Sources._156_4_ = 0;
  PixelChannel2Sources._160_4_ = 0;
  PixelChannel2Sources._164_4_ = 0;
  PixelChannel2Sources._168_4_ = 0;
  PixelChannel2Sources._172_4_ = 0;
  PixelChannel2Sources._176_4_ = 0;
  PixelChannel2Sources._180_4_ = 0;
  PixelChannel2Sources._184_4_ = 0;
  PixelChannel2Sources._188_4_ = 0;
  PixelChannel2Sources._192_4_ = 3;
  PixelChannel2Sources._196_4_ = 1;
  PixelChannel2Sources._200_4_ = 0x1c;
  PixelChannel2Sources._204_4_ = 0;
  PixelChannel2Sources._208_4_ = 0;
  PixelChannel2Sources._212_4_ = 0;
  PixelChannel2Sources._216_4_ = 0;
  PixelChannel2Sources._220_4_ = 0;
  PixelChannel2Sources._224_4_ = 0;
  PixelChannel2Sources._228_4_ = 0;
  PixelChannel2Sources._232_4_ = 0;
  PixelChannel2Sources._236_4_ = 0;
  PixelChannel2Sources._240_4_ = 9;
  PixelChannel2Sources._244_4_ = 1;
  PixelChannel2Sources._248_4_ = 9;
  PixelChannel2Sources._252_4_ = 0;
  PixelChannel2Sources._256_4_ = 0;
  PixelChannel2Sources._260_4_ = 0;
  PixelChannel2Sources._264_4_ = 0;
  PixelChannel2Sources._268_4_ = 0;
  PixelChannel2Sources._272_4_ = 0;
  PixelChannel2Sources._276_4_ = 0;
  PixelChannel2Sources._280_4_ = 0;
  PixelChannel2Sources._284_4_ = 0;
  PixelChannel2Sources._288_4_ = 9;
  PixelChannel2Sources._292_4_ = 1;
  PixelChannel2Sources._296_4_ = 10;
  PixelChannel2Sources._300_4_ = 0;
  PixelChannel2Sources._304_4_ = 0;
  PixelChannel2Sources._308_4_ = 0;
  PixelChannel2Sources._312_4_ = 0;
  PixelChannel2Sources._316_4_ = 0;
  PixelChannel2Sources._320_4_ = 0;
  PixelChannel2Sources._324_4_ = 0;
  PixelChannel2Sources._328_4_ = 0;
  PixelChannel2Sources._332_4_ = 0;
  PixelChannel2Sources._336_4_ = 9;
  PixelChannel2Sources._340_4_ = 1;
  PixelChannel2Sources._344_4_ = 0xb;
  PixelChannel2Sources._348_4_ = 0;
  PixelChannel2Sources._352_4_ = 0;
  PixelChannel2Sources._356_4_ = 0;
  PixelChannel2Sources._360_4_ = 0;
  PixelChannel2Sources._364_4_ = 0;
  PixelChannel2Sources._368_4_ = 0;
  PixelChannel2Sources._372_4_ = 0;
  PixelChannel2Sources._376_4_ = 0;
  PixelChannel2Sources._380_4_ = 0;
  PixelChannel2Sources._384_4_ = 9;
  PixelChannel2Sources._388_4_ = 1;
  PixelChannel2Sources._392_4_ = 0xc;
  PixelChannel2Sources._396_4_ = 0;
  PixelChannel2Sources._400_4_ = 0;
  PixelChannel2Sources._404_4_ = 0;
  PixelChannel2Sources._408_4_ = 0;
  PixelChannel2Sources._412_4_ = 0;
  PixelChannel2Sources._416_4_ = 0;
  PixelChannel2Sources._420_4_ = 0;
  PixelChannel2Sources._424_4_ = 0;
  PixelChannel2Sources._428_4_ = 0;
  PixelChannel2Sources._432_4_ = 9;
  PixelChannel2Sources._436_4_ = 1;
  PixelChannel2Sources._440_4_ = 0xd;
  PixelChannel2Sources._444_4_ = 0;
  PixelChannel2Sources._448_4_ = 0;
  PixelChannel2Sources._452_4_ = 0;
  PixelChannel2Sources._456_4_ = 0;
  PixelChannel2Sources._460_4_ = 0;
  PixelChannel2Sources._464_4_ = 0;
  PixelChannel2Sources._468_4_ = 0;
  PixelChannel2Sources._472_4_ = 0;
  PixelChannel2Sources._476_4_ = 0;
  PixelChannel2Sources._480_4_ = 9;
  PixelChannel2Sources._484_4_ = 1;
  PixelChannel2Sources._488_4_ = 0xe;
  PixelChannel2Sources._492_4_ = 0;
  PixelChannel2Sources._496_4_ = 0;
  PixelChannel2Sources._500_4_ = 0;
  PixelChannel2Sources._504_4_ = 0;
  PixelChannel2Sources._508_4_ = 0;
  PixelChannel2Sources._512_4_ = 0;
  PixelChannel2Sources._516_4_ = 0;
  PixelChannel2Sources._520_4_ = 0;
  PixelChannel2Sources._524_4_ = 0;
  PixelChannel2Sources._528_4_ = 9;
  PixelChannel2Sources._532_4_ = 1;
  PixelChannel2Sources._536_4_ = 0xf;
  PixelChannel2Sources._540_4_ = 0;
  PixelChannel2Sources._544_4_ = 0;
  PixelChannel2Sources._548_4_ = 0;
  PixelChannel2Sources._552_4_ = 0;
  PixelChannel2Sources._556_4_ = 0;
  PixelChannel2Sources._560_4_ = 0;
  PixelChannel2Sources._564_4_ = 0;
  PixelChannel2Sources._568_4_ = 0;
  PixelChannel2Sources._572_4_ = 0;
  PixelChannel2Sources._576_4_ = 9;
  PixelChannel2Sources._580_4_ = 1;
  PixelChannel2Sources._584_4_ = 0x10;
  PixelChannel2Sources._588_4_ = 0;
  PixelChannel2Sources._592_4_ = 0;
  PixelChannel2Sources._596_4_ = 0;
  PixelChannel2Sources._600_4_ = 0;
  PixelChannel2Sources._604_4_ = 0;
  PixelChannel2Sources._608_4_ = 0;
  PixelChannel2Sources._612_4_ = 0;
  PixelChannel2Sources._616_4_ = 0;
  PixelChannel2Sources._620_4_ = 0;
  PixelChannel2Sources._624_4_ = 9;
  PixelChannel2Sources._628_4_ = 1;
  PixelChannel2Sources._632_4_ = 0x11;
  PixelChannel2Sources._636_4_ = 0;
  PixelChannel2Sources._640_4_ = 0;
  PixelChannel2Sources._644_4_ = 0;
  PixelChannel2Sources._648_4_ = 0;
  PixelChannel2Sources._652_4_ = 0;
  PixelChannel2Sources._656_4_ = 0;
  PixelChannel2Sources._660_4_ = 0;
  PixelChannel2Sources._664_4_ = 0;
  PixelChannel2Sources._668_4_ = 0;
  PixelChannel2Sources._672_4_ = 9;
  PixelChannel2Sources._676_4_ = 1;
  PixelChannel2Sources._680_4_ = 0x12;
  PixelChannel2Sources._684_4_ = 0;
  PixelChannel2Sources._688_4_ = 0;
  PixelChannel2Sources._692_4_ = 0;
  PixelChannel2Sources._696_4_ = 0;
  PixelChannel2Sources._700_4_ = 0;
  PixelChannel2Sources._704_4_ = 0;
  PixelChannel2Sources._708_4_ = 0;
  PixelChannel2Sources._712_4_ = 0;
  PixelChannel2Sources._716_4_ = 0;
  PixelChannel2Sources._720_4_ = 9;
  PixelChannel2Sources._724_4_ = 1;
  PixelChannel2Sources._728_4_ = 0x13;
  PixelChannel2Sources._732_4_ = 0;
  PixelChannel2Sources._736_4_ = 0;
  PixelChannel2Sources._740_4_ = 0;
  PixelChannel2Sources._744_4_ = 0;
  PixelChannel2Sources._748_4_ = 0;
  PixelChannel2Sources._752_4_ = 0;
  PixelChannel2Sources._756_4_ = 0;
  PixelChannel2Sources._760_4_ = 0;
  PixelChannel2Sources._764_4_ = 0;
  PixelChannel2Sources._768_4_ = 9;
  PixelChannel2Sources._772_4_ = 1;
  PixelChannel2Sources._776_4_ = 0x14;
  PixelChannel2Sources._780_4_ = 0;
  PixelChannel2Sources._784_4_ = 0;
  PixelChannel2Sources._788_4_ = 0;
  PixelChannel2Sources._792_4_ = 0;
  PixelChannel2Sources._796_4_ = 0;
  PixelChannel2Sources._800_4_ = 0;
  PixelChannel2Sources._804_4_ = 0;
  PixelChannel2Sources._808_4_ = 0;
  PixelChannel2Sources._812_4_ = 0;
  PixelChannel2Sources._816_4_ = 9;
  PixelChannel2Sources._820_4_ = 1;
  PixelChannel2Sources._824_4_ = 0x15;
  PixelChannel2Sources._828_4_ = 0;
  PixelChannel2Sources._832_4_ = 0;
  PixelChannel2Sources._836_4_ = 0;
  PixelChannel2Sources._840_4_ = 0;
  PixelChannel2Sources._844_4_ = 0;
  PixelChannel2Sources._848_4_ = 0;
  PixelChannel2Sources._852_4_ = 0;
  PixelChannel2Sources._856_4_ = 0;
  PixelChannel2Sources._860_4_ = 0;
  PixelChannel2Sources._864_4_ = 9;
  PixelChannel2Sources._868_4_ = 1;
  PixelChannel2Sources._872_4_ = 0x16;
  PixelChannel2Sources._876_4_ = 0;
  PixelChannel2Sources._880_4_ = 0;
  PixelChannel2Sources._884_4_ = 0;
  PixelChannel2Sources._888_4_ = 0;
  PixelChannel2Sources._892_4_ = 0;
  PixelChannel2Sources._896_4_ = 0;
  PixelChannel2Sources._900_4_ = 0;
  PixelChannel2Sources._904_4_ = 0;
  PixelChannel2Sources._908_4_ = 0;
  PixelChannel2Sources._912_4_ = 9;
  PixelChannel2Sources._916_4_ = 1;
  PixelChannel2Sources._920_4_ = 0x17;
  PixelChannel2Sources._924_4_ = 0;
  PixelChannel2Sources._928_4_ = 0;
  PixelChannel2Sources._932_4_ = 0;
  PixelChannel2Sources._936_4_ = 0;
  PixelChannel2Sources._940_4_ = 0;
  PixelChannel2Sources._944_4_ = 0;
  PixelChannel2Sources._948_4_ = 0;
  PixelChannel2Sources._952_4_ = 0;
  PixelChannel2Sources._956_4_ = 0;
  PixelChannel2Sources._960_4_ = 9;
  PixelChannel2Sources._964_4_ = 1;
  PixelChannel2Sources._968_4_ = 0x18;
  PixelChannel2Sources._972_4_ = 0;
  PixelChannel2Sources._976_4_ = 0;
  PixelChannel2Sources._980_4_ = 0;
  PixelChannel2Sources._984_4_ = 0;
  PixelChannel2Sources._988_4_ = 0;
  PixelChannel2Sources._992_4_ = 0;
  PixelChannel2Sources._996_4_ = 0;
  PixelChannel2Sources._1000_4_ = 0;
  PixelChannel2Sources._1004_4_ = 0;
  PixelChannel2Sources._1008_4_ = 5;
  PixelChannel2Sources._1012_4_ = 0;
  PixelChannel2Sources._1016_4_ = 0;
  PixelChannel2Sources._1020_4_ = 0;
  PixelChannel2Sources._1024_4_ = 0;
  PixelChannel2Sources._1028_4_ = 0;
  PixelChannel2Sources._1032_4_ = 0;
  PixelChannel2Sources._1036_4_ = 0;
  PixelChannel2Sources._1040_4_ = 0;
  PixelChannel2Sources._1044_4_ = 0;
  PixelChannel2Sources._1048_4_ = 0;
  PixelChannel2Sources._1052_4_ = 0;
  __cxa_atexit(__tcf_3,0,&__dso_handle);
  PixelTexCoordsIn._0_4_ = 0;
  PixelTexCoordsIn._4_4_ = 0;
  PixelTexCoordsIn._8_4_ = 0;
  PixelTexCoordsIn._48_4_ = 1;
  PixelTexCoordsIn._52_4_ = 1;
  PixelTexCoordsIn._56_4_ = 1;
  PixelTexCoordsIn._60_4_ = 0;
  PixelTexCoordsIn._64_4_ = 0;
  PixelTexCoordsIn._68_4_ = 0;
  PixelTexCoordsIn._72_4_ = 0;
  PixelTexCoordsIn._76_4_ = 0;
  PixelTexCoordsIn._80_4_ = 0;
  PixelTexCoordsIn._84_4_ = 0;
  PixelTexCoordsIn._88_4_ = 0;
  PixelTexCoordsIn._92_4_ = 0;
  PixelTexCoordsIn._96_4_ = 1;
  PixelTexCoordsIn._100_4_ = 1;
  PixelTexCoordsIn._104_4_ = 2;
  PixelTexCoordsIn._108_4_ = 0;
  PixelTexCoordsIn._112_4_ = 0;
  PixelTexCoordsIn._116_4_ = 0;
  PixelTexCoordsIn._120_4_ = 0;
  PixelTexCoordsIn._124_4_ = 0;
  PixelTexCoordsIn._128_4_ = 0;
  PixelTexCoordsIn._132_4_ = 0;
  PixelTexCoordsIn._136_4_ = 0;
  PixelTexCoordsIn._140_4_ = 0;
  PixelTexCoordsIn._144_4_ = 1;
  PixelTexCoordsIn._148_4_ = 1;
  PixelTexCoordsIn._152_4_ = 3;
  PixelTexCoordsIn._156_4_ = 0;
  PixelTexCoordsIn._160_4_ = 0;
  PixelTexCoordsIn._164_4_ = 0;
  PixelTexCoordsIn._168_4_ = 0;
  PixelTexCoordsIn._172_4_ = 0;
  PixelTexCoordsIn._176_4_ = 0;
  PixelTexCoordsIn._180_4_ = 0;
  PixelTexCoordsIn._184_4_ = 0;
  PixelTexCoordsIn._188_4_ = 0;
  PixelTexCoordsIn._192_4_ = 1;
  PixelTexCoordsIn._196_4_ = 1;
  PixelTexCoordsIn._200_4_ = 4;
  PixelTexCoordsIn._204_4_ = 0;
  PixelTexCoordsIn._208_4_ = 0;
  PixelTexCoordsIn._212_4_ = 0;
  PixelTexCoordsIn._216_4_ = 0;
  PixelTexCoordsIn._220_4_ = 0;
  PixelTexCoordsIn._224_4_ = 0;
  PixelTexCoordsIn._228_4_ = 0;
  PixelTexCoordsIn._232_4_ = 0;
  PixelTexCoordsIn._236_4_ = 0;
  PixelTexCoordsIn._240_4_ = 1;
  PixelTexCoordsIn._244_4_ = 1;
  PixelTexCoordsIn._248_4_ = 5;
  PixelTexCoordsIn._252_4_ = 0;
  PixelTexCoordsIn._256_4_ = 0;
  PixelTexCoordsIn._260_4_ = 0;
  PixelTexCoordsIn._264_4_ = 0;
  PixelTexCoordsIn._268_4_ = 0;
  PixelTexCoordsIn._272_4_ = 0;
  PixelTexCoordsIn._276_4_ = 0;
  PixelTexCoordsIn._280_4_ = 0;
  PixelTexCoordsIn._284_4_ = 0;
  PixelTexCoordsIn._288_4_ = 1;
  PixelTexCoordsIn._292_4_ = 1;
  PixelTexCoordsIn._296_4_ = 6;
  PixelTexCoordsIn._300_4_ = 0;
  PixelTexCoordsIn._304_4_ = 0;
  PixelTexCoordsIn._308_4_ = 0;
  PixelTexCoordsIn._312_4_ = 0;
  PixelTexCoordsIn._316_4_ = 0;
  PixelTexCoordsIn._320_4_ = 0;
  PixelTexCoordsIn._324_4_ = 0;
  PixelTexCoordsIn._328_4_ = 0;
  PixelTexCoordsIn._332_4_ = 0;
  PixelTexCoordsIn._336_4_ = 1;
  PixelTexCoordsIn._340_4_ = 1;
  PixelTexCoordsIn._344_4_ = 7;
  PixelTexCoordsIn._348_4_ = 0;
  PixelTexCoordsIn._352_4_ = 0;
  PixelTexCoordsIn._356_4_ = 0;
  PixelTexCoordsIn._360_4_ = 0;
  PixelTexCoordsIn._364_4_ = 0;
  PixelTexCoordsIn._368_4_ = 0;
  PixelTexCoordsIn._372_4_ = 0;
  PixelTexCoordsIn._376_4_ = 0;
  PixelTexCoordsIn._380_4_ = 0;
  PixelTexCoordsIn._384_4_ = 1;
  PixelTexCoordsIn._388_4_ = 1;
  PixelTexCoordsIn._392_4_ = 8;
  PixelTexCoordsIn._396_4_ = 0;
  PixelTexCoordsIn._400_4_ = 0;
  PixelTexCoordsIn._404_4_ = 0;
  PixelTexCoordsIn._408_4_ = 0;
  PixelTexCoordsIn._412_4_ = 0;
  PixelTexCoordsIn._416_4_ = 0;
  PixelTexCoordsIn._420_4_ = 0;
  PixelTexCoordsIn._424_4_ = 0;
  PixelTexCoordsIn._428_4_ = 0;
  __cxa_atexit(__tcf_4,0,&__dso_handle);
  PixPos._0_4_ = 0;
  PixPos._4_4_ = 1;
  PixPos._8_4_ = 0x1d;
  PixPos._12_4_ = 0;
  PixPos._16_4_ = 0;
  PixPos._20_4_ = 0;
  PixPos._24_4_ = 0;
  PixPos._28_4_ = 0;
  PixPos._32_4_ = 0;
  PixPos._36_4_ = 0;
  PixPos._40_4_ = 0;
  PixPos._44_4_ = 0;
  __cxa_atexit(ShaderFragment__ShaderFragment,PixPos,&__dso_handle);
  PixColor._0_4_ = 0;
  PixColor._4_4_ = 1;
  PixColor._8_4_ = 0x1c;
  PixColor._12_4_ = 0;
  PixColor._16_4_ = 0;
  PixColor._20_4_ = 0;
  PixColor._24_4_ = 0;
  PixColor._28_4_ = 0;
  PixColor._32_4_ = 0;
  PixColor._36_4_ = 0;
  PixColor._40_4_ = 0;
  PixColor._44_4_ = 0;
  __cxa_atexit(ShaderFragment__ShaderFragment,PixColor,&__dso_handle);
  PosTrans._0_4_ = 1;
  PosTrans._4_4_ = 2;
  PosTrans._8_4_ = 1;
  PosTrans._12_4_ = 2;
  PosTrans._16_4_ = 0;
  PosTrans._20_4_ = 0;
  PosTrans._24_4_ = 0;
  PosTrans._28_4_ = 0;
  PosTrans._32_4_ = 0;
  PosTrans._36_4_ = 0;
  PosTrans._40_4_ = 0;
  PosTrans._44_4_ = 0;
  __cxa_atexit(ShaderFragment__ShaderFragment,PosTrans,&__dso_handle);
  VertexColor._0_4_ = 5;
  VertexColor._4_4_ = 2;
  VertexColor._8_4_ = 3;
  VertexColor._12_4_ = 4;
  VertexColor._16_4_ = 0;
  VertexColor._20_4_ = 0;
  VertexColor._24_4_ = 0;
  VertexColor._28_4_ = 0;
  VertexColor._32_4_ = 0;
  VertexColor._36_4_ = 0;
  VertexColor._40_4_ = 0;
  VertexColor._44_4_ = 0;
  __cxa_atexit(ShaderFragment__ShaderFragment,VertexColor,&__dso_handle);
  VertexTexCoordMatTrans._0_4_ = 4;
  VertexTexCoordMatTrans._4_4_ = 3;
  VertexTexCoordMatTrans._8_4_ = 5;
  VertexTexCoordMatTrans._12_4_ = 0xd;
  VertexTexCoordMatTrans._16_4_ = 0x1d;
  VertexTexCoordMatTrans._20_4_ = 0;
  VertexTexCoordMatTrans._24_4_ = 0;
  VertexTexCoordMatTrans._28_4_ = 0;
  VertexTexCoordMatTrans._32_4_ = 0;
  VertexTexCoordMatTrans._36_4_ = 0;
  VertexTexCoordMatTrans._40_4_ = 0;
  VertexTexCoordMatTrans._44_4_ = 0;
  VertexTexCoordMatTrans._48_4_ = 4;
  VertexTexCoordMatTrans._52_4_ = 3;
  VertexTexCoordMatTrans._56_4_ = 6;
  VertexTexCoordMatTrans._60_4_ = 0xe;
  VertexTexCoordMatTrans._64_4_ = 0x1e;
  VertexTexCoordMatTrans._68_4_ = 0;
  VertexTexCoordMatTrans._72_4_ = 0;
  VertexTexCoordMatTrans._76_4_ = 0;
  VertexTexCoordMatTrans._80_4_ = 0;
  VertexTexCoordMatTrans._84_4_ = 0;
  VertexTexCoordMatTrans._88_4_ = 0;
  VertexTexCoordMatTrans._92_4_ = 0;
  VertexTexCoordMatTrans._96_4_ = 4;
  VertexTexCoordMatTrans._100_4_ = 3;
  VertexTexCoordMatTrans._104_4_ = 7;
  VertexTexCoordMatTrans._108_4_ = 0xf;
  VertexTexCoordMatTrans._112_4_ = 0x1f;
  VertexTexCoordMatTrans._116_4_ = 0;
  VertexTexCoordMatTrans._120_4_ = 0;
  VertexTexCoordMatTrans._124_4_ = 0;
  VertexTexCoordMatTrans._128_4_ = 0;
  VertexTexCoordMatTrans._132_4_ = 0;
  VertexTexCoordMatTrans._136_4_ = 0;
  VertexTexCoordMatTrans._140_4_ = 0;
  VertexTexCoordMatTrans._144_4_ = 4;
  VertexTexCoordMatTrans._148_4_ = 3;
  VertexTexCoordMatTrans._152_4_ = 8;
  VertexTexCoordMatTrans._156_4_ = 0x10;
  VertexTexCoordMatTrans._160_4_ = 0x20;
  VertexTexCoordMatTrans._164_4_ = 0;
  VertexTexCoordMatTrans._168_4_ = 0;
  VertexTexCoordMatTrans._172_4_ = 0;
  VertexTexCoordMatTrans._176_4_ = 0;
  VertexTexCoordMatTrans._180_4_ = 0;
  VertexTexCoordMatTrans._184_4_ = 0;
  VertexTexCoordMatTrans._188_4_ = 0;
  VertexTexCoordMatTrans._192_4_ = 4;
  VertexTexCoordMatTrans._196_4_ = 3;
  VertexTexCoordMatTrans._200_4_ = 9;
  VertexTexCoordMatTrans._204_4_ = 0x11;
  VertexTexCoordMatTrans._208_4_ = 0x21;
  VertexTexCoordMatTrans._212_4_ = 0;
  VertexTexCoordMatTrans._216_4_ = 0;
  VertexTexCoordMatTrans._220_4_ = 0;
  VertexTexCoordMatTrans._224_4_ = 0;
  VertexTexCoordMatTrans._228_4_ = 0;
  VertexTexCoordMatTrans._232_4_ = 0;
  VertexTexCoordMatTrans._236_4_ = 0;
  VertexTexCoordMatTrans._240_4_ = 4;
  VertexTexCoordMatTrans._244_4_ = 3;
  VertexTexCoordMatTrans._248_4_ = 10;
  VertexTexCoordMatTrans._252_4_ = 0x12;
  VertexTexCoordMatTrans._256_4_ = 0x22;
  VertexTexCoordMatTrans._260_4_ = 0;
  VertexTexCoordMatTrans._264_4_ = 0;
  VertexTexCoordMatTrans._268_4_ = 0;
  VertexTexCoordMatTrans._272_4_ = 0;
  VertexTexCoordMatTrans._276_4_ = 0;
  VertexTexCoordMatTrans._280_4_ = 0;
  VertexTexCoordMatTrans._284_4_ = 0;
  VertexTexCoordMatTrans._288_4_ = 4;
  VertexTexCoordMatTrans._292_4_ = 3;
  VertexTexCoordMatTrans._296_4_ = 0xb;
  VertexTexCoordMatTrans._300_4_ = 0x13;
  VertexTexCoordMatTrans._304_4_ = 0x23;
  VertexTexCoordMatTrans._308_4_ = 0;
  VertexTexCoordMatTrans._312_4_ = 0;
  VertexTexCoordMatTrans._316_4_ = 0;
  VertexTexCoordMatTrans._320_4_ = 0;
  VertexTexCoordMatTrans._324_4_ = 0;
  VertexTexCoordMatTrans._328_4_ = 0;
  VertexTexCoordMatTrans._332_4_ = 0;
  VertexTexCoordMatTrans._336_4_ = 4;
  VertexTexCoordMatTrans._340_4_ = 3;
  VertexTexCoordMatTrans._344_4_ = 0xc;
  VertexTexCoordMatTrans._348_4_ = 0x14;
  VertexTexCoordMatTrans._352_4_ = 0x24;
  VertexTexCoordMatTrans._356_4_ = 0;
  VertexTexCoordMatTrans._360_4_ = 0;
  VertexTexCoordMatTrans._364_4_ = 0;
  VertexTexCoordMatTrans._368_4_ = 0;
  VertexTexCoordMatTrans._372_4_ = 0;
  VertexTexCoordMatTrans._376_4_ = 0;
  VertexTexCoordMatTrans._380_4_ = 0;
  VertexTexCoordMatTrans._384_4_ = 3;
  VertexTexCoordMatTrans._388_4_ = 3;
  VertexTexCoordMatTrans._392_4_ = 5;
  VertexTexCoordMatTrans._396_4_ = 0xd;
  VertexTexCoordMatTrans._400_4_ = 0x1d;
  VertexTexCoordMatTrans._404_4_ = 0;
  VertexTexCoordMatTrans._408_4_ = 0;
  VertexTexCoordMatTrans._412_4_ = 0;
  VertexTexCoordMatTrans._416_4_ = 0;
  VertexTexCoordMatTrans._420_4_ = 0;
  VertexTexCoordMatTrans._424_4_ = 0;
  VertexTexCoordMatTrans._428_4_ = 0;
  VertexTexCoordMatTrans._432_4_ = 3;
  VertexTexCoordMatTrans._436_4_ = 3;
  VertexTexCoordMatTrans._440_4_ = 6;
  VertexTexCoordMatTrans._444_4_ = 0xe;
  VertexTexCoordMatTrans._448_4_ = 0x1e;
  VertexTexCoordMatTrans._452_4_ = 0;
  VertexTexCoordMatTrans._456_4_ = 0;
  VertexTexCoordMatTrans._460_4_ = 0;
  VertexTexCoordMatTrans._464_4_ = 0;
  VertexTexCoordMatTrans._468_4_ = 0;
  VertexTexCoordMatTrans._472_4_ = 0;
  VertexTexCoordMatTrans._476_4_ = 0;
  VertexTexCoordMatTrans._480_4_ = 3;
  VertexTexCoordMatTrans._484_4_ = 3;
  VertexTexCoordMatTrans._488_4_ = 7;
  VertexTexCoordMatTrans._492_4_ = 0xf;
  VertexTexCoordMatTrans._496_4_ = 0x1f;
  VertexTexCoordMatTrans._500_4_ = 0;
  VertexTexCoordMatTrans._504_4_ = 0;
  VertexTexCoordMatTrans._508_4_ = 0;
  VertexTexCoordMatTrans._512_4_ = 0;
  VertexTexCoordMatTrans._516_4_ = 0;
  VertexTexCoordMatTrans._520_4_ = 0;
  VertexTexCoordMatTrans._524_4_ = 0;
  VertexTexCoordMatTrans._528_4_ = 3;
  VertexTexCoordMatTrans._532_4_ = 3;
  VertexTexCoordMatTrans._536_4_ = 8;
  VertexTexCoordMatTrans._540_4_ = 0x10;
  VertexTexCoordMatTrans._544_4_ = 0x20;
  VertexTexCoordMatTrans._548_4_ = 0;
  VertexTexCoordMatTrans._552_4_ = 0;
  VertexTexCoordMatTrans._556_4_ = 0;
  VertexTexCoordMatTrans._560_4_ = 0;
  VertexTexCoordMatTrans._564_4_ = 0;
  VertexTexCoordMatTrans._568_4_ = 0;
  VertexTexCoordMatTrans._572_4_ = 0;
  VertexTexCoordMatTrans._576_4_ = 3;
  VertexTexCoordMatTrans._580_4_ = 3;
  VertexTexCoordMatTrans._584_4_ = 9;
  VertexTexCoordMatTrans._588_4_ = 0x11;
  VertexTexCoordMatTrans._592_4_ = 0x21;
  VertexTexCoordMatTrans._596_4_ = 0;
  VertexTexCoordMatTrans._600_4_ = 0;
  VertexTexCoordMatTrans._604_4_ = 0;
  VertexTexCoordMatTrans._608_4_ = 0;
  VertexTexCoordMatTrans._612_4_ = 0;
  VertexTexCoordMatTrans._616_4_ = 0;
  VertexTexCoordMatTrans._620_4_ = 0;
  VertexTexCoordMatTrans._624_4_ = 3;
  VertexTexCoordMatTrans._628_4_ = 3;
  VertexTexCoordMatTrans._632_4_ = 10;
  VertexTexCoordMatTrans._636_4_ = 0x12;
  VertexTexCoordMatTrans._640_4_ = 0x22;
  VertexTexCoordMatTrans._644_4_ = 0;
  VertexTexCoordMatTrans._648_4_ = 0;
  VertexTexCoordMatTrans._652_4_ = 0;
  VertexTexCoordMatTrans._656_4_ = 0;
  VertexTexCoordMatTrans._660_4_ = 0;
  VertexTexCoordMatTrans._664_4_ = 0;
  VertexTexCoordMatTrans._668_4_ = 0;
  VertexTexCoordMatTrans._672_4_ = 3;
  VertexTexCoordMatTrans._676_4_ = 3;
  VertexTexCoordMatTrans._680_4_ = 0xb;
  VertexTexCoordMatTrans._684_4_ = 0x13;
  VertexTexCoordMatTrans._688_4_ = 0x23;
  VertexTexCoordMatTrans._692_4_ = 0;
  VertexTexCoordMatTrans._696_4_ = 0;
  VertexTexCoordMatTrans._700_4_ = 0;
  VertexTexCoordMatTrans._704_4_ = 0;
  VertexTexCoordMatTrans._708_4_ = 0;
  VertexTexCoordMatTrans._712_4_ = 0;
  VertexTexCoordMatTrans._716_4_ = 0;
  VertexTexCoordMatTrans._720_4_ = 3;
  VertexTexCoordMatTrans._724_4_ = 3;
  VertexTexCoordMatTrans._728_4_ = 0xc;
  VertexTexCoordMatTrans._732_4_ = 0x14;
  VertexTexCoordMatTrans._736_4_ = 0x24;
  VertexTexCoordMatTrans._740_4_ = 0;
  VertexTexCoordMatTrans._744_4_ = 0;
  VertexTexCoordMatTrans._748_4_ = 0;
  VertexTexCoordMatTrans._752_4_ = 0;
  VertexTexCoordMatTrans._756_4_ = 0;
  VertexTexCoordMatTrans._760_4_ = 0;
  VertexTexCoordMatTrans._764_4_ = 0;
  __cxa_atexit(__tcf_5,0,&__dso_handle);
  VertexTexCoordOut._0_4_ = 2;
  VertexTexCoordOut._4_4_ = 2;
  VertexTexCoordOut._8_4_ = 5;
  VertexTexCoordOut._12_4_ = 0xd;
  VertexTexCoordOut._16_4_ = 0;
  VertexTexCoordOut._20_4_ = 0;
  VertexTexCoordOut._24_4_ = 0;
  VertexTexCoordOut._28_4_ = 0;
  VertexTexCoordOut._32_4_ = 0;
  VertexTexCoordOut._36_4_ = 0;
  VertexTexCoordOut._40_4_ = 0;
  VertexTexCoordOut._44_4_ = 0;
  VertexTexCoordOut._48_4_ = 2;
  VertexTexCoordOut._52_4_ = 2;
  VertexTexCoordOut._56_4_ = 6;
  VertexTexCoordOut._60_4_ = 0xe;
  VertexTexCoordOut._64_4_ = 0;
  VertexTexCoordOut._68_4_ = 0;
  VertexTexCoordOut._72_4_ = 0;
  VertexTexCoordOut._76_4_ = 0;
  VertexTexCoordOut._80_4_ = 0;
  VertexTexCoordOut._84_4_ = 0;
  VertexTexCoordOut._88_4_ = 0;
  VertexTexCoordOut._92_4_ = 0;
  VertexTexCoordOut._96_4_ = 2;
  VertexTexCoordOut._100_4_ = 2;
  VertexTexCoordOut._104_4_ = 7;
  VertexTexCoordOut._108_4_ = 0xf;
  VertexTexCoordOut._112_4_ = 0;
  VertexTexCoordOut._116_4_ = 0;
  VertexTexCoordOut._120_4_ = 0;
  VertexTexCoordOut._124_4_ = 0;
  VertexTexCoordOut._128_4_ = 0;
  VertexTexCoordOut._132_4_ = 0;
  VertexTexCoordOut._136_4_ = 0;
  VertexTexCoordOut._140_4_ = 0;
  VertexTexCoordOut._144_4_ = 2;
  VertexTexCoordOut._148_4_ = 2;
  VertexTexCoordOut._152_4_ = 8;
  VertexTexCoordOut._156_4_ = 0x10;
  VertexTexCoordOut._160_4_ = 0;
  VertexTexCoordOut._164_4_ = 0;
  VertexTexCoordOut._168_4_ = 0;
  VertexTexCoordOut._172_4_ = 0;
  VertexTexCoordOut._176_4_ = 0;
  VertexTexCoordOut._180_4_ = 0;
  VertexTexCoordOut._184_4_ = 0;
  VertexTexCoordOut._188_4_ = 0;
  VertexTexCoordOut._192_4_ = 2;
  VertexTexCoordOut._196_4_ = 2;
  VertexTexCoordOut._200_4_ = 9;
  VertexTexCoordOut._204_4_ = 0x11;
  VertexTexCoordOut._208_4_ = 0;
  VertexTexCoordOut._212_4_ = 0;
  VertexTexCoordOut._216_4_ = 0;
  VertexTexCoordOut._220_4_ = 0;
  VertexTexCoordOut._224_4_ = 0;
  VertexTexCoordOut._228_4_ = 0;
  VertexTexCoordOut._232_4_ = 0;
  VertexTexCoordOut._236_4_ = 0;
  VertexTexCoordOut._240_4_ = 2;
  VertexTexCoordOut._244_4_ = 2;
  VertexTexCoordOut._248_4_ = 10;
  VertexTexCoordOut._252_4_ = 0x12;
  VertexTexCoordOut._256_4_ = 0;
  VertexTexCoordOut._260_4_ = 0;
  VertexTexCoordOut._264_4_ = 0;
  VertexTexCoordOut._268_4_ = 0;
  VertexTexCoordOut._272_4_ = 0;
  VertexTexCoordOut._276_4_ = 0;
  VertexTexCoordOut._280_4_ = 0;
  VertexTexCoordOut._284_4_ = 0;
  VertexTexCoordOut._288_4_ = 2;
  VertexTexCoordOut._292_4_ = 2;
  VertexTexCoordOut._296_4_ = 0xb;
  VertexTexCoordOut._300_4_ = 0x13;
  VertexTexCoordOut._304_4_ = 0;
  VertexTexCoordOut._308_4_ = 0;
  VertexTexCoordOut._312_4_ = 0;
  VertexTexCoordOut._316_4_ = 0;
  VertexTexCoordOut._320_4_ = 0;
  VertexTexCoordOut._324_4_ = 0;
  VertexTexCoordOut._328_4_ = 0;
  VertexTexCoordOut._332_4_ = 0;
  VertexTexCoordOut._336_4_ = 2;
  VertexTexCoordOut._340_4_ = 2;
  VertexTexCoordOut._344_4_ = 0xc;
  VertexTexCoordOut._348_4_ = 0x14;
  VertexTexCoordOut._352_4_ = 0;
  VertexTexCoordOut._356_4_ = 0;
  VertexTexCoordOut._360_4_ = 0;
  VertexTexCoordOut._364_4_ = 0;
  VertexTexCoordOut._368_4_ = 0;
  VertexTexCoordOut._372_4_ = 0;
  VertexTexCoordOut._376_4_ = 0;
  VertexTexCoordOut._380_4_ = 0;
  __cxa_atexit(__tcf_6,0,&__dso_handle);
  return;
}

/* ======================================================================
 * PixelShader__PixelShader  (Ghidra `_GLOBAL__sub_I_~PixelShader` @ 0045e3a0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_~PixelShader(void)
 * Class: PixelShader
 * Calls: `ColorTemplate_float__ColorTemplate`, `PixelShader__PixelShader__00595da0`
 * Called by: (none)
 */
/* PixelShader__PixelShader__00595da0() */

void PixelShader__GLOBAL_sub_I_PixelShader(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cWhite,&__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cBlack,&__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cOrange,&__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cYellow,&__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cRed,&__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cGreen,&__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cBlue,&__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cNullColor,&__dso_handle);
  return;
}

/* ======================================================================
 * GLOBAL_sub_I_CreateShader  (Ghidra `_GLOBAL__sub_I_CreateShader` @ 0045ef50)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_CreateShader(void)
 * Calls: `ColorTemplate_float__ColorTemplate`
 * Called by: (none)
 */
/* Shader__CreateShader(tagShaderCreation*) */

void Shader__GLOBAL_sub_I_CreateShader(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cWhite,&__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cBlack,&__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cOrange,&__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cYellow,&__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cRed,&__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cGreen,&__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cBlue,&__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cNullColor,&__dso_handle);
  return;
}

/* ======================================================================
 * VertexShader__VertexShader  (Ghidra `_GLOBAL__sub_I_~VertexShader` @ 00460ae0)
 * Signature: uint8_t __stdcall _GLOBAL__sub_I_~VertexShader(void)
 * Class: VertexShader
 * Calls: `ColorTemplate_float__ColorTemplate`, `VertexShader__VertexShader__005a67a0`
 * Called by: (none)
 */
/* VertexShader__VertexShader__005a67a0() */

void VertexShader__GLOBAL_sub_I_VertexShader(void)

{
  ::cWhite._0_4_ = 0x3f800000;
  ::cWhite._4_4_ = 0x3f800000;
  ::cWhite._8_4_ = 0x3f800000;
  ::cWhite._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cWhite,&__dso_handle);
  ::cBlack._0_4_ = 0;
  ::cBlack._4_4_ = 0;
  ::cBlack._8_4_ = 0;
  ::cBlack._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cBlack,&__dso_handle);
  ::cOrange._0_4_ = 0x3f800000;
  ::cOrange._8_4_ = 0;
  ::cOrange._12_4_ = 0x3f800000;
  ::cOrange._4_4_ = 0x3f266666;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cOrange,&__dso_handle);
  ::cYellow._0_4_ = 0x3f800000;
  ::cYellow._4_4_ = 0x3f800000;
  ::cYellow._8_4_ = 0;
  ::cYellow._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cYellow,&__dso_handle);
  ::cRed._0_4_ = 0x3f800000;
  ::cRed._4_4_ = 0;
  ::cRed._8_4_ = 0;
  ::cRed._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cRed,&__dso_handle);
  ::cGreen._0_4_ = 0;
  ::cGreen._4_4_ = 0x3f800000;
  ::cGreen._8_4_ = 0;
  ::cGreen._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cGreen,&__dso_handle);
  ::cBlue._0_4_ = 0;
  ::cBlue._4_4_ = 0;
  ::cBlue._8_4_ = 0x3f800000;
  ::cBlue._12_4_ = 0x3f800000;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cBlue,&__dso_handle);
  ::cNullColor._0_4_ = 0;
  ::cNullColor._4_4_ = 0;
  ::cNullColor._8_4_ = 0;
  ::cNullColor._12_4_ = 0;
  __cxa_atexit(ColorTemplate_float__ColorTemplate,::cNullColor,&__dso_handle);
  return;
}

/* ======================================================================
 * EditorCharButton_Click  (Ghidra `EditorCharButton_Click` @ 0049e280)
 * Signature: uint8_t __stdcall EditorCharButton_Click(void * arg1)
 * Calls: (none)
 * Called by: `SMBEditor__SMBEditor__004ad010`
 */
/* EditorCharButton_Click(void*) */

void EditorCharButton_Click(void *arg1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)arg1;
  iVar1 = *(int *)((long)arg1 + 8);
  lVar3 = *(long *)(lVar2 + 0x158);
  *(uint8_t *)(lVar3 + 0x4a) = 0;
  *(uint16_t *)(lVar3 + 0x48) = 0;
  lVar3 = *(long *)(lVar2 + 0xb8 + (long)iVar1 * 8);
  *(long *)(lVar2 + 0x158) = lVar3;
  *(uint8_t *)(lVar3 + 0x4a) = 1;
  return;
}

/* ======================================================================
 * ArbitraryBlockCollision  (Ghidra `ArbitraryBlockCollision` @ 004dbaa0)
 * Signature: uint8_t __stdcall ArbitraryBlockCollision(GRIDBLOCK * arg1, SceneObject2D * arg2, TileCollisionInfo * arg3, Vector2 * arg4, Vector2 * arg5, Vector2 * arg6, TileCollisionInfo * arg7, int arg8)
 * Calls: `Vector2__operator_assign`, `Vector2__operator_minus__005be180`, `Vector2__operator_plus__005be140`
 * Called by: `ArbitraryBlockCollision__004e95c0`, `SMBPalette__PlatformCollision`
 */
/* ArbitraryBlockCollision(GRIDBLOCK&, SceneObject2D*, TileCollisionInfo&, Vector2 const&, Vector2
   const&, Vector2 const&, TileCollisionInfo const&, int) [clone .constprop.196] */

uint64_t
ArbitraryBlockCollision
          (GRIDBLOCK *arg1,SceneObject2D *arg2,TileCollisionInfo *arg3,Vector2 *arg4,
          Vector2 *arg5,Vector2 *arg6,TileCollisionInfo *arg7,int arg8)

{
  float fVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  uint64_t uVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  Vector2 *local_218;
  uint64_t local_1f8;
  Vector2 local_1e8 [16];
  uint64_t local_1d8 [2];
  uint64_t local_1c8;
  float local_1b8;
  float local_1b4;
  float local_1a8;
  float local_1a4;
  float local_198;
  float local_194;
  float local_188;
  float local_184;
  float local_178;
  float local_174;
  float local_168;
  float local_164;
  float local_158;
  float local_154;
  float local_148;
  float local_144;
  uint32_t local_138;
  uint32_t local_134;
  uint local_128;
  uint local_124;
  uint32_t local_118;
  uint32_t local_114;
  float local_108;
  uint local_104;
  uint32_t local_f8;
  uint32_t local_f4;
  uint local_e8;
  uint local_e4;
  uint32_t local_d8;
  uint32_t local_d4;
  float local_c8;
  uint local_c4;
  uint32_t local_b8;
  uint32_t local_b4;
  uint local_a8;
  uint local_a4;
  uint32_t local_98;
  uint32_t local_94;
  uint local_88;
  uint local_84;
  uint32_t local_78;
  uint32_t local_74;
  float local_68;
  uint local_64;
  uint32_t local_58;
  uint32_t local_54;
  float local_48;
  uint local_44;
  
  local_1f8 = *(uint64_t *)(arg2 + 0xa0);
  Vector2__operator_minus__005be180(local_1e8,(Vector2 *)(arg2 + 0xa0));
  plVar3 = GSuperMeatBoy__pLevelPalette;
  fVar6 = DAT_005be6e4 /* R:0.5f */;
  local_1d8[0] = *(uint64_t *)(arg2 + 0xb8);
  fVar8 = *(float *)(arg2 + 0xc0);
  fVar1 = *(float *)(arg2 + 0xc4);
  local_1c8 = *(uint64_t *)(arg2 + 0xa8);
  lVar2 = *(long *)(arg2 + 0x48);
  if (lVar2 == 0) {
    fVar10 = *(float *)(arg2 + 0xd0);
    uVar11 = *(uint *)(arg2 + 0xd4);
  }
  else {
    fVar10 = *(float *)(lVar2 + 0x8c);
    uVar11 = *(uint *)(lVar2 + 0x90);
  }
  if ((((0.0 < fVar8) || ((*(float *)arg5 <= 0.0 && *(float *)arg5 != 0.0 && (fVar8 == 0.0))))
      && (*(int *)(arg6 + 0x24) == 0)) &&
     (fVar9 = (float)local_1c8 + fVar10,
     fVar9 < (*(float *)arg4 - *(float *)arg5) - TileLevel__fLevelGridWH * DAT_005be6e4 /* R:0.5f */)) {
    local_44 = DAT_005be6f0 /* R:u32=2147483648 */ ^ uVar11;
    local_58 = (uint32_t)local_1f8;
    local_1c8._4_4_ = (uint32_t)((ulong)local_1c8 >> 0x20);
    local_54 = local_1c8._4_4_;
    local_48 = fVar10;
    Vector2__operator_plus__005be140((Vector2 *)&local_1b8,(Vector2 *)&local_58);
    local_78 = (uint32_t)local_1f8;
    local_74 = local_1c8._4_4_;
    local_68 = fVar10;
    local_64 = uVar11;
    Vector2__operator_plus__005be140((Vector2 *)&local_1a8,(Vector2 *)&local_78);
    fVar12 = TileLevel__fLevelGridWH * fVar6;
    fVar9 = *(float *)arg4;
    fVar13 = fVar12 + fVar9;
    if ((((local_1b8 <= fVar13) && (fVar9 - fVar12 <= local_1b8)) &&
        (local_1b4 <= fVar12 + *(float *)(arg4 + 4))) &&
       (*(float *)(arg4 + 4) - fVar12 <= local_1b4)) {
      iVar4 = (**(code **)(*plVar3 + 0x60))
                        (plVar3,arg1,&local_1f8,&local_1c8,local_1d8,arg2,arg4,8,1);
      if (iVar4 == 1) {
        uVar5 = 1;
        *(uint32_t *)(arg3 + 0x24) = 8;
        *(GRIDBLOCK **)(arg3 + 0x18) = arg1;
        goto LAB_004dbbcb;
      }
      fVar12 = TileLevel__fLevelGridWH * fVar6;
      fVar9 = *(float *)arg4;
      fVar13 = fVar12 + fVar9;
    }
    local_218 = (Vector2 *)local_1d8;
    if (((local_1a8 <= fVar13) && (fVar9 - fVar12 <= local_1a8)) &&
       ((local_1a4 <= fVar12 + *(float *)(arg4 + 4) &&
        ((*(float *)(arg4 + 4) - fVar12 <= local_1a4 &&
         (iVar4 = (**(code **)(*plVar3 + 0x60))
                            (plVar3,arg1,&local_1f8,&local_1c8,local_218,arg2,arg4,8,1),
         iVar4 == 1)))))) {
      uVar5 = 1;
      *(uint32_t *)(arg3 + 0x24) = 8;
      *(GRIDBLOCK **)(arg3 + 0x10) = arg1;
      goto LAB_004dbbcb;
    }
  }
  fVar6 = DAT_005be6e4 /* R:0.5f */;
  local_218 = (Vector2 *)local_1d8;
  if (((fVar8 < 0.0) || ((0.0 < *(float *)arg5 && (fVar8 == 0.0)))) &&
     ((*(int *)(arg6 + 0x24) == 0 &&
      ((TileLevel__fLevelGridWH * DAT_005be6e4 /* R:0.5f */ - *(float *)arg5) + *(float *)arg4 <
       (float)local_1c8 - fVar10)))) {
    uVar7 = (uint)fVar10 ^ DAT_005be6f0 /* R:u32=2147483648 */;
    local_98 = (uint32_t)local_1f8;
    local_84 = DAT_005be6f0 /* R:u32=2147483648 */ ^ uVar11;
    local_94 = local_1c8._4_4_;
    local_88 = uVar7;
    Vector2__operator_plus__005be140((Vector2 *)&local_198,(Vector2 *)&local_98);
    local_b8 = (uint32_t)local_1f8;
    local_b4 = local_1c8._4_4_;
    local_a8 = uVar7;
    local_a4 = uVar11;
    Vector2__operator_plus__005be140((Vector2 *)&local_188,(Vector2 *)&local_b8);
    fVar9 = TileLevel__fLevelGridWH * fVar6;
    fVar8 = *(float *)arg4;
    fVar12 = fVar9 + fVar8;
    if ((((local_198 <= fVar12) && (fVar8 - fVar9 <= local_198)) &&
        (local_194 <= fVar9 + *(float *)(arg4 + 4))) &&
       (*(float *)(arg4 + 4) - fVar9 <= local_194)) {
      iVar4 = (**(code **)(*plVar3 + 0x60))
                        (plVar3,arg1,&local_1f8,&local_1c8,local_218,arg2,arg4,4,1);
      if (iVar4 == 1) {
        uVar5 = 1;
        *(uint32_t *)(arg3 + 0x24) = 4;
        *(GRIDBLOCK **)(arg3 + 0x18) = arg1;
        goto LAB_004dbbcb;
      }
      fVar9 = TileLevel__fLevelGridWH * fVar6;
      fVar8 = *(float *)arg4;
      fVar12 = fVar9 + fVar8;
    }
    if (((local_188 <= fVar12) && (fVar8 - fVar9 <= local_188)) &&
       ((local_184 <= fVar9 + *(float *)(arg4 + 4) &&
        ((*(float *)(arg4 + 4) - fVar9 <= local_184 &&
         (iVar4 = (**(code **)(*plVar3 + 0x60))
                            (plVar3,arg1,&local_1f8,&local_1c8,local_218,arg2,arg4,4,1),
         iVar4 == 1)))))) {
      uVar5 = 1;
      *(uint32_t *)(arg3 + 0x24) = 4;
      *(GRIDBLOCK **)(arg3 + 0x10) = arg1;
      goto LAB_004dbbcb;
    }
  }
  if ((0.0 < fVar1) && (*(int *)(arg6 + 0x20) == 0)) {
    local_d8 = (float)local_1c8;
    local_d4 = local_1f8._4_4_;
    local_c8 = fVar10;
    local_c4 = uVar11;
    Vector2__operator_plus__005be140((Vector2 *)&local_178,(Vector2 *)&local_d8);
    local_e8 = DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar10;
    local_f8 = (float)local_1c8;
    local_f4 = local_1f8._4_4_;
    local_e4 = uVar11;
    Vector2__operator_plus__005be140((Vector2 *)&local_168,(Vector2 *)&local_f8);
    fVar6 = DAT_005be6e4 /* R:0.5f */;
    fVar9 = TileLevel__fLevelGridWH * DAT_005be6e4 /* R:0.5f */;
    fVar8 = *(float *)arg4;
    fVar12 = fVar9 + fVar8;
    if ((local_178 <= fVar12) &&
       (((fVar8 - fVar9 <= local_178 && (local_174 <= fVar9 + *(float *)(arg4 + 4))) &&
        (*(float *)(arg4 + 4) - fVar9 <= local_174)))) {
      iVar4 = (**(code **)(*plVar3 + 0x60))
                        (plVar3,arg1,&local_1f8,&local_1c8,local_218,arg2,arg4,1,1);
      if (iVar4 == 1) {
        uVar5 = 1;
        *(uint32_t *)(arg3 + 0x20) = 1;
        *(GRIDBLOCK **)arg3 = arg1;
        goto LAB_004dbbcb;
      }
      fVar9 = TileLevel__fLevelGridWH * fVar6;
      fVar8 = *(float *)arg4;
      fVar12 = fVar9 + fVar8;
    }
    if (((local_168 <= fVar12) && (fVar8 - fVar9 <= local_168)) &&
       ((local_164 <= fVar9 + *(float *)(arg4 + 4) &&
        ((*(float *)(arg4 + 4) - fVar9 <= local_164 &&
         (iVar4 = (**(code **)(*plVar3 + 0x60))
                            (plVar3,arg1,&local_1f8,&local_1c8,local_218,arg2,arg4,1,1),
         iVar4 == 1)))))) {
      uVar5 = 1;
      *(uint32_t *)(arg3 + 0x20) = 1;
      *(GRIDBLOCK **)(arg3 + 8) = arg1;
      goto LAB_004dbbcb;
    }
  }
  uVar7 = DAT_005be6f0 /* R:u32=2147483648 */;
  if ((fVar1 < 0.0) && ((*(int *)(arg6 + 0x20) == 0 || (0.0 < *(float *)(arg5 + 4))))) {
    uVar11 = uVar11 ^ DAT_005be6f0 /* R:u32=2147483648 */;
    local_118 = (float)local_1c8;
    local_114 = local_1f8._4_4_;
    local_108 = fVar10;
    local_104 = uVar11;
    Vector2__operator_plus__005be140((Vector2 *)&local_158,(Vector2 *)&local_118);
    local_138 = (float)local_1c8;
    local_128 = (uint)fVar10 ^ uVar7;
    local_134 = local_1f8._4_4_;
    local_124 = uVar11;
    Vector2__operator_plus__005be140((Vector2 *)&local_148,(Vector2 *)&local_138);
    fVar1 = DAT_005be6e4 /* R:0.5f */;
    fVar6 = TileLevel__fLevelGridWH * DAT_005be6e4 /* R:0.5f */;
    fVar8 = *(float *)arg4;
    fVar10 = fVar6 + fVar8;
    if ((local_158 <= fVar10) &&
       (((fVar8 - fVar6 <= local_158 && (local_154 <= fVar6 + *(float *)(arg4 + 4))) &&
        (*(float *)(arg4 + 4) - fVar6 <= local_154)))) {
      iVar4 = (**(code **)(*plVar3 + 0x60))
                        (plVar3,arg1,&local_1f8,&local_1c8,local_218,arg2,arg4,2,1);
      if (iVar4 == 1) {
        uVar5 = 1;
        *(uint32_t *)(arg3 + 0x20) = 2;
        *(GRIDBLOCK **)arg3 = arg1;
        goto LAB_004dbbcb;
      }
      fVar6 = TileLevel__fLevelGridWH * fVar1;
      fVar8 = *(float *)arg4;
      fVar10 = fVar6 + fVar8;
    }
    if (((local_148 <= fVar10) && (fVar8 - fVar6 <= local_148)) &&
       ((local_144 <= fVar6 + *(float *)(arg4 + 4) &&
        (*(float *)(arg4 + 4) - fVar6 <= local_144)))) {
      uVar5 = 0;
      iVar4 = (**(code **)(*plVar3 + 0x60))
                        (plVar3,arg1,&local_1f8,&local_1c8,local_218,arg2,arg4,2,1);
      if (iVar4 == 1) {
        uVar5 = 1;
        *(uint32_t *)(arg3 + 0x20) = 2;
        *(GRIDBLOCK **)(arg3 + 8) = arg1;
      }
      goto LAB_004dbbcb;
    }
  }
  uVar5 = 0;
LAB_004dbbcb:
  local_218 = (Vector2 *)local_1d8;
  *(uint32_t *)(arg2 + 0x9c) = 1;
  Vector2__operator_assign((Vector2 *)(arg2 + 0xa0),(Vector2 *)&local_1f8);
  Vector2__operator_assign((Vector2 *)(arg2 + 0xb8),local_218);
  return uVar5;
}

/* ======================================================================
 * SMBPalette__AddDisappearBlock  (Ghidra `AddDisappearBlock` @ 004df840)
 * Signature: uint8_t __thiscall AddDisappearBlock(SMBPalette * this, TileLevelSetPiece * arg1, int arg2)
 * Class: SMBPalette
 * Calls: `TileLevel__GetGridBlock`, `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* SMBPalette__AddDisappearBlock(TileLevelSetPiece*, int) */

void __thiscall
SMBPalette__AddDisappearBlock(SMBPalette *this,TileLevelSetPiece *arg1,int arg2)

{
  void *pvVar1;
  uint64_t uVar2;
  void *pvVar3;
  uint64_t *puVar4;
  void *pvVar5;
  ulong uVar6;
  ushort *puVar7;
  short sVar8;
  ulong uVar9;
  ushort uVar10;
  ushort uVar11;
  bool bVar12;
  byte bVar13;
  float fStack_44;
  
  bVar13 = 0;
  uVar2 = TileLevel__GetGridBlock
                    (*(TileLevel **)(SuperMeatBoy + 0x40),*(uint32_t *)(arg1 + 0x54),
                     *(uint32_t *)(arg1 + 0x58),0);
  fStack_44 = 0.1;
  if (*(float *)(arg1 + 0x4c) != DAT_005bf760 /* R:0.0f */) {
    fStack_44 = *(float *)(arg1 + 0x4c);
  }
  if (*(int *)(this + 0x3178) == -0x5eef3582) {
    uVar10 = *(ushort *)(this + 0x3158);
    if (*(ushort *)(this + 0x315a) <= uVar10) {
      uVar10 = *(ushort *)(this + 0x315a) + *(short *)(this + 0x3164);
      uVar6 = (ulong)(byte)this[0x315c];
      pvVar3 = (void *)0x0;
      pvVar1 = *(void **)(this + 0x3168);
      *(ushort *)(this + 0x315a) = uVar10;
      uVar9 = (ulong)uVar10 * 0x20;
      pvVar5 = malloc(uVar6 + 0x10 + uVar9);
      if (pvVar5 != (void *)0x0) {
        pvVar3 = (void *)((long)pvVar5 + 0x10U + (uVar6 - ((long)pvVar5 + 0x10U) % uVar6) % uVar6);
        *(ulong *)((long)pvVar3 + -0x10) = uVar9;
        *(void **)((long)pvVar3 + -8) = pvVar5;
        if (pvVar1 != (void *)0x0) {
          uVar6 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar9 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar6 = uVar9;
          }
          memcpy(pvVar3,pvVar1,uVar6);
          free(*(void **)((long)pvVar1 + -8));
        }
      }
      pvVar1 = *(void **)(this + 0x3170);
      *(void **)(this + 0x3168) = pvVar3;
      if (pvVar1 != (void *)0x0) {
        uVar11 = *(ushort *)(this + 0x315a);
        uVar6 = (ulong)(byte)this[0x315c];
        pvVar3 = (void *)0x0;
        uVar9 = (ulong)uVar11 * 2;
        pvVar5 = malloc(uVar6 + 0x10 + uVar9);
        if (pvVar5 != (void *)0x0) {
          pvVar3 = (void *)((long)pvVar5 + 0x10U + (uVar6 - ((long)pvVar5 + 0x10U) % uVar6) % uVar6)
          ;
          *(void **)((long)pvVar3 + -8) = pvVar5;
          *(ulong *)((long)pvVar3 + -0x10) = uVar9;
          uVar6 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar9 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar6 = uVar9;
          }
          memcpy(pvVar3,pvVar1,uVar6);
          free(*(void **)((long)pvVar1 + -8));
          uVar11 = *(ushort *)(this + 0x315a);
        }
        uVar10 = *(ushort *)(this + 0x3158);
        *(void **)(this + 0x3170) = pvVar3;
        if (uVar11 <= uVar10) goto LAB_004df995;
        while( true ) {
          uVar9 = (ulong)uVar10;
          uVar10 = uVar10 + 1;
          *(uint16_t *)((long)pvVar3 + uVar9 * 2) = 0xffff;
          if (uVar11 <= uVar10) break;
          pvVar3 = *(void **)(this + 0x3170);
        }
      }
      uVar10 = *(ushort *)(this + 0x3158);
    }
  }
  else {
    uVar9 = (ulong)(byte)this[0x315c];
    *(uint32_t *)(this + 0x3160) = 0;
    pvVar3 = malloc(uVar9 + 0xb0);
    puVar4 = (uint64_t *)0x0;
    if (pvVar3 != (void *)0x0) {
      puVar4 = (uint64_t *)
               ((long)pvVar3 + 0x10U + (uVar9 - ((long)pvVar3 + 0x10U) % uVar9) % uVar9);
      puVar4[-2] = 0xa0;
      puVar4[-1] = pvVar3;
    }
    bVar12 = ((ulong)puVar4 & 1) != 0;
    *(uint64_t **)(this + 0x3168) = puVar4;
    uVar9 = 0xa0;
    if (bVar12) {
      *(uint8_t *)puVar4 = 0;
      uVar9 = 0x9f;
      puVar4 = (uint64_t *)((long)puVar4 + 1);
    }
    if (((ulong)puVar4 & 2) != 0) {
      *(uint16_t *)puVar4 = 0;
      uVar9 = (ulong)((int)uVar9 - 2);
      puVar4 = (uint64_t *)((long)puVar4 + 2);
    }
    if (((ulong)puVar4 & 4) != 0) {
      *(uint32_t *)puVar4 = 0;
      uVar9 = (ulong)((int)uVar9 - 4);
      puVar4 = (uint64_t *)((long)puVar4 + 4);
    }
    for (uVar6 = uVar9 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar13 * -2 + 1;
    }
    if ((uVar9 & 4) != 0) {
      *(uint32_t *)puVar4 = 0;
      puVar4 = (uint64_t *)((long)puVar4 + 4);
    }
    if ((uVar9 & 2) != 0) {
      *(uint16_t *)puVar4 = 0;
      puVar4 = (uint64_t *)((long)puVar4 + 2);
    }
    if (bVar12) {
      *(uint8_t *)puVar4 = 0;
    }
    *(uint16_t *)(this + 0x3158) = 0;
    *(uint16_t *)(this + 0x315a) = 5;
    uVar10 = 0;
    *(uint32_t *)(this + 0x3178) = 0xa110ca7e;
    *(uint16_t *)(this + 0x3164) = 5;
  }
LAB_004df995:
  if ((*(int *)(this + 0x3160) == 1) && (*(short *)(this + 0x315a) != 0)) {
    puVar7 = *(ushort **)(this + 0x3170);
    sVar8 = 1;
    uVar11 = *puVar7;
    while (uVar11 != 0xffff) {
      puVar7 = puVar7 + 1;
      if (sVar8 == *(short *)(this + 0x315a)) goto LAB_004df9a2;
      sVar8 = sVar8 + 1;
      uVar11 = *puVar7;
    }
    *puVar7 = uVar10;
    uVar10 = *(ushort *)(this + 0x3158);
  }
LAB_004df9a2:
  puVar4 = (uint64_t *)((ulong)uVar10 * 0x20 + *(long *)(this + 0x3168));
  *puVar4 = uVar2;
  puVar4[1] = 0;
  puVar4[2] = CONCAT44(fStack_44,fStack_44);
  *(int *)(puVar4 + 3) = arg2;
  *(short *)(this + 0x3158) = *(short *)(this + 0x3158) + 1;
  return;
}

/* ======================================================================
 * SMBPalette__AddAppearBlock  (Ghidra `AddAppearBlock` @ 004dfc60)
 * Signature: uint8_t __thiscall AddAppearBlock(SMBPalette * this, TileLevelSetPiece * arg1, int arg2)
 * Class: SMBPalette
 * Calls: `TileLevel__GetGridBlock`, `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* SMBPalette__AddAppearBlock(TileLevelSetPiece*, int) */

void __thiscall SMBPalette__AddAppearBlock(SMBPalette *this,TileLevelSetPiece *arg1,int arg2)

{
  void *pvVar1;
  uint64_t uVar2;
  void *pvVar3;
  uint64_t *puVar4;
  void *pvVar5;
  ulong uVar6;
  ushort *puVar7;
  short sVar8;
  ulong uVar9;
  ushort uVar10;
  ushort uVar11;
  bool bVar12;
  byte bVar13;
  float fStack_44;
  
  bVar13 = 0;
  uVar2 = TileLevel__GetGridBlock
                    (*(TileLevel **)(SuperMeatBoy + 0x40),*(uint32_t *)(arg1 + 0x54),
                     *(uint32_t *)(arg1 + 0x58),0);
  fStack_44 = 0.1;
  if (*(float *)(arg1 + 0x4c) != DAT_005bf760 /* R:0.0f */) {
    fStack_44 = *(float *)(arg1 + 0x4c);
  }
  if (*(int *)(this + 0x31c8) == -0x5eef3582) {
    uVar10 = *(ushort *)(this + 0x31a8);
    if (*(ushort *)(this + 0x31aa) <= uVar10) {
      uVar10 = *(ushort *)(this + 0x31aa) + *(short *)(this + 0x31b4);
      uVar6 = (ulong)(byte)this[0x31ac];
      pvVar3 = (void *)0x0;
      pvVar1 = *(void **)(this + 0x31b8);
      *(ushort *)(this + 0x31aa) = uVar10;
      uVar9 = (ulong)uVar10 * 0x20;
      pvVar5 = malloc(uVar6 + 0x10 + uVar9);
      if (pvVar5 != (void *)0x0) {
        pvVar3 = (void *)((long)pvVar5 + 0x10U + (uVar6 - ((long)pvVar5 + 0x10U) % uVar6) % uVar6);
        *(ulong *)((long)pvVar3 + -0x10) = uVar9;
        *(void **)((long)pvVar3 + -8) = pvVar5;
        if (pvVar1 != (void *)0x0) {
          uVar6 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar9 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar6 = uVar9;
          }
          memcpy(pvVar3,pvVar1,uVar6);
          free(*(void **)((long)pvVar1 + -8));
        }
      }
      pvVar1 = *(void **)(this + 0x31c0);
      *(void **)(this + 0x31b8) = pvVar3;
      if (pvVar1 != (void *)0x0) {
        uVar11 = *(ushort *)(this + 0x31aa);
        uVar6 = (ulong)(byte)this[0x31ac];
        pvVar3 = (void *)0x0;
        uVar9 = (ulong)uVar11 * 2;
        pvVar5 = malloc(uVar6 + 0x10 + uVar9);
        if (pvVar5 != (void *)0x0) {
          pvVar3 = (void *)((long)pvVar5 + 0x10U + (uVar6 - ((long)pvVar5 + 0x10U) % uVar6) % uVar6)
          ;
          *(void **)((long)pvVar3 + -8) = pvVar5;
          *(ulong *)((long)pvVar3 + -0x10) = uVar9;
          uVar6 = *(ulong *)((long)pvVar1 + -0x10);
          if (uVar9 <= *(ulong *)((long)pvVar1 + -0x10)) {
            uVar6 = uVar9;
          }
          memcpy(pvVar3,pvVar1,uVar6);
          free(*(void **)((long)pvVar1 + -8));
          uVar11 = *(ushort *)(this + 0x31aa);
        }
        uVar10 = *(ushort *)(this + 0x31a8);
        *(void **)(this + 0x31c0) = pvVar3;
        if (uVar11 <= uVar10) goto LAB_004dfdb5;
        while( true ) {
          uVar9 = (ulong)uVar10;
          uVar10 = uVar10 + 1;
          *(uint16_t *)((long)pvVar3 + uVar9 * 2) = 0xffff;
          if (uVar11 <= uVar10) break;
          pvVar3 = *(void **)(this + 0x31c0);
        }
      }
      uVar10 = *(ushort *)(this + 0x31a8);
    }
  }
  else {
    uVar9 = (ulong)(byte)this[0x31ac];
    *(uint32_t *)(this + 0x31b0) = 0;
    pvVar3 = malloc(uVar9 + 0xb0);
    puVar4 = (uint64_t *)0x0;
    if (pvVar3 != (void *)0x0) {
      puVar4 = (uint64_t *)
               ((long)pvVar3 + 0x10U + (uVar9 - ((long)pvVar3 + 0x10U) % uVar9) % uVar9);
      puVar4[-2] = 0xa0;
      puVar4[-1] = pvVar3;
    }
    bVar12 = ((ulong)puVar4 & 1) != 0;
    *(uint64_t **)(this + 0x31b8) = puVar4;
    uVar9 = 0xa0;
    if (bVar12) {
      *(uint8_t *)puVar4 = 0;
      uVar9 = 0x9f;
      puVar4 = (uint64_t *)((long)puVar4 + 1);
    }
    if (((ulong)puVar4 & 2) != 0) {
      *(uint16_t *)puVar4 = 0;
      uVar9 = (ulong)((int)uVar9 - 2);
      puVar4 = (uint64_t *)((long)puVar4 + 2);
    }
    if (((ulong)puVar4 & 4) != 0) {
      *(uint32_t *)puVar4 = 0;
      uVar9 = (ulong)((int)uVar9 - 4);
      puVar4 = (uint64_t *)((long)puVar4 + 4);
    }
    for (uVar6 = uVar9 >> 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar13 * -2 + 1;
    }
    if ((uVar9 & 4) != 0) {
      *(uint32_t *)puVar4 = 0;
      puVar4 = (uint64_t *)((long)puVar4 + 4);
    }
    if ((uVar9 & 2) != 0) {
      *(uint16_t *)puVar4 = 0;
      puVar4 = (uint64_t *)((long)puVar4 + 2);
    }
    if (bVar12) {
      *(uint8_t *)puVar4 = 0;
    }
    *(uint16_t *)(this + 0x31a8) = 0;
    *(uint16_t *)(this + 0x31aa) = 5;
    uVar10 = 0;
    *(uint32_t *)(this + 0x31c8) = 0xa110ca7e;
    *(uint16_t *)(this + 0x31b4) = 5;
  }
LAB_004dfdb5:
  if ((*(int *)(this + 0x31b0) == 1) && (*(short *)(this + 0x31aa) != 0)) {
    puVar7 = *(ushort **)(this + 0x31c0);
    sVar8 = 1;
    uVar11 = *puVar7;
    while (uVar11 != 0xffff) {
      puVar7 = puVar7 + 1;
      if (sVar8 == *(short *)(this + 0x31aa)) goto LAB_004dfdc2;
      sVar8 = sVar8 + 1;
      uVar11 = *puVar7;
    }
    *puVar7 = uVar10;
    uVar10 = *(ushort *)(this + 0x31a8);
  }
LAB_004dfdc2:
  puVar4 = (uint64_t *)((ulong)uVar10 * 0x20 + *(long *)(this + 0x31b8));
  *puVar4 = uVar2;
  puVar4[1] = 0;
  puVar4[2] = CONCAT44(fStack_44,fStack_44);
  *(int *)(puVar4 + 3) = arg2;
  *(short *)(this + 0x31a8) = *(short *)(this + 0x31a8) + 1;
  return;
}

/* ======================================================================
 * PointWithinArbitraryBlock  (Ghidra `PointWithinArbitraryBlock` @ 004e9320)
 * Signature: uint8_t __stdcall PointWithinArbitraryBlock(Vector2 * arg1, Vector2 * arg2)
 * Calls: (none)
 * Called by: (none)
 */
/* PointWithinArbitraryBlock(Vector2 const&, Vector2 const&) */

bool PointWithinArbitraryBlock(Vector2 *arg1,Vector2 *arg2)

{
  float fVar1;
  
  fVar1 = DAT_005be6e4 /* R:0.5f */ * TileLevel__fLevelGridWH;
  if ((*(float *)arg2 <= fVar1 + *(float *)arg1) &&
     (*(float *)arg1 - fVar1 <= *(float *)arg2)) {
    if (*(float *)(arg2 + 4) <= fVar1 + *(float *)(arg1 + 4)) {
      return *(float *)(arg1 + 4) - fVar1 <= *(float *)(arg2 + 4);
    }
    return false;
  }
  return false;
}

/* ======================================================================
 * ArbitraryBlockCollision__004e95c0  (Ghidra `ArbitraryBlockCollision` @ 004e95c0)
 * Signature: uint8_t __stdcall ArbitraryBlockCollision(GRIDBLOCK * arg1, SceneObject2D * arg2, TileCollisionInfo * arg3, Vector2 * arg4, Vector2 * arg5, Vector2 * arg6, TileCollisionInfo * arg7, int arg8)
 * Calls: `ArbitraryBlockCollision`, `Vector2__operator_assign`, `Vector2__operator_minus__005be180`, `Vector2__operator_plus__005be140`
 * Called by: (none)
 */
/* ArbitraryBlockCollision(GRIDBLOCK&, SceneObject2D*, TileCollisionInfo&, Vector2 const&, Vector2
   const&, Vector2 const&, TileCollisionInfo const&, int) */

uint32_t
ArbitraryBlockCollision
          (GRIDBLOCK *arg1,SceneObject2D *arg2,TileCollisionInfo *arg3,Vector2 *arg4,
          Vector2 *arg5,Vector2 *arg6,TileCollisionInfo *arg7,int arg8)

{
  float fVar1;
  long lVar2;
  long *plVar3;
  uint32_t uVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  uint64_t local_1f8;
  Vector2 local_1e8 [16];
  uint64_t local_1d8 [2];
  uint64_t local_1c8;
  float local_1b8;
  float local_1b4;
  uint32_t local_1a8;
  uint32_t local_1a4;
  float local_198;
  uint local_194;
  float local_188;
  float local_184;
  uint32_t local_178;
  uint32_t local_174;
  float local_168;
  uint local_164;
  float local_158;
  float local_154;
  uint32_t local_148;
  uint32_t local_144;
  uint local_138;
  uint local_134;
  float local_128;
  float local_124;
  uint32_t local_118;
  uint32_t local_114;
  uint local_108;
  uint local_104;
  float local_f8;
  float local_f4;
  uint32_t local_e8;
  uint32_t local_e4;
  float local_d8;
  uint local_d4;
  float local_c8;
  float local_c4;
  uint32_t local_b8;
  uint32_t local_b4;
  uint local_a8;
  uint local_a4;
  float local_98;
  float local_94;
  uint32_t local_88;
  uint32_t local_84;
  float local_78;
  uint local_74;
  float local_68;
  float local_64;
  uint32_t local_58;
  uint32_t local_54;
  uint local_48;
  uint local_44;
  
  local_1f8 = *(uint64_t *)(arg2 + 0xa0);
  Vector2__operator_minus__005be180(local_1e8,(Vector2 *)(arg2 + 0xa0));
  plVar3 = GSuperMeatBoy__pLevelPalette;
  fVar6 = DAT_005be6e4 /* R:0.5f */;
  local_1d8[0] = *(uint64_t *)(arg2 + 0xb8);
  fVar8 = *(float *)(arg2 + 0xc0);
  fVar1 = *(float *)(arg2 + 0xc4);
  local_1c8 = *(uint64_t *)(arg2 + 0xa8);
  lVar2 = *(long *)(arg2 + 0x48);
  if (lVar2 == 0) {
    fVar10 = *(float *)(arg2 + 0xd0);
    uVar11 = *(uint *)(arg2 + 0xd4);
  }
  else {
    fVar10 = *(float *)(lVar2 + 0x8c);
    uVar11 = *(uint *)(lVar2 + 0x90);
  }
  if ((((0.0 < fVar8) || ((*(float *)arg5 <= 0.0 && *(float *)arg5 != 0.0 && (fVar8 == 0.0))))
      && (*(int *)(arg7 + 0x24) == 0)) &&
     (fVar9 = (float)local_1c8 + fVar10,
     fVar9 < (*(float *)arg4 - *(float *)arg5) - TileLevel__fLevelGridWH * DAT_005be6e4 /* R:0.5f */)) {
    local_194 = DAT_005be6f0 /* R:u32=2147483648 */ ^ uVar11;
    local_1a8 = (uint32_t)local_1f8;
    local_1c8._4_4_ = (uint32_t)((ulong)local_1c8 >> 0x20);
    local_1a4 = local_1c8._4_4_;
    local_198 = fVar10;
    Vector2__operator_plus__005be140((Vector2 *)&local_1b8,(Vector2 *)&local_1a8);
    local_178 = (uint32_t)local_1f8;
    local_174 = local_1c8._4_4_;
    local_168 = fVar10;
    local_164 = uVar11;
    Vector2__operator_plus__005be140((Vector2 *)&local_188,(Vector2 *)&local_178);
    fVar12 = TileLevel__fLevelGridWH * fVar6;
    fVar9 = *(float *)arg4;
    fVar13 = fVar12 + fVar9;
    if ((((local_1b8 <= fVar13) && (fVar9 - fVar12 <= local_1b8)) &&
        (local_1b4 <= fVar12 + *(float *)(arg4 + 4))) &&
       (*(float *)(arg4 + 4) - fVar12 <= local_1b4)) {
      iVar5 = (**(code **)(*plVar3 + 0x60))
                        (plVar3,arg1,&local_1f8,&local_1c8,local_1d8,arg2,arg4,8,1);
      if (iVar5 == 1) {
        *(uint32_t *)(arg3 + 0x24) = 8;
        *(GRIDBLOCK **)(arg3 + 0x18) = arg1;
        uVar4 = 1;
        goto LAB_004e96ca;
      }
      fVar12 = TileLevel__fLevelGridWH * fVar6;
      fVar9 = *(float *)arg4;
      fVar13 = fVar12 + fVar9;
    }
    if (((local_188 <= fVar13) && (fVar9 - fVar12 <= local_188)) &&
       ((local_184 <= fVar12 + *(float *)(arg4 + 4) &&
        ((*(float *)(arg4 + 4) - fVar12 <= local_184 &&
         (iVar5 = (**(code **)(*plVar3 + 0x60))
                            (plVar3,arg1,&local_1f8,&local_1c8,local_1d8,arg2,arg4,8,1),
         iVar5 == 1)))))) {
      *(uint32_t *)(arg3 + 0x24) = 8;
      *(GRIDBLOCK **)(arg3 + 0x10) = arg1;
      uVar4 = 1;
      goto LAB_004e96ca;
    }
  }
  fVar6 = DAT_005be6e4 /* R:0.5f */;
  if (((fVar8 < 0.0) || ((0.0 < *(float *)arg5 && (fVar8 == 0.0)))) &&
     ((*(int *)(arg7 + 0x24) == 0 &&
      ((TileLevel__fLevelGridWH * DAT_005be6e4 /* R:0.5f */ - *(float *)arg5) + *(float *)arg4 <
       (float)local_1c8 - fVar10)))) {
    uVar7 = (uint)fVar10 ^ DAT_005be6f0 /* R:u32=2147483648 */;
    local_148 = (uint32_t)local_1f8;
    local_134 = DAT_005be6f0 /* R:u32=2147483648 */ ^ uVar11;
    local_144 = local_1c8._4_4_;
    local_138 = uVar7;
    Vector2__operator_plus__005be140((Vector2 *)&local_158,(Vector2 *)&local_148);
    local_118 = (uint32_t)local_1f8;
    local_114 = local_1c8._4_4_;
    local_108 = uVar7;
    local_104 = uVar11;
    Vector2__operator_plus__005be140((Vector2 *)&local_128,(Vector2 *)&local_118);
    fVar9 = TileLevel__fLevelGridWH * fVar6;
    fVar8 = *(float *)arg4;
    fVar12 = fVar9 + fVar8;
    if ((((local_158 <= fVar12) && (fVar8 - fVar9 <= local_158)) &&
        (local_154 <= fVar9 + *(float *)(arg4 + 4))) &&
       (*(float *)(arg4 + 4) - fVar9 <= local_154)) {
      iVar5 = (**(code **)(*plVar3 + 0x60))
                        (plVar3,arg1,&local_1f8,&local_1c8,local_1d8,arg2,arg4,4,1);
      if (iVar5 == 1) {
        *(uint32_t *)(arg3 + 0x24) = 4;
        *(GRIDBLOCK **)(arg3 + 0x18) = arg1;
        uVar4 = 1;
        goto LAB_004e96ca;
      }
      fVar9 = TileLevel__fLevelGridWH * fVar6;
      fVar8 = *(float *)arg4;
      fVar12 = fVar9 + fVar8;
    }
    if (((local_128 <= fVar12) && (fVar8 - fVar9 <= local_128)) &&
       ((local_124 <= fVar9 + *(float *)(arg4 + 4) &&
        ((*(float *)(arg4 + 4) - fVar9 <= local_124 &&
         (iVar5 = (**(code **)(*plVar3 + 0x60))
                            (plVar3,arg1,&local_1f8,&local_1c8,local_1d8,arg2,arg4,4,1),
         iVar5 == 1)))))) {
      *(uint32_t *)(arg3 + 0x24) = 4;
      *(GRIDBLOCK **)(arg3 + 0x10) = arg1;
      uVar4 = 1;
      goto LAB_004e96ca;
    }
  }
  if ((0.0 < fVar1) && (*(int *)(arg7 + 0x20) == 0)) {
    local_e8 = (float)local_1c8;
    local_e4 = local_1f8._4_4_;
    local_d8 = fVar10;
    local_d4 = uVar11;
    Vector2__operator_plus__005be140((Vector2 *)&local_f8,(Vector2 *)&local_e8);
    local_a8 = DAT_005be6f0 /* R:u32=2147483648 */ ^ (uint)fVar10;
    local_b8 = (float)local_1c8;
    local_b4 = local_1f8._4_4_;
    local_a4 = uVar11;
    Vector2__operator_plus__005be140((Vector2 *)&local_c8,(Vector2 *)&local_b8);
    fVar6 = DAT_005be6e4 /* R:0.5f */;
    fVar9 = TileLevel__fLevelGridWH * DAT_005be6e4 /* R:0.5f */;
    fVar8 = *(float *)arg4;
    fVar12 = fVar9 + fVar8;
    if ((local_f8 <= fVar12) &&
       (((fVar8 - fVar9 <= local_f8 && (local_f4 <= fVar9 + *(float *)(arg4 + 4))) &&
        (*(float *)(arg4 + 4) - fVar9 <= local_f4)))) {
      iVar5 = (**(code **)(*plVar3 + 0x60))
                        (plVar3,arg1,&local_1f8,&local_1c8,local_1d8,arg2,arg4,1,1);
      if (iVar5 == 1) {
        *(uint32_t *)(arg3 + 0x20) = 1;
        *(GRIDBLOCK **)arg3 = arg1;
        uVar4 = 1;
        goto LAB_004e96ca;
      }
      fVar9 = TileLevel__fLevelGridWH * fVar6;
      fVar8 = *(float *)arg4;
      fVar12 = fVar9 + fVar8;
    }
    if (((local_c8 <= fVar12) && (fVar8 - fVar9 <= local_c8)) &&
       ((local_c4 <= fVar9 + *(float *)(arg4 + 4) &&
        ((*(float *)(arg4 + 4) - fVar9 <= local_c4 &&
         (iVar5 = (**(code **)(*plVar3 + 0x60))
                            (plVar3,arg1,&local_1f8,&local_1c8,local_1d8,arg2,arg4,1,1),
         iVar5 == 1)))))) {
      *(uint32_t *)(arg3 + 0x20) = 1;
      *(GRIDBLOCK **)(arg3 + 8) = arg1;
      uVar4 = 1;
      goto LAB_004e96ca;
    }
  }
  uVar7 = DAT_005be6f0 /* R:u32=2147483648 */;
  if ((fVar1 < 0.0) && ((*(int *)(arg7 + 0x20) == 0 || (0.0 < *(float *)(arg5 + 4))))) {
    uVar11 = uVar11 ^ DAT_005be6f0 /* R:u32=2147483648 */;
    local_88 = (float)local_1c8;
    local_84 = local_1f8._4_4_;
    local_78 = fVar10;
    local_74 = uVar11;
    Vector2__operator_plus__005be140((Vector2 *)&local_98,(Vector2 *)&local_88);
    local_58 = (float)local_1c8;
    local_48 = (uint)fVar10 ^ uVar7;
    local_54 = local_1f8._4_4_;
    local_44 = uVar11;
    Vector2__operator_plus__005be140((Vector2 *)&local_68,(Vector2 *)&local_58);
    fVar1 = DAT_005be6e4 /* R:0.5f */;
    fVar6 = TileLevel__fLevelGridWH * DAT_005be6e4 /* R:0.5f */;
    fVar8 = *(float *)arg4;
    fVar10 = fVar6 + fVar8;
    if ((local_98 <= fVar10) &&
       (((fVar8 - fVar6 <= local_98 && (local_94 <= fVar6 + *(float *)(arg4 + 4))) &&
        (*(float *)(arg4 + 4) - fVar6 <= local_94)))) {
      iVar5 = (**(code **)(*plVar3 + 0x60))
                        (plVar3,arg1,&local_1f8,&local_1c8,local_1d8,arg2,arg4,2,1);
      if (iVar5 == 1) {
        *(uint32_t *)(arg3 + 0x20) = 2;
        *(GRIDBLOCK **)arg3 = arg1;
        uVar4 = 1;
        goto LAB_004e96ca;
      }
      fVar6 = TileLevel__fLevelGridWH * fVar1;
      fVar8 = *(float *)arg4;
      fVar10 = fVar6 + fVar8;
    }
    if (((local_68 <= fVar10) && (fVar8 - fVar6 <= local_68)) &&
       ((local_64 <= fVar6 + *(float *)(arg4 + 4) &&
        (*(float *)(arg4 + 4) - fVar6 <= local_64)))) {
      iVar5 = (**(code **)(*plVar3 + 0x60))
                        (plVar3,arg1,&local_1f8,&local_1c8,local_1d8,arg2,arg4,2,1);
      uVar4 = 0;
      if (iVar5 == 1) {
        *(uint32_t *)(arg3 + 0x20) = 2;
        *(GRIDBLOCK **)(arg3 + 8) = arg1;
        uVar4 = 1;
      }
      goto LAB_004e96ca;
    }
  }
  uVar4 = 0;
LAB_004e96ca:
  if (arg8 == 1) {
    *(uint32_t *)(arg2 + 0x9c) = 1;
    Vector2__operator_assign((Vector2 *)(arg2 + 0xa0),(Vector2 *)&local_1f8);
    Vector2__operator_assign((Vector2 *)(arg2 + 0xb8),(Vector2 *)local_1d8);
  }
  return uVar4;
}

/* ======================================================================
 * SMBPalette__ClearBreakyBlocks  (Ghidra `ClearBreakyBlocks` @ 004f23f0)
 * Signature: uint8_t __thiscall ClearBreakyBlocks(SMBPalette * this)
 * Class: SMBPalette
 * Calls: (none)
 * Called by: (none)
 */
/* SMBPalette__ClearBreakyBlocks() */

void __thiscall SMBPalette__ClearBreakyBlocks(SMBPalette *this)

{
  ushort uVar1;
  long lVar2;
  
  *(uint16_t *)(this + 0x3e78) = 0;
  if ((*(int *)(this + 16000) == 1) && (uVar1 = *(ushort *)(this + 0x3e7a), uVar1 != 0)) {
    lVar2 = 0;
    do {
      *(uint16_t *)(*(long *)(this + 0x3e90) + lVar2) = 0xffff;
      lVar2 = lVar2 + 2;
    } while (lVar2 != (ulong)(uVar1 - 1 & 0xffff) * 2 + 2);
    return;
  }
  return;
}

/* ======================================================================
 * emit_D3D_finalize  (Ghidra `emit_D3D_finalize` @ 00519910)
 * Signature: uint8_t emit_D3D_finalize(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_D3D_finalize(void)

{
  return;
}

/* ======================================================================
 * emit_D3D_global  (Ghidra `emit_D3D_global` @ 00519920)
 * Signature: uint8_t emit_D3D_global(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_D3D_global(void)

{
  return;
}

/* ======================================================================
 * emit_D3D_array  (Ghidra `emit_D3D_array` @ 00519930)
 * Signature: uint8_t emit_D3D_array(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_D3D_array(void)

{
  return;
}

/* ======================================================================
 * emit_D3D_const_array  (Ghidra `emit_D3D_const_array` @ 00519940)
 * Signature: uint8_t emit_D3D_const_array(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_D3D_const_array(void)

{
  return;
}

/* ======================================================================
 * emit_D3D_uniform  (Ghidra `emit_D3D_uniform` @ 00519950)
 * Signature: uint8_t emit_D3D_uniform(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_D3D_uniform(void)

{
  return;
}

/* ======================================================================
 * emit_D3D_sampler  (Ghidra `emit_D3D_sampler` @ 00519960)
 * Signature: uint8_t emit_D3D_sampler(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_D3D_sampler(void)

{
  return;
}

/* ======================================================================
 * emit_D3D_attribute  (Ghidra `emit_D3D_attribute` @ 00519970)
 * Signature: uint8_t emit_D3D_attribute(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_D3D_attribute(void)

{
  return;
}

/* ======================================================================
 * emit_D3D_RESERVED  (Ghidra `emit_D3D_RESERVED` @ 00519980)
 * Signature: uint8_t emit_D3D_RESERVED(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_D3D_RESERVED(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_end  (Ghidra `emit_BYTECODE_end` @ 00519990)
 * Signature: uint8_t emit_BYTECODE_end(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_end(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_phase  (Ghidra `emit_BYTECODE_phase` @ 005199a0)
 * Signature: uint8_t emit_BYTECODE_phase(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_phase(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_finalize  (Ghidra `emit_BYTECODE_finalize` @ 005199b0)
 * Signature: uint8_t emit_BYTECODE_finalize(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_finalize(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_global  (Ghidra `emit_BYTECODE_global` @ 005199c0)
 * Signature: uint8_t emit_BYTECODE_global(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_global(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_array  (Ghidra `emit_BYTECODE_array` @ 005199d0)
 * Signature: uint8_t emit_BYTECODE_array(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_array(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_sampler  (Ghidra `emit_BYTECODE_sampler` @ 005199e0)
 * Signature: uint8_t emit_BYTECODE_sampler(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_sampler(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_const_array  (Ghidra `emit_BYTECODE_const_array` @ 005199f0)
 * Signature: uint8_t emit_BYTECODE_const_array(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_const_array(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_uniform  (Ghidra `emit_BYTECODE_uniform` @ 00519a00)
 * Signature: uint8_t emit_BYTECODE_uniform(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_uniform(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_attribute  (Ghidra `emit_BYTECODE_attribute` @ 00519a10)
 * Signature: uint8_t emit_BYTECODE_attribute(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_attribute(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_RESERVED  (Ghidra `emit_BYTECODE_RESERVED` @ 00519a20)
 * Signature: uint8_t emit_BYTECODE_RESERVED(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_RESERVED(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_NOP  (Ghidra `emit_BYTECODE_NOP` @ 00519a30)
 * Signature: uint8_t emit_BYTECODE_NOP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_NOP(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_MOV  (Ghidra `emit_BYTECODE_MOV` @ 00519a40)
 * Signature: uint8_t emit_BYTECODE_MOV(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_MOV(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_ADD  (Ghidra `emit_BYTECODE_ADD` @ 00519a50)
 * Signature: uint8_t emit_BYTECODE_ADD(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_ADD(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_SUB  (Ghidra `emit_BYTECODE_SUB` @ 00519a60)
 * Signature: uint8_t emit_BYTECODE_SUB(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_SUB(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_MAD  (Ghidra `emit_BYTECODE_MAD` @ 00519a70)
 * Signature: uint8_t emit_BYTECODE_MAD(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_MAD(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_MUL  (Ghidra `emit_BYTECODE_MUL` @ 00519a80)
 * Signature: uint8_t emit_BYTECODE_MUL(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_MUL(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_RCP  (Ghidra `emit_BYTECODE_RCP` @ 00519a90)
 * Signature: uint8_t emit_BYTECODE_RCP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_RCP(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_RSQ  (Ghidra `emit_BYTECODE_RSQ` @ 00519aa0)
 * Signature: uint8_t emit_BYTECODE_RSQ(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_RSQ(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_DP3  (Ghidra `emit_BYTECODE_DP3` @ 00519ab0)
 * Signature: uint8_t emit_BYTECODE_DP3(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_DP3(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_DP4  (Ghidra `emit_BYTECODE_DP4` @ 00519ac0)
 * Signature: uint8_t emit_BYTECODE_DP4(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_DP4(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_MIN  (Ghidra `emit_BYTECODE_MIN` @ 00519ad0)
 * Signature: uint8_t emit_BYTECODE_MIN(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_MIN(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_MAX  (Ghidra `emit_BYTECODE_MAX` @ 00519ae0)
 * Signature: uint8_t emit_BYTECODE_MAX(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_MAX(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_SLT  (Ghidra `emit_BYTECODE_SLT` @ 00519af0)
 * Signature: uint8_t emit_BYTECODE_SLT(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_SLT(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_SGE  (Ghidra `emit_BYTECODE_SGE` @ 00519b00)
 * Signature: uint8_t emit_BYTECODE_SGE(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_SGE(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_EXP  (Ghidra `emit_BYTECODE_EXP` @ 00519b10)
 * Signature: uint8_t emit_BYTECODE_EXP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_EXP(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_LOG  (Ghidra `emit_BYTECODE_LOG` @ 00519b20)
 * Signature: uint8_t emit_BYTECODE_LOG(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_LOG(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_LIT  (Ghidra `emit_BYTECODE_LIT` @ 00519b30)
 * Signature: uint8_t emit_BYTECODE_LIT(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_LIT(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_DST  (Ghidra `emit_BYTECODE_DST` @ 00519b40)
 * Signature: uint8_t emit_BYTECODE_DST(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_DST(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_LRP  (Ghidra `emit_BYTECODE_LRP` @ 00519b50)
 * Signature: uint8_t emit_BYTECODE_LRP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_LRP(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_FRC  (Ghidra `emit_BYTECODE_FRC` @ 00519b60)
 * Signature: uint8_t emit_BYTECODE_FRC(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_FRC(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_M4X4  (Ghidra `emit_BYTECODE_M4X4` @ 00519b70)
 * Signature: uint8_t emit_BYTECODE_M4X4(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_M4X4(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_M4X3  (Ghidra `emit_BYTECODE_M4X3` @ 00519b80)
 * Signature: uint8_t emit_BYTECODE_M4X3(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_M4X3(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_M3X4  (Ghidra `emit_BYTECODE_M3X4` @ 00519b90)
 * Signature: uint8_t emit_BYTECODE_M3X4(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_M3X4(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_M3X3  (Ghidra `emit_BYTECODE_M3X3` @ 00519ba0)
 * Signature: uint8_t emit_BYTECODE_M3X3(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_M3X3(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_M3X2  (Ghidra `emit_BYTECODE_M3X2` @ 00519bb0)
 * Signature: uint8_t emit_BYTECODE_M3X2(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_M3X2(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_CALL  (Ghidra `emit_BYTECODE_CALL` @ 00519bc0)
 * Signature: uint8_t emit_BYTECODE_CALL(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_CALL(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_CALLNZ  (Ghidra `emit_BYTECODE_CALLNZ` @ 00519bd0)
 * Signature: uint8_t emit_BYTECODE_CALLNZ(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_CALLNZ(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_LOOP  (Ghidra `emit_BYTECODE_LOOP` @ 00519be0)
 * Signature: uint8_t emit_BYTECODE_LOOP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_LOOP(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_RET  (Ghidra `emit_BYTECODE_RET` @ 00519bf0)
 * Signature: uint8_t emit_BYTECODE_RET(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_RET(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_ENDLOOP  (Ghidra `emit_BYTECODE_ENDLOOP` @ 00519c00)
 * Signature: uint8_t emit_BYTECODE_ENDLOOP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_ENDLOOP(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_LABEL  (Ghidra `emit_BYTECODE_LABEL` @ 00519c10)
 * Signature: uint8_t emit_BYTECODE_LABEL(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_LABEL(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_POW  (Ghidra `emit_BYTECODE_POW` @ 00519c20)
 * Signature: uint8_t emit_BYTECODE_POW(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_POW(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_CRS  (Ghidra `emit_BYTECODE_CRS` @ 00519c30)
 * Signature: uint8_t emit_BYTECODE_CRS(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_CRS(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_SGN  (Ghidra `emit_BYTECODE_SGN` @ 00519c40)
 * Signature: uint8_t emit_BYTECODE_SGN(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_SGN(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_ABS  (Ghidra `emit_BYTECODE_ABS` @ 00519c50)
 * Signature: uint8_t emit_BYTECODE_ABS(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_ABS(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_NRM  (Ghidra `emit_BYTECODE_NRM` @ 00519c60)
 * Signature: uint8_t emit_BYTECODE_NRM(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_NRM(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_SINCOS  (Ghidra `emit_BYTECODE_SINCOS` @ 00519c70)
 * Signature: uint8_t emit_BYTECODE_SINCOS(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_SINCOS(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_REP  (Ghidra `emit_BYTECODE_REP` @ 00519c80)
 * Signature: uint8_t emit_BYTECODE_REP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_REP(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_ENDREP  (Ghidra `emit_BYTECODE_ENDREP` @ 00519c90)
 * Signature: uint8_t emit_BYTECODE_ENDREP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_ENDREP(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_IF  (Ghidra `emit_BYTECODE_IF` @ 00519ca0)
 * Signature: uint8_t emit_BYTECODE_IF(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_IF(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_ELSE  (Ghidra `emit_BYTECODE_ELSE` @ 00519cb0)
 * Signature: uint8_t emit_BYTECODE_ELSE(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_ELSE(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_ENDIF  (Ghidra `emit_BYTECODE_ENDIF` @ 00519cc0)
 * Signature: uint8_t emit_BYTECODE_ENDIF(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_ENDIF(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_BREAK  (Ghidra `emit_BYTECODE_BREAK` @ 00519cd0)
 * Signature: uint8_t emit_BYTECODE_BREAK(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_BREAK(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_MOVA  (Ghidra `emit_BYTECODE_MOVA` @ 00519ce0)
 * Signature: uint8_t emit_BYTECODE_MOVA(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_MOVA(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXKILL  (Ghidra `emit_BYTECODE_TEXKILL` @ 00519cf0)
 * Signature: uint8_t emit_BYTECODE_TEXKILL(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXKILL(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXBEM  (Ghidra `emit_BYTECODE_TEXBEM` @ 00519d00)
 * Signature: uint8_t emit_BYTECODE_TEXBEM(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXBEM(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXBEML  (Ghidra `emit_BYTECODE_TEXBEML` @ 00519d10)
 * Signature: uint8_t emit_BYTECODE_TEXBEML(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXBEML(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXREG2AR  (Ghidra `emit_BYTECODE_TEXREG2AR` @ 00519d20)
 * Signature: uint8_t emit_BYTECODE_TEXREG2AR(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXREG2AR(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXREG2GB  (Ghidra `emit_BYTECODE_TEXREG2GB` @ 00519d30)
 * Signature: uint8_t emit_BYTECODE_TEXREG2GB(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXREG2GB(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXM3X2PAD  (Ghidra `emit_BYTECODE_TEXM3X2PAD` @ 00519d40)
 * Signature: uint8_t emit_BYTECODE_TEXM3X2PAD(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXM3X2PAD(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXM3X2TEX  (Ghidra `emit_BYTECODE_TEXM3X2TEX` @ 00519d50)
 * Signature: uint8_t emit_BYTECODE_TEXM3X2TEX(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXM3X2TEX(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXM3X3PAD  (Ghidra `emit_BYTECODE_TEXM3X3PAD` @ 00519d60)
 * Signature: uint8_t emit_BYTECODE_TEXM3X3PAD(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXM3X3PAD(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXM3X3TEX  (Ghidra `emit_BYTECODE_TEXM3X3TEX` @ 00519d70)
 * Signature: uint8_t emit_BYTECODE_TEXM3X3TEX(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXM3X3TEX(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXM3X3SPEC  (Ghidra `emit_BYTECODE_TEXM3X3SPEC` @ 00519d80)
 * Signature: uint8_t emit_BYTECODE_TEXM3X3SPEC(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXM3X3SPEC(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXM3X3VSPEC  (Ghidra `emit_BYTECODE_TEXM3X3VSPEC` @ 00519d90)
 * Signature: uint8_t emit_BYTECODE_TEXM3X3VSPEC(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXM3X3VSPEC(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_EXPP  (Ghidra `emit_BYTECODE_EXPP` @ 00519da0)
 * Signature: uint8_t emit_BYTECODE_EXPP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_EXPP(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_LOGP  (Ghidra `emit_BYTECODE_LOGP` @ 00519db0)
 * Signature: uint8_t emit_BYTECODE_LOGP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_LOGP(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_CND  (Ghidra `emit_BYTECODE_CND` @ 00519dc0)
 * Signature: uint8_t emit_BYTECODE_CND(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_CND(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXREG2RGB  (Ghidra `emit_BYTECODE_TEXREG2RGB` @ 00519dd0)
 * Signature: uint8_t emit_BYTECODE_TEXREG2RGB(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXREG2RGB(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXDP3TEX  (Ghidra `emit_BYTECODE_TEXDP3TEX` @ 00519de0)
 * Signature: uint8_t emit_BYTECODE_TEXDP3TEX(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXDP3TEX(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXM3X2DEPTH  (Ghidra `emit_BYTECODE_TEXM3X2DEPTH` @ 00519df0)
 * Signature: uint8_t emit_BYTECODE_TEXM3X2DEPTH(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXM3X2DEPTH(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXDP3  (Ghidra `emit_BYTECODE_TEXDP3` @ 00519e00)
 * Signature: uint8_t emit_BYTECODE_TEXDP3(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXDP3(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXM3X3  (Ghidra `emit_BYTECODE_TEXM3X3` @ 00519e10)
 * Signature: uint8_t emit_BYTECODE_TEXM3X3(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXM3X3(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXDEPTH  (Ghidra `emit_BYTECODE_TEXDEPTH` @ 00519e20)
 * Signature: uint8_t emit_BYTECODE_TEXDEPTH(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXDEPTH(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_CMP  (Ghidra `emit_BYTECODE_CMP` @ 00519e30)
 * Signature: uint8_t emit_BYTECODE_CMP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_CMP(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_BEM  (Ghidra `emit_BYTECODE_BEM` @ 00519e40)
 * Signature: uint8_t emit_BYTECODE_BEM(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_BEM(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_DP2ADD  (Ghidra `emit_BYTECODE_DP2ADD` @ 00519e50)
 * Signature: uint8_t emit_BYTECODE_DP2ADD(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_DP2ADD(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_DSX  (Ghidra `emit_BYTECODE_DSX` @ 00519e60)
 * Signature: uint8_t emit_BYTECODE_DSX(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_DSX(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_DSY  (Ghidra `emit_BYTECODE_DSY` @ 00519e70)
 * Signature: uint8_t emit_BYTECODE_DSY(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_DSY(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXLDD  (Ghidra `emit_BYTECODE_TEXLDD` @ 00519e80)
 * Signature: uint8_t emit_BYTECODE_TEXLDD(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXLDD(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXLDL  (Ghidra `emit_BYTECODE_TEXLDL` @ 00519e90)
 * Signature: uint8_t emit_BYTECODE_TEXLDL(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXLDL(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_BREAKP  (Ghidra `emit_BYTECODE_BREAKP` @ 00519ea0)
 * Signature: uint8_t emit_BYTECODE_BREAKP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_BREAKP(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_BREAKC  (Ghidra `emit_BYTECODE_BREAKC` @ 00519eb0)
 * Signature: uint8_t emit_BYTECODE_BREAKC(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_BREAKC(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_IFC  (Ghidra `emit_BYTECODE_IFC` @ 00519ec0)
 * Signature: uint8_t emit_BYTECODE_IFC(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_IFC(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_SETP  (Ghidra `emit_BYTECODE_SETP` @ 00519ed0)
 * Signature: uint8_t emit_BYTECODE_SETP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_SETP(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_DEF  (Ghidra `emit_BYTECODE_DEF` @ 00519ee0)
 * Signature: uint8_t emit_BYTECODE_DEF(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_DEF(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_DEFI  (Ghidra `emit_BYTECODE_DEFI` @ 00519ef0)
 * Signature: uint8_t emit_BYTECODE_DEFI(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_DEFI(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_DEFB  (Ghidra `emit_BYTECODE_DEFB` @ 00519f00)
 * Signature: uint8_t emit_BYTECODE_DEFB(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_DEFB(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_DCL  (Ghidra `emit_BYTECODE_DCL` @ 00519f10)
 * Signature: uint8_t emit_BYTECODE_DCL(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_DCL(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXCRD  (Ghidra `emit_BYTECODE_TEXCRD` @ 00519f20)
 * Signature: uint8_t emit_BYTECODE_TEXCRD(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXCRD(void)

{
  return;
}

/* ======================================================================
 * emit_BYTECODE_TEXLD  (Ghidra `emit_BYTECODE_TEXLD` @ 00519f30)
 * Signature: uint8_t emit_BYTECODE_TEXLD(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_BYTECODE_TEXLD(void)

{
  return;
}

/* ======================================================================
 * emit_GLSL_phase  (Ghidra `emit_GLSL_phase` @ 00519f40)
 * Signature: uint8_t emit_GLSL_phase(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_GLSL_phase(void)

{
  return;
}

/* ======================================================================
 * emit_GLSL_NOP  (Ghidra `emit_GLSL_NOP` @ 00519f50)
 * Signature: uint8_t emit_GLSL_NOP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_GLSL_NOP(void)

{
  return;
}

/* ======================================================================
 * emit_GLSL_DCL  (Ghidra `emit_GLSL_DCL` @ 00519f60)
 * Signature: uint8_t emit_GLSL_DCL(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_GLSL_DCL(void)

{
  return;
}

/* ======================================================================
 * emit_GLSL_RESERVED  (Ghidra `emit_GLSL_RESERVED` @ 00519f70)
 * Signature: uint8_t emit_GLSL_RESERVED(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_GLSL_RESERVED(void)

{
  return;
}

/* ======================================================================
 * emit_ARB1_phase  (Ghidra `emit_ARB1_phase` @ 00519f80)
 * Signature: uint8_t emit_ARB1_phase(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_ARB1_phase(void)

{
  return;
}

/* ======================================================================
 * emit_ARB1_sampler  (Ghidra `emit_ARB1_sampler` @ 00519f90)
 * Signature: uint8_t emit_ARB1_sampler(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_ARB1_sampler(void)

{
  return;
}

/* ======================================================================
 * emit_ARB1_RESERVED  (Ghidra `emit_ARB1_RESERVED` @ 00519fa0)
 * Signature: uint8_t emit_ARB1_RESERVED(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_ARB1_RESERVED(void)

{
  return;
}

/* ======================================================================
 * emit_ARB1_NOP  (Ghidra `emit_ARB1_NOP` @ 00519fb0)
 * Signature: uint8_t emit_ARB1_NOP(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_ARB1_NOP(void)

{
  return;
}

/* ======================================================================
 * emit_ARB1_DCL  (Ghidra `emit_ARB1_DCL` @ 00519fc0)
 * Signature: uint8_t emit_ARB1_DCL(void)
 * Calls: (none)
 * Called by: (none)
 */
void emit_ARB1_DCL(void)

{
  return;
}

/* ======================================================================
 * parse_args_NULL  (Ghidra `parse_args_NULL` @ 00519fd0)
 * Signature: uint8_t parse_args_NULL(void)
 * Calls: (none)
 * Called by: `parse_args_NULL__0052b7c0`, `parse_source_token_maybe_relative`
 */
uint64_t parse_args_NULL(void)

{
  return 1;
}

/* ======================================================================
 * emit_ARB1_end  (Ghidra `emit_ARB1_end` @ 0051a140)
 * Signature: uint8_t emit_ARB1_end(void)
 * Calls: `output_line`
 * Called by: (none)
 */
void emit_ARB1_end(uint64_t arg1)

{
  output_line(arg1,"END");
  return;
}

/* ======================================================================
 * emit_D3D_phase  (Ghidra `emit_D3D_phase` @ 0051a150)
 * Signature: uint8_t emit_D3D_phase(void)
 * Calls: `output_line`
 * Called by: (none)
 */
void emit_D3D_phase(uint64_t arg1)

{
  output_line(arg1,"phase");
  return;
}

/* ======================================================================
 * emit_D3D_end  (Ghidra `emit_D3D_end` @ 0051a160)
 * Signature: uint8_t emit_D3D_end(void)
 * Calls: `output_line`
 * Called by: (none)
 */
void emit_D3D_end(uint64_t arg1)

{
  output_line(arg1,"end");
  return;
}

/* ======================================================================
 * emit_GLSL_BREAK  (Ghidra `emit_GLSL_BREAK` @ 0051a170)
 * Signature: uint8_t emit_GLSL_BREAK(void)
 * Calls: `output_line`
 * Called by: (none)
 */
void emit_GLSL_BREAK(uint64_t arg1)

{
  output_line(arg1,"break;");
  return;
}

/* ======================================================================
 * emit_D3D_opcode  (Ghidra `emit_D3D_opcode` @ 0051a180)
 * Signature: uint8_t emit_D3D_opcode(void)
 * Calls: `output_line`, `strlen`
 * Called by: `emit_D3D_BREAK`, `emit_D3D_ELSE`, `emit_D3D_ENDIF`, `emit_D3D_ENDLOOP`, `emit_D3D_ENDREP`, `emit_D3D_NOP`, `emit_D3D_RET`
 */
void emit_D3D_opcode(uint64_t arg1,char *arg2)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  char cVar6;
  uint64_t uStack_20;
  
  uStack_20 = 0x51a195;
  sVar4 = strlen(arg2);
  lVar3 = -(sVar4 + 0x1f & 0xfffffffffffffff0);
  lVar5 = 0;
  do {
    cVar2 = arg2[lVar5];
    cVar6 = cVar2 + ' ';
    if (0x19 < (byte)(cVar2 + 0xbfU)) {
      cVar6 = cVar2;
    }
    (&stack0xfffffffffffffff0)[lVar5 + lVar3] = cVar6;
    pcVar1 = arg2 + lVar5;
    lVar5 = lVar5 + 1;
  } while (*pcVar1 != '\0');
  *(uint64_t *)((long)&uStack_20 + lVar3) = 0x51a1e1;
  output_line(arg1,"%s");
  return;
}

/* ======================================================================
 * emit_D3D_BREAK  (Ghidra `emit_D3D_BREAK` @ 0051a1f0)
 * Signature: uint8_t emit_D3D_BREAK(void)
 * Calls: `emit_D3D_opcode`
 * Called by: (none)
 */
void emit_D3D_BREAK(uint64_t arg1)

{
  emit_D3D_opcode(arg1,"BREAK");
  return;
}

/* ======================================================================
 * emit_D3D_ENDIF  (Ghidra `emit_D3D_ENDIF` @ 0051a200)
 * Signature: uint8_t emit_D3D_ENDIF(void)
 * Calls: `emit_D3D_opcode`
 * Called by: (none)
 */
void emit_D3D_ENDIF(uint64_t arg1)

{
  emit_D3D_opcode(arg1,"ENDIF");
  return;
}

/* ======================================================================
 * emit_D3D_ELSE  (Ghidra `emit_D3D_ELSE` @ 0051a210)
 * Signature: uint8_t emit_D3D_ELSE(void)
 * Calls: `emit_D3D_opcode`
 * Called by: (none)
 */
void emit_D3D_ELSE(uint64_t arg1)

{
  emit_D3D_opcode(arg1,&DAT_005c9a59 /* R:"ELSE" */);
  return;
}

/* ======================================================================
 * emit_D3D_ENDREP  (Ghidra `emit_D3D_ENDREP` @ 0051a220)
 * Signature: uint8_t emit_D3D_ENDREP(void)
 * Calls: `emit_D3D_opcode`
 * Called by: (none)
 */
void emit_D3D_ENDREP(uint64_t arg1)

{
  emit_D3D_opcode(arg1,"ENDREP");
  return;
}

/* ======================================================================
 * emit_D3D_ENDLOOP  (Ghidra `emit_D3D_ENDLOOP` @ 0051a230)
 * Signature: uint8_t emit_D3D_ENDLOOP(void)
 * Calls: `emit_D3D_opcode`
 * Called by: (none)
 */
void emit_D3D_ENDLOOP(uint64_t arg1)

{
  emit_D3D_opcode(arg1,"ENDLOOP");
  return;
}

/* ======================================================================
 * emit_D3D_RET  (Ghidra `emit_D3D_RET` @ 0051a240)
 * Signature: uint8_t emit_D3D_RET(void)
 * Calls: `emit_D3D_opcode`
 * Called by: (none)
 */
void emit_D3D_RET(uint64_t arg1)

{
  emit_D3D_opcode(arg1,"RET");
  return;
}

/* ======================================================================
 * emit_D3D_NOP  (Ghidra `emit_D3D_NOP` @ 0051a250)
 * Signature: uint8_t emit_D3D_NOP(void)
 * Calls: `emit_D3D_opcode`
 * Called by: (none)
 */
void emit_D3D_NOP(uint64_t arg1)

{
  emit_D3D_opcode(arg1,&DAT_005c9a5e /* R:7.37528885406202e-39f */);
  return;
}

/* ======================================================================
 * emit_GLSL_ENDIF  (Ghidra `emit_GLSL_ENDIF` @ 0051a260)
 * Signature: uint8_t emit_GLSL_ENDIF(void)
 * Calls: `output_line`
 * Called by: (none)
 */
void emit_GLSL_ENDIF(long arg1)

{
  *(int *)(arg1 + 0xac) = *(int *)(arg1 + 0xac) + -1;
  output_line(arg1,"}");
  return;
}

/* ======================================================================
 * emit_GLSL_ELSE  (Ghidra `emit_GLSL_ELSE` @ 0051a280)
 * Signature: uint8_t emit_GLSL_ELSE(void)
 * Calls: `output_line`
 * Called by: (none)
 */
void emit_GLSL_ELSE(long arg1)

{
  *(int *)(arg1 + 0xac) = *(int *)(arg1 + 0xac) + -1;
  output_line(arg1,"} else {");
  *(int *)(arg1 + 0xac) = *(int *)(arg1 + 0xac) + 1;
  return;
}

/* ======================================================================
 * emit_GLSL_ENDREP  (Ghidra `emit_GLSL_ENDREP` @ 0051a2a0)
 * Signature: uint8_t emit_GLSL_ENDREP(void)
 * Calls: `output_line`
 * Called by: (none)
 */
void emit_GLSL_ENDREP(long arg1)

{
  *(int *)(arg1 + 0xac) = *(int *)(arg1 + 0xac) + -1;
  output_line(arg1,"}");
  return;
}

/* ======================================================================
 * emit_GLSL_ENDLOOP  (Ghidra `emit_GLSL_ENDLOOP` @ 0051a2c0)
 * Signature: uint8_t emit_GLSL_ENDLOOP(void)
 * Calls: `output_line`
 * Called by: (none)
 */
void emit_GLSL_ENDLOOP(long arg1)

{
  *(int *)(arg1 + 0xac) = *(int *)(arg1 + 0xac) + -1;
  output_line(arg1,"}");
  *(int *)(arg1 + 0xac) = *(int *)(arg1 + 0xac) + -1;
  output_line(arg1,"}");
  return;
}

/* ======================================================================
 * emit_D3D_start  (Ghidra `emit_D3D_start` @ 0051a2f0)
 * Signature: uint8_t emit_D3D_start(void)
 * Calls: `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_D3D_start(long arg1)

{
  byte bVar1;
  char local_28 [16];
  
  bVar1 = *(byte *)(arg1 + 0xd4);
  *(uint32_t *)(arg1 + 0x49c) = 1;
  if (*(char *)(arg1 + 0xd5) == -1) {
    local_28[0] = 's';
    local_28[1] = 'w';
    local_28[2] = 0;
  }
  else if ((*(char *)(arg1 + 0xd5) == '\x01') && (1 < bVar1)) {
    local_28[0] = 'x';
    local_28[1] = '\0';
  }
  else {
    snprintf(local_28,0x10,"%u");
  }
  output_line(arg1,"%s_%u_%s",*(uint64_t *)(arg1 + 0xb0),bVar1,local_28);
  return;
}

/* ======================================================================
 * emit_ARB1_BREAKP  (Ghidra `emit_ARB1_BREAKP` @ 0051a440)
 * Signature: uint8_t emit_ARB1_BREAKP(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_BREAKP(long arg1)

{
  failf(arg1,"BREAKP unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_SETP  (Ghidra `emit_ARB1_SETP` @ 0051a460)
 * Signature: uint8_t emit_ARB1_SETP(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_SETP(long arg1)

{
  failf(arg1,"SETP unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_BEM  (Ghidra `emit_ARB1_BEM` @ 0051a480)
 * Signature: uint8_t emit_ARB1_BEM(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_BEM(long arg1)

{
  failf(arg1,"BEM unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXDEPTH  (Ghidra `emit_ARB1_TEXDEPTH` @ 0051a4a0)
 * Signature: uint8_t emit_ARB1_TEXDEPTH(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXDEPTH(long arg1)

{
  failf(arg1,"TEXDEPTH unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXM3X3  (Ghidra `emit_ARB1_TEXM3X3` @ 0051a4c0)
 * Signature: uint8_t emit_ARB1_TEXM3X3(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXM3X3(long arg1)

{
  failf(arg1,"TEXM3X3 unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXDP3  (Ghidra `emit_ARB1_TEXDP3` @ 0051a4e0)
 * Signature: uint8_t emit_ARB1_TEXDP3(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXDP3(long arg1)

{
  failf(arg1,"TEXDP3 unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXM3X2DEPTH  (Ghidra `emit_ARB1_TEXM3X2DEPTH` @ 0051a500)
 * Signature: uint8_t emit_ARB1_TEXM3X2DEPTH(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXM3X2DEPTH(long arg1)

{
  failf(arg1,"TEXM3X2DEPTH unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXDP3TEX  (Ghidra `emit_ARB1_TEXDP3TEX` @ 0051a520)
 * Signature: uint8_t emit_ARB1_TEXDP3TEX(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXDP3TEX(long arg1)

{
  failf(arg1,"TEXDP3TEX unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXREG2RGB  (Ghidra `emit_ARB1_TEXREG2RGB` @ 0051a540)
 * Signature: uint8_t emit_ARB1_TEXREG2RGB(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXREG2RGB(long arg1)

{
  failf(arg1,"TEXREG2RGB unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_CND  (Ghidra `emit_ARB1_CND` @ 0051a560)
 * Signature: uint8_t emit_ARB1_CND(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_CND(long arg1)

{
  failf(arg1,"CND unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXM3X3VSPEC  (Ghidra `emit_ARB1_TEXM3X3VSPEC` @ 0051a580)
 * Signature: uint8_t emit_ARB1_TEXM3X3VSPEC(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXM3X3VSPEC(long arg1)

{
  failf(arg1,"TEXM3X3VSPEC unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXM3X3SPEC  (Ghidra `emit_ARB1_TEXM3X3SPEC` @ 0051a5a0)
 * Signature: uint8_t emit_ARB1_TEXM3X3SPEC(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXM3X3SPEC(long arg1)

{
  failf(arg1,"TEXM3X3SPEC unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXM3X3TEX  (Ghidra `emit_ARB1_TEXM3X3TEX` @ 0051a5c0)
 * Signature: uint8_t emit_ARB1_TEXM3X3TEX(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXM3X3TEX(long arg1)

{
  failf(arg1,"TEXM3X3TEX unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXM3X3PAD  (Ghidra `emit_ARB1_TEXM3X3PAD` @ 0051a5e0)
 * Signature: uint8_t emit_ARB1_TEXM3X3PAD(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXM3X3PAD(long arg1)

{
  failf(arg1,"TEXM3X3PAD unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXM3X2TEX  (Ghidra `emit_ARB1_TEXM3X2TEX` @ 0051a600)
 * Signature: uint8_t emit_ARB1_TEXM3X2TEX(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXM3X2TEX(long arg1)

{
  failf(arg1,"TEXM3X2TEX unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXM3X2PAD  (Ghidra `emit_ARB1_TEXM3X2PAD` @ 0051a620)
 * Signature: uint8_t emit_ARB1_TEXM3X2PAD(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXM3X2PAD(long arg1)

{
  failf(arg1,"TEXM3X2PAD unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXREG2GB  (Ghidra `emit_ARB1_TEXREG2GB` @ 0051a640)
 * Signature: uint8_t emit_ARB1_TEXREG2GB(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXREG2GB(long arg1)

{
  failf(arg1,"TEXREG2GB unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXREG2AR  (Ghidra `emit_ARB1_TEXREG2AR` @ 0051a660)
 * Signature: uint8_t emit_ARB1_TEXREG2AR(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXREG2AR(long arg1)

{
  failf(arg1,"TEXREG2AR unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXBEML  (Ghidra `emit_ARB1_TEXBEML` @ 0051a680)
 * Signature: uint8_t emit_ARB1_TEXBEML(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXBEML(long arg1)

{
  failf(arg1,"TEXBEML unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXBEM  (Ghidra `emit_ARB1_TEXBEM` @ 0051a6a0)
 * Signature: uint8_t emit_ARB1_TEXBEM(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXBEM(long arg1)

{
  failf(arg1,"TEXBEM unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_TEXCRD  (Ghidra `emit_ARB1_TEXCRD` @ 0051a6c0)
 * Signature: uint8_t emit_ARB1_TEXCRD(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXCRD(long arg1)

{
  failf(arg1,"TEXCRD unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_BREAKC  (Ghidra `emit_ARB1_BREAKC` @ 0051a6e0)
 * Signature: uint8_t emit_ARB1_BREAKC(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_BREAKC(long arg1)

{
  failf(arg1,"BREAKC unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_ENDLOOP  (Ghidra `emit_ARB1_ENDLOOP` @ 0051a700)
 * Signature: uint8_t emit_ARB1_ENDLOOP(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_ENDLOOP(long arg1)

{
  failf(arg1,"ENDLOOP unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_LOOP  (Ghidra `emit_ARB1_LOOP` @ 0051a720)
 * Signature: uint8_t emit_ARB1_LOOP(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_LOOP(long arg1)

{
  failf(arg1,"LOOP unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_M3X2  (Ghidra `emit_ARB1_M3X2` @ 0051a740)
 * Signature: uint8_t emit_ARB1_M3X2(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_M3X2(long arg1)

{
  failf(arg1,"M3X2 unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_M3X3  (Ghidra `emit_ARB1_M3X3` @ 0051a760)
 * Signature: uint8_t emit_ARB1_M3X3(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_M3X3(long arg1)

{
  failf(arg1,"M3X3 unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_M3X4  (Ghidra `emit_ARB1_M3X4` @ 0051a780)
 * Signature: uint8_t emit_ARB1_M3X4(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_M3X4(long arg1)

{
  failf(arg1,"M3X4 unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_M4X3  (Ghidra `emit_ARB1_M4X3` @ 0051a7a0)
 * Signature: uint8_t emit_ARB1_M4X3(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_M4X3(long arg1)

{
  failf(arg1,"M4X3 unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_M4X4  (Ghidra `emit_ARB1_M4X4` @ 0051a7c0)
 * Signature: uint8_t emit_ARB1_M4X4(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_ARB1_M4X4(long arg1)

{
  failf(arg1,"M4X4 unimplemented in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * make_GLSL_swizzle_string_isra_10  (Ghidra `make_GLSL_swizzle_string.isra.10` @ 0051a7e0)
 * Signature: uint8_t make_GLSL_swizzle_string.isra.10(void)
 * Calls: (none)
 * Called by: `glsl_texld`, `make_GLSL_srcarg_string_constprop_72`
 */
void make_GLSL_swizzle_string_isra_10(uint8_t *arg1,uint arg2,uint arg3)

{
  long lVar1;
  long lVar2;
  
  if ((arg2 != 0xe4) || (lVar1 = 0, arg3 != 0xf)) {
    *arg1 = 0x2e;
    lVar2 = 2;
    lVar1 = 1;
    if ((arg3 & 1) != 0) {
      lVar2 = 3;
      lVar1 = 2;
      arg1[1] = *(uint8_t *)((long)&swizzle_channels + (ulong)(arg2 & 3));
    }
    if (((int)arg3 >> 1 & 1U) != 0) {
      arg1[lVar1] = *(uint8_t *)((long)&swizzle_channels + (ulong)((int)arg2 >> 2 & 3));
      lVar1 = lVar2;
    }
    if (((int)arg3 >> 2 & 1U) != 0) {
      arg1[lVar1] = *(uint8_t *)((long)&swizzle_channels + (ulong)((int)arg2 >> 4 & 3));
      lVar1 = lVar1 + 1;
    }
    if (((int)arg3 >> 3 & 1U) != 0) {
      arg1[lVar1] = *(uint8_t *)((long)&swizzle_channels + (ulong)((int)arg2 >> 6 & 3));
      lVar1 = lVar1 + 1;
    }
  }
  arg1[lVar1] = 0;
  return;
}

/* ======================================================================
 * emit_ARB1_BREAK  (Ghidra `emit_ARB1_BREAK` @ 0051a8a0)
 * Signature: uint8_t emit_ARB1_BREAK(void)
 * Calls: `failf`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_BREAK(long arg1)

{
  char acStack_28 [32];
  
  if (*(int *)(arg1 + 0x4b0) == 0) {
    if (*(int *)(arg1 + 0x4a8) == 0) {
      failf(arg1,"branching unsupported in %s profile",**(uint64_t **)(arg1 + 200));
      return;
    }
    if (*(int *)(arg1 + 0xd0) != 1) {
      snprintf(acStack_28,0x20,"branch_label%d",
               (ulong)*(uint *)(arg1 + 0x2cc + (long)*(int *)(arg1 + 0x2c8) * 4));
      output_line(arg1,"BRA %s;",acStack_28);
      return;
    }
  }
  output_line(arg1,&DAT_005c9a77 /* R:"BRK;" */);
  return;
}

/* ======================================================================
 * emit_ARB1_ENDIF  (Ghidra `emit_ARB1_ENDIF` @ 0051a940)
 * Signature: uint8_t emit_ARB1_ENDIF(void)
 * Calls: `failf`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_ENDIF(long arg1)

{
  int iVar1;
  char acStack_28 [32];
  
  if (*(int *)(arg1 + 0x4b0) == 0) {
    if (*(int *)(arg1 + 0x4a8) == 0) {
      failf(arg1,"branching unsupported in %s profile",**(uint64_t **)(arg1 + 200));
      return;
    }
    if (*(int *)(arg1 + 0xd0) != 1) {
      iVar1 = *(int *)(arg1 + 0x2c8) + -1;
      *(int *)(arg1 + 0x2c8) = iVar1;
      snprintf(acStack_28,0x20,"branch_label%d",(ulong)*(uint *)(arg1 + 0x2cc + (long)iVar1 * 4))
      ;
      output_line(arg1,&DAT_005c9a9a /* R:5.367764851996393e-39f */,acStack_28);
      return;
    }
  }
  output_line(arg1,"ENDIF;");
  return;
}

/* ======================================================================
 * emit_ARB1_ELSE  (Ghidra `emit_ARB1_ELSE` @ 0051a9f0)
 * Signature: uint8_t emit_ARB1_ELSE(void)
 * Calls: `failf`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_ELSE(long arg1)

{
  uint uVar1;
  char acStack_58 [32];
  char local_38 [40];
  
  if (*(int *)(arg1 + 0x4b0) == 0) {
    if (*(int *)(arg1 + 0x4a8) == 0) {
      failf(arg1,"branching unsupported in %s profile",**(uint64_t **)(arg1 + 200));
      return;
    }
    if (*(int *)(arg1 + 0xd0) != 1) {
      uVar1 = *(uint *)(arg1 + 0x34c);
      *(uint *)(arg1 + 0x34c) = uVar1 + 1;
      snprintf(acStack_58,0x20,"branch_label%d",(ulong)uVar1);
      output_line(arg1,"BRA %s;",acStack_58);
      snprintf(local_38,0x20,"branch_label%d",
               (ulong)*(uint *)(arg1 + 0x2cc + (long)(*(int *)(arg1 + 0x2c8) + -1) * 4));
      output_line(arg1,&DAT_005c9a9a /* R:5.367764851996393e-39f */,local_38);
      *(uint *)(arg1 + 0x2cc + (long)(*(int *)(arg1 + 0x2c8) + -1) * 4) = uVar1;
      return;
    }
  }
  output_line(arg1,"ELSE;");
  return;
}

/* ======================================================================
 * emit_GLSL_RET  (Ghidra `emit_GLSL_RET` @ 0051b360)
 * Signature: uint8_t emit_GLSL_RET(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_append`, `buffer_create`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_RET(int *arg1)

{
  long lVar1;
  
  arg1[0x2b] = arg1[0x2b] + -1;
  output_line(arg1,"}");
  if (*arg1 == 0) {
    buffer_append(*(uint64_t *)(arg1 + 0x14),*(uint64_t *)(arg1 + 0x2e),
                  (long)arg1[0x30]);
  }
  lVar1 = *(long *)(arg1 + 0x1c);
  if (lVar1 == 0) {
    lVar1 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x1c) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  *(long *)(arg1 + 0x14) = lVar1;
  return;
}

/* ======================================================================
 * emit_BYTECODE_start  (Ghidra `emit_BYTECODE_start` @ 0051b3d0)
 * Signature: uint8_t emit_BYTECODE_start(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_append`, `buffer_create`
 * Called by: (none)
 */
void emit_BYTECODE_start(long arg1)

{
  long lVar1;
  
  *(uint32_t *)(arg1 + 0x49c) = 1;
  lVar1 = *(long *)(arg1 + 0x80);
  if (lVar1 == 0) {
    lVar1 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x80) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  *(long *)(arg1 + 0x50) = lVar1;
  buffer_append(lVar1,*(uint64_t *)(arg1 + 0x30),(ulong)*(uint *)(arg1 + 0x38) << 2);
  return;
}

/* ======================================================================
 * emit_ARB1_RET  (Ghidra `emit_ARB1_RET` @ 0051b430)
 * Signature: uint8_t emit_ARB1_RET(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `output_line`
 * Called by: (none)
 */
void emit_ARB1_RET(long arg1)

{
  long lVar1;
  
  if (*(int *)(arg1 + 0x4a8) != 0) {
    output_line(arg1,&DAT_005c9aa4 /* R:"RET;" */);
  }
  lVar1 = *(long *)(arg1 + 0x80);
  if (lVar1 == 0) {
    lVar1 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x80) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  *(long *)(arg1 + 0x50) = lVar1;
  return;
}

/* ======================================================================
 * emit_ARB1_start  (Ghidra `emit_ARB1_start` @ 0051b490)
 * Signature: uint8_t emit_ARB1_start(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `failf`, `output_line`
 * Called by: (none)
 */
void emit_ARB1_start(long arg1,char *arg2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  uint8_t *puVar5;
  char *pcVar6;
  bool bVar7;
  byte bVar8;
  
  bVar8 = 0;
  if (*(int *)(arg1 + 0xd0) == 2) {
    pcVar6 = "vertex";
    puVar5 = &DAT_005c9aa9 /* R:u32=1711304822 */;
  }
  else {
    pcVar6 = "fragment";
    puVar5 = &DAT_005c9ab5 /* R:u32=1627418726 */;
    if (*(int *)(arg1 + 0xd0) != 1) {
      failf(arg1,"Shader type %u unsupported in this profile.");
      return;
    }
  }
  lVar2 = *(long *)(arg1 + 0x58);
  bVar7 = false;
  if (lVar2 == 0) {
    lVar2 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    bVar7 = lVar2 == 0;
    *(long *)(arg1 + 0x58) = lVar2;
    if (!bVar7) goto LAB_0051b4db;
  }
  else {
LAB_0051b4db:
    *(long *)(arg1 + 0x50) = lVar2;
  }
  lVar2 = 5;
  pcVar3 = arg2;
  pcVar4 = "arb1";
  do {
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    bVar7 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + (ulong)bVar8 * -2 + 1;
    pcVar4 = pcVar4 + (ulong)bVar8 * -2 + 1;
  } while (bVar7);
  if (bVar7) {
    output_line(arg1,"!!ARB%s1.0",puVar5);
    goto LAB_0051b510;
  }
  if ((*arg2 == 'n') && (arg2[1] == 'v')) {
    if ((arg2[2] == '2') && (arg2[3] == '\0')) {
      *(uint32_t *)(arg1 + 0x4a8) = 1;
      output_line(arg1,"!!ARB%s1.0",puVar5);
      output_line(arg1,"OPTION NV_%s_program2;",pcVar6);
      goto LAB_0051b510;
    }
    if ((arg2[2] == '3') && (arg2[3] == '\0')) {
      iVar1 = *(int *)(arg1 + 0xd0);
      *(uint32_t *)(arg1 + 0x4a8) = 1;
      *(uint32_t *)(arg1 + 0x4ac) = 1;
      output_line(arg1,"!!ARB%s1.0",puVar5);
      output_line(arg1,"OPTION NV_%s_program%d;",pcVar6,(iVar1 != 1) + '\x02');
      goto LAB_0051b510;
    }
    if ((arg2[2] == '4') && (arg2[3] == '\0')) {
      *(uint32_t *)(arg1 + 0x4a8) = 1;
      *(uint32_t *)(arg1 + 0x4ac) = 1;
      *(uint32_t *)(arg1 + 0x4b0) = 1;
      output_line(arg1,"!!NV%s4.0",puVar5);
      goto LAB_0051b510;
    }
  }
  failf(arg1,"Profile \'%s\' unsupported or unknown.",arg2);
LAB_0051b510:
  lVar2 = *(long *)(arg1 + 0x80);
  if (lVar2 == 0) {
    lVar2 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x80) = lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  *(long *)(arg1 + 0x50) = lVar2;
  return;
}

/* ======================================================================
 * emit_GLSL_end  (Ghidra `emit_GLSL_end` @ 0051b700)
 * Signature: uint8_t emit_GLSL_end(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_append`, `buffer_create`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_end(int *arg1)

{
  long lVar1;
  
  if (arg1[0xab] != 0x1c) {
    arg1[0x2b] = arg1[0x2b] + -1;
    output_line(arg1,"}");
    if (*arg1 == 0) {
      buffer_append(*(uint64_t *)(arg1 + 0x14),*(uint64_t *)(arg1 + 0x2e),
                    (long)arg1[0x30]);
    }
    lVar1 = *(long *)(arg1 + 0x1c);
    if (lVar1 == 0) {
      lVar1 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
      *(long *)(arg1 + 0x1c) = lVar1;
      if (lVar1 == 0) {
        return;
      }
    }
    *(long *)(arg1 + 0x14) = lVar1;
  }
  return;
}

/* ======================================================================
 * parse_ctab_typeinfo  (Ghidra `parse_ctab_typeinfo` @ 0051b780)
 * Signature: uint8_t parse_ctab_typeinfo(void)
 * Calls: `memset`, `strcpy`, `strlen`
 * Called by: `MOJOSHADER_parse`
 */
uint64_t
parse_ctab_typeinfo(uint32_t *arg1,long arg2,uint arg3,uint arg4,uint *arg5)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  void *__s;
  ulong uVar5;
  size_t sVar6;
  char *__dest;
  uint uVar7;
  char *__s_00;
  ushort *puVar8;
  uint *puVar9;
  uint64_t *puVar10;
  uint uVar11;
  uint64_t uVar12;
  long lVar13;
  
  uVar12 = 0;
  if (arg4 + 0x10 < arg3) {
    puVar8 = (ushort *)((ulong)arg4 + arg2);
    *arg5 = (uint)*puVar8;
    arg5[1] = (uint)puVar8[1];
    arg5[2] = (uint)puVar8[2];
    arg5[3] = (uint)puVar8[3];
    arg5[4] = (uint)puVar8[4];
    uVar2 = puVar8[5];
    arg5[5] = (uint)uVar2;
    if (arg4 + 0x10 + (uint)uVar2 * 8 < arg3) {
      if (uVar2 == 0) {
        arg5[6] = 0;
        arg5[7] = 0;
        uVar12 = 1;
      }
      else {
        __s = (void *)(**(code **)(arg1 + 2))((ulong)uVar2 * 0x28);
        if (__s == (void *)0x0) {
          arg1[1] = 1;
          *arg1 = 1;
          uVar12 = 1;
          arg5[6] = 0;
          arg5[7] = 0;
        }
        else {
          *(void **)(arg5 + 6) = __s;
          memset(__s,0,(ulong)uVar2 * 0x28);
          if (arg5[5] == 0) {
LAB_0051b977:
            uVar12 = 1;
          }
          else {
            uVar3 = *(uint *)(puVar8 + 6);
            puVar10 = *(uint64_t **)(arg5 + 6);
            uVar7 = *(uint *)(puVar8 + 8);
            if (uVar3 < arg3) {
              puVar9 = (uint *)(puVar8 + 10);
              lVar13 = 0x28;
              uVar11 = 0;
              do {
                if ((int)(arg3 - uVar3) < 1) {
                  return 0;
                }
                __s_00 = (char *)((ulong)uVar3 + arg2);
                uVar5 = 0;
                cVar1 = *__s_00;
                while (cVar1 != '\0') {
                  if (uVar5 == (arg3 - uVar3) - 1) {
                    return 0;
                  }
                  uVar5 = uVar5 + 1;
                  cVar1 = __s_00[uVar5];
                }
                sVar6 = strlen(__s_00);
                __dest = (char *)(**(code **)(arg1 + 2))(sVar6 + 1,*(uint64_t *)(arg1 + 6));
                if (__dest == (char *)0x0) {
                  arg1[1] = 1;
                  *arg1 = 1;
                  *puVar10 = 0;
                  return 1;
                }
                strcpy(__dest,__s_00);
                *puVar10 = __dest;
                iVar4 = parse_ctab_typeinfo(arg1,arg2,arg3,uVar7,puVar10 + 1);
                if (iVar4 == 0) {
                  return 0;
                }
                if ((arg1[1] != 0) || (uVar11 = uVar11 + 1, arg5[5] <= uVar11))
                goto LAB_0051b977;
                uVar3 = *puVar9;
                uVar7 = puVar9[1];
                puVar10 = (uint64_t *)(lVar13 + *(long *)(arg5 + 6));
                puVar9 = puVar9 + 2;
                lVar13 = lVar13 + 0x28;
              } while (uVar3 < arg3);
              uVar12 = 0;
            }
          }
        }
      }
    }
  }
  return uVar12;
}

/* ======================================================================
 * get_ARB1_const_array_varname  (Ghidra `get_ARB1_const_array_varname` @ 0051b9b0)
 * Signature: uint8_t get_ARB1_const_array_varname(void)
 * Calls: `snprintf`, `strcpy`
 * Called by: (none)
 */
char * get_ARB1_const_array_varname(uint32_t *arg1,ulong arg2,uint arg3)

{
  uint uVar1;
  uint uVar2;
  char *__dest;
  uint *puVar3;
  uint *puVar4;
  uint local_58 [16];
  
  snprintf((char *)local_58,0x40,"c_array_%d_%d",arg2 & 0xffffffff,(ulong)arg3);
  puVar4 = local_58;
  do {
    puVar3 = puVar4;
    uVar1 = *puVar3 + 0xfefefeff & ~*puVar3;
    uVar2 = uVar1 & 0x80808080;
    puVar4 = puVar3 + 1;
  } while (uVar2 == 0);
  if ((uVar1 & 0x8080) == 0) {
    puVar4 = (uint *)((long)puVar3 + 6);
    uVar2 = uVar2 >> 0x10;
  }
  __dest = (char *)(**(code **)(arg1 + 2))
                             ((long)puVar4 +
                              (-(long)local_58 - (ulong)CARRY1((byte)uVar2,(byte)uVar2)) + -2,
                              *(uint64_t *)(arg1 + 6));
  if (__dest == (char *)0x0) {
    arg1[1] = 1;
    *arg1 = 1;
  }
  else {
    strcpy(__dest,(char *)local_58);
  }
  return __dest;
}

/* ======================================================================
 * get_GLSL_const_array_varname  (Ghidra `get_GLSL_const_array_varname` @ 0051ba60)
 * Signature: uint8_t get_GLSL_const_array_varname(void)
 * Calls: `snprintf`, `strcpy`
 * Called by: (none)
 */
char * get_GLSL_const_array_varname(uint32_t *arg1,uint arg2,uint arg3)

{
  uint uVar1;
  uint uVar2;
  char *__dest;
  uint *puVar3;
  uint *puVar4;
  uint local_58 [16];
  
  snprintf((char *)local_58,0x40,"%s_const_array_%d_%d",*(uint64_t *)(arg1 + 0x2c),
           (ulong)arg2,(ulong)arg3);
  puVar4 = local_58;
  do {
    puVar3 = puVar4;
    uVar1 = *puVar3 + 0xfefefeff & ~*puVar3;
    uVar2 = uVar1 & 0x80808080;
    puVar4 = puVar3 + 1;
  } while (uVar2 == 0);
  if ((uVar1 & 0x8080) == 0) {
    puVar4 = (uint *)((long)puVar3 + 6);
    uVar2 = uVar2 >> 0x10;
  }
  __dest = (char *)(**(code **)(arg1 + 2))
                             ((long)puVar4 +
                              (-(long)local_58 - (ulong)CARRY1((byte)uVar2,(byte)uVar2)) + -2,
                              *(uint64_t *)(arg1 + 6));
  if (__dest == (char *)0x0) {
    arg1[1] = 1;
    *arg1 = 1;
  }
  else {
    strcpy(__dest,(char *)local_58);
  }
  return __dest;
}

/* ======================================================================
 * get_BYTECODE_const_array_varname  (Ghidra `get_BYTECODE_const_array_varname` @ 0051bb20)
 * Signature: uint8_t get_BYTECODE_const_array_varname(void)
 * Calls: `snprintf`, `strcpy`
 * Called by: (none)
 */
char * get_BYTECODE_const_array_varname(uint32_t *arg1,ulong arg2,uint arg3)

{
  uint uVar1;
  uint uVar2;
  char *__dest;
  uint *puVar3;
  uint *puVar4;
  uint local_58 [16];
  
  snprintf((char *)local_58,0x40,"c_array_%d_%d",arg2 & 0xffffffff,(ulong)arg3);
  puVar4 = local_58;
  do {
    puVar3 = puVar4;
    uVar1 = *puVar3 + 0xfefefeff & ~*puVar3;
    uVar2 = uVar1 & 0x80808080;
    puVar4 = puVar3 + 1;
  } while (uVar2 == 0);
  if ((uVar1 & 0x8080) == 0) {
    puVar4 = (uint *)((long)puVar3 + 6);
    uVar2 = uVar2 >> 0x10;
  }
  __dest = (char *)(**(code **)(arg1 + 2))
                             ((long)puVar4 +
                              (-(long)local_58 - (ulong)CARRY1((byte)uVar2,(byte)uVar2)) + -2,
                              *(uint64_t *)(arg1 + 6));
  if (__dest == (char *)0x0) {
    arg1[1] = 1;
    *arg1 = 1;
  }
  else {
    strcpy(__dest,(char *)local_58);
  }
  return __dest;
}

/* ======================================================================
 * get_D3D_const_array_varname  (Ghidra `get_D3D_const_array_varname` @ 0051bbd0)
 * Signature: uint8_t get_D3D_const_array_varname(void)
 * Calls: `snprintf`, `strcpy`
 * Called by: (none)
 */
char * get_D3D_const_array_varname(uint32_t *arg1,ulong arg2,uint arg3)

{
  uint uVar1;
  uint uVar2;
  char *__dest;
  uint *puVar3;
  uint *puVar4;
  uint local_58 [16];
  
  snprintf((char *)local_58,0x40,"c_array_%d_%d",arg2 & 0xffffffff,(ulong)arg3);
  puVar4 = local_58;
  do {
    puVar3 = puVar4;
    uVar1 = *puVar3 + 0xfefefeff & ~*puVar3;
    uVar2 = uVar1 & 0x80808080;
    puVar4 = puVar3 + 1;
  } while (uVar2 == 0);
  if ((uVar1 & 0x8080) == 0) {
    puVar4 = (uint *)((long)puVar3 + 6);
    uVar2 = uVar2 >> 0x10;
  }
  __dest = (char *)(**(code **)(arg1 + 2))
                             ((long)puVar4 +
                              (-(long)local_58 - (ulong)CARRY1((byte)uVar2,(byte)uVar2)) + -2,
                              *(uint64_t *)(arg1 + 6));
  if (__dest == (char *)0x0) {
    arg1[1] = 1;
    *arg1 = 1;
  }
  else {
    strcpy(__dest,(char *)local_58);
  }
  return __dest;
}

/* ======================================================================
 * emit_GLSL_BEM  (Ghidra `emit_GLSL_BEM` @ 0051bcb0)
 * Signature: uint8_t emit_GLSL_BEM(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_BEM(uint64_t arg1)

{
  failf(arg1,"%s","BEM unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXDEPTH  (Ghidra `emit_GLSL_TEXDEPTH` @ 0051bcd0)
 * Signature: uint8_t emit_GLSL_TEXDEPTH(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXDEPTH(uint64_t arg1)

{
  failf(arg1,"%s","TEXDEPTH unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXM3X3  (Ghidra `emit_GLSL_TEXM3X3` @ 0051bcf0)
 * Signature: uint8_t emit_GLSL_TEXM3X3(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXM3X3(uint64_t arg1)

{
  failf(arg1,"%s","TEXM3X3 unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXDP3  (Ghidra `emit_GLSL_TEXDP3` @ 0051bd10)
 * Signature: uint8_t emit_GLSL_TEXDP3(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXDP3(uint64_t arg1)

{
  failf(arg1,"%s","TEXDP3 unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXM3X2DEPTH  (Ghidra `emit_GLSL_TEXM3X2DEPTH` @ 0051bd30)
 * Signature: uint8_t emit_GLSL_TEXM3X2DEPTH(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXM3X2DEPTH(uint64_t arg1)

{
  failf(arg1,"%s","TEXM3X2DEPTH unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXDP3TEX  (Ghidra `emit_GLSL_TEXDP3TEX` @ 0051bd50)
 * Signature: uint8_t emit_GLSL_TEXDP3TEX(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXDP3TEX(uint64_t arg1)

{
  failf(arg1,"%s","TEXDP3TEX unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXREG2RGB  (Ghidra `emit_GLSL_TEXREG2RGB` @ 0051bd70)
 * Signature: uint8_t emit_GLSL_TEXREG2RGB(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXREG2RGB(uint64_t arg1)

{
  failf(arg1,"%s","TEXREG2RGB unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXM3X3VSPEC  (Ghidra `emit_GLSL_TEXM3X3VSPEC` @ 0051bd90)
 * Signature: uint8_t emit_GLSL_TEXM3X3VSPEC(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXM3X3VSPEC(uint64_t arg1)

{
  failf(arg1,"%s","TEXM3X3VSPEC unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXM3X3SPEC  (Ghidra `emit_GLSL_TEXM3X3SPEC` @ 0051bdb0)
 * Signature: uint8_t emit_GLSL_TEXM3X3SPEC(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXM3X3SPEC(uint64_t arg1)

{
  failf(arg1,"%s","TEXM3X3SPEC unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXM3X3TEX  (Ghidra `emit_GLSL_TEXM3X3TEX` @ 0051bdd0)
 * Signature: uint8_t emit_GLSL_TEXM3X3TEX(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXM3X3TEX(uint64_t arg1)

{
  failf(arg1,"%s","TEXM3X3TEX unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXM3X3PAD  (Ghidra `emit_GLSL_TEXM3X3PAD` @ 0051bdf0)
 * Signature: uint8_t emit_GLSL_TEXM3X3PAD(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXM3X3PAD(uint64_t arg1)

{
  failf(arg1,"%s","TEXM3X3PAD unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXM3X2TEX  (Ghidra `emit_GLSL_TEXM3X2TEX` @ 0051be10)
 * Signature: uint8_t emit_GLSL_TEXM3X2TEX(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXM3X2TEX(uint64_t arg1)

{
  failf(arg1,"%s","TEXM3X2TEX unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXM3X2PAD  (Ghidra `emit_GLSL_TEXM3X2PAD` @ 0051be30)
 * Signature: uint8_t emit_GLSL_TEXM3X2PAD(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXM3X2PAD(uint64_t arg1)

{
  failf(arg1,"%s","TEXM3X2PAD unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXREG2GB  (Ghidra `emit_GLSL_TEXREG2GB` @ 0051be50)
 * Signature: uint8_t emit_GLSL_TEXREG2GB(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXREG2GB(uint64_t arg1)

{
  failf(arg1,"%s","TEXREG2GB unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXREG2AR  (Ghidra `emit_GLSL_TEXREG2AR` @ 0051be70)
 * Signature: uint8_t emit_GLSL_TEXREG2AR(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXREG2AR(uint64_t arg1)

{
  failf(arg1,"%s","TEXREG2AR unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXBEML  (Ghidra `emit_GLSL_TEXBEML` @ 0051be90)
 * Signature: uint8_t emit_GLSL_TEXBEML(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXBEML(uint64_t arg1)

{
  failf(arg1,"%s","TEXBEML unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXBEM  (Ghidra `emit_GLSL_TEXBEM` @ 0051beb0)
 * Signature: uint8_t emit_GLSL_TEXBEM(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXBEM(uint64_t arg1)

{
  failf(arg1,"%s","TEXBEM unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_GLSL_TEXCRD  (Ghidra `emit_GLSL_TEXCRD` @ 0051bed0)
 * Signature: uint8_t emit_GLSL_TEXCRD(void)
 * Calls: `failf`
 * Called by: (none)
 */
void emit_GLSL_TEXCRD(uint64_t arg1)

{
  failf(arg1,"%s","TEXCRD unimplemented in glsl profile");
  return;
}

/* ======================================================================
 * emit_ARB1_ENDREP  (Ghidra `emit_ARB1_ENDREP` @ 0051c190)
 * Signature: uint8_t emit_ARB1_ENDREP(void)
 * Calls: `failf`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_ENDREP(long arg1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char acStack_78 [32];
  char local_58 [32];
  char local_38 [40];
  
  if (*(int *)(arg1 + 0x4b0) == 0) {
    if (*(int *)(arg1 + 0x4a8) == 0) {
      failf(arg1,"%s","branching unsupported in this profile");
      return;
    }
    if (*(int *)(arg1 + 0xd0) != 1) {
      iVar3 = *(int *)(arg1 + 0x2c8) + -2;
      uVar1 = *(uint *)(arg1 + 0x2cc + (long)(*(int *)(arg1 + 0x2c8) + -1) * 4);
      *(int *)(arg1 + 0x2c8) = iVar3;
      uVar2 = *(uint *)(arg1 + 0x2cc + (long)iVar3 * 4);
      snprintf(acStack_78,0x20,"branch_label%d",(ulong)uVar1);
      snprintf(local_58,0x20,"branch_label%d",(ulong)uVar2);
      snprintf(local_38,0x20,"rep%d",(ulong)*(uint *)(arg1 + 0x2b4));
      output_line(arg1,"SUBC %s.x, %s.x, 1.0;",local_38);
      output_line(arg1,"BRA %s (GT.x);",local_58);
      output_line(arg1,&DAT_005c9a9a /* R:5.367764851996393e-39f */,acStack_78);
      return;
    }
  }
  output_line(arg1,"ENDREP;");
  return;
}

/* ======================================================================
 * get_D3D_register_string_constprop_65  (Ghidra `get_D3D_register_string.constprop.65` @ 0051d7f0)
 * Signature: uint8_t get_D3D_register_string.constprop.65(void)
 * Calls: `failf`, `snprintf`
 * Called by: `arb1_texld`, `emit_ARB1_CALL`, `emit_ARB1_CALLNZ`, `emit_ARB1_DEF`, `emit_ARB1_DEFB`, `emit_ARB1_DEFI`, `emit_ARB1_IF`, `emit_ARB1_IFC`, `emit_ARB1_LABEL`, `emit_ARB1_SINCOS` (+25 more)
 */
char * get_D3D_register_string_constprop_65
                 (long arg1,uint32_t arg2,uint arg3,char *arg4)

{
  uint uVar1;
  char *pcVar2;
  
  switch(arg2) {
  case 0:
    pcVar2 = "r";
    break;
  case 1:
    pcVar2 = "v";
    break;
  case 2:
    pcVar2 = "c";
    break;
  case 3:
    pcVar2 = "a";
    if (*(int *)(arg1 + 0xd0) != 2) {
      pcVar2 = "t";
    }
    break;
  case 4:
    pcVar2 = "oFog";
    if (((arg3 != 1) && (pcVar2 = "oPos", arg3 != 0)) && (pcVar2 = (char *)0x0, arg3 == 2))
    {
      pcVar2 = "oPts";
    }
    goto LAB_0051d820;
  case 5:
    pcVar2 = "oD";
    break;
  case 6:
    pcVar2 = "oT";
    if (*(int *)(arg1 + 0xd0) == 2) {
      uVar1 = 1;
      if (*(byte *)(arg1 + 0xd5) != 0xff) {
        uVar1 = (uint)*(byte *)(arg1 + 0xd5);
      }
      if (0x2ffff < (uVar1 | (uint)*(byte *)(arg1 + 0xd4) << 0x10)) {
        pcVar2 = "o";
      }
    }
    break;
  case 7:
    pcVar2 = "i";
    break;
  case 8:
    pcVar2 = "oC";
    break;
  case 9:
    pcVar2 = "oDepth";
    goto LAB_0051d820;
  case 10:
    pcVar2 = "s";
    break;
  default:
    pcVar2 = "???";
    failf(arg1,"%s","unknown register type");
    goto LAB_0051d820;
  case 0xe:
    pcVar2 = "b";
    break;
  case 0xf:
    pcVar2 = "aL";
    goto LAB_0051d820;
  case 0x11:
    pcVar2 = "vPos";
    if ((arg3 != 0) && (pcVar2 = (char *)0x0, arg3 == 1)) {
      pcVar2 = "vFace";
    }
LAB_0051d820:
    *arg4 = '\0';
    return pcVar2;
  case 0x12:
    pcVar2 = "l";
    break;
  case 0x13:
    pcVar2 = "p";
  }
  snprintf(arg4,0x10,"%u",(ulong)arg3);
  return pcVar2;
}

/* ======================================================================
 * make_GLSL_destarg_assign  (Ghidra `make_GLSL_destarg_assign` @ 0051d9e0)
 * Signature: uint8_t make_GLSL_destarg_assign(void)
 * Calls: `failf`, `get_D3D_register_string_constprop_65`, `snprintf`, `vsnprintf`
 * Called by: `emit_GLSL_ABS`, `emit_GLSL_ADD`, `emit_GLSL_CRS`, `emit_GLSL_DST`, `emit_GLSL_DSX`, `emit_GLSL_DSY`, `emit_GLSL_EXP`, `emit_GLSL_EXPP`, `emit_GLSL_FRC`, `emit_GLSL_LIT` (+27 more)
 */
char * make_GLSL_destarg_assign
                 (uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,
                 uint64_t arg5,uint64_t arg6,uint64_t arg7,uint64_t arg8,
                 long arg9,char *arg10,size_t arg11,char *arg12,uint64_t arg13,
                 uint64_t arg14)

{
  char cVar1;
  char in_AL;
  uint64_t uVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  uint *puVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  char local_1c8 [128];
  char local_148 [40];
  uint32_t local_120;
  uint32_t local_11c;
  uint8_t *local_118;
  uint8_t *local_110;
  uint8_t local_108 [16];
  uint8_t local_f8 [16];
  uint8_t local_e8 [32];
  uint64_t local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  uint64_t local_a8;
  uint64_t local_98;
  uint64_t local_88;
  uint64_t local_78;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  
  if (in_AL != '\0') {
    local_b8 = arg1;
    local_a8 = arg2;
    local_98 = arg3;
    local_88 = arg4;
    local_78 = arg5;
    local_68 = arg6;
    local_58 = arg7;
    local_48 = arg8;
  }
  uVar5 = *(uint *)(arg9 + 0xe8);
  if (uVar5 == 0) {
LAB_0051dce4:
    *arg10 = '\0';
    return arg10;
  }
  pcVar12 = "";
  local_148[0] = '\0';
  local_148[1] = '\0';
  local_148[2] = '\0';
  local_148[3] = '\0';
  local_148[4] = '\0';
  local_148[5] = '\0';
  local_148[6] = '\0';
  local_148[7] = '\0';
  local_148[8] = '\0';
  local_148[9] = '\0';
  local_148[10] = '\0';
  local_148[0xb] = '\0';
  local_148[0xc] = '\0';
  local_148[0xd] = '\0';
  local_148[0xe] = '\0';
  local_148[0xf] = '\0';
  local_148[0x10] = '\0';
  local_148[0x11] = '\0';
  local_148[0x12] = '\0';
  local_148[0x13] = '\0';
  local_148[0x14] = '\0';
  local_148[0x15] = '\0';
  local_148[0x16] = '\0';
  local_148[0x17] = '\0';
  pcVar11 = "";
  local_148[0x18] = '\0';
  local_148[0x19] = '\0';
  local_148[0x1a] = '\0';
  local_148[0x1b] = '\0';
  local_148[0x1c] = '\0';
  local_148[0x1d] = '\0';
  local_148[0x1e] = '\0';
  local_148[0x1f] = '\0';
  local_c8 = arg13;
  local_c0 = arg14;
  if ((*(byte *)(arg9 + 0x100) & 1) != 0) {
    pcVar12 = ", 0.0, 1.0)";
    pcVar11 = "clamp(";
    uVar5 = ((int)uVar5 >> 3 & 1U) + ((int)uVar5 >> 2 & 1U) + (uVar5 & 1) + ((int)uVar5 >> 1 & 1U);
    if (uVar5 != 1) {
      pcVar12 = local_148;
      snprintf(local_148,0x20,", vec%d(0.0), vec%d(1.0))",(ulong)uVar5,(ulong)uVar5);
    }
  }
  if (*(int *)(arg9 + 0x484) != 0) {
    failf(arg9,"%s","predicated destinations unsupported");
    goto LAB_0051dce4;
  }
  local_110 = local_e8;
  local_118 = &stack0x00000008;
  local_120 = 0x20;
  local_11c = 0x30;
  uVar5 = vsnprintf(local_1c8,0x80,arg12,&local_120);
  if (0x7f < uVar5) {
    failf(arg9,"%s","operation string too large");
    *arg10 = '\0';
    return arg10;
  }
  pcVar10 = "";
  uVar5 = *(int *)(arg9 + 0x104) - 1;
  if (uVar5 < 0xf) {
    pcVar10 = *(char **)(CSWTCH_116 + (ulong)uVar5 * 8);
  }
  cVar1 = *pcVar10;
  uVar2 = get_D3D_register_string_constprop_65
                    (arg9,*(uint32_t *)(arg9 + 0x108),*(uint32_t *)(arg9 + 0xe0),
                     local_108);
  if (((*(int *)(arg9 + 0x108) == 6) && (*(int *)(arg9 + 0x488) != 0)) &&
     (puVar8 = *(uint **)(arg9 + 0x420), puVar8 != (uint *)0x0)) {
    uVar5 = *(int *)(arg9 + 0xe0) << 0x10 | 6;
    uVar9 = puVar8[1] << 0x10 | *puVar8;
    if (uVar5 == uVar9) {
LAB_0051de00:
      bVar13 = puVar8[2] == 4;
      goto LAB_0051dd48;
    }
    if (uVar5 < uVar9) goto switchD_0051dd38_switchD;
    do {
      puVar8 = *(uint **)(puVar8 + 8);
      if (puVar8 == (uint *)0x0) break;
      uVar9 = puVar8[1] << 0x10 | *puVar8;
      if (uVar5 == uVar9) goto LAB_0051de00;
    } while (uVar9 <= uVar5);
  }
  else {
switchD_0051dd38_switchD:
    switch(*(int *)(arg9 + 0x108)) {
    case 9:
    case 0xe:
    case 0xf:
      lVar3 = 0;
      goto LAB_0051dc58;
    case 0x11:
      lVar3 = 0;
      if (*(int *)(arg9 + 0xe0) == 1) goto LAB_0051dc58;
      break;
    case 0x13:
      bVar13 = *(int *)(arg9 + 0xd0) == 1;
LAB_0051dd48:
      lVar3 = 0;
      if (bVar13) goto LAB_0051dc58;
    }
  }
  lVar3 = 0;
  if (*(int *)(arg9 + 0xe8) != 0xf) {
    local_f8[0] = 0x2e;
    lVar6 = 2;
    lVar3 = 1;
    if (*(int *)(arg9 + 0xec) != 0) {
      local_f8[1] = 0x78;
      lVar6 = 3;
      lVar3 = 2;
    }
    if (*(int *)(arg9 + 0xf0) != 0) {
      local_f8[lVar3] = 0x79;
      lVar3 = lVar6;
    }
    if (*(int *)(arg9 + 0xf4) != 0) {
      local_f8[lVar3] = 0x7a;
      lVar3 = lVar3 + 1;
    }
    if (*(int *)(arg9 + 0xf8) != 0) {
      local_f8[lVar3] = 0x77;
      lVar3 = lVar3 + 1;
    }
  }
LAB_0051dc58:
  local_f8[lVar3] = 0;
  pcVar4 = "(";
  pcVar7 = ")";
  if (cVar1 == '\0') {
    pcVar4 = "";
    pcVar7 = "";
  }
  snprintf(arg10,arg11,"%s_%s%s%s = %s%s%s%s%s%s;",*(uint64_t *)(arg9 + 0xb0),uVar2,
           local_108,local_f8,pcVar11,pcVar4,local_1c8,pcVar7,pcVar10,pcVar12);
  return arg10;
}

/* ======================================================================
 * emit_GLSL_dotprod  (Ghidra `emit_GLSL_dotprod` @ 0051de10)
 * Signature: uint8_t emit_GLSL_dotprod(void)
 * Calls: `make_GLSL_destarg_assign`, `output_line`, `snprintf`
 * Called by: `emit_GLSL_DP2ADD`, `emit_GLSL_DP3`, `emit_GLSL_DP4`
 */
void emit_GLSL_dotprod(long arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4)

{
  uint uVar1;
  char *pcVar2;
  uint8_t local_b8 [128];
  char local_38 [24];
  
  uVar1 = *(uint *)(arg1 + 0xe8);
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  pcVar2 = "";
  if (((int)uVar1 >> 2 & 1U) + (uVar1 & 1) + ((int)uVar1 >> 1 & 1U) + ((int)uVar1 >> 3 & 1U) != 1) {
    snprintf(local_38,0x10,"vec%d(");
    pcVar2 = ")";
  }
  make_GLSL_destarg_assign
            (arg1,local_b8,0x80,"%sdot(%s, %s)%s%s",local_38,arg2,arg3,arg4,pcVar2);
  output_line(arg1,"%s",local_b8);
  return;
}

/* ======================================================================
 * get_BYTECODE_varname  (Ghidra `get_BYTECODE_varname` @ 0051df10)
 * Signature: uint8_t get_BYTECODE_varname(void)
 * Calls: `get_D3D_register_string_constprop_65`, `snprintf`, `strcpy`
 * Called by: (none)
 */
char * get_BYTECODE_varname(uint32_t *arg1)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  char *__dest;
  uint *puVar4;
  uint *puVar5;
  uint local_68 [16];
  uint8_t local_28 [16];
  
  uVar3 = get_D3D_register_string_constprop_65();
  snprintf((char *)local_68,0x40,"%s%s",uVar3,local_28);
  puVar5 = local_68;
  do {
    puVar4 = puVar5;
    uVar1 = *puVar4 + 0xfefefeff & ~*puVar4;
    uVar2 = uVar1 & 0x80808080;
    puVar5 = puVar4 + 1;
  } while (uVar2 == 0);
  if ((uVar1 & 0x8080) == 0) {
    puVar5 = (uint *)((long)puVar4 + 6);
    uVar2 = uVar2 >> 0x10;
  }
  __dest = (char *)(**(code **)(arg1 + 2))
                             ((long)puVar5 +
                              (-(long)local_68 - (ulong)CARRY1((byte)uVar2,(byte)uVar2)) + -2,
                              *(uint64_t *)(arg1 + 6));
  if (__dest == (char *)0x0) {
    arg1[1] = 1;
    *arg1 = 1;
  }
  else {
    strcpy(__dest,(char *)local_68);
  }
  return __dest;
}

/* ======================================================================
 * get_D3D_varname  (Ghidra `get_D3D_varname` @ 0051dfd0)
 * Signature: uint8_t get_D3D_varname(void)
 * Calls: `get_D3D_register_string_constprop_65`, `snprintf`, `strcpy`
 * Called by: (none)
 */
char * get_D3D_varname(uint32_t *arg1)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  char *__dest;
  uint *puVar4;
  uint *puVar5;
  uint local_68 [16];
  uint8_t local_28 [16];
  
  uVar3 = get_D3D_register_string_constprop_65();
  snprintf((char *)local_68,0x40,"%s%s",uVar3,local_28);
  puVar5 = local_68;
  do {
    puVar4 = puVar5;
    uVar1 = *puVar4 + 0xfefefeff & ~*puVar4;
    uVar2 = uVar1 & 0x80808080;
    puVar5 = puVar4 + 1;
  } while (uVar2 == 0);
  if ((uVar1 & 0x8080) == 0) {
    puVar5 = (uint *)((long)puVar4 + 6);
    uVar2 = uVar2 >> 0x10;
  }
  __dest = (char *)(**(code **)(arg1 + 2))
                             ((long)puVar5 +
                              (-(long)local_68 - (ulong)CARRY1((byte)uVar2,(byte)uVar2)) + -2,
                              *(uint64_t *)(arg1 + 6));
  if (__dest == (char *)0x0) {
    arg1[1] = 1;
    *arg1 = 1;
  }
  else {
    strcpy(__dest,(char *)local_68);
  }
  return __dest;
}

/* ======================================================================
 * make_ARB1_destarg_string_constprop_77  (Ghidra `make_ARB1_destarg_string.constprop.77` @ 0051e090)
 * Signature: uint8_t make_ARB1_destarg_string.constprop.77(void)
 * Calls: `failf`, `get_D3D_register_string_constprop_65`, `snprintf`
 * Called by: `arb1_log_constprop_81`, `arb1_texld`, `emit_ARB1_ABS`, `emit_ARB1_CMP`, `emit_ARB1_DP2ADD_part_40`, `emit_ARB1_DSX`, `emit_ARB1_DSY`, `emit_ARB1_EXP`, `emit_ARB1_EXPP`, `emit_ARB1_FRC` (+15 more)
 */
char * make_ARB1_destarg_string_constprop_77(long arg1,char *arg2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  uint8_t local_48 [16];
  uint8_t local_38 [24];
  
  pcVar9 = "";
  *arg2 = '\0';
  if ((((*(uint *)(arg1 + 0x100) & 1) != 0) && (pcVar9 = ".SAT", *(int *)(arg1 + 0x4b0) == 0))
     && (pcVar9 = "", *(int *)(arg1 + 0xd0) == 1)) {
    pcVar9 = "_SAT";
  }
  pcVar6 = "";
  if (((*(uint *)(arg1 + 0x100) & 2) != 0) && (*(int *)(arg1 + 0x4b0) != 0)) {
    pcVar6 = "H";
  }
  lVar2 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x108),*(uint32_t *)(arg1 + 0xe0),
                     local_48);
  if (lVar2 == 0) {
    failf(arg1,"%s","Unknown destination register type.");
    return arg2;
  }
  if (((*(int *)(arg1 + 0x108) == 6) && (*(int *)(arg1 + 0x488) != 0)) &&
     (puVar4 = *(uint **)(arg1 + 0x420), puVar4 != (uint *)0x0)) {
    uVar7 = *(int *)(arg1 + 0xe0) << 0x10 | 6;
    uVar8 = puVar4[1] << 0x10 | *puVar4;
    if (uVar7 == uVar8) {
LAB_0051e320:
      bVar10 = puVar4[2] == 4;
      goto LAB_0051e229;
    }
    if (uVar7 < uVar8) goto switchD_0051e1f0_switchD;
    do {
      puVar4 = *(uint **)(puVar4 + 8);
      if (puVar4 == (uint *)0x0) break;
      uVar8 = puVar4[1] << 0x10 | *puVar4;
      if (uVar7 == uVar8) goto LAB_0051e320;
    } while (uVar8 <= uVar7);
    goto switchD_0051e1f0_caseD_a;
  }
switchD_0051e1f0_switchD:
  switch(*(int *)(arg1 + 0x108)) {
  case 9:
  case 0xe:
  case 0xf:
    lVar5 = 0;
    break;
  case 0x11:
    lVar5 = 0;
    if (*(int *)(arg1 + 0xe0) != 1) goto switchD_0051e1f0_caseD_a;
    break;
  case 0x13:
    bVar10 = *(int *)(arg1 + 0xd0) == 1;
LAB_0051e229:
    if (bVar10) {
      local_38[0] = 0;
      iVar1 = *(int *)(arg1 + 0x484);
      goto joined_r0x0051e241;
    }
  default:
switchD_0051e1f0_caseD_a:
    lVar5 = 0;
    if (*(int *)(arg1 + 0xe8) != 0xf) {
      local_38[0] = 0x2e;
      lVar3 = 2;
      lVar5 = 1;
      if (*(int *)(arg1 + 0xec) != 0) {
        local_38[1] = 0x78;
        lVar3 = 3;
        lVar5 = 2;
      }
      if (*(int *)(arg1 + 0xf0) != 0) {
        local_38[lVar5] = 0x79;
        lVar5 = lVar3;
      }
      if (*(int *)(arg1 + 0xf4) != 0) {
        local_38[lVar5] = 0x7a;
        lVar5 = lVar5 + 1;
      }
      if (*(int *)(arg1 + 0xf8) != 0) {
        local_38[lVar5] = 0x77;
        lVar5 = lVar5 + 1;
      }
    }
  }
  local_38[lVar5] = 0;
  iVar1 = *(int *)(arg1 + 0x484);
joined_r0x0051e241:
  if (iVar1 == 0) {
    snprintf(arg2,0x40,"%s%s %s%s%s",pcVar6,pcVar9,lVar2,local_48,local_38);
    return arg2;
  }
  failf(arg1,"%s","dest register predication currently unsupported in arb1");
  return arg2;
}

/* ======================================================================
 * get_ARB1_varname  (Ghidra `get_ARB1_varname` @ 0051e330)
 * Signature: uint8_t get_ARB1_varname(void)
 * Calls: `get_D3D_register_string_constprop_65`, `snprintf`, `strcpy`
 * Called by: (none)
 */
char * get_ARB1_varname(uint32_t *arg1)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  char *__dest;
  uint *puVar4;
  uint *puVar5;
  uint local_68 [16];
  uint8_t local_28 [16];
  
  uVar3 = get_D3D_register_string_constprop_65();
  snprintf((char *)local_68,0x40,"%s%s",uVar3,local_28);
  puVar5 = local_68;
  do {
    puVar4 = puVar5;
    uVar1 = *puVar4 + 0xfefefeff & ~*puVar4;
    uVar2 = uVar1 & 0x80808080;
    puVar5 = puVar4 + 1;
  } while (uVar2 == 0);
  if ((uVar1 & 0x8080) == 0) {
    puVar5 = (uint *)((long)puVar4 + 6);
    uVar2 = uVar2 >> 0x10;
  }
  __dest = (char *)(**(code **)(arg1 + 2))
                             ((long)puVar5 +
                              (-(long)local_68 - (ulong)CARRY1((byte)uVar2,(byte)uVar2)) + -2,
                              *(uint64_t *)(arg1 + 6));
  if (__dest == (char *)0x0) {
    arg1[1] = 1;
    *arg1 = 1;
  }
  else {
    strcpy(__dest,(char *)local_68);
  }
  return __dest;
}

/* ======================================================================
 * emit_GLSL_LOOP  (Ghidra `emit_GLSL_LOOP` @ 0051e3f0)
 * Signature: uint8_t emit_GLSL_LOOP(void)
 * Calls: `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_GLSL_LOOP(long arg1)

{
  uint64_t uVar1;
  char acStack_58 [64];
  uint8_t local_18 [16];
  
  uVar1 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x174),*(uint32_t *)(arg1 + 0x158),
                     local_18);
  snprintf(acStack_58,0x40,"%s_%s%s",*(uint64_t *)(arg1 + 0xb0),uVar1,local_18);
  output_line(arg1,"{");
  *(int *)(arg1 + 0xac) = *(int *)(arg1 + 0xac) + 1;
  output_line(arg1,"const int aLend = %s.x + %s.y;",acStack_58,acStack_58);
  output_line(arg1,"for (int aL = %s.y; aL < aLend; aL += %s.z) {",acStack_58,acStack_58);
  *(int *)(arg1 + 0xac) = *(int *)(arg1 + 0xac) + 1;
  return;
}

/* ======================================================================
 * emit_GLSL_TEXKILL  (Ghidra `emit_GLSL_TEXKILL` @ 0051e480)
 * Signature: uint8_t emit_GLSL_TEXKILL(void)
 * Calls: `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_GLSL_TEXKILL(long arg1)

{
  uint64_t uVar1;
  char acStack_58 [64];
  uint8_t local_18 [16];
  
  uVar1 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x108),*(uint32_t *)(arg1 + 0xe0),
                     local_18);
  snprintf(acStack_58,0x40,"%s_%s%s",*(uint64_t *)(arg1 + 0xb0),uVar1,local_18);
  output_line(arg1,"if (any(lessThan(%s.xyz, vec3(0.0)))) discard;",acStack_58);
  return;
}

/* ======================================================================
 * get_GLSL_varname  (Ghidra `get_GLSL_varname` @ 0051e4e0)
 * Signature: uint8_t get_GLSL_varname(void)
 * Calls: `get_D3D_register_string_constprop_65`, `snprintf`, `strcpy`
 * Called by: (none)
 */
char * get_GLSL_varname(uint32_t *arg1)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  char *__dest;
  uint *puVar4;
  uint *puVar5;
  uint local_68 [16];
  uint8_t local_28 [16];
  
  uVar3 = get_D3D_register_string_constprop_65();
  snprintf((char *)local_68,0x40,"%s_%s%s",*(uint64_t *)(arg1 + 0x2c),uVar3,local_28);
  puVar5 = local_68;
  do {
    puVar4 = puVar5;
    uVar1 = *puVar4 + 0xfefefeff & ~*puVar4;
    uVar2 = uVar1 & 0x80808080;
    puVar5 = puVar4 + 1;
  } while (uVar2 == 0);
  if ((uVar1 & 0x8080) == 0) {
    puVar5 = (uint *)((long)puVar4 + 6);
    uVar2 = uVar2 >> 0x10;
  }
  __dest = (char *)(**(code **)(arg1 + 2))
                             ((long)puVar5 +
                              (-(long)local_68 - (ulong)CARRY1((byte)uVar2,(byte)uVar2)) + -2,
                              *(uint64_t *)(arg1 + 6));
  if (__dest == (char *)0x0) {
    arg1[1] = 1;
    *arg1 = 1;
    return (char *)0x0;
  }
  strcpy(__dest,(char *)local_68);
  return __dest;
}

/* ======================================================================
 * emit_ARB1_TEXKILL  (Ghidra `emit_ARB1_TEXKILL` @ 0051e5a0)
 * Signature: uint8_t emit_ARB1_TEXKILL(void)
 * Calls: `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_TEXKILL(long arg1)

{
  uint64_t uVar1;
  char acStack_58 [64];
  uint8_t local_18 [16];
  
  uVar1 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x108),*(uint32_t *)(arg1 + 0xe0),
                     local_18);
  snprintf(acStack_58,0x40,"%s%s",uVar1,local_18);
  output_line(arg1,"KIL %s.xyzx;",acStack_58);
  return;
}

/* ======================================================================
 * emit_ARB1_LABEL  (Ghidra `emit_ARB1_LABEL` @ 0051e600)
 * Signature: uint8_t emit_ARB1_LABEL(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_LABEL(long arg1)

{
  uint *puVar1;
  uint uVar2;
  uint64_t uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  char acStack_58 [64];
  uint8_t local_18 [16];
  
  if (*(int *)(arg1 + 0x4a8) == 0) {
    return;
  }
  puVar1 = *(uint **)(arg1 + 0x378);
  iVar5 = *(int *)(arg1 + 0x118);
  if (puVar1 == (uint *)0x0) {
LAB_0051e6a0:
    lVar4 = *(long *)(arg1 + 0x88);
    if (lVar4 == 0) {
      lVar4 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
      *(long *)(arg1 + 0x88) = lVar4;
      iVar5 = *(int *)(arg1 + 0x118);
      if (lVar4 == 0) goto LAB_0051e659;
    }
    *(long *)(arg1 + 0x50) = lVar4;
  }
  else {
    uVar6 = iVar5 << 0x10 | 0x12;
    uVar2 = puVar1[1] << 0x10 | *puVar1;
    while (uVar6 != uVar2) {
      if ((uVar6 < uVar2) || (puVar1 = *(uint **)(puVar1 + 8), puVar1 == (uint *)0x0))
      goto LAB_0051e6a0;
      uVar2 = puVar1[1] << 0x10 | *puVar1;
    }
  }
LAB_0051e659:
  uVar3 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x134),iVar5,local_18);
  snprintf(acStack_58,0x40,"%s%s",uVar3,local_18);
  output_line(arg1,&DAT_005c9a9a /* R:5.367764851996393e-39f */,acStack_58);
  return;
}

/* ======================================================================
 * emit_ARB1_IFC  (Ghidra `emit_ARB1_IFC` @ 0051e6f0)
 * Signature: uint8_t emit_ARB1_IFC(void)
 * Calls: `failf`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_IFC(long arg1)

{
  int iVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t uVar5;
  char acStack_f8 [64];
  char local_b8 [64];
  char local_78 [64];
  char local_38 [40];
  
  if (*(int *)(arg1 + 0x4a8) == 0) {
    failf(arg1,"branching unsupported in %s profile",**(uint64_t **)(arg1 + 200));
    return;
  }
  if (6 < *(uint *)(arg1 + 0x2a8)) {
    failf(arg1,"%s","unknown comparison control");
    return;
  }
  uVar3 = *(uint64_t *)(comps_7227 + (ulong)*(uint *)(arg1 + 0x2a8) * 8);
  uVar5 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x134),*(uint32_t *)(arg1 + 0x118),
                     local_38);
  snprintf(acStack_f8,0x40,"%s%s",uVar5,local_38);
  uVar5 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x174),*(uint32_t *)(arg1 + 0x158),
                     local_38);
  snprintf(local_b8,0x40,"%s%s",uVar5,local_38);
  iVar1 = *(int *)(arg1 + 0x2c0);
  iVar4 = iVar1 + 1;
  *(int *)(arg1 + 0x2c0) = iVar4;
  if (iVar1 < *(int *)(arg1 + 0x2c4)) {
    iVar4 = *(int *)(arg1 + 0x2c4);
  }
  *(int *)(arg1 + 0x2c4) = iVar4;
  snprintf(local_78,0x40,"scratch%d");
  output_line(arg1,"%s %s.x, %s, %s;",uVar3,local_78,acStack_f8,local_b8);
  if ((*(int *)(arg1 + 0x4b0) == 0) && (*(int *)(arg1 + 0xd0) != 1)) {
    uVar2 = *(uint *)(arg1 + 0x34c);
    *(uint *)(arg1 + 0x34c) = uVar2 + 1;
    snprintf(local_38,0x20,"branch_label%d",(ulong)uVar2);
    iVar1 = *(int *)(arg1 + 0x2c8);
    *(uint *)(arg1 + 0x2cc + (long)iVar1 * 4) = uVar2;
    *(int *)(arg1 + 0x2c8) = iVar1 + 1;
    output_line(arg1,"BRA %s (EQ.x);",local_38);
    return;
  }
  output_line(arg1,"IF EQ.x;");
  return;
}

/* ======================================================================
 * emit_ARB1_IF  (Ghidra `emit_ARB1_IF` @ 0051e8d0)
 * Signature: uint8_t emit_ARB1_IF(void)
 * Calls: `failf`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_IF(long arg1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  char acStack_b8 [64];
  char local_78 [64];
  char local_38 [40];
  
  if (*(int *)(arg1 + 0x4a8) == 0) {
    failf(arg1,"branching unsupported in %s profile",**(uint64_t **)(arg1 + 200));
    return;
  }
  iVar1 = *(int *)(arg1 + 0x2c0);
  iVar3 = iVar1 + 1;
  *(int *)(arg1 + 0x2c0) = iVar3;
  if (iVar1 < *(int *)(arg1 + 0x2c4)) {
    iVar3 = *(int *)(arg1 + 0x2c4);
  }
  *(int *)(arg1 + 0x2c4) = iVar3;
  snprintf(acStack_b8,0x40,"scratch%d");
  uVar4 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x134),*(uint32_t *)(arg1 + 0x118),
                     local_38);
  snprintf(local_78,0x40,"%s%s",uVar4,local_38);
  output_line(arg1,"MOVC %s.x, %s;",acStack_b8,local_78);
  if ((*(int *)(arg1 + 0x4b0) == 0) && (*(int *)(arg1 + 0xd0) != 1)) {
    uVar2 = *(uint *)(arg1 + 0x34c);
    *(uint *)(arg1 + 0x34c) = uVar2 + 1;
    snprintf(local_38,0x20,"branch_label%d",(ulong)uVar2);
    iVar1 = *(int *)(arg1 + 0x2c8);
    *(uint *)(arg1 + 0x2cc + (long)iVar1 * 4) = uVar2;
    *(int *)(arg1 + 0x2c8) = iVar1 + 1;
    output_line(arg1,"BRA %s (EQ.x);",local_38);
    return;
  }
  output_line(arg1,"IF EQ.x;");
  return;
}

/* ======================================================================
 * make_ARB1_srcarg_string_in_buf_constprop_62  (Ghidra `make_ARB1_srcarg_string_in_buf.constprop.62` @ 0051ea30)
 * Signature: uint8_t make_ARB1_srcarg_string_in_buf.constprop.62(void)
 * Calls: `failf`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: `arb1_log_constprop_81`, `arb1_texld`, `emit_ARB1_ABS`, `emit_ARB1_CMP`, `emit_ARB1_DP2ADD_part_40`, `emit_ARB1_DSX`, `emit_ARB1_DSY`, `emit_ARB1_EXP`, `emit_ARB1_EXPP`, `emit_ARB1_FRC` (+15 more)
 */
char * make_ARB1_srcarg_string_in_buf_constprop_62(long arg1,long arg2,char *arg3)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint64_t *puVar7;
  uint *puVar8;
  long lVar9;
  char *pcVar10;
  char *__s;
  uint uVar11;
  bool bVar12;
  uint8_t local_1b8 [56];
  char acStack_180 [16];
  uint64_t uStack_170;
  uint8_t auStack_168 [56];
  char acStack_130 [16];
  uint64_t uStack_120;
  uint8_t auStack_118 [72];
  char *local_d0;
  uint local_c4;
  char *local_c0;
  char *local_b8;
  ulong *local_b0;
  char *local_a8;
  ulong *local_a0;
  ulong local_98 [6];
  uint8_t local_68 [16];
  uint8_t local_58 [4];
  uint8_t uStack_54;
  uint32_t local_48;
  
  puVar7 = (uint64_t *)auStack_118;
  local_98[4] = 0;
  local_98[5] = 0;
  if (*(int *)(arg2 + 0x28) == 0) {
    local_a0 = local_98 + 4;
    uStack_120 = 0x51ebd9;
    local_a8 = (char *)get_D3D_register_string_constprop_65
                                 (arg1,*(uint32_t *)(arg2 + 0x24),
                                  *(uint32_t *)(arg2 + 8),local_a0);
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_48 = 0;
    if (*(int *)(arg2 + 0x28) != 0) goto LAB_0051eaa2;
    local_b0 = local_98;
    __s = "";
    local_c0 = "";
    local_b8 = "";
  }
  else {
    local_a0 = local_98 + 4;
LAB_0051eaa2:
    local_48 = 0;
    local_98[3] = 0;
    local_98[2] = 0;
    local_98[1] = 0;
    local_98[0] = 0;
    puVar7 = (uint64_t *)auStack_168;
    uStack_170 = 0x51eabd;
    uVar3 = get_D3D_register_string_constprop_65
                      (arg1,*(uint32_t *)(arg2 + 0x2c),*(uint32_t *)(arg2 + 0x30),
                       local_68);
    __s = acStack_130;
    uStack_170 = 0x51eadc;
    snprintf(__s,0x40,"%s%s",uVar3,local_68);
    uVar5 = local_48 >> 0x10;
    cVar1 = *(char *)((long)&swizzle_channels + (long)*(int *)(arg2 + 0x34));
    local_48._0_2_ = CONCAT11(cVar1,0x2e);
    local_48 = CONCAT22((short)uVar5,(uint16_t)local_48) & 0xff00ffff;
    if (*(int *)(arg1 + 0x4a8) == 0) {
      if (*(int *)(arg2 + 0x34) != *(int *)(arg1 + 0x354)) {
        uStack_170 = 0x51eb25;
        output_line(arg1,"ARL %s.x, addr%d.%c;",__s,*(uint32_t *)(arg2 + 0x30),(int)cVar1);
        *(uint32_t *)(arg1 + 0x354) = *(uint32_t *)(arg2 + 0x34);
      }
      local_48._0_2_ = CONCAT11(0x78,(uint8_t)local_48);
    }
    if (*(int *)(arg2 + 0x24) == 1) {
      local_b0 = local_98;
      local_c0 = "]";
      local_b8 = "[";
      local_a8 = "vertex.attrib";
    }
    else {
      puVar7 = (uint64_t *)local_1b8;
      uVar5 = *(uint *)(*(long *)(arg2 + 0x38) + 4);
      local_a8 = acStack_180;
      uVar11 = *(int *)(arg2 + 8) - uVar5;
      snprintf(local_a8,0x40,"c_array_%d_%d",(ulong)uVar5,
               (ulong)*(uint *)(*(long *)(arg2 + 0x38) + 8));
      if (uVar11 == 0) {
        local_b0 = local_98;
        local_c0 = "]";
        local_b8 = "[";
        puVar7 = (uint64_t *)local_1b8;
      }
      else {
        local_b0 = local_98;
        snprintf((char *)local_b0,0x20," + %d",(ulong)uVar11);
        local_c0 = "]";
        local_b8 = "[";
      }
    }
  }
  puVar7[3] = local_c0;
  puVar7[2] = local_b0;
  puVar7[1] = &local_48;
  *puVar7 = __s;
  puVar7[-1] = 0x51ec80;
  snprintf(arg3,0x40,"%s%s%s%s%s%s%s",local_a8,local_a0,local_b8);
  switch(*(int *)(arg2 + 0x20)) {
  default:
    pcVar6 = "";
    pcVar10 = "";
    break;
  case 1:
    pcVar6 = "";
    pcVar10 = "-";
    break;
  case 2:
    local_d0 = "";
    goto LAB_0051f116;
  case 3:
    local_d0 = "-";
LAB_0051f116:
    puVar7[-1] = 0x51f131;
    failf(arg1,"%s","SRCMOD_BIAS currently unsupported in arb1");
    pcVar6 = "_bias";
    pcVar10 = local_d0;
    break;
  case 4:
    local_d0 = "";
    goto LAB_0051f0ce;
  case 5:
    local_d0 = "-";
LAB_0051f0ce:
    puVar7[-1] = 0x51f0e9;
    failf(arg1,"%s","SRCMOD_SIGN currently unsupported in arb1");
    pcVar6 = "_bx2";
    pcVar10 = local_d0;
    break;
  case 6:
    puVar7[-1] = 0x51f044;
    failf(arg1,"%s","SRCMOD_COMPLEMENT currently unsupported in arb1");
    pcVar6 = "";
    pcVar10 = "1-";
    break;
  case 7:
    local_d0 = "";
    goto LAB_0051eff6;
  case 8:
    local_d0 = "-";
LAB_0051eff6:
    puVar7[-1] = 0x51f011;
    failf(arg1,"%s","SRCMOD_X2 currently unsupported in arb1");
    pcVar6 = "_x2";
    pcVar10 = local_d0;
    break;
  case 9:
    puVar7[-1] = 0x51efdc;
    failf(arg1,"%s","SRCMOD_DZ currently unsupported in arb1");
    pcVar6 = "_dz";
    pcVar10 = "";
    break;
  case 10:
    puVar7[-1] = 0x51f07c;
    failf(arg1,"%s","SRCMOD_DW currently unsupported in arb1");
    pcVar6 = "_dw";
    pcVar10 = "";
    break;
  case 0xb:
    pcVar10 = "";
    goto LAB_0051ef9e;
  case 0xc:
    pcVar10 = "-";
LAB_0051ef9e:
    if (*(int *)(arg1 + 0x4a8) == 0) {
      iVar4 = *(int *)(arg1 + 0x2c0);
      local_a8 = (char *)((ulong)((long)puVar7 + -9) & 0xfffffffffffffff0);
      iVar2 = iVar4 + 1;
      *(int *)(arg1 + 0x2c0) = iVar2;
      if (iVar4 < *(int *)(arg1 + 0x2c4)) {
        iVar2 = *(int *)(arg1 + 0x2c4);
      }
      *(int *)(arg1 + 0x2c4) = iVar2;
      puVar7[-0xb] = 0x51f20b;
      local_d0 = pcVar10;
      snprintf(local_a8,0x40,"scratch%d");
      local_98[4] = local_98[4] & 0xffffffffffffff00;
      local_98[0] = local_98[0] & 0xffffffffffffff00;
      local_48 = local_48 & 0xffffff00;
      puVar7[-0xb] = 0x51f233;
      output_line(arg1,"ABS %s, %s;",local_a8,arg3);
      pcVar6 = "";
      local_c0 = "";
      local_b8 = "";
      puVar7 = puVar7 + -10;
      pcVar10 = local_d0;
      __s = pcVar6;
    }
    else {
      pcVar6 = "|";
      pcVar10 = "-|";
      if (*(int *)(arg2 + 0x20) != 0xc) {
        pcVar10 = "|";
      }
    }
    break;
  case 0xd:
    puVar7[-1] = 0x51f0b4;
    failf(arg1,"%s","SRCMOD_NOT currently unsupported in arb1");
    pcVar6 = "";
    pcVar10 = "!";
  }
  if (*(int *)(arg1 + 0x4b0) != 0) {
    iVar2 = *(int *)(arg2 + 0x24);
    iVar4 = *(int *)(arg2 + 8);
    if (iVar2 != 0x11) goto LAB_0051ecae;
    if (iVar4 == 1) {
      local_58[0] = 0x2e;
      local_58[1] = 0x78;
      lVar9 = 2;
      goto LAB_0051ed60;
    }
LAB_0051ee26:
    lVar9 = 0;
    if (iVar4 == 1) goto LAB_0051ed60;
    goto LAB_0051ece7;
  }
  iVar4 = *(int *)(arg2 + 8);
  iVar2 = *(int *)(arg2 + 0x24);
LAB_0051ecae:
  if (iVar2 == 6) {
    if ((*(int *)(arg1 + 0x488) == 0) ||
       (puVar8 = *(uint **)(arg1 + 0x420), puVar8 == (uint *)0x0)) goto switchD_0051eeb0_caseD_a;
    uVar5 = iVar4 << 0x10 | 6;
    do {
      uVar11 = puVar8[1] << 0x10 | *puVar8;
      if (uVar5 == uVar11) {
        bVar12 = puVar8[2] == 4;
        goto LAB_0051eec8;
      }
      if (uVar5 < uVar11) goto switchD_0051eeb0_caseD_a;
      puVar8 = *(uint **)(puVar8 + 8);
    } while (puVar8 != (uint *)0x0);
    goto LAB_0051ece7;
  }
  switch(iVar2) {
  case 9:
  case 0xe:
  case 0xf:
    goto switchD_0051eeb0_caseD_9;
  default:
switchD_0051eeb0_caseD_a:
    break;
  case 0x11:
    goto LAB_0051ee26;
  case 0x13:
    bVar12 = *(int *)(arg1 + 0xd0) == 1;
LAB_0051eec8:
    lVar9 = 0;
    if (bVar12) goto LAB_0051ed60;
  }
LAB_0051ece7:
  lVar9 = 5;
  uVar5 = *(uint *)(arg2 + 0xc);
  if (uVar5 == 0xe4) {
switchD_0051eeb0_caseD_9:
    lVar9 = 0;
  }
  else {
    local_58[0] = 0x2e;
    if ((((((int)uVar5 >> 2 ^ uVar5) & 3) == 0) &&
        (local_c4 = (int)uVar5 >> 4, ((local_c4 ^ (int)uVar5 >> 2) & 3) == 0)) &&
       ((((int)uVar5 >> 6 ^ local_c4) & 3) == 0)) {
      lVar9 = 2;
      local_58[1] = *(uint8_t *)((long)&swizzle_channels + (long)*(int *)(arg2 + 0x10));
    }
    else {
      local_58[1] = *(uint8_t *)((long)&swizzle_channels + (long)*(int *)(arg2 + 0x10));
      local_58[2] = *(uint8_t *)((long)&swizzle_channels + (long)*(int *)(arg2 + 0x14));
      local_58[3] = *(uint8_t *)((long)&swizzle_channels + (long)*(int *)(arg2 + 0x18));
      uStack_54 = *(uint8_t *)((long)&swizzle_channels + (long)*(int *)(arg2 + 0x1c));
    }
  }
LAB_0051ed60:
  puVar7[6] = pcVar6;
  puVar7[5] = local_58;
  local_58[lVar9] = 0;
  puVar7[3] = local_b0;
  *puVar7 = local_b8;
  puVar7[4] = local_c0;
  puVar7[2] = &local_48;
  puVar7[1] = __s;
  puVar7[-1] = 0x51edc5;
  snprintf(arg3,0x40,"%s%s%s%s%s%s%s%s%s%s",pcVar10,local_a8,local_a0);
  return arg3;
}

/* ======================================================================
 * emit_ARB1_REP  (Ghidra `emit_ARB1_REP` @ 0051f270)
 * Signature: uint8_t emit_ARB1_REP(void)
 * Calls: `failf`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_REP(long arg1)

{
  uint uVar1;
  int iVar2;
  uint8_t auStack_b8 [64];
  char local_78 [32];
  char local_58 [32];
  char local_38 [32];
  
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,auStack_b8);
  if (*(int *)(arg1 + 0x4b0) == 0) {
    if (*(int *)(arg1 + 0x4a8) == 0) {
      failf(arg1,"%s","branching unsupported in this profile");
      return;
    }
    if (*(int *)(arg1 + 0xd0) != 1) {
      uVar1 = *(uint *)(arg1 + 0x34c);
      *(uint *)(arg1 + 0x34c) = uVar1 + 2;
      snprintf(local_78,0x20,"branch_label%d",(ulong)(uVar1 + 1));
      snprintf(local_58,0x20,"branch_label%d",(ulong)uVar1);
      iVar2 = *(int *)(arg1 + 0x2c8);
      *(uint *)(arg1 + 0x2cc + (long)iVar2 * 4) = uVar1;
      *(uint *)(arg1 + 0x2cc + (long)(iVar2 + 1) * 4) = uVar1 + 1;
      *(int *)(arg1 + 0x2c8) = iVar2 + 2;
      snprintf(local_38,0x20,"rep%d",(ulong)*(uint *)(arg1 + 0x2b4));
      output_line(arg1,"MOVC %s.x, %s;",local_38,auStack_b8);
      output_line(arg1,"BRA %s (LE.x);",local_78);
      output_line(arg1,&DAT_005c9a9a /* R:5.367764851996393e-39f */,local_58);
      return;
    }
  }
  output_line(arg1,"REP %s;",auStack_b8);
  return;
}

/* ======================================================================
 * emit_ARB1_CALL  (Ghidra `emit_ARB1_CALL` @ 0051f3f0)
 * Signature: uint8_t emit_ARB1_CALL(void)
 * Calls: `failf`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_CALL(long arg1)

{
  uint64_t uVar1;
  char acStack_58 [64];
  uint8_t local_18 [16];
  
  if (*(int *)(arg1 + 0x4a8) != 0) {
    uVar1 = get_D3D_register_string_constprop_65
                      (arg1,*(uint32_t *)(arg1 + 0x134),*(uint32_t *)(arg1 + 0x118),
                       local_18);
    snprintf(acStack_58,0x40,"%s%s",uVar1,local_18);
    output_line(arg1,"CAL %s;",acStack_58);
    return;
  }
  failf(arg1,"branching unsupported in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_CALLNZ  (Ghidra `emit_ARB1_CALLNZ` @ 0051f470)
 * Signature: uint8_t emit_ARB1_CALLNZ(void)
 * Calls: `failf`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_CALLNZ(long arg1)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  char acStack_d8 [64];
  char local_98 [64];
  char local_58 [64];
  uint8_t local_18 [16];
  
  if (*(int *)(arg1 + 0x4a8) != 0) {
    uVar3 = get_D3D_register_string_constprop_65
                      (arg1,*(uint32_t *)(arg1 + 0x134),*(uint32_t *)(arg1 + 0x118),
                       local_18);
    snprintf(acStack_d8,0x40,"%s%s",uVar3,local_18);
    uVar3 = get_D3D_register_string_constprop_65
                      (arg1,*(uint32_t *)(arg1 + 0x174),*(uint32_t *)(arg1 + 0x158),
                       local_18);
    snprintf(local_58,0x40,"%s%s",uVar3,local_18);
    iVar1 = *(int *)(arg1 + 0x2c0);
    iVar2 = iVar1 + 1;
    *(int *)(arg1 + 0x2c0) = iVar2;
    if (iVar1 < *(int *)(arg1 + 0x2c4)) {
      iVar2 = *(int *)(arg1 + 0x2c4);
    }
    *(int *)(arg1 + 0x2c4) = iVar2;
    snprintf(local_98,0x40,"scratch%d");
    output_line(arg1,"MOVC %s, %s;",local_98,local_58);
    output_line(arg1,"CAL %s (NE.x);",acStack_d8);
    return;
  }
  failf(arg1,"branching unsupported in %s profile",**(uint64_t **)(arg1 + 200));
  return;
}

/* ======================================================================
 * emit_ARB1_dest_modifiers  (Ghidra `emit_ARB1_dest_modifiers` @ 0051f590)
 * Signature: uint8_t emit_ARB1_dest_modifiers(void)
 * Calls: `get_D3D_register_string_constprop_65`, `make_ARB1_destarg_string_constprop_77`, `output_line`, `snprintf`
 * Called by: `arb1_log_constprop_81`, `emit_ARB1_ABS`, `emit_ARB1_CMP`, `emit_ARB1_DP2ADD_part_40`, `emit_ARB1_DSX`, `emit_ARB1_DSY`, `emit_ARB1_EXP`, `emit_ARB1_EXPP`, `emit_ARB1_FRC`, `emit_ARB1_LIT` (+13 more)
 */
void emit_ARB1_dest_modifiers(long arg1)

{
  long lVar1;
  uint uVar2;
  uint64_t uVar3;
  uint8_t auStack_a8 [64];
  char local_68 [64];
  uint8_t local_28 [24];
  
  if (*(int *)(arg1 + 0x104) != 0) {
    make_ARB1_destarg_string_constprop_77(arg1,auStack_a8);
    uVar2 = *(int *)(arg1 + 0x104) - 1;
    if ((uVar2 < 0xf) && (lVar1 = *(long *)(CSWTCH_103 + (ulong)uVar2 * 8), lVar1 != 0)) {
      uVar3 = get_D3D_register_string_constprop_65
                        (arg1,*(uint32_t *)(arg1 + 0x108),*(uint32_t *)(arg1 + 0xe0),
                         local_28);
      snprintf(local_68,0x40,"%s%s",uVar3,local_28);
      output_line(arg1,"MUL%s, %s, %s;",auStack_a8,local_68,lVar1);
    }
  }
  if ((((*(byte *)(arg1 + 0x100) & 1) != 0) && (*(int *)(arg1 + 0x4b0) == 0)) &&
     (*(int *)(arg1 + 0xd0) != 1)) {
    uVar3 = get_D3D_register_string_constprop_65
                      (arg1,*(uint32_t *)(arg1 + 0x108),*(uint32_t *)(arg1 + 0xe0),
                       local_28);
    snprintf(local_68,0x40,"%s%s",uVar3,local_28);
    make_ARB1_destarg_string_constprop_77(arg1,auStack_a8);
    output_line(arg1,"MIN%s, %s, 1.0;",auStack_a8,local_68);
    output_line(arg1,"MAX%s, %s, 0.0;",auStack_a8,local_68);
  }
  return;
}

/* ======================================================================
 * emit_ARB1_opcode_dsss  (Ghidra `emit_ARB1_opcode_dsss` @ 0051f6e0)
 * Signature: uint8_t emit_ARB1_opcode_dsss(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`
 * Called by: `emit_ARB1_DP2ADD`, `emit_ARB1_LRP`, `emit_ARB1_MAD`
 */
void emit_ARB1_opcode_dsss(long arg1,uint64_t arg2)

{
  uint8_t local_118 [64];
  uint8_t local_d8 [64];
  uint8_t local_98 [64];
  uint8_t local_58 [64];
  
  make_ARB1_destarg_string_constprop_77(arg1,local_118);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_d8);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x150,local_98);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 400,local_58);
  output_line(arg1,"%s%s, %s, %s, %s;",arg2,local_118,local_d8,local_98,local_58);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_MAD  (Ghidra `emit_ARB1_MAD` @ 0051f7a0)
 * Signature: uint8_t emit_ARB1_MAD(void)
 * Calls: `emit_ARB1_opcode_dsss`
 * Called by: (none)
 */
void emit_ARB1_MAD(uint64_t arg1)

{
  emit_ARB1_opcode_dsss(arg1,&DAT_005c9e9d /* R:6.26823924517152e-39f */);
  return;
}

/* ======================================================================
 * emit_ARB1_DP2ADD_part_40  (Ghidra `emit_ARB1_DP2ADD.part.40` @ 0051f7b0)
 * Signature: uint8_t emit_ARB1_DP2ADD.part.40(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`, `snprintf`
 * Called by: `emit_ARB1_DP2ADD`
 */
void emit_ARB1_DP2ADD_part_40(long arg1)

{
  int iVar1;
  int iVar2;
  uint8_t auStack_148 [64];
  uint8_t local_108 [64];
  uint8_t local_c8 [64];
  uint8_t local_88 [64];
  char local_48 [64];
  
  make_ARB1_destarg_string_constprop_77(arg1,auStack_148);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_108);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x150,local_c8);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 400,local_88);
  iVar1 = *(int *)(arg1 + 0x2c0);
  iVar2 = iVar1 + 1;
  *(int *)(arg1 + 0x2c0) = iVar2;
  if (iVar1 < *(int *)(arg1 + 0x2c4)) {
    iVar2 = *(int *)(arg1 + 0x2c4);
  }
  *(int *)(arg1 + 0x2c4) = iVar2;
  snprintf(local_48,0x40,"scratch%d");
  output_line(arg1,"MUL %s, %s, %s;",local_48,local_108,local_c8);
  output_line(arg1,"ADD %s, %s.x, %s.y;",local_48,local_48);
  output_line(arg1,"ADD%s, %s.x, %s;",auStack_148,local_48,local_88);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_DP2ADD  (Ghidra `emit_ARB1_DP2ADD` @ 0051f8c0)
 * Signature: uint8_t emit_ARB1_DP2ADD(void)
 * Calls: `emit_ARB1_DP2ADD_part_40`, `emit_ARB1_opcode_dsss`
 * Called by: (none)
 */
void emit_ARB1_DP2ADD(long arg1)

{
  if (*(int *)(arg1 + 0x4b0) == 0) {
    emit_ARB1_DP2ADD_part_40();
    return;
  }
  emit_ARB1_opcode_dsss(arg1,&DAT_005c9ed6 /* R:"DP2A" */);
  return;
}

/* ======================================================================
 * emit_ARB1_CMP  (Ghidra `emit_ARB1_CMP` @ 0051f8e0)
 * Signature: uint8_t emit_ARB1_CMP(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`
 * Called by: (none)
 */
void emit_ARB1_CMP(long arg1)

{
  uint8_t auStack_108 [64];
  uint8_t local_c8 [64];
  uint8_t local_88 [64];
  uint8_t local_48 [64];
  
  make_ARB1_destarg_string_constprop_77(arg1,auStack_108);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_c8);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x150,local_88);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 400,local_48);
  output_line(arg1,"CMP%s, %s, %s, %s;",auStack_108,local_c8,local_48,local_88);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_SINCOS  (Ghidra `emit_ARB1_SINCOS` @ 0051f970)
 * Signature: uint8_t emit_ARB1_SINCOS(void)
 * Calls: `emit_ARB1_dest_modifiers`, `get_D3D_register_string_constprop_65`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_SINCOS(int *arg1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint64_t uVar4;
  bool bVar5;
  char acStack_e8 [64];
  char local_a8 [64];
  char local_68 [64];
  uint8_t local_28 [16];
  
  iVar1 = arg1[0x3a];
  if ((arg1[0x34] == 1) || (arg1[300] != 0)) {
    make_ARB1_destarg_string_constprop_77(arg1,acStack_e8);
    make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x44,local_a8);
    if (iVar1 == 1) {
      output_line(arg1,"COS%s, %s;",acStack_e8,local_a8);
    }
    else if (iVar1 == 2) {
      output_line(arg1,"SIN%s, %s;",acStack_e8,local_a8);
    }
    else if (iVar1 == 3) {
      output_line(arg1,"SCS%s, %s;",acStack_e8,local_a8);
    }
    goto LAB_0051fa82;
  }
  if (arg1[0x12a] != 0) {
    uVar4 = get_D3D_register_string_constprop_65(arg1,arg1[0x42],arg1[0x38],local_28);
    snprintf(local_a8,0x40,"%s%s",uVar4,local_28);
    make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x44,acStack_e8);
    if (iVar1 == 1) {
      output_line(arg1,"COS %s.x, %s;",local_a8,acStack_e8);
    }
    else if (iVar1 == 2) {
      output_line(arg1,"SIN %s.y, %s;",local_a8,acStack_e8);
    }
    else if (iVar1 == 3) {
      output_line(arg1,"SIN %s.x, %s;",local_a8,acStack_e8);
      output_line(arg1,"COS %s.y, %s;",local_a8,acStack_e8);
    }
    goto LAB_0051fa82;
  }
  uVar4 = get_D3D_register_string_constprop_65(arg1,arg1[0x42],arg1[0x38],local_28);
  snprintf(acStack_e8,0x40,"%s%s",uVar4,local_28);
  uVar4 = get_D3D_register_string_constprop_65(arg1,arg1[0x4d],arg1[0x46],local_28);
  snprintf(local_a8,0x40,"%s%s",uVar4,local_28);
  if (iVar1 == 1) {
    bVar5 = true;
LAB_0051fb4e:
    bVar2 = false;
  }
  else {
    bVar5 = iVar1 == 3;
    if ((iVar1 != 2) && (iVar1 != 3)) {
      if (!bVar5) goto LAB_0051fa82;
      goto LAB_0051fb4e;
    }
    bVar2 = true;
  }
  iVar1 = arg1[0xb0];
  iVar3 = iVar1 + 1;
  arg1[0xb0] = iVar3;
  if (iVar1 < arg1[0xb1]) {
    iVar3 = arg1[0xb1];
  }
  arg1[0xb1] = iVar3;
  snprintf(local_68,0x40,"scratch%d");
  if (bVar5) {
    output_line(arg1,"ABS %s.x, %s.x;",acStack_e8,local_a8);
    output_line(arg1,"MUL %s.x, %s.x, -0.40528473456935108577551785283891;",acStack_e8,acStack_e8
               );
    output_line(arg1,"MUL %s.x, %s.x, 1.2732395447351626861510701069801;",local_68,local_a8);
    output_line(arg1,"MAD %s.x, %s.x, %s.x, %s.x;",acStack_e8,acStack_e8,local_a8,local_68);
  }
  if (bVar2) {
    output_line(arg1,"ADD %s.x, %s.x, 1.57079637050628662109375;",local_68,local_a8);
    output_line(arg1,"SGE %s.y, %s.x, 3.1415927410125732421875;",local_68);
    output_line(arg1,"MAD %s.x, %s.y, -6.283185482025146484375, %s.x;",local_68,local_68);
    output_line(arg1,"ABS %s.x, %s.x;",acStack_e8,local_a8);
    output_line(arg1,"MUL %s.x, %s.x, -0.40528473456935108577551785283891;",acStack_e8,acStack_e8
               );
    output_line(arg1,"MUL %s.x, %s.x, 1.2732395447351626861510701069801;",local_68,local_a8);
    output_line(arg1,"MAD %s.y, %s.x, %s.x, %s.x;",acStack_e8,acStack_e8,local_a8,local_68);
  }
LAB_0051fa82:
  if (*arg1 == 0) {
    emit_ARB1_dest_modifiers(arg1);
  }
  return;
}

/* ======================================================================
 * emit_ARB1_opcode_dss  (Ghidra `emit_ARB1_opcode_dss` @ 0051fd50)
 * Signature: uint8_t emit_ARB1_opcode_dss(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`
 * Called by: `emit_ARB1_ADD`, `emit_ARB1_CRS`, `emit_ARB1_DP3`, `emit_ARB1_DP4`, `emit_ARB1_DST`, `emit_ARB1_MAX`, `emit_ARB1_MIN`, `emit_ARB1_MUL`, `emit_ARB1_SGE`, `emit_ARB1_SLT` (+1 more)
 */
void emit_ARB1_opcode_dss(long arg1,uint64_t arg2)

{
  uint8_t auStack_d8 [64];
  uint8_t local_98 [64];
  uint8_t local_58 [72];
  
  make_ARB1_destarg_string_constprop_77(arg1,auStack_d8);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_98);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x150,local_58);
  output_line(arg1,"%s%s, %s, %s;",arg2,auStack_d8,local_98,local_58);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_CRS  (Ghidra `emit_ARB1_CRS` @ 0051fdd0)
 * Signature: uint8_t emit_ARB1_CRS(void)
 * Calls: `emit_ARB1_opcode_dss`
 * Called by: (none)
 */
void emit_ARB1_CRS(uint64_t arg1)

{
  emit_ARB1_opcode_dss(arg1,&DAT_005c9f9d /* R:6.273635645557635e-39f */);
  return;
}

/* ======================================================================
 * emit_ARB1_DST  (Ghidra `emit_ARB1_DST` @ 0051fde0)
 * Signature: uint8_t emit_ARB1_DST(void)
 * Calls: `emit_ARB1_opcode_dss`
 * Called by: (none)
 */
void emit_ARB1_DST(uint64_t arg1)

{
  emit_ARB1_opcode_dss(arg1,&DAT_005c9fa1 /* R:7.74405175533681e-39f */);
  return;
}

/* ======================================================================
 * emit_ARB1_SGE  (Ghidra `emit_ARB1_SGE` @ 0051fdf0)
 * Signature: uint8_t emit_ARB1_SGE(void)
 * Calls: `emit_ARB1_opcode_dss`
 * Called by: (none)
 */
void emit_ARB1_SGE(uint64_t arg1)

{
  emit_ARB1_opcode_dss(arg1,&DAT_005c9fa5 /* R:6.3622355435615e-39f */);
  return;
}

/* ======================================================================
 * emit_ARB1_SLT  (Ghidra `emit_ARB1_SLT` @ 0051fe00)
 * Signature: uint8_t emit_ARB1_SLT(void)
 * Calls: `emit_ARB1_opcode_dss`
 * Called by: (none)
 */
void emit_ARB1_SLT(uint64_t arg1)

{
  emit_ARB1_opcode_dss(arg1,&DAT_005c9fa9 /* R:7.741561647965704e-39f */);
  return;
}

/* ======================================================================
 * emit_ARB1_MAX  (Ghidra `emit_ARB1_MAX` @ 0051fe10)
 * Signature: uint8_t emit_ARB1_MAX(void)
 * Calls: `emit_ARB1_opcode_dss`
 * Called by: (none)
 */
void emit_ARB1_MAX(uint64_t arg1)

{
  emit_ARB1_opcode_dss(arg1,&DAT_005c9fad /* R:8.104949168331345e-39f */);
  return;
}

/* ======================================================================
 * emit_ARB1_MIN  (Ghidra `emit_ARB1_MIN` @ 0051fe20)
 * Signature: uint8_t emit_ARB1_MIN(void)
 * Calls: `emit_ARB1_opcode_dss`
 * Called by: (none)
 */
void emit_ARB1_MIN(uint64_t arg1)

{
  emit_ARB1_opcode_dss(arg1,&DAT_005c9fb1 /* R:7.18946406600637e-39f */);
  return;
}

/* ======================================================================
 * emit_ARB1_DP4  (Ghidra `emit_ARB1_DP4` @ 0051fe30)
 * Signature: uint8_t emit_ARB1_DP4(void)
 * Calls: `emit_ARB1_opcode_dss`
 * Called by: (none)
 */
void emit_ARB1_DP4(uint64_t arg1)

{
  emit_ARB1_opcode_dss(arg1,&DAT_005c9fb5 /* R:4.8042396810604893e-39f */);
  return;
}

/* ======================================================================
 * emit_ARB1_DP3  (Ghidra `emit_ARB1_DP3` @ 0051fe40)
 * Signature: uint8_t emit_ARB1_DP3(void)
 * Calls: `emit_ARB1_opcode_dss`
 * Called by: (none)
 */
void emit_ARB1_DP3(uint64_t arg1)

{
  emit_ARB1_opcode_dss(arg1,&DAT_005ca4f6 /* R:4.712404184902498e-39f */);
  return;
}

/* ======================================================================
 * emit_ARB1_MUL  (Ghidra `emit_ARB1_MUL` @ 0051fe50)
 * Signature: uint8_t emit_ARB1_MUL(void)
 * Calls: `emit_ARB1_opcode_dss`
 * Called by: (none)
 */
void emit_ARB1_MUL(uint64_t arg1)

{
  emit_ARB1_opcode_dss(arg1,&DAT_005c9fb9 /* R:7.010097862572793e-39f */);
  return;
}

/* ======================================================================
 * emit_ARB1_SUB  (Ghidra `emit_ARB1_SUB` @ 0051fe60)
 * Signature: uint8_t emit_ARB1_SUB(void)
 * Calls: `emit_ARB1_opcode_dss`
 * Called by: (none)
 */
void emit_ARB1_SUB(uint64_t arg1)

{
  emit_ARB1_opcode_dss(arg1,&DAT_005c9fbd /* R:6.091751308783667e-39f */);
  return;
}

/* ======================================================================
 * emit_ARB1_ADD  (Ghidra `emit_ARB1_ADD` @ 0051fe70)
 * Signature: uint8_t emit_ARB1_ADD(void)
 * Calls: `emit_ARB1_opcode_dss`
 * Called by: (none)
 */
void emit_ARB1_ADD(uint64_t arg1)

{
  emit_ARB1_opcode_dss(arg1,&DAT_005ca4ca /* R:6.26929862681055e-39f */);
  return;
}

/* ======================================================================
 * emit_ARB1_POW  (Ghidra `emit_ARB1_POW` @ 0051fe80)
 * Signature: uint8_t emit_ARB1_POW(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_POW(long arg1)

{
  int iVar1;
  int iVar2;
  uint8_t auStack_108 [64];
  uint8_t local_c8 [64];
  uint8_t local_88 [64];
  char local_48 [64];
  
  if ((*(int *)(arg1 + 0x130) == 0xc) || (*(int *)(arg1 + 0x130) == 0)) {
    *(uint32_t *)(arg1 + 0x130) = 0xb;
  }
  make_ARB1_destarg_string_constprop_77(arg1,auStack_108);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_c8);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x150,local_88);
  if (*(int *)(arg1 + 0x130) == 0xb) {
    output_line(arg1,"POW%s, %s, %s;",auStack_108,local_c8,local_88);
  }
  else {
    iVar1 = *(int *)(arg1 + 0x2c0);
    iVar2 = iVar1 + 1;
    *(int *)(arg1 + 0x2c0) = iVar2;
    if (iVar1 < *(int *)(arg1 + 0x2c4)) {
      iVar2 = *(int *)(arg1 + 0x2c4);
    }
    *(int *)(arg1 + 0x2c4) = iVar2;
    snprintf(local_48,0x40,"scratch%d");
    output_line(arg1,"ABS %s, %s;",local_48,local_c8);
    output_line(arg1,"POW%s, %s.x, %s;",auStack_108,local_48,local_88);
  }
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_LRP  (Ghidra `emit_ARB1_LRP` @ 0051ffb0)
 * Signature: uint8_t emit_ARB1_LRP(void)
 * Calls: `emit_ARB1_dest_modifiers`, `emit_ARB1_opcode_dsss`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_LRP(long arg1)

{
  int iVar1;
  int iVar2;
  uint8_t auStack_148 [64];
  uint8_t local_108 [64];
  uint8_t local_c8 [64];
  uint8_t local_88 [64];
  char local_48 [64];
  
  if (*(int *)(arg1 + 0xd0) != 1) {
    make_ARB1_destarg_string_constprop_77(arg1,auStack_148);
    make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_108);
    make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x150,local_c8);
    make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 400,local_88);
    iVar1 = *(int *)(arg1 + 0x2c0);
    iVar2 = iVar1 + 1;
    *(int *)(arg1 + 0x2c0) = iVar2;
    if (iVar1 < *(int *)(arg1 + 0x2c4)) {
      iVar2 = *(int *)(arg1 + 0x2c4);
    }
    *(int *)(arg1 + 0x2c4) = iVar2;
    snprintf(local_48,0x40,"scratch%d");
    output_line(arg1,"SUB %s, %s, %s;",local_48,local_c8,local_88);
    output_line(arg1,"MAD%s, %s, %s, %s;",auStack_148,local_48,local_108,local_88);
    emit_ARB1_dest_modifiers(arg1);
    return;
  }
  emit_ARB1_opcode_dsss(arg1,&DAT_005c9fe1 /* R:7.376362248685692e-39f */);
  return;
}

/* ======================================================================
 * arb1_log_constprop_81  (Ghidra `arb1_log.constprop.81` @ 005200d0)
 * Signature: uint8_t arb1_log.constprop.81(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`, `snprintf`
 * Called by: (none)
 */
void arb1_log_constprop_81(long arg1)

{
  int iVar1;
  int iVar2;
  uint8_t auStack_c8 [64];
  uint8_t local_88 [64];
  char local_48 [64];
  
  if ((*(int *)(arg1 + 0x130) == 0xc) || (*(int *)(arg1 + 0x130) == 0)) {
    *(uint32_t *)(arg1 + 0x130) = 0xb;
  }
  make_ARB1_destarg_string_constprop_77(arg1,auStack_c8);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_88);
  if (*(int *)(arg1 + 0x130) == 0xb) {
    output_line(arg1,"%s%s, %s;",&DAT_005ca008 /* R:4.617351307470417e-39f */,auStack_c8,local_88);
  }
  else {
    iVar1 = *(int *)(arg1 + 0x2c0);
    iVar2 = iVar1 + 1;
    *(int *)(arg1 + 0x2c0) = iVar2;
    if (iVar1 < *(int *)(arg1 + 0x2c4)) {
      iVar2 = *(int *)(arg1 + 0x2c4);
    }
    *(int *)(arg1 + 0x2c4) = iVar2;
    snprintf(local_48,0x40,"scratch%d");
    output_line(arg1,"ABS %s, %s;",local_48,local_88);
    output_line(arg1,"%s%s, %s.x;",&DAT_005ca008 /* R:4.617351307470417e-39f */,auStack_c8,local_48);
  }
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_LOG  (Ghidra `emit_ARB1_LOG` @ 005201e0)
 * Signature: uint8_t emit_ARB1_LOG(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_LOG(long arg1)

{
  int iVar1;
  int iVar2;
  uint8_t auStack_c8 [64];
  uint8_t auStack_88 [64];
  char acStack_48 [64];
  
  if ((*(int *)(arg1 + 0x130) == 0xc) || (*(int *)(arg1 + 0x130) == 0)) {
    *(uint32_t *)(arg1 + 0x130) = 0xb;
  }
  make_ARB1_destarg_string_constprop_77(arg1,auStack_c8);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,auStack_88);
  if (*(int *)(arg1 + 0x130) == 0xb) {
    output_line(arg1,"%s%s, %s;",&DAT_005ca008 /* R:4.617351307470417e-39f */,auStack_c8,auStack_88);
  }
  else {
    iVar1 = *(int *)(arg1 + 0x2c0);
    iVar2 = iVar1 + 1;
    *(int *)(arg1 + 0x2c0) = iVar2;
    if (iVar1 < *(int *)(arg1 + 0x2c4)) {
      iVar2 = *(int *)(arg1 + 0x2c4);
    }
    *(int *)(arg1 + 0x2c4) = iVar2;
    snprintf(acStack_48,0x40,"scratch%d");
    output_line(arg1,"ABS %s, %s;",acStack_48,auStack_88);
    output_line(arg1,"%s%s, %s.x;",&DAT_005ca008 /* R:4.617351307470417e-39f */,auStack_c8,acStack_48);
  }
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_LOGP  (Ghidra `emit_ARB1_LOGP` @ 005201f0)
 * Signature: uint8_t emit_ARB1_LOGP(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_LOGP(long arg1)

{
  int iVar1;
  int iVar2;
  uint8_t auStack_c8 [64];
  uint8_t auStack_88 [64];
  char acStack_48 [64];
  
  if ((*(int *)(arg1 + 0x130) == 0xc) || (*(int *)(arg1 + 0x130) == 0)) {
    *(uint32_t *)(arg1 + 0x130) = 0xb;
  }
  make_ARB1_destarg_string_constprop_77(arg1,auStack_c8);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,auStack_88);
  if (*(int *)(arg1 + 0x130) == 0xb) {
    output_line(arg1,"%s%s, %s;",&DAT_005ca008 /* R:4.617351307470417e-39f */,auStack_c8,auStack_88);
  }
  else {
    iVar1 = *(int *)(arg1 + 0x2c0);
    iVar2 = iVar1 + 1;
    *(int *)(arg1 + 0x2c0) = iVar2;
    if (iVar1 < *(int *)(arg1 + 0x2c4)) {
      iVar2 = *(int *)(arg1 + 0x2c4);
    }
    *(int *)(arg1 + 0x2c4) = iVar2;
    snprintf(acStack_48,0x40,"scratch%d");
    output_line(arg1,"ABS %s, %s;",acStack_48,auStack_88);
    output_line(arg1,"%s%s, %s.x;",&DAT_005ca008 /* R:4.617351307470417e-39f */,auStack_c8,acStack_48);
  }
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * arb1_texld  (Ghidra `arb1_texld` @ 00520200)
 * Signature: uint8_t arb1_texld(void)
 * Calls: `failf`, `get_D3D_register_string_constprop_65`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`, `snprintf`
 * Called by: `emit_ARB1_TEXLD`, `emit_ARB1_TEXLDD`, `emit_ARB1_TEXLDL`
 */
void arb1_texld(long arg1,uint64_t arg2,int arg3)

{
  uint uVar1;
  uint64_t uVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  uint64_t *puVar7;
  byte bVar8;
  uint8_t local_148 [64];
  char local_108 [64];
  uint64_t local_c8 [8];
  uint64_t local_88 [8];
  uint8_t local_48 [24];
  
  bVar8 = 0;
  if (((*(uint *)(arg1 + 0x100) & 2) != 0) && (*(int *)(arg1 + 0x4b0) != 0)) {
    *(uint *)(arg1 + 0x100) = *(uint *)(arg1 + 0x100) & 0xfffffffd;
  }
  make_ARB1_destarg_string_constprop_77(arg1,local_148);
  puVar6 = *(uint **)(arg1 + 0x450);
  if (puVar6 != (uint *)0x0) {
    uVar5 = *(int *)(arg1 + 0x158) << 0x10 | 10;
    do {
      uVar1 = puVar6[1] << 0x10 | *puVar6;
      if (uVar5 == uVar1) break;
      if (uVar5 < uVar1) {
        puVar6 = (uint *)0x0;
        break;
      }
      puVar6 = *(uint **)(puVar6 + 8);
    } while (puVar6 != (uint *)0x0);
  }
  uVar2 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x134),*(uint32_t *)(arg1 + 0x118),
                     local_48);
  snprintf(local_108,0x40,"%s%s",uVar2,local_48);
  puVar7 = local_c8;
  for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
  }
  puVar7 = local_88;
  for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
  }
  if (arg3 != 0) {
    make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 400,local_c8);
    make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x1d0,local_88);
  }
  if (puVar6 == (uint *)0x0) {
    failf(arg1,"%s","TEXLD using undeclared sampler");
  }
  else {
    if (*(int *)(arg1 + 0x15c) != 0xe4) {
      failf(arg1,"%s","BUG: can\'t handle TEXLD with sampler swizzle at the moment");
    }
    uVar5 = puVar6[3];
    if (uVar5 == 3) {
      pcVar3 = "CUBE";
    }
    else if (uVar5 == 4) {
      pcVar3 = "3D";
    }
    else {
      if (uVar5 != 2) {
        failf(arg1,"%s","unknown texture type");
        return;
      }
      pcVar3 = "2D";
    }
    if (arg3 == 0) {
      output_line(arg1,"%s%s, %s, texture[%d], %s;",arg2,local_148,local_108,
                  *(uint32_t *)(arg1 + 0x158),pcVar3);
    }
    else {
      output_line(arg1,"%s%s, %s, %s, %s, texture[%d], %s;",arg2,local_148,local_108,local_c8,
                  local_88,*(uint32_t *)(arg1 + 0x158),pcVar3);
    }
  }
  return;
}

/* ======================================================================
 * emit_ARB1_TEXLDL  (Ghidra `emit_ARB1_TEXLDL` @ 00520450)
 * Signature: uint8_t emit_ARB1_TEXLDL(void)
 * Calls: `arb1_texld`, `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXLDL(long arg1)

{
  if (*(int *)(arg1 + 0xd0) == 2) {
    if (*(int *)(arg1 + 0x4ac) == 0) {
      failf(arg1,"Vertex shader TEXLDL unsupported in %s profile",
            **(uint64_t **)(arg1 + 200));
      return;
    }
  }
  else if ((*(int *)(arg1 + 0xd0) == 1) && (*(int *)(arg1 + 0x4a8) == 0)) {
    failf(arg1,"Pixel shader TEXLDL unsupported in %s profile",**(uint64_t **)(arg1 + 200));
    return;
  }
  arb1_texld(arg1,&DAT_005ca057 /* R:7.011183868882645e-39f */,0);
  return;
}

/* ======================================================================
 * emit_ARB1_TEXLDD  (Ghidra `emit_ARB1_TEXLDD` @ 005204c0)
 * Signature: uint8_t emit_ARB1_TEXLDD(void)
 * Calls: `arb1_texld`
 * Called by: (none)
 */
void emit_ARB1_TEXLDD(long arg1)

{
  if (*(int *)(arg1 + 0x4a8) == 0) {
    arb1_texld(arg1,&DAT_005ca550 /* R:8.106393907048063e-39f */,0);
    return;
  }
  arb1_texld(arg1,&DAT_005ca05b /* R:6.276499899618715e-39f */,1);
  return;
}

/* ======================================================================
 * emit_ARB1_TEXLD  (Ghidra `emit_ARB1_TEXLD` @ 005204f0)
 * Signature: uint8_t emit_ARB1_TEXLD(void)
 * Calls: `arb1_texld`, `failf`
 * Called by: (none)
 */
void emit_ARB1_TEXLD(long arg1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 1;
  if (*(byte *)(arg1 + 0xd5) != 0xff) {
    uVar2 = (uint)*(byte *)(arg1 + 0xd5);
  }
  if ((uVar2 | (uint)*(byte *)(arg1 + 0xd4) << 0x10) < 0x20000) {
    failf(arg1,"%s","TEXLD <= Shader Model 2.0 unimplemented.");
    return;
  }
  iVar1 = *(int *)(arg1 + 0x2a8);
  if (iVar1 == 0) {
    arb1_texld(arg1,&DAT_005ca550 /* R:8.106393907048063e-39f */,0);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    arb1_texld(arg1,&DAT_005ca063 /* R:6.092828907302733e-39f */,0);
    return;
  }
  arb1_texld(arg1,&DAT_005ca05f /* R:7.37852585351461e-39f */,0);
  return;
}

/* ======================================================================
 * make_GLSL_srcarg_string_constprop_72  (Ghidra `make_GLSL_srcarg_string.constprop.72` @ 00521200)
 * Signature: uint8_t make_GLSL_srcarg_string.constprop.72(void)
 * Calls: `failf`, `get_D3D_register_string_constprop_65`, `make_GLSL_swizzle_string_isra_10`, `snprintf`
 * Called by: `emit_GLSL_ABS`, `emit_GLSL_ADD`, `emit_GLSL_BREAKC`, `emit_GLSL_BREAKP`, `emit_GLSL_CALL`, `emit_GLSL_CALLNZ`, `emit_GLSL_CRS`, `emit_GLSL_DP2ADD`, `emit_GLSL_DP3`, `emit_GLSL_DP4` (+37 more)
 */
char * make_GLSL_srcarg_string_constprop_72
                 (long arg1,ulong arg2,uint32_t arg3,char *arg4)

{
  long lVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int iVar4;
  long lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint *puVar8;
  char *pcVar9;
  uint8_t *puVar10;
  long *plVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  uint uVar16;
  char *__s;
  bool bVar17;
  uint8_t auStack_148 [56];
  char acStack_110 [16];
  uint64_t uStack_100;
  uint8_t auStack_f8 [56];
  char *local_c0;
  char *local_b8;
  char *local_b0;
  uint local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char local_88 [48];
  uint32_t local_58;
  uint16_t local_54;
  uint32_t local_48;
  
  puVar10 = auStack_f8;
  *arg4 = '\0';
  if (4 < arg2) {
    uStack_100 = 0x521471;
    failf(arg1,"%s","Too many source args");
    return arg4;
  }
  lVar1 = arg1 + 0x110 + arg2 * 0x40;
  switch(*(uint32_t *)(lVar1 + 0x20)) {
  default:
    local_a0 = "";
    local_98 = "";
    goto LAB_00521261;
  case 1:
    local_a0 = "";
    local_98 = "-";
    goto LAB_00521261;
  case 2:
  case 3:
    uStack_100 = 0x521581;
    failf(arg1,"%s","SRCMOD_BIAS unsupported");
    break;
  case 4:
  case 5:
    uStack_100 = 0x521541;
    failf(arg1,"%s","SRCMOD_SIGN unsupported");
    break;
  case 6:
    uStack_100 = 0x521501;
    failf(arg1,"%s","SRCMOD_COMPLEMENT unsupported");
    break;
  case 7:
    uStack_100 = 0x5214e9;
    failf(arg1,"%s","SRCMOD_X2 unsupported");
    break;
  case 8:
    uStack_100 = 0x5214d1;
    failf(arg1,"%s","SRCMOD_X2NEGATE unsupported");
    break;
  case 9:
    uStack_100 = 0x5214b9;
    failf(arg1,"%s","SRCMOD_DZ unsupported");
    break;
  case 10:
    uStack_100 = 0x5214a1;
    failf(arg1,"%s","SRCMOD_DW unsupported");
    break;
  case 0xb:
    local_a0 = ")";
    local_98 = "abs(";
    goto LAB_00521261;
  case 0xc:
    local_a0 = ")";
    local_98 = "-abs(";
    goto LAB_00521261;
  case 0xd:
    local_a0 = "";
    local_98 = "!";
LAB_00521261:
    if (*(int *)(lVar1 + 0x28) == 0) {
      local_90 = local_88 + 0x20;
      puVar10 = auStack_148;
      plVar11 = (long *)auStack_148;
      uVar7 = get_D3D_register_string_constprop_65
                        (arg1,*(uint32_t *)(lVar1 + 0x24),*(uint32_t *)(lVar1 + 8),local_90);
      __s = acStack_110;
      snprintf(__s,0x40,"%s_%s%s",*(uint64_t *)(arg1 + 0xb0),uVar7,local_90);
      local_88[0] = '\0';
      local_88[1] = '\0';
      local_88[2] = '\0';
      local_88[3] = '\0';
      local_88[4] = '\0';
      local_88[5] = '\0';
      local_88[6] = '\0';
      local_88[7] = '\0';
      local_88[8] = '\0';
      local_88[9] = '\0';
      local_88[10] = '\0';
      local_88[0xb] = '\0';
      local_88[0xc] = '\0';
      local_88[0xd] = '\0';
      local_88[0xe] = '\0';
      local_88[0xf] = '\0';
      local_88[0x10] = '\0';
      local_88[0x11] = '\0';
      local_88[0x12] = '\0';
      local_88[0x13] = '\0';
      local_88[0x14] = '\0';
      local_88[0x15] = '\0';
      local_88[0x16] = '\0';
      local_88[0x17] = '\0';
      local_88[0x18] = '\0';
      local_88[0x19] = '\0';
      local_88[0x1a] = '\0';
      local_88[0x1b] = '\0';
      local_88[0x1c] = '\0';
      local_88[0x1d] = '\0';
      local_88[0x1e] = '\0';
      local_88[0x1f] = '\0';
      local_48 = 0;
      if (*(int *)(lVar1 + 0x28) != 0) goto LAB_005212a0;
      pcVar9 = "";
      pcVar14 = pcVar9;
      pcVar13 = pcVar9;
    }
    else {
      local_90 = local_88 + 0x20;
LAB_005212a0:
      local_48 = 0;
      local_88[0x18] = '\0';
      local_88[0x19] = '\0';
      local_88[0x1a] = '\0';
      local_88[0x1b] = '\0';
      local_88[0x1c] = '\0';
      local_88[0x1d] = '\0';
      local_88[0x1e] = '\0';
      local_88[0x1f] = '\0';
      local_88[0x10] = '\0';
      local_88[0x11] = '\0';
      local_88[0x12] = '\0';
      local_88[0x13] = '\0';
      local_88[0x14] = '\0';
      local_88[0x15] = '\0';
      local_88[0x16] = '\0';
      local_88[0x17] = '\0';
      local_88[8] = '\0';
      local_88[9] = '\0';
      local_88[10] = '\0';
      local_88[0xb] = '\0';
      local_88[0xc] = '\0';
      local_88[0xd] = '\0';
      local_88[0xe] = '\0';
      local_88[0xf] = '\0';
      local_88[0] = '\0';
      local_88[1] = '\0';
      local_88[2] = '\0';
      local_88[3] = '\0';
      local_88[4] = '\0';
      local_88[5] = '\0';
      local_88[6] = '\0';
      local_88[7] = '\0';
      if (*(int *)(lVar1 + 0x24) == 1) {
        __s = (char *)((ulong)(puVar10 + -0x11) & 0xfffffffffffffff0);
        *(uint64_t *)(puVar10 + -0x58) = 0x52179e;
        snprintf(__s,0x40,"%s","vertex_input_array");
      }
      else {
        lVar5 = *(long *)(lVar1 + 0x38);
        uVar12 = *(uint *)(lVar5 + 4);
        iVar15 = *(int *)(lVar1 + 8) - uVar12;
        if (*(long *)(lVar5 + 0x10) == 0) {
          iVar4 = *(int *)(lVar1 + 0x24);
          pcVar9 = *(char **)(arg1 + 0xb0);
          pcVar13 = "ivec4";
          __s = (char *)((ulong)(puVar10 + -0x11) & 0xfffffffffffffff0);
          pcVar14 = __s;
          local_a8 = uVar12;
          if (((iVar4 != 7) && (pcVar13 = "bool", iVar4 != 0xe)) && (pcVar13 = "vec4", iVar4 != 2))
          {
            local_c0 = (char *)CONCAT44(local_c0._4_4_,iVar15);
            *(uint64_t *)(puVar10 + -0x58) = 0x521814;
            local_b8 = __s;
            local_b0 = pcVar9;
            failf(arg1,"%s","BUG: used a uniform we don\'t know how to define.",pcVar9,"vec4");
            pcVar13 = (char *)0x0;
            pcVar9 = local_b0;
            pcVar14 = local_b8;
            iVar15 = (int)local_c0;
          }
          local_c0 = (char *)CONCAT44(local_c0._4_4_,iVar15);
          *(uint64_t *)(puVar10 + -0x58) = 0x521855;
          snprintf(pcVar14,0x40,"%s_uniforms_%s",pcVar9,pcVar13);
          if ((int)local_c0 == 0) {
            *(uint64_t *)(puVar10 + -0x58) = 0x521880;
            snprintf(local_88,0x20,"ARRAYBASE_%d + ",(ulong)local_a8);
          }
          else {
            *(uint64_t *)(puVar10 + -0x58) = 0x5218a3;
            snprintf(local_88,0x20,"(ARRAYBASE_%d + %d) + ",(ulong)local_a8,
                     (ulong)local_c0 & 0xffffffff);
          }
        }
        else {
          uVar16 = *(uint *)(lVar5 + 8);
          uVar7 = *(uint64_t *)(arg1 + 0xb0);
          local_c0 = (char *)CONCAT44(local_c0._4_4_,iVar15);
          __s = (char *)((ulong)(puVar10 + -0x11) & 0xfffffffffffffff0);
          *(uint64_t *)(puVar10 + -0x58) = 0x5212fb;
          snprintf(__s,0x40,"%s_const_array_%d_%d",uVar7,(ulong)uVar12,(ulong)uVar16);
          if ((int)local_c0 != 0) {
            *(uint64_t *)(puVar10 + -0x58) = 0x521750;
            snprintf(local_88,0x20,"%d + ",(ulong)local_c0 & 0xffffffff);
          }
        }
      }
      plVar11 = (long *)(puVar10 + -0xa0);
      uVar2 = *(uint32_t *)(lVar1 + 0x30);
      uVar3 = *(uint32_t *)(lVar1 + 0x2c);
      local_c0 = (char *)((ulong)(puVar10 + -0x61) & 0xfffffffffffffff0);
      *(uint64_t *)(puVar10 + -0xa8) = 0x521334;
      uVar6 = get_D3D_register_string_constprop_65(arg1,uVar3,uVar2,local_90);
      uVar7 = *(uint64_t *)(arg1 + 0xb0);
      *(uint64_t *)(puVar10 + -0xa8) = 0x521361;
      snprintf(local_c0,0x40,"%s_%s%s",uVar7,uVar6,local_90);
      pcVar9 = "]";
      uVar12 = local_48 >> 0x10;
      local_48._0_2_ =
           CONCAT11(*(uint8_t *)((long)&swizzle_channels + (long)*(int *)(lVar1 + 0x34)),0x2e);
      local_48 = CONCAT22((short)uVar12,(uint16_t)local_48) & 0xff00ffff;
      pcVar14 = "[";
      pcVar13 = local_c0;
    }
    local_58 = 0;
    local_54 = 0;
    if (((*(int *)(lVar1 + 0x24) == 6) && (*(int *)(arg1 + 0x488) != 0)) &&
       (puVar8 = *(uint **)(arg1 + 0x420), puVar8 != (uint *)0x0)) {
      uVar12 = *(int *)(lVar1 + 8) << 0x10 | 6;
      uVar16 = puVar8[1] << 0x10 | *puVar8;
      if (uVar12 == uVar16) {
LAB_00521722:
        bVar17 = puVar8[2] == 4;
        goto LAB_005215e9;
      }
      if (uVar12 < uVar16) goto switchD_005215d0_switchD;
      do {
        puVar8 = *(uint **)(puVar8 + 8);
        if (puVar8 == (uint *)0x0) break;
        uVar16 = puVar8[1] << 0x10 | *puVar8;
        if (uVar12 == uVar16) goto LAB_00521722;
      } while (uVar16 <= uVar12);
switchD_005215d0_caseD_a:
      uVar2 = *(uint32_t *)(lVar1 + 0xc);
      plVar11[-1] = 0x5213dd;
      local_c0 = pcVar13;
      local_b8 = pcVar14;
      local_b0 = pcVar9;
      make_GLSL_swizzle_string_isra_10(&local_58,uVar2,arg3);
      pcVar9 = local_b0;
      pcVar13 = local_c0;
    }
    else {
switchD_005215d0_switchD:
      switch(*(int *)(lVar1 + 0x24)) {
      case 9:
      case 0xe:
      case 0xf:
        break;
      default:
        goto switchD_005215d0_caseD_a;
      case 0x11:
        if (*(int *)(lVar1 + 8) != 1) goto switchD_005215d0_caseD_a;
        break;
      case 0x13:
        bVar17 = *(int *)(arg1 + 0xd0) == 1;
LAB_005215e9:
        if (!bVar17) goto switchD_005215d0_caseD_a;
      }
    }
    if (__s == (char *)0x0) {
      plVar11[-1] = 0x52176c;
      failf(arg1,"%s","Unknown source register type.");
    }
    else {
      plVar11[3] = (long)pcVar9;
      plVar11[1] = (long)pcVar13;
      plVar11[5] = (long)local_a0;
      plVar11[4] = (long)&local_58;
      plVar11[2] = (long)&local_48;
      *plVar11 = (long)local_88;
      plVar11[-1] = 0x521449;
      snprintf(arg4,0x40,"%s%s%s%s%s%s%s%s%s",local_98,__s);
    }
  }
  return arg4;
}

/* ======================================================================
 * emit_GLSL_DST  (Ghidra `emit_GLSL_DST` @ 005218b0)
 * Signature: uint8_t emit_GLSL_DST(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_DST(uint64_t arg1)

{
  uint8_t local_198 [128];
  uint8_t local_118 [64];
  uint8_t local_d8 [64];
  uint8_t local_98 [64];
  uint8_t local_58 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,2,local_118);
  make_GLSL_srcarg_string_constprop_72(arg1,1,2,local_d8);
  make_GLSL_srcarg_string_constprop_72(arg1,0,4,local_98);
  make_GLSL_srcarg_string_constprop_72(arg1,1,8,local_58);
  make_GLSL_destarg_assign
            (arg1,local_198,0x80,"vec4(1.0, %s * %s, %s, %s)",local_118,local_d8,local_98,
             local_58);
  output_line(arg1,"%s",local_198);
  return;
}

/* ======================================================================
 * emit_GLSL_SINCOS  (Ghidra `emit_GLSL_SINCOS` @ 00521980)
 * Signature: uint8_t emit_GLSL_SINCOS(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_SINCOS(long arg1)

{
  int iVar1;
  long lVar2;
  uint64_t *puVar3;
  byte bVar4;
  uint64_t auStack_d8 [16];
  uint8_t local_58 [64];
  
  bVar4 = 0;
  iVar1 = *(int *)(arg1 + 0xe8);
  make_GLSL_srcarg_string_constprop_72(arg1,0,1,local_58);
  puVar3 = auStack_d8;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  if (iVar1 == 1) {
    make_GLSL_destarg_assign(arg1,auStack_d8,0x80,"cos(%s)",local_58);
  }
  else if (iVar1 == 2) {
    make_GLSL_destarg_assign(arg1,auStack_d8,0x80,"sin(%s)",local_58);
  }
  else if (iVar1 == 3) {
    make_GLSL_destarg_assign(arg1,auStack_d8,0x80,"vec2(cos(%s), sin(%s))",local_58);
  }
  output_line(arg1,"%s",auStack_d8);
  return;
}

/* ======================================================================
 * emit_GLSL_comparison_operations  (Ghidra `emit_GLSL_comparison_operations` @ 00521a90)
 * Signature: uint8_t emit_GLSL_comparison_operations(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: `emit_GLSL_CMP`, `emit_GLSL_CND`
 */
void emit_GLSL_comparison_operations(long arg1,uint64_t arg2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint8_t local_1a8 [128];
  uint8_t local_128 [64];
  uint8_t local_e8 [64];
  uint8_t local_a8 [64];
  uint8_t local_68 [16];
  int local_58 [10];
  
  iVar6 = 1;
  lVar5 = 0;
  uVar1 = *(uint *)(arg1 + 0xe8);
  local_68 = (uint8_t  [16])0x0;
  local_58[0] = *(int *)(arg1 + 0xec);
  local_58[1] = *(uint32_t *)(arg1 + 0xf0);
  local_58[2] = *(uint32_t *)(arg1 + 0xf4);
  local_58[3] = *(uint32_t *)(arg1 + 0xf8);
  local_58[4] = *(uint32_t *)(arg1 + 0x120);
  local_58[5] = *(uint32_t *)(arg1 + 0x124);
  local_58[6] = *(uint32_t *)(arg1 + 0x128);
  local_58[7] = *(uint32_t *)(arg1 + 300);
  do {
    if ((local_58[lVar5] != 0) && (*(int *)(local_68 + lVar5 * 4) == 0)) {
      *(uint32_t *)(local_68 + lVar5 * 4) = 1;
      uVar4 = 1 << ((byte)lVar5 & 0x1f);
      uVar7 = uVar4;
      for (iVar3 = iVar6; iVar3 != 4; iVar3 = iVar3 + 1) {
        lVar2 = (long)iVar3;
        if ((local_58[lVar2] != 0) && (local_58[lVar5 + 4] == local_58[lVar2 + 4])) {
          *(uint32_t *)(local_68 + lVar2 * 4) = 1;
          uVar7 = uVar7 | 1 << ((byte)iVar3 & 0x1f);
        }
      }
      make_GLSL_srcarg_string_constprop_72(arg1,0,uVar4,local_128);
      make_GLSL_srcarg_string_constprop_72(arg1,1,uVar7,local_e8);
      make_GLSL_srcarg_string_constprop_72(arg1,2,uVar7,local_a8);
      *(uint *)(arg1 + 0xe8) = uVar7;
      *(uint *)(arg1 + 0xec) = uVar7 & 1;
      *(uint *)(arg1 + 0xf0) = (int)uVar7 >> 1 & 1;
      *(uint *)(arg1 + 0xf8) = (int)uVar7 >> 3 & 1;
      *(uint *)(arg1 + 0xf4) = (int)uVar7 >> 2 & 1;
      make_GLSL_destarg_assign
                (arg1,local_1a8,0x80,"((%s %s) ? %s : %s)",local_128,arg2,local_e8,local_a8);
      *(uint *)(arg1 + 0xe8) = uVar1;
      *(uint *)(arg1 + 0xf0) = (int)uVar1 >> 1 & 1;
      *(uint *)(arg1 + 0xec) = uVar1 & 1;
      *(uint *)(arg1 + 0xf8) = (int)uVar1 >> 3 & 1;
      *(uint *)(arg1 + 0xf4) = (int)uVar1 >> 2 & 1;
      output_line(arg1,"%s",local_1a8);
    }
    lVar5 = lVar5 + 1;
    iVar6 = iVar6 + 1;
  } while (lVar5 != 4);
  return;
}

/* ======================================================================
 * emit_GLSL_CMP  (Ghidra `emit_GLSL_CMP` @ 00521d10)
 * Signature: uint8_t emit_GLSL_CMP(void)
 * Calls: `emit_GLSL_comparison_operations`
 * Called by: (none)
 */
void emit_GLSL_CMP(uint64_t arg1)

{
  emit_GLSL_comparison_operations(arg1,&DAT_005ca219 /* R:">= 0.0" */);
  return;
}

/* ======================================================================
 * emit_GLSL_CND  (Ghidra `emit_GLSL_CND` @ 00521d20)
 * Signature: uint8_t emit_GLSL_CND(void)
 * Calls: `emit_GLSL_comparison_operations`
 * Called by: (none)
 */
void emit_GLSL_CND(uint64_t arg1)

{
  emit_GLSL_comparison_operations(arg1,"> 0.5");
  return;
}

/* ======================================================================
 * emit_GLSL_DP2ADD  (Ghidra `emit_GLSL_DP2ADD` @ 00521d30)
 * Signature: uint8_t emit_GLSL_DP2ADD(void)
 * Calls: `emit_GLSL_dotprod`, `make_GLSL_srcarg_string_constprop_72`, `snprintf`
 * Called by: (none)
 */
void emit_GLSL_DP2ADD(uint64_t arg1)

{
  uint8_t auStack_108 [64];
  uint8_t local_c8 [64];
  uint8_t local_88 [64];
  char local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,3,auStack_108);
  make_GLSL_srcarg_string_constprop_72(arg1,1,3,local_c8);
  make_GLSL_srcarg_string_constprop_72(arg1,2,1,local_88);
  snprintf(local_48,0x40," + %s",local_88);
  emit_GLSL_dotprod(arg1,auStack_108,local_c8,local_48);
  return;
}

/* ======================================================================
 * emit_GLSL_IFC  (Ghidra `emit_GLSL_IFC` @ 00521dc0)
 * Signature: uint8_t emit_GLSL_IFC(void)
 * Calls: `failf`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_IFC(long arg1)

{
  char *pcVar1;
  uint8_t auStack_98 [64];
  uint8_t local_58 [72];
  
  if (*(uint *)(arg1 + 0x2a8) < 7) {
    pcVar1 = *(char **)(comps_6042 + (ulong)*(uint *)(arg1 + 0x2a8) * 8);
  }
  else {
    failf(arg1,"%s","unknown comparison control");
    pcVar1 = "";
  }
  make_GLSL_srcarg_string_constprop_72(arg1,0,1,auStack_98);
  make_GLSL_srcarg_string_constprop_72(arg1,1,1,local_58);
  output_line(arg1,"if (%s %s %s) {",auStack_98,pcVar1,local_58);
  *(int *)(arg1 + 0xac) = *(int *)(arg1 + 0xac) + 1;
  return;
}

/* ======================================================================
 * emit_GLSL_BREAKC  (Ghidra `emit_GLSL_BREAKC` @ 00521e50)
 * Signature: uint8_t emit_GLSL_BREAKC(void)
 * Calls: `failf`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_BREAKC(long arg1)

{
  char *pcVar1;
  uint8_t auStack_98 [64];
  uint8_t local_58 [72];
  
  if (*(uint *)(arg1 + 0x2a8) < 7) {
    pcVar1 = *(char **)(comps_6042 + (ulong)*(uint *)(arg1 + 0x2a8) * 8);
  }
  else {
    failf(arg1,"%s","unknown comparison control");
    pcVar1 = "";
  }
  make_GLSL_srcarg_string_constprop_72(arg1,0,1,auStack_98);
  make_GLSL_srcarg_string_constprop_72(arg1,1,1,local_58);
  output_line(arg1,"if (%s %s %s) { break; }",auStack_98,pcVar1,local_58);
  return;
}

/* ======================================================================
 * emit_GLSL_REP  (Ghidra `emit_GLSL_REP` @ 00521ee0)
 * Signature: uint8_t emit_GLSL_REP(void)
 * Calls: `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_REP(long arg1)

{
  uint32_t uVar1;
  uint8_t auStack_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,1,auStack_48);
  uVar1 = *(uint32_t *)(arg1 + 0x2b4);
  output_line(arg1,"for (int rep%u = 0; rep%u < %s; rep%u++) {",uVar1,uVar1,auStack_48,uVar1);
  *(int *)(arg1 + 0xac) = *(int *)(arg1 + 0xac) + 1;
  return;
}

/* ======================================================================
 * emit_GLSL_IF  (Ghidra `emit_GLSL_IF` @ 00521f30)
 * Signature: uint8_t emit_GLSL_IF(void)
 * Calls: `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_IF(long arg1)

{
  uint8_t auStack_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,1,auStack_48);
  output_line(arg1,"if (%s) {",auStack_48);
  *(int *)(arg1 + 0xac) = *(int *)(arg1 + 0xac) + 1;
  return;
}

/* ======================================================================
 * emit_GLSL_BREAKP  (Ghidra `emit_GLSL_BREAKP` @ 00521f70)
 * Signature: uint8_t emit_GLSL_BREAKP(void)
 * Calls: `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_BREAKP(uint64_t arg1)

{
  uint8_t auStack_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,1,auStack_48);
  output_line(arg1,"if (%s) { break; }",auStack_48);
  return;
}

/* ======================================================================
 * emit_GLSL_LABEL  (Ghidra `emit_GLSL_LABEL` @ 00521fa0)
 * Signature: uint8_t emit_GLSL_LABEL(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_LABEL(long arg1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  uint8_t auStack_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),auStack_48);
  puVar5 = *(uint **)(arg1 + 0x378);
  if (puVar5 != (uint *)0x0) {
    uVar3 = *(int *)(arg1 + 0x118) << 0x10 | 0x12;
    do {
      uVar1 = puVar5[1] << 0x10 | *puVar5;
      if (uVar3 == uVar1) {
        pcVar4 = "int aL";
        if (puVar5[5] == 1) goto LAB_00521fff;
        goto LAB_00521ffa;
      }
    } while ((uVar1 <= uVar3) && (puVar5 = *(uint **)(puVar5 + 8), puVar5 != (uint *)0x0));
  }
  lVar2 = *(long *)(arg1 + 0x88);
  if (lVar2 == 0) {
    lVar2 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x88) = lVar2;
    if (lVar2 == 0) goto LAB_00521ffa;
  }
  *(long *)(arg1 + 0x50) = lVar2;
LAB_00521ffa:
  pcVar4 = "";
LAB_00521fff:
  output_line(arg1,"void %s(%s)",auStack_48,pcVar4);
  output_line(arg1,"{");
  *(int *)(arg1 + 0xac) = *(int *)(arg1 + 0xac) + 1;
  return;
}

/* ======================================================================
 * emit_GLSL_M4X4  (Ghidra `emit_GLSL_M4X4` @ 00522070)
 * Signature: uint8_t emit_GLSL_M4X4(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_M4X4(uint64_t arg1)

{
  uint8_t local_1e8 [128];
  uint8_t local_168 [64];
  uint8_t local_128 [64];
  uint8_t local_e8 [64];
  uint8_t local_a8 [64];
  uint8_t local_68 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,0xf,local_168);
  make_GLSL_srcarg_string_constprop_72(arg1,1,0xf,local_128);
  make_GLSL_srcarg_string_constprop_72(arg1,2,0xf,local_e8);
  make_GLSL_srcarg_string_constprop_72(arg1,3,0xf,local_a8);
  make_GLSL_srcarg_string_constprop_72(arg1,4,0xf,local_68);
  make_GLSL_destarg_assign
            (arg1,local_1e8,0x80,"vec4(dot(%s, %s), dot(%s, %s), dot(%s, %s), dot(%s, %s))",
             local_168,local_128,local_168,local_e8,local_168,local_a8,local_168,local_68);
  output_line(arg1,"%s",local_1e8);
  return;
}

/* ======================================================================
 * emit_GLSL_M4X3  (Ghidra `emit_GLSL_M4X3` @ 005221a0)
 * Signature: uint8_t emit_GLSL_M4X3(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_M4X3(uint64_t arg1)

{
  uint8_t local_1a8 [128];
  uint8_t local_128 [64];
  uint8_t local_e8 [64];
  uint8_t local_a8 [64];
  uint8_t local_68 [72];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,0xf,local_128);
  make_GLSL_srcarg_string_constprop_72(arg1,1,0xf,local_e8);
  make_GLSL_srcarg_string_constprop_72(arg1,2,0xf,local_a8);
  make_GLSL_srcarg_string_constprop_72(arg1,3,0xf,local_68);
  make_GLSL_destarg_assign
            (arg1,local_1a8,0x80,"vec3(dot(%s, %s), dot(%s, %s), dot(%s, %s))",local_128,local_e8
             ,local_128,local_a8,local_128,local_68);
  output_line(arg1,"%s",local_1a8);
  return;
}

/* ======================================================================
 * emit_GLSL_DP4  (Ghidra `emit_GLSL_DP4` @ 005222a0)
 * Signature: uint8_t emit_GLSL_DP4(void)
 * Calls: `emit_GLSL_dotprod`, `make_GLSL_srcarg_string_constprop_72`
 * Called by: (none)
 */
void emit_GLSL_DP4(uint64_t arg1)

{
  uint8_t auStack_88 [64];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,0xf,auStack_88);
  make_GLSL_srcarg_string_constprop_72(arg1,1,0xf,local_48);
  emit_GLSL_dotprod(arg1,auStack_88,local_48,"");
  return;
}

/* ======================================================================
 * emit_GLSL_M3X4  (Ghidra `emit_GLSL_M3X4` @ 005222f0)
 * Signature: uint8_t emit_GLSL_M3X4(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_M3X4(uint64_t arg1)

{
  uint8_t local_1e8 [128];
  uint8_t local_168 [64];
  uint8_t local_128 [64];
  uint8_t local_e8 [64];
  uint8_t local_a8 [64];
  uint8_t local_68 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,7,local_168);
  make_GLSL_srcarg_string_constprop_72(arg1,1,7,local_128);
  make_GLSL_srcarg_string_constprop_72(arg1,2,7,local_e8);
  make_GLSL_srcarg_string_constprop_72(arg1,3,7,local_a8);
  make_GLSL_srcarg_string_constprop_72(arg1,4,7,local_68);
  make_GLSL_destarg_assign
            (arg1,local_1e8,0x80,"vec4(dot(%s, %s), dot(%s, %s), dot(%s, %s), dot(%s, %s))",
             local_168,local_128,local_168,local_e8,local_168,local_a8,local_168,local_68);
  output_line(arg1,"%s",local_1e8);
  return;
}

/* ======================================================================
 * emit_GLSL_M3X3  (Ghidra `emit_GLSL_M3X3` @ 00522420)
 * Signature: uint8_t emit_GLSL_M3X3(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_M3X3(uint64_t arg1)

{
  uint8_t local_1a8 [128];
  uint8_t local_128 [64];
  uint8_t local_e8 [64];
  uint8_t local_a8 [64];
  uint8_t local_68 [72];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,7,local_128);
  make_GLSL_srcarg_string_constprop_72(arg1,1,7,local_e8);
  make_GLSL_srcarg_string_constprop_72(arg1,2,7,local_a8);
  make_GLSL_srcarg_string_constprop_72(arg1,3,7,local_68);
  make_GLSL_destarg_assign
            (arg1,local_1a8,0x80,"vec3(dot(%s, %s), dot(%s, %s), dot(%s, %s))",local_128,local_e8
             ,local_128,local_a8,local_128,local_68);
  output_line(arg1,"%s",local_1a8);
  return;
}

/* ======================================================================
 * emit_GLSL_M3X2  (Ghidra `emit_GLSL_M3X2` @ 00522520)
 * Signature: uint8_t emit_GLSL_M3X2(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_M3X2(uint64_t arg1)

{
  uint8_t local_158 [128];
  uint8_t local_d8 [64];
  uint8_t local_98 [64];
  uint8_t local_58 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,7,local_d8);
  make_GLSL_srcarg_string_constprop_72(arg1,1,7,local_98);
  make_GLSL_srcarg_string_constprop_72(arg1,2,7,local_58);
  make_GLSL_destarg_assign
            (arg1,local_158,0x80,"vec2(dot(%s, %s), dot(%s, %s))",local_d8,local_98,local_d8,
             local_58);
  output_line(arg1,"%s",local_158);
  return;
}

/* ======================================================================
 * emit_GLSL_CRS  (Ghidra `emit_GLSL_CRS` @ 005225f0)
 * Signature: uint8_t emit_GLSL_CRS(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_CRS(uint64_t arg1)

{
  uint8_t auStack_108 [128];
  uint8_t local_88 [64];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,7,local_88);
  make_GLSL_srcarg_string_constprop_72(arg1,1,7,local_48);
  make_GLSL_destarg_assign(arg1,auStack_108,0x80,"cross(%s, %s)",local_88,local_48);
  output_line(arg1,"%s",auStack_108);
  return;
}

/* ======================================================================
 * emit_GLSL_DP3  (Ghidra `emit_GLSL_DP3` @ 00522670)
 * Signature: uint8_t emit_GLSL_DP3(void)
 * Calls: `emit_GLSL_dotprod`, `make_GLSL_srcarg_string_constprop_72`
 * Called by: (none)
 */
void emit_GLSL_DP3(uint64_t arg1)

{
  uint8_t auStack_88 [64];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,7,auStack_88);
  make_GLSL_srcarg_string_constprop_72(arg1,1,7,local_48);
  emit_GLSL_dotprod(arg1,auStack_88,local_48,"");
  return;
}

/* ======================================================================
 * emit_GLSL_MOV  (Ghidra `emit_GLSL_MOV` @ 005226c0)
 * Signature: uint8_t emit_GLSL_MOV(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_MOV(long arg1)

{
  uint8_t auStack_c8 [128];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_c8,0x80,"%s",local_48);
  output_line(arg1,"%s",auStack_c8);
  return;
}

/* ======================================================================
 * emit_GLSL_ADD  (Ghidra `emit_GLSL_ADD` @ 00522720)
 * Signature: uint8_t emit_GLSL_ADD(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_ADD(long arg1)

{
  uint8_t auStack_108 [128];
  uint8_t local_88 [64];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_88);
  make_GLSL_srcarg_string_constprop_72(arg1,1,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_108,0x80,"%s + %s",local_88,local_48);
  output_line(arg1,"%s",auStack_108);
  return;
}

/* ======================================================================
 * emit_GLSL_SUB  (Ghidra `emit_GLSL_SUB` @ 005227a0)
 * Signature: uint8_t emit_GLSL_SUB(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_SUB(long arg1)

{
  uint8_t auStack_108 [128];
  uint8_t local_88 [64];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_88);
  make_GLSL_srcarg_string_constprop_72(arg1,1,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_108,0x80,"%s - %s",local_88,local_48);
  output_line(arg1,"%s",auStack_108);
  return;
}

/* ======================================================================
 * emit_GLSL_MAD  (Ghidra `emit_GLSL_MAD` @ 00522820)
 * Signature: uint8_t emit_GLSL_MAD(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_MAD(long arg1)

{
  uint8_t local_158 [128];
  uint8_t local_d8 [64];
  uint8_t local_98 [64];
  uint8_t local_58 [72];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_d8);
  make_GLSL_srcarg_string_constprop_72(arg1,1,*(uint32_t *)(arg1 + 0xe8),local_98);
  make_GLSL_srcarg_string_constprop_72(arg1,2,*(uint32_t *)(arg1 + 0xe8),local_58);
  make_GLSL_destarg_assign(arg1,local_158,0x80,"(%s * %s) + %s",local_d8,local_98,local_58);
  output_line(arg1,"%s",local_158);
  return;
}

/* ======================================================================
 * emit_GLSL_MUL  (Ghidra `emit_GLSL_MUL` @ 005228d0)
 * Signature: uint8_t emit_GLSL_MUL(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_MUL(long arg1)

{
  uint8_t auStack_108 [128];
  uint8_t local_88 [64];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_88);
  make_GLSL_srcarg_string_constprop_72(arg1,1,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_108,0x80,"%s * %s",local_88,local_48);
  output_line(arg1,"%s",auStack_108);
  return;
}

/* ======================================================================
 * emit_GLSL_RCP  (Ghidra `emit_GLSL_RCP` @ 00522950)
 * Signature: uint8_t emit_GLSL_RCP(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_RCP(long arg1)

{
  uint8_t auStack_c8 [128];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_c8,0x80,"1.0 / %s",local_48);
  output_line(arg1,"%s",auStack_c8);
  return;
}

/* ======================================================================
 * emit_GLSL_RSQ  (Ghidra `emit_GLSL_RSQ` @ 005229b0)
 * Signature: uint8_t emit_GLSL_RSQ(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_RSQ(long arg1)

{
  uint8_t auStack_c8 [128];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_c8,0x80,"inversesqrt(%s)",local_48);
  output_line(arg1,"%s",auStack_c8);
  return;
}

/* ======================================================================
 * emit_GLSL_MIN  (Ghidra `emit_GLSL_MIN` @ 00522a10)
 * Signature: uint8_t emit_GLSL_MIN(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_MIN(long arg1)

{
  uint8_t auStack_108 [128];
  uint8_t local_88 [64];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_88);
  make_GLSL_srcarg_string_constprop_72(arg1,1,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_108,0x80,"min(%s, %s)",local_88,local_48);
  output_line(arg1,"%s",auStack_108);
  return;
}

/* ======================================================================
 * emit_GLSL_MAX  (Ghidra `emit_GLSL_MAX` @ 00522a90)
 * Signature: uint8_t emit_GLSL_MAX(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_MAX(long arg1)

{
  uint8_t auStack_108 [128];
  uint8_t local_88 [64];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_88);
  make_GLSL_srcarg_string_constprop_72(arg1,1,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_108,0x80,"max(%s, %s)",local_88,local_48);
  output_line(arg1,"%s",auStack_108);
  return;
}

/* ======================================================================
 * emit_GLSL_SLT  (Ghidra `emit_GLSL_SLT` @ 00522b10)
 * Signature: uint8_t emit_GLSL_SLT(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_SLT(long arg1)

{
  uint uVar1;
  int iVar2;
  uint8_t local_118 [128];
  uint8_t local_98 [64];
  uint8_t local_58 [64];
  
  uVar1 = *(uint *)(arg1 + 0xe8);
  iVar2 = (uVar1 & 1) + ((int)uVar1 >> 1 & 1U) + ((int)uVar1 >> 2 & 1U) + ((int)uVar1 >> 3 & 1U);
  make_GLSL_srcarg_string_constprop_72(arg1,0,uVar1,local_98);
  make_GLSL_srcarg_string_constprop_72(arg1,1,*(uint32_t *)(arg1 + 0xe8),local_58);
  if (iVar2 == 1) {
    make_GLSL_destarg_assign(arg1,local_118,0x80,"float(%s < %s)",local_98,local_58);
  }
  else {
    make_GLSL_destarg_assign
              (arg1,local_118,0x80,"vec%d(lessThan(%s, %s))",iVar2,local_98,local_58);
  }
  output_line(arg1,"%s",local_118);
  return;
}

/* ======================================================================
 * emit_GLSL_SGE  (Ghidra `emit_GLSL_SGE` @ 00522c00)
 * Signature: uint8_t emit_GLSL_SGE(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_SGE(long arg1)

{
  uint uVar1;
  int iVar2;
  uint8_t local_118 [128];
  uint8_t local_98 [64];
  uint8_t local_58 [64];
  
  uVar1 = *(uint *)(arg1 + 0xe8);
  iVar2 = (uVar1 & 1) + ((int)uVar1 >> 1 & 1U) + ((int)uVar1 >> 2 & 1U) + ((int)uVar1 >> 3 & 1U);
  make_GLSL_srcarg_string_constprop_72(arg1,0,uVar1,local_98);
  make_GLSL_srcarg_string_constprop_72(arg1,1,*(uint32_t *)(arg1 + 0xe8),local_58);
  if (iVar2 == 1) {
    make_GLSL_destarg_assign(arg1,local_118,0x80,"float(%s >= %s)",local_98,local_58);
  }
  else {
    make_GLSL_destarg_assign
              (arg1,local_118,0x80,"vec%d(greaterThanEqual(%s, %s))",iVar2,local_98,local_58);
  }
  output_line(arg1,"%s",local_118);
  return;
}

/* ======================================================================
 * emit_GLSL_EXP  (Ghidra `emit_GLSL_EXP` @ 00522cf0)
 * Signature: uint8_t emit_GLSL_EXP(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_EXP(long arg1)

{
  uint8_t auStack_c8 [128];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_c8,0x80,"exp2(%s)",local_48);
  output_line(arg1,"%s",auStack_c8);
  return;
}

/* ======================================================================
 * emit_GLSL_LOG  (Ghidra `emit_GLSL_LOG` @ 00522d50)
 * Signature: uint8_t emit_GLSL_LOG(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_LOG(long arg1)

{
  uint8_t auStack_c8 [128];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_c8,0x80,"log2(%s)",local_48);
  output_line(arg1,"%s",auStack_c8);
  return;
}

/* ======================================================================
 * emit_GLSL_LRP  (Ghidra `emit_GLSL_LRP` @ 00522db0)
 * Signature: uint8_t emit_GLSL_LRP(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_LRP(long arg1)

{
  uint8_t local_158 [128];
  uint8_t local_d8 [64];
  uint8_t local_98 [64];
  uint8_t local_58 [72];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_d8);
  make_GLSL_srcarg_string_constprop_72(arg1,1,*(uint32_t *)(arg1 + 0xe8),local_98);
  make_GLSL_srcarg_string_constprop_72(arg1,2,*(uint32_t *)(arg1 + 0xe8),local_58);
  make_GLSL_destarg_assign(arg1,local_158,0x80,"mix(%s, %s, %s)",local_58,local_98,local_d8);
  output_line(arg1,"%s",local_158);
  return;
}

/* ======================================================================
 * emit_GLSL_FRC  (Ghidra `emit_GLSL_FRC` @ 00522e60)
 * Signature: uint8_t emit_GLSL_FRC(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_FRC(long arg1)

{
  uint8_t auStack_c8 [128];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_c8,0x80,"fract(%s)",local_48);
  output_line(arg1,"%s",auStack_c8);
  return;
}

/* ======================================================================
 * emit_GLSL_POW  (Ghidra `emit_GLSL_POW` @ 00522ec0)
 * Signature: uint8_t emit_GLSL_POW(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_POW(long arg1)

{
  uint8_t auStack_108 [128];
  uint8_t local_88 [64];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_88);
  make_GLSL_srcarg_string_constprop_72(arg1,1,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_108,0x80,"pow(abs(%s), %s)",local_88,local_48);
  output_line(arg1,"%s",auStack_108);
  return;
}

/* ======================================================================
 * emit_GLSL_SGN  (Ghidra `emit_GLSL_SGN` @ 00522f40)
 * Signature: uint8_t emit_GLSL_SGN(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_SGN(long arg1)

{
  uint8_t auStack_c8 [128];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_c8,0x80,"sign(%s)",local_48);
  output_line(arg1,"%s",auStack_c8);
  return;
}

/* ======================================================================
 * emit_GLSL_ABS  (Ghidra `emit_GLSL_ABS` @ 00522fa0)
 * Signature: uint8_t emit_GLSL_ABS(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_ABS(long arg1)

{
  uint8_t auStack_c8 [128];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_c8,0x80,"abs(%s)",local_48);
  output_line(arg1,"%s",auStack_c8);
  return;
}

/* ======================================================================
 * emit_GLSL_NRM  (Ghidra `emit_GLSL_NRM` @ 00523000)
 * Signature: uint8_t emit_GLSL_NRM(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_NRM(long arg1)

{
  uint8_t auStack_c8 [128];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_c8,0x80,"normalize(%s)",local_48);
  output_line(arg1,"%s",auStack_c8);
  return;
}

/* ======================================================================
 * emit_GLSL_MOVA  (Ghidra `emit_GLSL_MOVA` @ 00523060)
 * Signature: uint8_t emit_GLSL_MOVA(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_MOVA(long arg1)

{
  uint uVar1;
  int iVar2;
  uint8_t local_d8 [128];
  uint8_t local_58 [64];
  
  uVar1 = *(uint *)(arg1 + 0xe8);
  iVar2 = (uVar1 & 1) + ((int)uVar1 >> 1 & 1U) + ((int)uVar1 >> 2 & 1U) + ((int)uVar1 >> 3 & 1U);
  make_GLSL_srcarg_string_constprop_72(arg1,0,uVar1,local_58);
  if (iVar2 == 1) {
    make_GLSL_destarg_assign(arg1,local_d8,0x80,"int(floor(abs(%s) + 0.5) * sign(%s))",local_58);
  }
  else {
    make_GLSL_destarg_assign
              (arg1,local_d8,0x80,"ivec%d(floor(abs(%s) + vec%d(0.5)) * sign(%s))",iVar2,local_58
               ,iVar2,local_58);
  }
  output_line(arg1,"%s",local_d8);
  return;
}

/* ======================================================================
 * emit_GLSL_DSX  (Ghidra `emit_GLSL_DSX` @ 00523150)
 * Signature: uint8_t emit_GLSL_DSX(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_DSX(long arg1)

{
  uint8_t auStack_c8 [128];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_c8,0x80,"dFdx(%s)",local_48);
  output_line(arg1,"%s",auStack_c8);
  return;
}

/* ======================================================================
 * emit_GLSL_DSY  (Ghidra `emit_GLSL_DSY` @ 005231b0)
 * Signature: uint8_t emit_GLSL_DSY(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_DSY(long arg1)

{
  uint8_t auStack_c8 [128];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_c8,0x80,"dFdy(%s)",local_48);
  output_line(arg1,"%s",auStack_c8);
  return;
}

/* ======================================================================
 * emit_GLSL_CALL  (Ghidra `emit_GLSL_CALL` @ 00523210)
 * Signature: uint8_t emit_GLSL_CALL(void)
 * Calls: `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_CALL(long arg1)

{
  uint8_t auStack_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),auStack_48);
  if (0 < *(int *)(arg1 + 0x2b0)) {
    output_line(arg1,"%s(aL);",auStack_48);
    return;
  }
  output_line(arg1,"%s();",auStack_48);
  return;
}

/* ======================================================================
 * emit_GLSL_CALLNZ  (Ghidra `emit_GLSL_CALLNZ` @ 00523270)
 * Signature: uint8_t emit_GLSL_CALLNZ(void)
 * Calls: `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_CALLNZ(long arg1)

{
  uint8_t auStack_88 [64];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),auStack_88);
  make_GLSL_srcarg_string_constprop_72(arg1,1,*(uint32_t *)(arg1 + 0xe8),local_48);
  if (0 < *(int *)(arg1 + 0x2b0)) {
    output_line(arg1,"if (%s) { %s(aL); }",local_48,auStack_88);
    return;
  }
  output_line(arg1,"if (%s) { %s(); }",local_48,auStack_88);
  return;
}

/* ======================================================================
 * emit_GLSL_EXPP  (Ghidra `emit_GLSL_EXPP` @ 005232f0)
 * Signature: uint8_t emit_GLSL_EXPP(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_EXPP(long arg1)

{
  uint8_t auStack_c8 [128];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_c8,0x80,"exp2(%s)",local_48);
  output_line(arg1,"%s",auStack_c8);
  return;
}

/* ======================================================================
 * emit_GLSL_LOGP  (Ghidra `emit_GLSL_LOGP` @ 00523350)
 * Signature: uint8_t emit_GLSL_LOGP(void)
 * Calls: `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_LOGP(long arg1)

{
  uint8_t auStack_c8 [128];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,*(uint32_t *)(arg1 + 0xe8),local_48);
  make_GLSL_destarg_assign(arg1,auStack_c8,0x80,"log2(%s)",local_48);
  output_line(arg1,"%s",auStack_c8);
  return;
}

/* ======================================================================
 * make_D3D_srcarg_string_in_buf  (Ghidra `make_D3D_srcarg_string_in_buf` @ 005233b0)
 * Signature: uint8_t make_D3D_srcarg_string_in_buf(void)
 * Calls: `failf`, `get_D3D_register_string_constprop_65`, `snprintf`
 * Called by: `emit_D3D_TEXLDD`, `emit_D3D_opcode_ds`, `emit_D3D_opcode_dss`, `emit_D3D_opcode_dsss`, `emit_D3D_opcode_dssss_constprop_60`, `emit_D3D_opcode_s`, `emit_D3D_opcode_ss`, `make_D3D_destarg_string_constprop_70`
 */
char * make_D3D_srcarg_string_in_buf(long arg1,long arg2,char *arg3,size_t arg4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  bool bVar11;
  char *local_88;
  uint8_t local_78 [16];
  uint64_t local_68;
  uint64_t local_60;
  char local_58 [4];
  char local_54;
  uint32_t local_48;
  
  pcVar10 = "";
  local_88 = "";
  uVar2 = *(int *)(arg2 + 0x20) - 1;
  if (uVar2 < 0xd) {
    local_88 = *(char **)(CSWTCH_98 + (ulong)uVar2 * 8);
    pcVar10 = *(char **)(CSWTCH_99 + (ulong)uVar2 * 8);
  }
  lVar3 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg2 + 0x24),*(uint32_t *)(arg2 + 8),local_78);
  if (lVar3 == 0) {
    failf(arg1,"%s","Unknown source register type.");
    *arg3 = '\0';
    return arg3;
  }
  local_48 = 0;
  local_68 = 0;
  local_60 = 0;
  if (*(int *)(arg2 + 0x28) == 0) {
    pcVar4 = "";
    pcVar8 = "";
    pcVar7 = "";
  }
  else {
    local_48 = (uint)CONCAT11(*(uint8_t *)
                               ((long)&swizzle_channels + (long)*(int *)(arg2 + 0x34)),0x2e);
    pcVar4 = (char *)get_D3D_register_string_constprop_65
                               (arg1,*(uint32_t *)(arg2 + 0x2c),
                                *(uint32_t *)(arg2 + 0x30),&local_68);
    pcVar8 = "]";
    pcVar7 = "[";
  }
  if (((*(int *)(arg2 + 0x24) == 6) && (*(int *)(arg1 + 0x488) != 0)) &&
     (puVar6 = *(uint **)(arg1 + 0x420), puVar6 != (uint *)0x0)) {
    uVar2 = *(int *)(arg2 + 8) << 0x10 | 6;
    uVar9 = puVar6[1] << 0x10 | *puVar6;
    if (uVar2 == uVar9) {
LAB_00523698:
      bVar11 = puVar6[2] == 4;
      goto LAB_005235e1;
    }
    if (uVar2 < uVar9) goto switchD_00523481_switchD;
    do {
      puVar6 = *(uint **)(puVar6 + 8);
      if (puVar6 == (uint *)0x0) break;
      uVar9 = puVar6[1] << 0x10 | *puVar6;
      if (uVar2 == uVar9) goto LAB_00523698;
    } while (uVar9 <= uVar2);
  }
  else {
switchD_00523481_switchD:
    switch(*(int *)(arg2 + 0x24)) {
    case 9:
    case 0xe:
    case 0xf:
      lVar5 = 0;
      goto LAB_00523542;
    case 0x11:
      lVar5 = 0;
      if (*(int *)(arg2 + 8) == 1) goto LAB_00523542;
      break;
    case 0x13:
      bVar11 = *(int *)(arg1 + 0xd0) == 1;
LAB_005235e1:
      lVar5 = 0;
      if (bVar11) goto LAB_00523542;
    }
  }
  lVar5 = 0;
  if (*(int *)(arg2 + 0xc) != 0xe4) {
    local_58[0] = '.';
    local_58[1] = *(uint8_t *)((long)&swizzle_channels + (long)*(int *)(arg2 + 0x10));
    local_58[2] = *(uint8_t *)((long)&swizzle_channels + (long)*(int *)(arg2 + 0x14));
    local_58[3] = *(char *)((long)&swizzle_channels + (long)*(int *)(arg2 + 0x18));
    local_54 = *(char *)((long)&swizzle_channels + (long)*(int *)(arg2 + 0x1c));
    lVar5 = 5;
    cVar1 = local_54;
    while (local_58[3] == cVar1) {
      cVar1 = local_58[lVar5 + -3];
      lVar5 = lVar5 + -1;
    }
  }
LAB_00523542:
  local_58[lVar5] = '\0';
  snprintf(arg3,arg4,"%s%s%s%s%s%s%s%s%s%s",local_88,lVar3,local_78,pcVar10,pcVar7,pcVar4,
           &local_68,&local_48,pcVar8,local_58);
  return arg3;
}

/* ======================================================================
 * make_D3D_destarg_string_constprop_70  (Ghidra `make_D3D_destarg_string.constprop.70` @ 005236b0)
 * Signature: uint8_t make_D3D_destarg_string.constprop.70(void)
 * Calls: `failf`, `get_D3D_register_string_constprop_65`, `make_D3D_srcarg_string_in_buf`, `snprintf`
 * Called by: `emit_D3D_DCL`, `emit_D3D_DEF`, `emit_D3D_DEFB`, `emit_D3D_DEFI`, `emit_D3D_TEXLDD`, `emit_D3D_opcode_d`, `emit_D3D_opcode_ds`, `emit_D3D_opcode_dss`, `emit_D3D_opcode_dsss`, `emit_D3D_opcode_dssss_constprop_60`
 */
char * make_D3D_destarg_string_constprop_70(long arg1,char *arg2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  uint *puVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  char *local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint8_t local_58 [16];
  uint8_t local_48 [24];
  
  local_80 = "";
  uVar2 = *(int *)(arg1 + 0x104) - 1;
  if (uVar2 < 0xf) {
    local_80 = *(char **)(CSWTCH_108 + (ulong)uVar2 * 8);
  }
  uVar2 = *(uint *)(arg1 + 0x100);
  pcVar9 = "_sat";
  pcVar11 = "_pp";
  pcVar12 = "_centroid";
  if ((uVar2 & 1) == 0) {
    pcVar9 = "";
  }
  if ((uVar2 & 2) == 0) {
    pcVar11 = "";
  }
  if ((uVar2 & 4) == 0) {
    pcVar12 = "";
  }
  lVar3 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x108),*(uint32_t *)(arg1 + 0xe0),
                     local_58);
  if (lVar3 == 0) {
    failf(arg1,"%s","Unknown destination register type.");
    *arg2 = '\0';
    return arg2;
  }
  if (((*(int *)(arg1 + 0x108) == 6) && (*(int *)(arg1 + 0x488) != 0)) &&
     (puVar8 = *(uint **)(arg1 + 0x420), puVar8 != (uint *)0x0)) {
    uVar2 = *(int *)(arg1 + 0xe0) << 0x10 | 6;
    uVar10 = puVar8[1] << 0x10 | *puVar8;
    if (uVar2 == uVar10) {
LAB_005239e8:
      bVar13 = puVar8[2] == 4;
      goto LAB_005238d8;
    }
    if (uVar2 < uVar10) goto switchD_005238c0_switchD;
    do {
      puVar8 = *(uint **)(puVar8 + 8);
      if (puVar8 == (uint *)0x0) break;
      uVar10 = puVar8[1] << 0x10 | *puVar8;
      if (uVar2 == uVar10) goto LAB_005239e8;
    } while (uVar10 <= uVar2);
  }
  else {
switchD_005238c0_switchD:
    switch(*(int *)(arg1 + 0x108)) {
    case 9:
    case 0xe:
    case 0xf:
      lVar4 = 0;
      goto LAB_005237f0;
    case 0x11:
      lVar4 = 0;
      if (*(int *)(arg1 + 0xe0) == 1) goto LAB_005237f0;
      break;
    case 0x13:
      bVar13 = *(int *)(arg1 + 0xd0) == 1;
LAB_005238d8:
      lVar4 = 0;
      if (bVar13) goto LAB_005237f0;
    }
  }
  lVar4 = 0;
  if (*(int *)(arg1 + 0xe8) != 0xf) {
    local_48[0] = 0x2e;
    lVar6 = 2;
    lVar4 = 1;
    if (*(int *)(arg1 + 0xec) != 0) {
      local_48[1] = 0x78;
      lVar6 = 3;
      lVar4 = 2;
    }
    if (*(int *)(arg1 + 0xf0) != 0) {
      local_48[lVar4] = 0x79;
      lVar4 = lVar6;
    }
    if (*(int *)(arg1 + 0xf4) != 0) {
      local_48[lVar4] = 0x7a;
      lVar4 = lVar4 + 1;
    }
    if (*(int *)(arg1 + 0xf8) != 0) {
      local_48[lVar4] = 0x77;
      lVar4 = lVar4 + 1;
    }
  }
LAB_005237f0:
  iVar1 = *(int *)(arg1 + 0x484);
  local_48[lVar4] = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  if (iVar1 == 0) {
    pcVar5 = "";
    pcVar7 = "";
  }
  else {
    make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x250,&local_78,0x20);
    pcVar5 = ") ";
    pcVar7 = "(";
  }
  snprintf(arg2,0x40,"%s%s%s%s %s%s%s%s%s%s",local_80,pcVar9,pcVar11,pcVar12,pcVar7,&local_78,
           pcVar5,lVar3,local_58,local_48);
  return arg2;
}

/* ======================================================================
 * emit_D3D_DCL  (Ghidra `emit_D3D_DCL` @ 00523a00)
 * Signature: uint8_t emit_D3D_DCL(void)
 * Calls: `failf`, `make_D3D_destarg_string_constprop_70`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_D3D_DCL(long arg1)

{
  int iVar1;
  char *pcVar2;
  uint8_t auStack_68 [64];
  char local_28 [16];
  
  make_D3D_destarg_string_constprop_70(arg1,auStack_68);
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  if (*(int *)(arg1 + 0x108) == 10) {
    iVar1 = *(int *)(arg1 + 0x290);
    if (iVar1 == 3) {
      pcVar2 = "_cube";
    }
    else if (iVar1 == 4) {
      pcVar2 = "_volume";
    }
    else {
      pcVar2 = "_2d";
      if (iVar1 != 2) {
        failf(arg1,"%s","unknown sampler texture type");
        return;
      }
    }
  }
  else if (*(int *)(arg1 + 0x108) == 0x11) {
    pcVar2 = "";
    if (1 < *(uint *)(arg1 + 0xe0)) {
      failf(arg1,"%s","unknown misc register type");
      return;
    }
  }
  else {
    pcVar2 = *(char **)(usagestrs + (ulong)*(uint *)(arg1 + 0x290) * 8);
    if (*(int *)(arg1 + 0x294) != 0) {
      snprintf(local_28,0x10,"%u");
    }
  }
  output_line(arg1,"dcl%s%s%s",pcVar2,local_28,auStack_68);
  return;
}

/* ======================================================================
 * emit_D3D_DEFB  (Ghidra `emit_D3D_DEFB` @ 00523b60)
 * Signature: uint8_t emit_D3D_DEFB(void)
 * Calls: `make_D3D_destarg_string_constprop_70`, `output_line`
 * Called by: (none)
 */
void emit_D3D_DEFB(long arg1)

{
  char *pcVar1;
  uint8_t auStack_48 [64];
  
  make_D3D_destarg_string_constprop_70(arg1,auStack_48);
  pcVar1 = "true";
  if (*(int *)(arg1 + 0x290) == 0) {
    pcVar1 = "false";
  }
  output_line(arg1,"defb%s, %s",auStack_48,pcVar1);
  return;
}

/* ======================================================================
 * emit_D3D_DEFI  (Ghidra `emit_D3D_DEFI` @ 00523ba0)
 * Signature: uint8_t emit_D3D_DEFI(void)
 * Calls: `make_D3D_destarg_string_constprop_70`, `output_line`
 * Called by: (none)
 */
void emit_D3D_DEFI(long arg1)

{
  uint8_t local_48 [64];
  
  make_D3D_destarg_string_constprop_70(arg1,local_48);
  output_line(arg1,"defi%s, %d, %d, %d, %d",local_48,*(uint32_t *)(arg1 + 0x290),
              *(uint32_t *)(arg1 + 0x294),*(uint32_t *)(arg1 + 0x298),
              *(uint32_t *)(arg1 + 0x29c));
  return;
}

/* ======================================================================
 * emit_D3D_DEF  (Ghidra `emit_D3D_DEF` @ 00523bf0)
 * Signature: uint8_t emit_D3D_DEF(void)
 * Calls: `floatstr_constprop_59`, `make_D3D_destarg_string_constprop_70`, `output_line`
 * Called by: (none)
 */
void emit_D3D_DEF(long arg1)

{
  uint8_t local_d8 [64];
  uint8_t local_98 [32];
  uint8_t local_78 [32];
  uint8_t local_58 [32];
  uint8_t local_38 [40];
  
  make_D3D_destarg_string_constprop_70(arg1,local_d8);
  floatstr_constprop_59(*(uint32_t *)(arg1 + 0x290),arg1,local_98,0);
  floatstr_constprop_59(*(uint32_t *)(arg1 + 0x294),arg1,local_78,0);
  floatstr_constprop_59(*(uint32_t *)(arg1 + 0x298),arg1,local_58,0);
  floatstr_constprop_59(*(uint32_t *)(arg1 + 0x29c),arg1,local_38,0);
  output_line(arg1,"def%s, %s, %s, %s, %s",local_d8,local_98,local_78,local_58,local_38);
  return;
}

/* ======================================================================
 * emit_D3D_opcode_d  (Ghidra `emit_D3D_opcode_d` @ 00523ca0)
 * Signature: uint8_t emit_D3D_opcode_d(void)
 * Calls: `make_D3D_destarg_string_constprop_70`, `output_line`, `strlen`
 * Called by: `emit_D3D_TEXCRD`, `emit_D3D_TEXDEPTH`, `emit_D3D_TEXKILL`, `emit_D3D_TEXLD`
 */
void emit_D3D_opcode_d(uint64_t arg1,char *arg2)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  char cVar6;
  uint64_t uStack_60;
  uint8_t local_58 [8];
  char acStack_50 [56];
  
  uStack_60 = 0x523cba;
  make_D3D_destarg_string_constprop_70(arg1,local_58);
  uStack_60 = 0x523cc2;
  sVar4 = strlen(arg2);
  lVar3 = -(sVar4 + 0x1f & 0xfffffffffffffff0);
  lVar5 = 0;
  do {
    cVar2 = arg2[lVar5];
    cVar6 = cVar2 + ' ';
    if (0x19 < (byte)(cVar2 + 0xbfU)) {
      cVar6 = cVar2;
    }
    (acStack_50 + lVar3)[lVar5] = cVar6;
    pcVar1 = arg2 + lVar5;
    lVar5 = lVar5 + 1;
  } while (*pcVar1 != '\0');
  *(uint64_t *)(local_58 + lVar3 + -8) = 0x523d15;
  output_line(arg1,"%s%s",acStack_50 + lVar3,local_58);
  return;
}

/* ======================================================================
 * emit_D3D_TEXDEPTH  (Ghidra `emit_D3D_TEXDEPTH` @ 00523d20)
 * Signature: uint8_t emit_D3D_TEXDEPTH(void)
 * Calls: `emit_D3D_opcode_d`
 * Called by: (none)
 */
void emit_D3D_TEXDEPTH(uint64_t arg1)

{
  emit_D3D_opcode_d(arg1,"TEXDEPTH");
  return;
}

/* ======================================================================
 * emit_D3D_TEXKILL  (Ghidra `emit_D3D_TEXKILL` @ 00523d30)
 * Signature: uint8_t emit_D3D_TEXKILL(void)
 * Calls: `emit_D3D_opcode_d`
 * Called by: (none)
 */
void emit_D3D_TEXKILL(uint64_t arg1)

{
  emit_D3D_opcode_d(arg1,"TEXKILL");
  return;
}

/* ======================================================================
 * emit_D3D_opcode_s  (Ghidra `emit_D3D_opcode_s` @ 00523d40)
 * Signature: uint8_t emit_D3D_opcode_s(void)
 * Calls: `make_D3D_srcarg_string_in_buf`, `output_line`, `strlen`
 * Called by: `emit_D3D_BREAKP`, `emit_D3D_CALL`, `emit_D3D_IF`, `emit_D3D_LABEL`, `emit_D3D_REP`
 */
void emit_D3D_opcode_s(long arg1,char *arg2)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  char cVar6;
  uint64_t uStack_60;
  uint8_t local_58 [8];
  char acStack_50 [56];
  
  uStack_60 = 0x523d66;
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x110,local_58,0x40);
  uStack_60 = 0x523d6e;
  sVar4 = strlen(arg2);
  lVar3 = -(sVar4 + 0x1f & 0xfffffffffffffff0);
  lVar5 = 0;
  do {
    cVar2 = arg2[lVar5];
    cVar6 = cVar2 + ' ';
    if (0x19 < (byte)(cVar2 + 0xbfU)) {
      cVar6 = cVar2;
    }
    (acStack_50 + lVar3)[lVar5] = cVar6;
    pcVar1 = arg2 + lVar5;
    lVar5 = lVar5 + 1;
  } while (*pcVar1 != '\0');
  *(uint64_t *)(local_58 + lVar3 + -8) = 0x523dbb;
  output_line(arg1,"%s %s",acStack_50 + lVar3,local_58);
  return;
}

/* ======================================================================
 * emit_D3D_BREAKP  (Ghidra `emit_D3D_BREAKP` @ 00523dd0)
 * Signature: uint8_t emit_D3D_BREAKP(void)
 * Calls: `emit_D3D_opcode_s`
 * Called by: (none)
 */
void emit_D3D_BREAKP(uint64_t arg1)

{
  emit_D3D_opcode_s(arg1,"BREAKP");
  return;
}

/* ======================================================================
 * emit_D3D_IF  (Ghidra `emit_D3D_IF` @ 00523de0)
 * Signature: uint8_t emit_D3D_IF(void)
 * Calls: `emit_D3D_opcode_s`
 * Called by: (none)
 */
void emit_D3D_IF(uint64_t arg1)

{
  emit_D3D_opcode_s(arg1,"IF");
  return;
}

/* ======================================================================
 * emit_D3D_REP  (Ghidra `emit_D3D_REP` @ 00523df0)
 * Signature: uint8_t emit_D3D_REP(void)
 * Calls: `emit_D3D_opcode_s`
 * Called by: (none)
 */
void emit_D3D_REP(uint64_t arg1)

{
  emit_D3D_opcode_s(arg1,"REP");
  return;
}

/* ======================================================================
 * emit_D3D_LABEL  (Ghidra `emit_D3D_LABEL` @ 00523e00)
 * Signature: uint8_t emit_D3D_LABEL(void)
 * Calls: `emit_D3D_opcode_s`
 * Called by: (none)
 */
void emit_D3D_LABEL(uint64_t arg1)

{
  emit_D3D_opcode_s(arg1,"LABEL");
  return;
}

/* ======================================================================
 * emit_D3D_CALL  (Ghidra `emit_D3D_CALL` @ 00523e10)
 * Signature: uint8_t emit_D3D_CALL(void)
 * Calls: `emit_D3D_opcode_s`
 * Called by: (none)
 */
void emit_D3D_CALL(uint64_t arg1)

{
  emit_D3D_opcode_s(arg1,&DAT_005c9c06 /* R:"CALL" */);
  return;
}

/* ======================================================================
 * emit_D3D_opcode_dssss_constprop_60  (Ghidra `emit_D3D_opcode_dssss.constprop.60` @ 00523e20)
 * Signature: uint8_t emit_D3D_opcode_dssss.constprop.60(void)
 * Calls: `make_D3D_destarg_string_constprop_70`, `make_D3D_srcarg_string_in_buf`, `output_line`
 * Called by: (none)
 */
void emit_D3D_opcode_dssss_constprop_60(long arg1)

{
  char cVar1;
  long lVar2;
  char local_180 [24];
  uint8_t local_168 [64];
  uint8_t local_128 [64];
  uint8_t local_e8 [64];
  uint8_t local_a8 [64];
  uint8_t local_68 [72];
  
  builtin_strncpy(local_180,"J>R",4);
  local_180[4] = '\0';
  local_180[5] = '\0';
  local_180[6] = '\0';
  local_180[7] = '\0';
  make_D3D_destarg_string_constprop_70(arg1,local_168);
  builtin_strncpy(local_180,"e>R",4);
  local_180[4] = '\0';
  local_180[5] = '\0';
  local_180[6] = '\0';
  local_180[7] = '\0';
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x110,local_128,0x40);
  local_180[0] = -0x80;
  local_180[1] = '>';
  local_180[2] = 'R';
  local_180[3] = '\0';
  local_180[4] = '\0';
  local_180[5] = '\0';
  local_180[6] = '\0';
  local_180[7] = '\0';
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x150,local_e8,0x40);
  local_180[0] = -0x69;
  local_180[1] = '>';
  local_180[2] = 'R';
  local_180[3] = '\0';
  local_180[4] = '\0';
  local_180[5] = '\0';
  local_180[6] = '\0';
  local_180[7] = '\0';
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 400,local_a8,0x40);
  local_180[0] = -0x52;
  local_180[1] = '>';
  local_180[2] = 'R';
  local_180[3] = '\0';
  local_180[4] = '\0';
  local_180[5] = '\0';
  local_180[6] = '\0';
  local_180[7] = '\0';
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x1d0,local_68,0x40);
  lVar2 = 0;
  do {
    cVar1 = (&DAT_005ca49a /* R:"TEXLDD" */)[lVar2];
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      local_180[lVar2] = cVar1 + ' ';
    }
    else {
      local_180[lVar2] = cVar1;
      if (cVar1 == '\0') {
        output_line(arg1,"%s%s, %s, %s, %s, %s",local_180,local_168,local_128,local_e8,local_a8,
                    local_68);
        return;
      }
    }
    lVar2 = lVar2 + 1;
  } while( true );
}

/* ======================================================================
 * emit_D3D_TEXLDD  (Ghidra `emit_D3D_TEXLDD` @ 00523f20)
 * Signature: uint8_t emit_D3D_TEXLDD(void)
 * Calls: `make_D3D_destarg_string_constprop_70`, `make_D3D_srcarg_string_in_buf`, `output_line`
 * Called by: (none)
 */
void emit_D3D_TEXLDD(long arg1)

{
  char cVar1;
  long lVar2;
  char acStack_180 [24];
  uint8_t auStack_168 [64];
  uint8_t auStack_128 [64];
  uint8_t auStack_e8 [64];
  uint8_t auStack_a8 [64];
  uint8_t auStack_68 [72];
  
  builtin_strncpy(acStack_180,"J>R",4);
  acStack_180[4] = '\0';
  acStack_180[5] = '\0';
  acStack_180[6] = '\0';
  acStack_180[7] = '\0';
  make_D3D_destarg_string_constprop_70(arg1,auStack_168);
  builtin_strncpy(acStack_180,"e>R",4);
  acStack_180[4] = '\0';
  acStack_180[5] = '\0';
  acStack_180[6] = '\0';
  acStack_180[7] = '\0';
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x110,auStack_128,0x40);
  acStack_180[0] = -0x80;
  acStack_180[1] = '>';
  acStack_180[2] = 'R';
  acStack_180[3] = '\0';
  acStack_180[4] = '\0';
  acStack_180[5] = '\0';
  acStack_180[6] = '\0';
  acStack_180[7] = '\0';
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x150,auStack_e8,0x40);
  acStack_180[0] = -0x69;
  acStack_180[1] = '>';
  acStack_180[2] = 'R';
  acStack_180[3] = '\0';
  acStack_180[4] = '\0';
  acStack_180[5] = '\0';
  acStack_180[6] = '\0';
  acStack_180[7] = '\0';
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 400,auStack_a8,0x40);
  acStack_180[0] = -0x52;
  acStack_180[1] = '>';
  acStack_180[2] = 'R';
  acStack_180[3] = '\0';
  acStack_180[4] = '\0';
  acStack_180[5] = '\0';
  acStack_180[6] = '\0';
  acStack_180[7] = '\0';
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x1d0,auStack_68,0x40);
  lVar2 = 0;
  do {
    cVar1 = (&DAT_005ca49a /* R:"TEXLDD" */)[lVar2];
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      acStack_180[lVar2] = cVar1 + ' ';
    }
    else {
      acStack_180[lVar2] = cVar1;
      if (cVar1 == '\0') {
        output_line(arg1,"%s%s, %s, %s, %s, %s",acStack_180,auStack_168,auStack_128,auStack_e8,
                    auStack_a8,auStack_68);
        return;
      }
    }
    lVar2 = lVar2 + 1;
  } while( true );
}

/* ======================================================================
 * emit_D3D_opcode_dsss  (Ghidra `emit_D3D_opcode_dsss` @ 00523f30)
 * Signature: uint8_t emit_D3D_opcode_dsss(void)
 * Calls: `make_D3D_destarg_string_constprop_70`, `make_D3D_srcarg_string_in_buf`, `output_line`, `strlen`
 * Called by: `emit_D3D_CMP`, `emit_D3D_CND`, `emit_D3D_DP2ADD`, `emit_D3D_LRP`, `emit_D3D_MAD`, `emit_D3D_SGN`, `emit_D3D_SINCOS`
 */
void emit_D3D_opcode_dsss(long arg1,char *arg2)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  char cVar6;
  long alStack_140 [2];
  char acStack_130 [8];
  uint8_t local_128 [64];
  uint8_t local_e8 [64];
  uint8_t local_a8 [64];
  uint8_t local_68 [72];
  
  alStack_140[0] = 0x523f56;
  make_D3D_destarg_string_constprop_70(arg1,local_128);
  alStack_140[0] = 0x523f71;
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x110,local_e8,0x40);
  alStack_140[0] = 0x523f8c;
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x150,local_a8,0x40);
  alStack_140[0] = 0x523fa3;
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 400,local_68,0x40);
  alStack_140[0] = 0x523fab;
  sVar4 = strlen(arg2);
  lVar3 = -(sVar4 + 0x1f & 0xfffffffffffffff0);
  lVar5 = 0;
  do {
    cVar2 = arg2[lVar5];
    cVar6 = cVar2 + ' ';
    if (0x19 < (byte)(cVar2 + 0xbfU)) {
      cVar6 = cVar2;
    }
    (acStack_130 + lVar3)[lVar5] = cVar6;
    pcVar1 = arg2 + lVar5;
    lVar5 = lVar5 + 1;
  } while (*pcVar1 != '\0');
  *(uint8_t **)((long)alStack_140 + lVar3 + 8) = local_68;
  *(uint64_t *)((long)alStack_140 + lVar3) = 0x524012;
  output_line(arg1,"%s%s, %s, %s, %s",acStack_130 + lVar3,local_128,local_e8,local_a8);
  return;
}

/* ======================================================================
 * emit_D3D_DP2ADD  (Ghidra `emit_D3D_DP2ADD` @ 00524020)
 * Signature: uint8_t emit_D3D_DP2ADD(void)
 * Calls: `emit_D3D_opcode_dsss`
 * Called by: (none)
 */
void emit_D3D_DP2ADD(uint64_t arg1)

{
  emit_D3D_opcode_dsss(arg1,&DAT_005ca4c7 /* R:"DP2ADD" */);
  return;
}

/* ======================================================================
 * emit_D3D_CMP  (Ghidra `emit_D3D_CMP` @ 00524030)
 * Signature: uint8_t emit_D3D_CMP(void)
 * Calls: `emit_D3D_opcode_dsss`
 * Called by: (none)
 */
void emit_D3D_CMP(uint64_t arg1)

{
  emit_D3D_opcode_dsss(arg1,&DAT_005ca4ce /* R:7.374555974965177e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_CND  (Ghidra `emit_D3D_CND` @ 00524040)
 * Signature: uint8_t emit_D3D_CND(void)
 * Calls: `emit_D3D_opcode_dsss`
 * Called by: (none)
 */
void emit_D3D_CND(uint64_t arg1)

{
  emit_D3D_opcode_dsss(arg1,&DAT_005ca4d2 /* R:6.27288875347615e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_SGN  (Ghidra `emit_D3D_SGN` @ 00524050)
 * Signature: uint8_t emit_D3D_SGN(void)
 * Calls: `emit_D3D_opcode_dsss`
 * Called by: (none)
 */
void emit_D3D_SGN(uint64_t arg1)

{
  emit_D3D_opcode_dsss(arg1,&DAT_005ca4d6 /* R:7.188755008983421e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_LRP  (Ghidra `emit_D3D_LRP` @ 00524060)
 * Signature: uint8_t emit_D3D_LRP(void)
 * Calls: `emit_D3D_opcode_dsss`
 * Called by: (none)
 */
void emit_D3D_LRP(uint64_t arg1)

{
  emit_D3D_opcode_dsss(arg1,&DAT_005c9fe1 /* R:7.376362248685692e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_MAD  (Ghidra `emit_D3D_MAD` @ 00524070)
 * Signature: uint8_t emit_D3D_MAD(void)
 * Calls: `emit_D3D_opcode_dsss`
 * Called by: (none)
 */
void emit_D3D_MAD(uint64_t arg1)

{
  emit_D3D_opcode_dsss(arg1,&DAT_005c9e9d /* R:6.26823924517152e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_opcode_ds  (Ghidra `emit_D3D_opcode_ds` @ 00524080)
 * Signature: uint8_t emit_D3D_opcode_ds(void)
 * Calls: `make_D3D_destarg_string_constprop_70`, `make_D3D_srcarg_string_in_buf`, `output_line`, `strlen`
 * Called by: `emit_D3D_ABS`, `emit_D3D_DSX`, `emit_D3D_DSY`, `emit_D3D_EXP`, `emit_D3D_EXPP`, `emit_D3D_FRC`, `emit_D3D_LIT`, `emit_D3D_LOG`, `emit_D3D_LOGP`, `emit_D3D_MOV` (+21 more)
 */
void emit_D3D_opcode_ds(long arg1,char *arg2)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  char cVar6;
  uint64_t uStack_a0;
  uint8_t local_98 [8];
  char acStack_90 [56];
  uint8_t local_58 [64];
  
  uStack_a0 = 0x52409d;
  make_D3D_destarg_string_constprop_70(arg1,local_98);
  uStack_a0 = 0x5240b5;
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x110,local_58,0x40);
  uStack_a0 = 0x5240bd;
  sVar4 = strlen(arg2);
  lVar3 = -(sVar4 + 0x1f & 0xfffffffffffffff0);
  lVar5 = 0;
  do {
    cVar2 = arg2[lVar5];
    cVar6 = cVar2 + ' ';
    if (0x19 < (byte)(cVar2 + 0xbfU)) {
      cVar6 = cVar2;
    }
    (acStack_90 + lVar3)[lVar5] = cVar6;
    pcVar1 = arg2 + lVar5;
    lVar5 = lVar5 + 1;
  } while (*pcVar1 != '\0');
  *(uint64_t *)(local_98 + lVar3 + -8) = 0x524114;
  output_line(arg1,"%s%s, %s",acStack_90 + lVar3,local_98,local_58);
  return;
}

/* ======================================================================
 * emit_D3D_DSY  (Ghidra `emit_D3D_DSY` @ 00524120)
 * Signature: uint8_t emit_D3D_DSY(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_DSY(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca4e3 /* R:8.203229236126766e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_DSX  (Ghidra `emit_D3D_DSX` @ 00524130)
 * Signature: uint8_t emit_D3D_DSX(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_DSX(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca4e7 /* R:8.111393739968774e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_TEXM3X3  (Ghidra `emit_D3D_TEXM3X3` @ 00524140)
 * Signature: uint8_t emit_D3D_TEXM3X3(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXM3X3(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca4eb /* R:"TEXM3X3" */);
  return;
}

/* ======================================================================
 * emit_D3D_TEXDP3  (Ghidra `emit_D3D_TEXDP3` @ 00524150)
 * Signature: uint8_t emit_D3D_TEXDP3(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXDP3(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca4f3 /* R:"TEXDP3" */);
  return;
}

/* ======================================================================
 * emit_D3D_TEXM3X2DEPTH  (Ghidra `emit_D3D_TEXM3X2DEPTH` @ 00524160)
 * Signature: uint8_t emit_D3D_TEXM3X2DEPTH(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXM3X2DEPTH(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,"TEXM3X2DEPTH");
  return;
}

/* ======================================================================
 * emit_D3D_TEXDP3TEX  (Ghidra `emit_D3D_TEXDP3TEX` @ 00524170)
 * Signature: uint8_t emit_D3D_TEXDP3TEX(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXDP3TEX(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,"TEXDP3TEX");
  return;
}

/* ======================================================================
 * emit_D3D_TEXREG2RGB  (Ghidra `emit_D3D_TEXREG2RGB` @ 00524180)
 * Signature: uint8_t emit_D3D_TEXREG2RGB(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXREG2RGB(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,"TEXREG2RGB");
  return;
}

/* ======================================================================
 * emit_D3D_LOGP  (Ghidra `emit_D3D_LOGP` @ 00524190)
 * Signature: uint8_t emit_D3D_LOGP(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_LOGP(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca51c /* R:"LOGP" */);
  return;
}

/* ======================================================================
 * emit_D3D_EXPP  (Ghidra `emit_D3D_EXPP` @ 005241a0)
 * Signature: uint8_t emit_D3D_EXPP(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_EXPP(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca521 /* R:"EXPP" */);
  return;
}

/* ======================================================================
 * emit_D3D_TEXM3X3VSPEC  (Ghidra `emit_D3D_TEXM3X3VSPEC` @ 005241b0)
 * Signature: uint8_t emit_D3D_TEXM3X3VSPEC(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXM3X3VSPEC(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,"TEXM3X3VSPEC");
  return;
}

/* ======================================================================
 * emit_D3D_TEXM3X3TEX  (Ghidra `emit_D3D_TEXM3X3TEX` @ 005241c0)
 * Signature: uint8_t emit_D3D_TEXM3X3TEX(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXM3X3TEX(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,"TEXM3X3TEX");
  return;
}

/* ======================================================================
 * emit_D3D_TEXM3X3PAD  (Ghidra `emit_D3D_TEXM3X3PAD` @ 005241d0)
 * Signature: uint8_t emit_D3D_TEXM3X3PAD(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXM3X3PAD(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,"TEXM3X3PAD");
  return;
}

/* ======================================================================
 * emit_D3D_TEXM3X2TEX  (Ghidra `emit_D3D_TEXM3X2TEX` @ 005241e0)
 * Signature: uint8_t emit_D3D_TEXM3X2TEX(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXM3X2TEX(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca549 /* R:"TEXM3X2TEX" */);
  return;
}

/* ======================================================================
 * emit_D3D_TEXM3X2PAD  (Ghidra `emit_D3D_TEXM3X2PAD` @ 005241f0)
 * Signature: uint8_t emit_D3D_TEXM3X2PAD(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXM3X2PAD(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,"TEXM3X2PAD");
  return;
}

/* ======================================================================
 * emit_D3D_TEXREG2GB  (Ghidra `emit_D3D_TEXREG2GB` @ 00524200)
 * Signature: uint8_t emit_D3D_TEXREG2GB(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXREG2GB(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,"TEXREG2GB");
  return;
}

/* ======================================================================
 * emit_D3D_TEXREG2AR  (Ghidra `emit_D3D_TEXREG2AR` @ 00524210)
 * Signature: uint8_t emit_D3D_TEXREG2AR(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXREG2AR(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,"TEXREG2AR");
  return;
}

/* ======================================================================
 * emit_D3D_TEXBEML  (Ghidra `emit_D3D_TEXBEML` @ 00524220)
 * Signature: uint8_t emit_D3D_TEXBEML(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXBEML(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,"TEXBEML");
  return;
}

/* ======================================================================
 * emit_D3D_TEXBEM  (Ghidra `emit_D3D_TEXBEM` @ 00524230)
 * Signature: uint8_t emit_D3D_TEXBEM(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXBEM(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca57b /* R:"TEXBEM" */);
  return;
}

/* ======================================================================
 * emit_D3D_MOVA  (Ghidra `emit_D3D_MOVA` @ 00524240)
 * Signature: uint8_t emit_D3D_MOVA(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_MOVA(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca582 /* R:"MOVA" */);
  return;
}

/* ======================================================================
 * emit_D3D_NRM  (Ghidra `emit_D3D_NRM` @ 00524250)
 * Signature: uint8_t emit_D3D_NRM(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_NRM(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca587 /* R:7.100858562808647e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_ABS  (Ghidra `emit_D3D_ABS` @ 00524260)
 * Signature: uint8_t emit_D3D_ABS(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_ABS(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca58b /* R:7.646113604366684e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_FRC  (Ghidra `emit_D3D_FRC` @ 00524270)
 * Signature: uint8_t emit_D3D_FRC(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_FRC(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca58f /* R:6.18249239084102e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_LIT  (Ghidra `emit_D3D_LIT` @ 00524280)
 * Signature: uint8_t emit_D3D_LIT(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_LIT(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca593 /* R:7.740475641655853e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_LOG  (Ghidra `emit_D3D_LOG` @ 00524290)
 * Signature: uint8_t emit_D3D_LOG(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_LOG(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca597 /* R:6.54876658604317e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_EXP  (Ghidra `emit_D3D_EXP` @ 005242a0)
 * Signature: uint8_t emit_D3D_EXP(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_EXP(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca59b /* R:7.378504834037645e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_RSQ  (Ghidra `emit_D3D_RSQ` @ 005242b0)
 * Signature: uint8_t emit_D3D_RSQ(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_RSQ(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca59f /* R:7.468564885041336e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_RCP  (Ghidra `emit_D3D_RCP` @ 005242c0)
 * Signature: uint8_t emit_D3D_RCP(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_RCP(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca5a3 /* R:7.370989670373471e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_MOV  (Ghidra `emit_D3D_MOV` @ 005242d0)
 * Signature: uint8_t emit_D3D_MOV(void)
 * Calls: `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_MOV(uint64_t arg1)

{
  emit_D3D_opcode_ds(arg1,&DAT_005ca5a7 /* R:7.926300429711502e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_SINCOS  (Ghidra `emit_D3D_SINCOS` @ 005242e0)
 * Signature: uint8_t emit_D3D_SINCOS(void)
 * Calls: `emit_D3D_opcode_ds`, `emit_D3D_opcode_dsss`
 * Called by: (none)
 */
void emit_D3D_SINCOS(long arg1)

{
  uint uVar1;
  
  uVar1 = 1;
  if (*(byte *)(arg1 + 0xd5) != 0xff) {
    uVar1 = (uint)*(byte *)(arg1 + 0xd5);
  }
  if (0x2ffff < (uVar1 | (uint)*(byte *)(arg1 + 0xd4) << 0x10)) {
    emit_D3D_opcode_ds();
    return;
  }
  emit_D3D_opcode_dsss(arg1,"sincos");
  return;
}

/* ======================================================================
 * emit_D3D_TEXCRD  (Ghidra `emit_D3D_TEXCRD` @ 00524320)
 * Signature: uint8_t emit_D3D_TEXCRD(void)
 * Calls: `emit_D3D_opcode_d`, `emit_D3D_opcode_ds`
 * Called by: (none)
 */
void emit_D3D_TEXCRD(long arg1)

{
  uint uVar1;
  
  uVar1 = 1;
  if (*(byte *)(arg1 + 0xd5) != 0xff) {
    uVar1 = (uint)*(byte *)(arg1 + 0xd5);
  }
  if ((uVar1 | (uint)*(byte *)(arg1 + 0xd4) << 0x10) < 0x10004) {
    emit_D3D_opcode_d(arg1,"texcoord");
    return;
  }
  emit_D3D_opcode_ds(arg1,"texcrd");
  return;
}

/* ======================================================================
 * emit_D3D_opcode_dss  (Ghidra `emit_D3D_opcode_dss` @ 00524370)
 * Signature: uint8_t emit_D3D_opcode_dss(void)
 * Calls: `make_D3D_destarg_string_constprop_70`, `make_D3D_srcarg_string_in_buf`, `output_line`, `strlen`
 * Called by: `emit_D3D_ADD`, `emit_D3D_BEM`, `emit_D3D_CRS`, `emit_D3D_DP3`, `emit_D3D_DP4`, `emit_D3D_DST`, `emit_D3D_M3X2`, `emit_D3D_M3X3`, `emit_D3D_M3X4`, `emit_D3D_M4X3` (+12 more)
 */
void emit_D3D_opcode_dss(long arg1,char *arg2)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  char cVar6;
  uint64_t uStack_e0;
  uint8_t local_d8 [8];
  char acStack_d0 [56];
  uint8_t local_98 [64];
  uint8_t local_58 [64];
  
  uStack_e0 = 0x524390;
  make_D3D_destarg_string_constprop_70(arg1,local_d8);
  uStack_e0 = 0x5243ab;
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x110,local_98,0x40);
  uStack_e0 = 0x5243c3;
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x150,local_58,0x40);
  uStack_e0 = 0x5243cb;
  sVar4 = strlen(arg2);
  lVar3 = -(sVar4 + 0x1f & 0xfffffffffffffff0);
  lVar5 = 0;
  do {
    cVar2 = arg2[lVar5];
    cVar6 = cVar2 + ' ';
    if (0x19 < (byte)(cVar2 + 0xbfU)) {
      cVar6 = cVar2;
    }
    (acStack_d0 + lVar3)[lVar5] = cVar6;
    pcVar1 = arg2 + lVar5;
    lVar5 = lVar5 + 1;
  } while (*pcVar1 != '\0');
  *(uint64_t *)(local_d8 + lVar3 + -8) = 0x52442b;
  output_line(arg1,"%s%s, %s, %s",acStack_d0 + lVar3,local_d8,local_98,local_58);
  return;
}

/* ======================================================================
 * emit_D3D_TEXLDL  (Ghidra `emit_D3D_TEXLDL` @ 00524440)
 * Signature: uint8_t emit_D3D_TEXLDL(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_TEXLDL(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,"TEXLDL");
  return;
}

/* ======================================================================
 * emit_D3D_BEM  (Ghidra `emit_D3D_BEM` @ 00524450)
 * Signature: uint8_t emit_D3D_BEM(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_BEM(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005ca57e /* R:7.096178225937802e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_TEXM3X3SPEC  (Ghidra `emit_D3D_TEXM3X3SPEC` @ 00524460)
 * Signature: uint8_t emit_D3D_TEXM3X3SPEC(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_TEXM3X3SPEC(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,"TEXM3X3SPEC");
  return;
}

/* ======================================================================
 * emit_D3D_CRS  (Ghidra `emit_D3D_CRS` @ 00524470)
 * Signature: uint8_t emit_D3D_CRS(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_CRS(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005ca5d9 /* R:7.651856125473487e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_POW  (Ghidra `emit_D3D_POW` @ 00524480)
 * Signature: uint8_t emit_D3D_POW(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_POW(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005ca5dd /* R:8.018140129764886e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_M3X2  (Ghidra `emit_D3D_M3X2` @ 00524490)
 * Signature: uint8_t emit_D3D_M3X2(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_M3X2(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005ca5e1 /* R:"M3X2" */);
  return;
}

/* ======================================================================
 * emit_D3D_M3X3  (Ghidra `emit_D3D_M3X3` @ 005244a0)
 * Signature: uint8_t emit_D3D_M3X3(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_M3X3(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005ca4ee /* R:5.033807681797953e-08f */);
  return;
}

/* ======================================================================
 * emit_D3D_M3X4  (Ghidra `emit_D3D_M3X4` @ 005244b0)
 * Signature: uint8_t emit_D3D_M3X4(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_M3X4(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005ca5e6 /* R:"M3X4" */);
  return;
}

/* ======================================================================
 * emit_D3D_M4X3  (Ghidra `emit_D3D_M4X3` @ 005244c0)
 * Signature: uint8_t emit_D3D_M4X3(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_M4X3(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005ca5eb /* R:"M4X3" */);
  return;
}

/* ======================================================================
 * emit_D3D_M4X4  (Ghidra `emit_D3D_M4X4` @ 005244d0)
 * Signature: uint8_t emit_D3D_M4X4(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_M4X4(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005ca5f0 /* R:"M4X4" */);
  return;
}

/* ======================================================================
 * emit_D3D_DST  (Ghidra `emit_D3D_DST` @ 005244e0)
 * Signature: uint8_t emit_D3D_DST(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_DST(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005c9fa1 /* R:7.74405175533681e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_SGE  (Ghidra `emit_D3D_SGE` @ 005244f0)
 * Signature: uint8_t emit_D3D_SGE(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_SGE(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005c9fa5 /* R:6.3622355435615e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_SLT  (Ghidra `emit_D3D_SLT` @ 00524500)
 * Signature: uint8_t emit_D3D_SLT(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_SLT(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005c9fa9 /* R:7.741561647965704e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_MAX  (Ghidra `emit_D3D_MAX` @ 00524510)
 * Signature: uint8_t emit_D3D_MAX(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_MAX(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005c9fad /* R:8.104949168331345e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_MIN  (Ghidra `emit_D3D_MIN` @ 00524520)
 * Signature: uint8_t emit_D3D_MIN(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_MIN(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005c9fb1 /* R:7.18946406600637e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_DP4  (Ghidra `emit_D3D_DP4` @ 00524530)
 * Signature: uint8_t emit_D3D_DP4(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_DP4(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005c9fb5 /* R:4.8042396810604893e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_DP3  (Ghidra `emit_D3D_DP3` @ 00524540)
 * Signature: uint8_t emit_D3D_DP3(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_DP3(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005ca4f6 /* R:4.712404184902498e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_MUL  (Ghidra `emit_D3D_MUL` @ 00524550)
 * Signature: uint8_t emit_D3D_MUL(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_MUL(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005c9fb9 /* R:7.010097862572793e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_SUB  (Ghidra `emit_D3D_SUB` @ 00524560)
 * Signature: uint8_t emit_D3D_SUB(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_SUB(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005c9fbd /* R:6.091751308783667e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_ADD  (Ghidra `emit_D3D_ADD` @ 00524570)
 * Signature: uint8_t emit_D3D_ADD(void)
 * Calls: `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_ADD(uint64_t arg1)

{
  emit_D3D_opcode_dss(arg1,&DAT_005ca4ca /* R:6.26929862681055e-39f */);
  return;
}

/* ======================================================================
 * emit_D3D_TEXLD  (Ghidra `emit_D3D_TEXLD` @ 00524580)
 * Signature: uint8_t emit_D3D_TEXLD(void)
 * Calls: `emit_D3D_opcode_d`, `emit_D3D_opcode_ds`, `emit_D3D_opcode_dss`
 * Called by: (none)
 */
void emit_D3D_TEXLD(long arg1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(arg1 + 0xd5);
  uVar3 = (uint)*(byte *)(arg1 + 0xd4) << 0x10;
  uVar4 = 1;
  if (bVar1 != 0xff) {
    uVar4 = (uint)bVar1;
  }
  if ((uVar4 | uVar3) < 0x20000) {
    uVar4 = 1;
    if (bVar1 != 0xff) {
      uVar4 = (uint)bVar1;
    }
    if ((uVar4 | uVar3) < 0x10004) {
      emit_D3D_opcode_d(arg1,&DAT_005db9d2 /* R:1.105665406267439e-38f */);
      return;
    }
    emit_D3D_opcode_ds(arg1,"texld");
    return;
  }
  iVar2 = *(int *)(arg1 + 0x2a8);
  if (iVar2 == 0) {
    emit_D3D_opcode_dss(arg1,"texld");
    return;
  }
  if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    emit_D3D_opcode_dss(arg1,"texldb");
    return;
  }
  emit_D3D_opcode_dss(arg1,"texldp");
  return;
}

/* ======================================================================
 * emit_D3D_SETP  (Ghidra `emit_D3D_SETP` @ 00524630)
 * Signature: uint8_t emit_D3D_SETP(void)
 * Calls: `emit_D3D_opcode_dss`, `failf`, `snprintf`
 * Called by: (none)
 */
void emit_D3D_SETP(long arg1)

{
  char *pcVar1;
  char acStack_18 [16];
  
  if (*(uint *)(arg1 + 0x2a8) < 7) {
    pcVar1 = *(char **)(comps_5462 + (ulong)*(uint *)(arg1 + 0x2a8) * 8);
  }
  else {
    failf(arg1,"%s","unknown comparison control");
    pcVar1 = "";
  }
  snprintf(acStack_18,0x10,"setp%s",pcVar1);
  emit_D3D_opcode_dss(arg1,acStack_18);
  return;
}

/* ======================================================================
 * emit_D3D_opcode_ss  (Ghidra `emit_D3D_opcode_ss` @ 00524690)
 * Signature: uint8_t emit_D3D_opcode_ss(void)
 * Calls: `make_D3D_srcarg_string_in_buf`, `output_line`, `strlen`
 * Called by: `emit_D3D_BREAKC`, `emit_D3D_CALLNZ`, `emit_D3D_IFC`, `emit_D3D_LOOP`
 */
void emit_D3D_opcode_ss(long arg1,char *arg2)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  char cVar6;
  uint64_t uStack_a0;
  uint8_t local_98 [8];
  char acStack_90 [56];
  uint8_t local_58 [64];
  
  uStack_a0 = 0x5246b9;
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x110,local_98,0x40);
  uStack_a0 = 0x5246d1;
  make_D3D_srcarg_string_in_buf(arg1,arg1 + 0x150,local_58,0x40);
  uStack_a0 = 0x5246d9;
  sVar4 = strlen(arg2);
  lVar3 = -(sVar4 + 0x1f & 0xfffffffffffffff0);
  lVar5 = 0;
  do {
    cVar2 = arg2[lVar5];
    cVar6 = cVar2 + ' ';
    if (0x19 < (byte)(cVar2 + 0xbfU)) {
      cVar6 = cVar2;
    }
    (acStack_90 + lVar3)[lVar5] = cVar6;
    pcVar1 = arg2 + lVar5;
    lVar5 = lVar5 + 1;
  } while (*pcVar1 != '\0');
  *(uint64_t *)(local_98 + lVar3 + -8) = 0x52472c;
  output_line(arg1,"%s %s, %s",acStack_90 + lVar3,local_98,local_58);
  return;
}

/* ======================================================================
 * emit_D3D_LOOP  (Ghidra `emit_D3D_LOOP` @ 00524740)
 * Signature: uint8_t emit_D3D_LOOP(void)
 * Calls: `emit_D3D_opcode_ss`
 * Called by: (none)
 */
void emit_D3D_LOOP(uint64_t arg1)

{
  emit_D3D_opcode_ss(arg1,"LOOP");
  return;
}

/* ======================================================================
 * emit_D3D_CALLNZ  (Ghidra `emit_D3D_CALLNZ` @ 00524750)
 * Signature: uint8_t emit_D3D_CALLNZ(void)
 * Calls: `emit_D3D_opcode_ss`
 * Called by: (none)
 */
void emit_D3D_CALLNZ(uint64_t arg1)

{
  emit_D3D_opcode_ss(arg1,"CALLNZ");
  return;
}

/* ======================================================================
 * emit_D3D_BREAKC  (Ghidra `emit_D3D_BREAKC` @ 00524760)
 * Signature: uint8_t emit_D3D_BREAKC(void)
 * Calls: `emit_D3D_opcode_ss`, `failf`, `snprintf`
 * Called by: (none)
 */
void emit_D3D_BREAKC(long arg1)

{
  char *pcVar1;
  char acStack_18 [16];
  
  if (*(uint *)(arg1 + 0x2a8) < 7) {
    pcVar1 = *(char **)(comps_5462 + (ulong)*(uint *)(arg1 + 0x2a8) * 8);
  }
  else {
    failf(arg1,"%s","unknown comparison control");
    pcVar1 = "";
  }
  snprintf(acStack_18,0x10,"break%s",pcVar1);
  emit_D3D_opcode_ss(arg1,acStack_18);
  return;
}

/* ======================================================================
 * emit_D3D_IFC  (Ghidra `emit_D3D_IFC` @ 005247c0)
 * Signature: uint8_t emit_D3D_IFC(void)
 * Calls: `emit_D3D_opcode_ss`, `failf`, `snprintf`
 * Called by: (none)
 */
void emit_D3D_IFC(long arg1)

{
  char *pcVar1;
  char acStack_18 [16];
  
  if (*(uint *)(arg1 + 0x2a8) < 7) {
    pcVar1 = *(char **)(comps_5462 + (ulong)*(uint *)(arg1 + 0x2a8) * 8);
  }
  else {
    failf(arg1,"%s","unknown comparison control");
    pcVar1 = "";
  }
  snprintf(acStack_18,0x10,"if%s",pcVar1);
  emit_D3D_opcode_ss(arg1,acStack_18);
  return;
}

/* ======================================================================
 * parse_destination_token_part_47  (Ghidra `parse_destination_token.part.47` @ 00524820)
 * Signature: uint8_t parse_destination_token.part.47(void)
 * Calls: `failf`, `reglist_insert`
 * Called by: `parse_args_D`, `parse_args_DCL`, `parse_args_DEF`, `parse_args_DEFB`, `parse_args_DEFI`, `parse_args_DS`, `parse_args_DSS`, `parse_args_DSSS`, `parse_args_DSSSS`, `parse_args_SINCOS` (+2 more)
 */
uint64_t parse_destination_token_part_47(int *arg1,uint64_t *arg2)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  uVar2 = **(uint **)(arg1 + 0xc);
  *arg2 = *(uint **)(arg1 + 0xc);
  uVar8 = uVar2 & 0x7ff;
  *(uint *)(arg2 + 1) = uVar8;
  *(uint *)((long)arg2 + 0xc) = uVar2 >> 0xd & 1;
  uVar7 = uVar2 >> 0x10 & 0xf;
  *(uint *)(arg2 + 5) = uVar2 >> 0x14 & 0xf;
  *(uint *)((long)arg2 + 0x24) = uVar7;
  *(uint *)((long)arg2 + 0x2c) = uVar2 >> 0x18 & 0xf;
  uVar6 = uVar2 >> 8 & 0x18 | uVar2 >> 0x1c & 7;
  *(uint *)(arg2 + 6) = uVar6;
  if (((uVar6 == 6) && (arg1[0x122] != 0)) &&
     (puVar5 = *(uint **)(arg1 + 0x108), puVar5 != (uint *)0x0)) {
    uVar4 = uVar8 << 0x10 | 6;
    uVar1 = puVar5[1] << 0x10 | *puVar5;
    if (uVar4 == uVar1) {
LAB_00524ce0:
      bVar11 = puVar5[2] == 4;
      goto LAB_005249f9;
    }
    if (uVar4 < uVar1) goto switchD_005249c0_switchD;
    do {
      puVar5 = *(uint **)(puVar5 + 8);
      if (puVar5 == (uint *)0x0) break;
      uVar1 = puVar5[1] << 0x10 | *puVar5;
      if (uVar4 == uVar1) goto LAB_00524ce0;
    } while (uVar1 <= uVar4);
    goto switchD_005249c0_caseD_a;
  }
switchD_005249c0_switchD:
  switch(uVar6) {
  case 0x11:
    if (uVar8 == 1) {
      *(uint32_t *)(arg2 + 2) = 1;
      *(uint32_t *)((long)arg2 + 0x14) = 1;
      *(uint32_t *)(arg2 + 3) = 0;
      *(uint32_t *)((long)arg2 + 0x1c) = 0;
      *(uint32_t *)(arg2 + 4) = 0;
      goto LAB_005248f4;
    }
  default:
switchD_005249c0_caseD_a:
    uVar10 = uVar2 >> 0x10 & 1;
    uVar4 = (int)uVar7 >> 1 & 1;
    uVar1 = (int)uVar7 >> 2 & 1;
    iVar9 = (int)uVar7 >> 3;
    break;
  case 0x13:
    bVar11 = arg1[0x34] == 1;
LAB_005249f9:
    if (!bVar11) goto switchD_005249c0_caseD_a;
  case 9:
  case 0xe:
  case 0xf:
    iVar9 = 0;
    uVar1 = 0;
    uVar4 = 0;
    uVar10 = 1;
    uVar7 = 1;
  }
  *(uint *)(arg2 + 2) = uVar7;
  *(uint *)((long)arg2 + 0x14) = uVar10;
  *(uint *)(arg2 + 3) = uVar4;
  *(uint *)((long)arg2 + 0x1c) = uVar1;
  *(int *)(arg2 + 4) = iVar9;
  if (uVar6 == 0xb) {
    *(uint32_t *)(arg2 + 6) = 2;
    *(uint *)(arg2 + 1) = uVar8 + 0x800;
  }
  else if (uVar6 == 0xc) {
    *(uint32_t *)(arg2 + 6) = 2;
    *(uint *)(arg2 + 1) = uVar8 + 0x1000;
  }
  else if (uVar6 == 0xd) {
    *(uint32_t *)(arg2 + 6) = 2;
    *(uint *)(arg2 + 1) = uVar8 + 0x1800;
  }
LAB_005248f4:
  *(long *)(arg1 + 0xc) = *(long *)(arg1 + 0xc) + 4;
  arg1[0xe] = arg1[0xe] + -1;
  arg1[8] = arg1[8] + 4;
  if ((uVar2 >> 0xe & 3) != 0) {
    failf(arg1,"%s","Reserved bit #1 in destination token must be zero");
  }
  if (-1 < (int)uVar2) {
    failf(arg1,"%s","Reserved bit #2 in destination token must be one");
  }
  if (*(int *)((long)arg2 + 0xc) == 0) {
    iVar9 = *(int *)((long)arg2 + 0x2c);
    if (iVar9 != 0) {
      if (arg1[0x34] != 1) {
        failf(arg1,"%s","Result shift scale in non-pixel shader");
      }
      uVar2 = 1;
      if (*(byte *)((long)arg1 + 0xd5) != 0xff) {
        uVar2 = (uint)*(byte *)((long)arg1 + 0xd5);
      }
      if (0x1ffff < (uVar2 | (uint)*(byte *)(arg1 + 0x35) << 0x10)) {
        failf(arg1,"%s","Result shift scale in pixel shader version >= 2.0");
      }
      if ((2 < iVar9 - 0xdU) && (2 < iVar9 - 1U)) {
        failf(arg1,"%s","Result shift scale isn\'t 1 to 3, or 13 to 15.");
      }
    }
    uVar2 = *(uint *)(arg2 + 5);
    if (((uVar2 & 2) != 0) && (arg1[0x34] != 1)) {
      failf(arg1,"%s","Partial precision result mod in non-pixel shader");
      uVar2 = *(uint *)(arg2 + 5);
    }
    if ((uVar2 & 4) != 0) {
      if (arg1[0x34] == 1) {
        if (arg1[0x118] == 0) {
          failf(arg1,"%s","Centroid modifier not allowed here");
        }
      }
      else {
        failf(arg1,"%s","Centroid result mod in non-pixel shader");
      }
    }
    if (0x13 < *(uint *)(arg2 + 6)) {
      failf(arg1,"%s","Register type is out of range");
    }
    uVar3 = 1;
    if (*arg1 == 0) {
      if ((0 < *(int *)(arg2 + 1)) && (*(int *)(arg2 + 6) == 8)) {
        arg1[0x11f] = 1;
      }
      reglist_insert(arg1,arg1 + 0xd6);
      return 1;
    }
  }
  else {
    if (arg1[0x34] != 2) {
      failf(arg1,"%s","Relative addressing in non-vertex shader");
    }
    uVar2 = 1;
    if (*(byte *)((long)arg1 + 0xd5) != 0xff) {
      uVar2 = (uint)*(byte *)((long)arg1 + 0xd5);
    }
    if ((uVar2 | (uint)*(byte *)(arg1 + 0x35) << 0x10) < 0x30000) {
      failf(arg1,"%s","Relative addressing in vertex shader version < 3.0");
    }
    if ((arg1[0x11a] == 0) && (arg1[0x127] == 0)) {
      failf(arg1,"%s","relative addressing unsupported without a CTAB");
    }
    failf(arg1,"%s","Relative addressing of dest tokens is unsupported");
    uVar3 = 2;
  }
  return uVar3;
}

/* ======================================================================
 * parse_args_DEFB  (Ghidra `parse_args_DEFB` @ 00524cf0)
 * Signature: uint8_t parse_args_DEFB(void)
 * Calls: `failf`, `parse_destination_token_part_47`
 * Called by: `parse_args_DEFB__0052d3a0`
 */
uint64_t parse_args_DEFB(long arg1)

{
  if (*(int *)(arg1 + 0x38) == 0) {
    failf(arg1,"%s","Out of tokens in destination parameter");
  }
  else {
    parse_destination_token_part_47(arg1,arg1 + 0xd8);
  }
  if (*(int *)(arg1 + 0x108) != 0xe) {
    failf(arg1,"%s","DEFB using non-CONSTBOOL register");
  }
  if (*(int *)(arg1 + 0xe4) != 0) {
    failf(arg1,"%s","relative addressing in DEFB");
  }
  *(uint *)(arg1 + 0x290) = (uint)(**(int **)(arg1 + 0x30) != 0);
  return 3;
}

/* ======================================================================
 * parse_args_DEFI  (Ghidra `parse_args_DEFI` @ 00524d80)
 * Signature: uint8_t parse_args_DEFI(void)
 * Calls: `failf`, `parse_destination_token_part_47`
 * Called by: `parse_args_DEFI__0052d390`
 */
uint64_t parse_args_DEFI(long arg1)

{
  uint32_t *puVar1;
  
  if (*(int *)(arg1 + 0x38) == 0) {
    failf(arg1,"%s","Out of tokens in destination parameter");
  }
  else {
    parse_destination_token_part_47(arg1,arg1 + 0xd8);
  }
  if (*(int *)(arg1 + 0x108) != 7) {
    failf(arg1,"%s","DEFI using non-CONSTING register");
  }
  if (*(int *)(arg1 + 0xe4) != 0) {
    failf(arg1,"%s","relative addressing in DEFI");
  }
  puVar1 = *(uint32_t **)(arg1 + 0x30);
  *(uint32_t *)(arg1 + 0x290) = *puVar1;
  *(uint32_t *)(arg1 + 0x294) = puVar1[1];
  *(uint32_t *)(arg1 + 0x298) = puVar1[2];
  *(uint32_t *)(arg1 + 0x29c) = puVar1[3];
  return 6;
}

/* ======================================================================
 * parse_args_D  (Ghidra `parse_args_D` @ 00524e20)
 * Signature: uint8_t parse_args_D(void)
 * Calls: `failf`, `parse_destination_token_part_47`
 * Called by: `parse_args_D__0052cd70`
 */
int parse_args_D(long arg1)

{
  int iVar1;
  
  if (*(int *)(arg1 + 0x38) != 0) {
    iVar1 = parse_destination_token_part_47(arg1,arg1 + 0xd8);
    return iVar1 + 1;
  }
  failf(arg1,"%s","Out of tokens in destination parameter");
  return 1;
}

/* ======================================================================
 * parse_args_DEF  (Ghidra `parse_args_DEF` @ 00524e60)
 * Signature: uint8_t parse_args_DEF(void)
 * Calls: `failf`, `parse_destination_token_part_47`
 * Called by: `parse_args_DEF__0052d380`
 */
uint64_t parse_args_DEF(long arg1)

{
  uint32_t *puVar1;
  
  if (*(int *)(arg1 + 0x38) == 0) {
    failf(arg1,"%s","Out of tokens in destination parameter");
  }
  else {
    parse_destination_token_part_47(arg1,arg1 + 0xd8);
  }
  if (*(int *)(arg1 + 0x108) != 2) {
    failf(arg1,"%s","DEF using non-CONST register");
  }
  if (*(int *)(arg1 + 0xe4) != 0) {
    failf(arg1,"%s","relative addressing in DEF");
  }
  puVar1 = *(uint32_t **)(arg1 + 0x30);
  *(uint32_t *)(arg1 + 0x290) = *puVar1;
  *(uint32_t *)(arg1 + 0x294) = puVar1[1];
  *(uint32_t *)(arg1 + 0x298) = puVar1[2];
  *(uint32_t *)(arg1 + 0x29c) = puVar1[3];
  return 6;
}

/* ======================================================================
 * glsl_texld  (Ghidra `glsl_texld` @ 00524f00)
 * Signature: uint8_t glsl_texld(void)
 * Calls: `failf`, `get_D3D_register_string_constprop_65`, `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `make_GLSL_swizzle_string_isra_10`, `output_line`, `snprintf`
 * Called by: `emit_GLSL_TEXLD`, `emit_GLSL_TEXLDD`, `emit_GLSL_TEXLDL`
 */
void glsl_texld(long arg1,int arg2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  uint8_t local_218 [128];
  uint64_t local_198 [8];
  char local_158 [64];
  char local_118 [64];
  uint64_t local_d8 [8];
  uint64_t local_98 [8];
  uint8_t local_58 [16];
  uint32_t local_48;
  uint16_t local_44;
  
  bVar12 = 0;
  uVar3 = 1;
  if (*(byte *)(arg1 + 0xd5) != 0xff) {
    uVar3 = (uint)*(byte *)(arg1 + 0xd5);
  }
  if ((uVar3 | (uint)*(byte *)(arg1 + 0xd4) << 0x10) < 0x20000) {
    failf(arg1,"%s","TEXLD <= Shader Model 2.0 unimplemented.");
  }
  else {
    puVar2 = *(uint **)(arg1 + 0x450);
    iVar1 = *(int *)(arg1 + 0x158);
    if (puVar2 == (uint *)0x0) {
LAB_00524f93:
      puVar8 = local_198;
      for (lVar6 = 8; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      uVar4 = get_D3D_register_string_constprop_65
                        (arg1,*(uint32_t *)(arg1 + 0x174),iVar1,local_58);
      snprintf(local_158,0x40,"%s_%s%s",*(uint64_t *)(arg1 + 0xb0),uVar4,local_58);
      pcVar11 = local_118;
      for (lVar6 = 8; lVar6 != 0; lVar6 = lVar6 + -1) {
        pcVar11[0] = '\0';
        pcVar11[1] = '\0';
        pcVar11[2] = '\0';
        pcVar11[3] = '\0';
        pcVar11[4] = '\0';
        pcVar11[5] = '\0';
        pcVar11[6] = '\0';
        pcVar11[7] = '\0';
        pcVar11 = pcVar11 + ((ulong)bVar12 * -2 + 1) * 8;
      }
      puVar8 = local_d8;
      for (lVar6 = 8; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + (ulong)bVar12 * -2 + 1;
      }
      failf(arg1,"%s","TEXLD using undeclared sampler");
    }
    else {
      uVar5 = iVar1 << 0x10 | 10;
      uVar3 = puVar2[1] << 0x10 | *puVar2;
      while (uVar5 != uVar3) {
        if ((uVar5 < uVar3) || (puVar2 = *(uint **)(puVar2 + 8), puVar2 == (uint *)0x0))
        goto LAB_00524f93;
        uVar3 = puVar2[1] << 0x10 | *puVar2;
      }
      puVar8 = local_198;
      for (lVar6 = 8; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      uVar4 = get_D3D_register_string_constprop_65
                        (arg1,*(uint32_t *)(arg1 + 0x174),iVar1,local_58);
      snprintf(local_158,0x40,"%s_%s%s",*(uint64_t *)(arg1 + 0xb0),uVar4,local_58);
      pcVar11 = local_118;
      for (lVar6 = 8; lVar6 != 0; lVar6 = lVar6 + -1) {
        pcVar11[0] = '\0';
        pcVar11[1] = '\0';
        pcVar11[2] = '\0';
        pcVar11[3] = '\0';
        pcVar11[4] = '\0';
        pcVar11[5] = '\0';
        pcVar11[6] = '\0';
        pcVar11[7] = '\0';
        pcVar11 = pcVar11 + ((ulong)bVar12 * -2 + 1) * 8;
      }
      puVar8 = local_d8;
      for (lVar6 = 8; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + (ulong)bVar12 * -2 + 1;
      }
      if (arg2 != 0) {
        make_GLSL_srcarg_string_constprop_72(arg1,2,3,local_118);
        make_GLSL_srcarg_string_constprop_72(arg1,3,3,local_d8);
      }
      puVar8 = local_98;
      pcVar11 = "";
      puVar9 = puVar8;
      for (lVar6 = 8; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
      }
      if (*(int *)(arg1 + 0x2a8) == 2) {
        pcVar11 = ", ";
        make_GLSL_srcarg_string_constprop_72(arg1,0,8,puVar8);
      }
      uVar3 = puVar2[3];
      if (uVar3 == 3) {
        if (*(int *)(arg1 + 0x2a8) == 1) {
          failf(arg1,"%s","TEXLDP on a cubemap");
        }
        make_GLSL_srcarg_string_constprop_72(arg1,0,7,local_198);
        pcVar10 = "textureCube";
      }
      else if (uVar3 == 4) {
        if (*(int *)(arg1 + 0x2a8) == 1) {
          make_GLSL_srcarg_string_constprop_72(arg1,0,0xf,local_198);
          pcVar10 = "texture3DProj";
        }
        else {
          make_GLSL_srcarg_string_constprop_72(arg1,0,7,local_198);
          pcVar10 = "texture3D";
        }
      }
      else {
        if (uVar3 != 2) {
          failf(arg1,"%s","unknown texture type");
          return;
        }
        if (*(int *)(arg1 + 0x2a8) == 1) {
          make_GLSL_srcarg_string_constprop_72(arg1,0,0xf,local_198);
          pcVar10 = "texture2DProj";
        }
        else {
          make_GLSL_srcarg_string_constprop_72(arg1,0,3,local_198);
          pcVar10 = "texture2D";
        }
      }
      local_48 = 0;
      local_44 = 0;
      make_GLSL_swizzle_string_isra_10
                (&local_48,*(uint32_t *)(arg1 + 0x15c),*(uint32_t *)(arg1 + 0xe8));
      if (arg2 == 0) {
        pcVar7 = "%s(%s, %s%s%s)%s";
      }
      else {
        puVar8 = local_d8;
        pcVar7 = "%sGrad(%s, %s, %s, %s)%s";
        pcVar11 = local_118;
      }
      make_GLSL_destarg_assign
                (arg1,local_218,0x80,pcVar7,pcVar10,local_158,local_198,pcVar11,puVar8,&local_48)
      ;
      output_line(arg1,"%s",local_218);
    }
  }
  return;
}

/* ======================================================================
 * emit_GLSL_TEXLD  (Ghidra `emit_GLSL_TEXLD` @ 00525340)
 * Signature: uint8_t emit_GLSL_TEXLD(void)
 * Calls: `glsl_texld`
 * Called by: (none)
 */
void emit_GLSL_TEXLD(uint64_t arg1)

{
  glsl_texld(arg1,0);
  return;
}

/* ======================================================================
 * emit_GLSL_TEXLDL  (Ghidra `emit_GLSL_TEXLDL` @ 00525350)
 * Signature: uint8_t emit_GLSL_TEXLDL(void)
 * Calls: `glsl_texld`
 * Called by: (none)
 */
void emit_GLSL_TEXLDL(uint64_t arg1)

{
  glsl_texld(arg1,0);
  return;
}

/* ======================================================================
 * emit_GLSL_SETP  (Ghidra `emit_GLSL_SETP` @ 00525360)
 * Signature: uint8_t emit_GLSL_SETP(void)
 * Calls: `failf`, `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_SETP(long arg1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint8_t local_118 [128];
  char local_98 [64];
  uint8_t local_58 [72];
  
  uVar1 = *(uint *)(arg1 + 0xe8);
  make_GLSL_srcarg_string_constprop_72(arg1,0,uVar1,local_98);
  make_GLSL_srcarg_string_constprop_72(arg1,1,*(uint32_t *)(arg1 + 0xe8),local_58);
  uVar2 = *(uint *)(arg1 + 0x2a8);
  if ((uVar1 & 1) + ((int)uVar1 >> 1 & 1U) + ((int)uVar1 >> 2 & 1U) + ((int)uVar1 >> 3 & 1U) == 1) {
    if (uVar2 < 7) {
      pcVar5 = *(char **)(comps_6042 + (ulong)uVar2 * 8);
    }
    else {
      failf(arg1,"%s","unknown comparison control");
      pcVar5 = "";
    }
    pcVar4 = local_98;
    pcVar3 = "(%s %s %s)";
  }
  else {
    if (uVar2 < 7) {
      pcVar4 = *(char **)(comps_6046 + (ulong)uVar2 * 8);
    }
    else {
      failf(arg1,"%s","unknown comparison control");
      pcVar4 = "";
    }
    pcVar5 = local_98;
    pcVar3 = "%s(%s, %s)";
  }
  make_GLSL_destarg_assign(arg1,local_118,0x80,pcVar3,pcVar4,pcVar5,local_58);
  output_line(arg1,"%s",local_118);
  return;
}

/* ======================================================================
 * parse_source_token  (Ghidra `parse_source_token` @ 005254a0)
 * Signature: uint8_t parse_source_token(void)
 * Calls: `determine_constants_arrays`, `failf`, `reglist_insert`
 * Called by: `MOJOSHADER_parse`, `parse_args_DS`, `parse_args_DSS`, `parse_args_DSSS`, `parse_args_DSSSS`, `parse_args_S`, `parse_args_SINCOS`, `parse_args_SS`, `parse_args_TEXCRD`, `parse_args_TEXLD`
 */
uint64_t parse_source_token(int *arg1,uint64_t *arg2)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  uint64_t uVar11;
  
  if (arg1[0xe] == 0) {
    failf(arg1,"%s","Out of tokens in source parameter");
    return 0;
  }
  uVar4 = **(uint **)(arg1 + 0xc);
  *arg2 = *(uint **)(arg1 + 0xc);
  *(uint *)(arg2 + 5) = uVar4 >> 0xd & 1;
  uVar9 = uVar4 & 0x7ff;
  uVar10 = uVar4 >> 0x10 & 0xff;
  *(uint *)(arg2 + 1) = uVar9;
  *(uint *)(arg2 + 4) = uVar4 >> 0x18 & 0xf;
  uVar7 = uVar4 >> 8 & 0x18 | uVar4 >> 0x1c & 7;
  *(uint *)((long)arg2 + 0x24) = uVar7;
  if (uVar7 == 0xb) {
    *(uint32_t *)((long)arg2 + 0x24) = 2;
    *(uint *)(arg2 + 1) = uVar9 + 0x800;
  }
  else if (uVar7 == 0xc) {
    *(uint32_t *)((long)arg2 + 0x24) = 2;
    *(uint *)(arg2 + 1) = uVar9 + 0x1000;
  }
  else if (uVar7 == 0xd) {
    *(uint32_t *)((long)arg2 + 0x24) = 2;
    *(uint *)(arg2 + 1) = uVar9 + 0x1800;
  }
  else if (((uVar7 == 1) && (arg1[0x12] != 0)) &&
          (puVar1 = *(uint **)(arg1 + 0x108), puVar1 != (uint *)0x0)) {
    uVar9 = uVar9 << 0x10 | 1;
    uVar7 = puVar1[1] << 0x10 | *puVar1;
    while (uVar9 != uVar7) {
      if ((uVar9 < uVar7) || (puVar1 = *(uint **)(puVar1 + 8), puVar1 == (uint *)0x0))
      goto LAB_0052558e;
      uVar7 = puVar1[1] << 0x10 | *puVar1;
    }
    puVar6 = *(uint **)(arg1 + 0x10);
    uVar5 = 0;
    do {
      if ((*puVar6 == puVar1[2]) && (puVar6[1] == puVar1[3])) {
        uVar10 = (uint)*(byte *)((long)puVar6 + (long)((int)uVar10 >> 6) + 8) << 6 |
                 (uint)*(byte *)((long)puVar6 + (ulong)(uVar4 >> 0x10 & 3) + 8) |
                 (uint)*(byte *)((long)puVar6 + (ulong)((int)uVar10 >> 2 & 3) + 8) << 2 |
                 (uint)*(byte *)((long)puVar6 + (ulong)((int)uVar10 >> 4 & 3) + 8) << 4;
        break;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 3;
    } while (uVar5 < (uint)arg1[0x12]);
  }
LAB_0052558e:
  *(uint *)((long)arg2 + 0xc) = uVar10;
  *(uint *)(arg2 + 2) = uVar10 & 3;
  *(uint *)((long)arg2 + 0x14) = (int)uVar10 >> 2 & 3;
  *(uint *)((long)arg2 + 0x1c) = (int)uVar10 >> 6 & 3;
  *(uint *)(arg2 + 3) = (int)uVar10 >> 4 & 3;
  *(long *)(arg1 + 0xc) = *(long *)(arg1 + 0xc) + 4;
  arg1[0xe] = arg1[0xe] + -1;
  arg1[8] = arg1[8] + 4;
  if ((uVar4 >> 0xe & 3) != 0) {
    failf(arg1,"%s","Reserved bits #1 in source token must be zero");
  }
  if (-1 < (int)uVar4) {
    failf(arg1,"%s","Reserved bit #2 in source token must be one");
  }
  if (*(int *)(arg2 + 5) == 0) {
LAB_00525791:
    uVar11 = 1;
LAB_00525797:
    uVar4 = *(uint *)(arg2 + 4);
  }
  else {
    iVar3 = arg1[0xe];
    if (iVar3 == 0) {
      failf(arg1,"%s","Out of tokens in relative source parameter");
      *(uint32_t *)(arg2 + 5) = 0;
      goto LAB_00525791;
    }
    if (arg1[0x34] == 1) {
      uVar4 = 1;
      if (*(byte *)((long)arg1 + 0xd5) != 0xff) {
        uVar4 = (uint)*(byte *)((long)arg1 + 0xd5);
      }
      if ((uVar4 | (uint)*(byte *)(arg1 + 0x35) << 0x10) < 0x30000) {
        failf(arg1,"%s","Relative addressing in pixel shader version < 3.0");
        iVar3 = arg1[0xe];
      }
    }
    uVar4 = **(uint **)(arg1 + 0xc);
    arg1[0xe] = iVar3 + -1;
    *(uint **)(arg1 + 0xc) = *(uint **)(arg1 + 0xc) + 1;
    arg1[8] = arg1[8] + 4;
    *(uint *)(arg2 + 6) = uVar4 & 0x7ff;
    uVar10 = uVar4 >> 0x10 & 0xff;
    *(uint *)((long)arg2 + 0x2c) = uVar4 >> 8 & 0x18 | uVar4 >> 0x1c & 7;
    if (-1 < (int)uVar4) {
      failf(arg1,"%s","bit #31 in relative address must be set");
    }
    if ((uVar4 & 0xf00e000) != 0) {
      failf(arg1,"%s","relative address reserved bit must be zero");
    }
    if ((*(int *)((long)arg2 + 0x2c) != 3) && (*(int *)((long)arg2 + 0x2c) != 0xf)) {
      failf(arg1,"%s","invalid register for relative address");
    }
    if (*(int *)(arg2 + 6) != 0) {
      failf(arg1,"%s","invalid register for relative address");
    }
    if ((((((int)uVar10 >> 2 ^ uVar10) & 3) != 0) ||
        ((((int)uVar10 >> 2 ^ (int)uVar10 >> 4) & 3U) != 0)) ||
       ((((int)uVar10 >> 6 ^ (int)uVar10 >> 4) & 3U) != 0)) {
      failf(arg1,"%s","relative address needs replicate swizzle");
    }
    *(uint *)((long)arg2 + 0x34) = uVar4 >> 0x10 & 3;
    if (*(int *)((long)arg2 + 0x24) == 1) {
      if (arg1[0x34] == 1) {
LAB_00525a5c:
        failf(arg1,"%s",
              "relative addressing of input registers not supported in this shader model");
      }
      else {
        uVar4 = 1;
        if (*(byte *)((long)arg1 + 0xd5) != 0xff) {
          uVar4 = (uint)*(byte *)((long)arg1 + 0xd5);
        }
        if ((uVar4 | (uint)*(byte *)(arg1 + 0x35) << 0x10) < 0x30000) goto LAB_00525a5c;
      }
      arg1[0x11e] = 1;
      uVar11 = 2;
      goto LAB_00525797;
    }
    pcVar8 = "relative addressing of invalid register";
    if (*(int *)((long)arg2 + 0x24) == 2) {
      uVar11 = 2;
      if (arg1[0x127] == 0) {
        if (arg1[0x11a] != 0) {
          determine_constants_arrays(arg1,0,"relative addressing of invalid register");
          for (lVar2 = *(long *)(arg1 + 0x116); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
            if ((*(int *)(lVar2 + 4) <= *(int *)(arg2 + 1)) &&
               (*(int *)(arg2 + 1) < *(int *)(lVar2 + 4) + *(int *)(lVar2 + 8))) {
              *(uint32_t *)(lVar2 + 0x18) = 1;
              arg2[7] = lVar2;
              if ((0 < *(int *)(arg2 + 6)) && (*(int *)((long)arg2 + 0x2c) == 8)) {
                arg1[0x11f] = 1;
              }
              uVar11 = 2;
              reglist_insert(arg1,arg1 + 0xd6);
              goto LAB_00525797;
            }
          }
          pcVar8 = "relative addressing of indeterminate array";
          goto LAB_005256f1;
        }
        failf(arg1,"%s","relative addressing unsupported without a CTAB");
      }
      goto LAB_00525797;
    }
LAB_005256f1:
    failf(arg1,"%s",pcVar8);
    uVar4 = *(uint *)(arg2 + 4);
    uVar11 = 2;
  }
  if (uVar4 < 0xe) {
    uVar5 = 1L << ((byte)*(uint32_t *)(arg2 + 4) & 0x3f);
    if ((uVar5 & 0x1803) != 0) goto LAB_005257b5;
    if ((uVar5 & 0x2000) != 0) {
      uVar4 = 1;
      if (*(byte *)((long)arg1 + 0xd5) != 0xff) {
        uVar4 = (uint)*(byte *)((long)arg1 + 0xd5);
      }
      if ((0x1ffff < (uVar4 | (uint)*(byte *)(arg1 + 0x35) << 0x10)) &&
         (*(int *)((long)arg2 + 0x24) != 0x13)) {
        failf(arg1,"%s","NOT only allowed on predicate register.");
      }
      goto LAB_005257b5;
    }
    if ((uVar5 & 0x7fc) != 0) {
      uVar4 = 1;
      if (*(byte *)((long)arg1 + 0xd5) != 0xff) {
        uVar4 = (uint)*(byte *)((long)arg1 + 0xd5);
      }
      if (0x1ffff < (uVar4 | (uint)*(byte *)(arg1 + 0x35) << 0x10)) {
        failf(arg1,"%s","illegal source mod for this Shader Model.");
      }
      goto LAB_005257b5;
    }
  }
  failf(arg1,"%s","Unknown source modifier");
LAB_005257b5:
  if (*arg1 == 0) {
    if ((0 < *(int *)(arg2 + 1)) && (*(int *)((long)arg2 + 0x24) == 8)) {
      arg1[0x11f] = 1;
    }
    reglist_insert(arg1,arg1 + 0xd6);
    return uVar11;
  }
  return uVar11;
}

/* ======================================================================
 * parse_args_DSSSS  (Ghidra `parse_args_DSSSS` @ 00525b60)
 * Signature: uint8_t parse_args_DSSSS(void)
 * Calls: `failf`, `parse_destination_token_part_47`, `parse_source_token`
 * Called by: `parse_args_DSSSS__0052de90`
 */
int parse_args_DSSSS(long arg1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(arg1 + 0x38) == 0) {
    failf(arg1,"%s","Out of tokens in destination parameter");
    iVar1 = 1;
  }
  else {
    iVar1 = parse_destination_token_part_47(arg1,arg1 + 0xd8);
    iVar1 = iVar1 + 1;
  }
  iVar2 = parse_source_token(arg1,arg1 + 0x110);
  iVar3 = parse_source_token(arg1,arg1 + 0x150);
  iVar4 = parse_source_token(arg1,arg1 + 400);
  iVar5 = parse_source_token(arg1,arg1 + 0x1d0);
  return iVar5 + iVar1 + iVar2 + iVar3 + iVar4;
}

/* ======================================================================
 * parse_args_SS  (Ghidra `parse_args_SS` @ 00525bf0)
 * Signature: uint8_t parse_args_SS(void)
 * Calls: `parse_source_token`
 * Called by: `parse_args_SS__0052df70`
 */
int parse_args_SS(long arg1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = parse_source_token(arg1,arg1 + 0x110);
  iVar2 = parse_source_token(arg1,arg1 + 0x150);
  return iVar2 + iVar1 + 1;
}

/* ======================================================================
 * parse_args_S  (Ghidra `parse_args_S` @ 00525c30)
 * Signature: uint8_t parse_args_S(void)
 * Calls: `parse_source_token`
 * Called by: `parse_args_S__0052dfc0`
 */
int parse_args_S(long arg1)

{
  int iVar1;
  
  iVar1 = parse_source_token(arg1,arg1 + 0x110);
  return iVar1 + 1;
}

/* ======================================================================
 * parse_args_DSSS  (Ghidra `parse_args_DSSS` @ 00525c50)
 * Signature: uint8_t parse_args_DSSS(void)
 * Calls: `failf`, `parse_destination_token_part_47`, `parse_source_token`
 * Called by: `parse_args_DSSS__0052dfe0`, `parse_args_SINCOS__0052e110`
 */
int parse_args_DSSS(long arg1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(arg1 + 0x38) == 0) {
    failf(arg1,"%s","Out of tokens in destination parameter");
    iVar1 = 1;
  }
  else {
    iVar1 = parse_destination_token_part_47(arg1,arg1 + 0xd8);
    iVar1 = iVar1 + 1;
  }
  iVar2 = parse_source_token(arg1,arg1 + 0x110);
  iVar3 = parse_source_token(arg1,arg1 + 0x150);
  iVar4 = parse_source_token(arg1,arg1 + 400);
  return iVar4 + iVar1 + iVar2 + iVar3;
}

/* ======================================================================
 * parse_args_DSS  (Ghidra `parse_args_DSS` @ 00525cd0)
 * Signature: uint8_t parse_args_DSS(void)
 * Calls: `failf`, `parse_destination_token_part_47`, `parse_source_token`
 * Called by: `parse_args_DSS__0052e090`
 */
int parse_args_DSS(long arg1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(arg1 + 0x38) == 0) {
    failf(arg1,"%s","Out of tokens in destination parameter");
    iVar1 = 1;
  }
  else {
    iVar1 = parse_destination_token_part_47(arg1,arg1 + 0xd8);
    iVar1 = iVar1 + 1;
  }
  iVar2 = parse_source_token(arg1,arg1 + 0x110);
  iVar3 = parse_source_token(arg1,arg1 + 0x150);
  return iVar3 + iVar1 + iVar2;
}

/* ======================================================================
 * parse_args_DS  (Ghidra `parse_args_DS` @ 00525d40)
 * Signature: uint8_t parse_args_DS(void)
 * Calls: `failf`, `parse_destination_token_part_47`, `parse_source_token`
 * Called by: `parse_args_DS__0052de40`
 */
int parse_args_DS(long arg1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(arg1 + 0x38) == 0) {
    failf(arg1,"%s","Out of tokens in destination parameter");
    iVar1 = 1;
  }
  else {
    iVar1 = parse_destination_token_part_47(arg1,arg1 + 0xd8);
    iVar1 = iVar1 + 1;
  }
  iVar2 = parse_source_token(arg1,arg1 + 0x110);
  return iVar2 + iVar1;
}

/* ======================================================================
 * parse_args_TEXCRD  (Ghidra `parse_args_TEXCRD` @ 00525db0)
 * Signature: uint8_t parse_args_TEXCRD(void)
 * Calls: `failf`, `parse_destination_token_part_47`, `parse_source_token`
 * Called by: `parse_args_TEXCRD__0052e190`
 */
int parse_args_TEXCRD(long arg1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 1;
  if (*(byte *)(arg1 + 0xd5) != 0xff) {
    uVar1 = (uint)*(byte *)(arg1 + 0xd5);
  }
  if ((uVar1 | (uint)*(byte *)(arg1 + 0xd4) << 0x10) < 0x10004) {
    if (*(int *)(arg1 + 0x38) != 0) {
      iVar2 = parse_destination_token_part_47(arg1,arg1 + 0xd8);
      return iVar2 + 1;
    }
    failf(arg1,"%s","Out of tokens in destination parameter");
    return 1;
  }
  if (*(int *)(arg1 + 0x38) == 0) {
    failf(arg1,"%s","Out of tokens in destination parameter");
    iVar2 = 1;
  }
  else {
    iVar2 = parse_destination_token_part_47(arg1,arg1 + 0xd8);
    iVar2 = iVar2 + 1;
  }
  iVar3 = parse_source_token(arg1,arg1 + 0x110);
  return iVar3 + iVar2;
}

/* ======================================================================
 * parse_args_SINCOS  (Ghidra `parse_args_SINCOS` @ 00525e70)
 * Signature: uint8_t parse_args_SINCOS(void)
 * Calls: `failf`, `parse_destination_token_part_47`, `parse_source_token`
 * Called by: `parse_args_SINCOS__0052e110`
 */
int parse_args_SINCOS(long arg1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = 1;
  if (*(byte *)(arg1 + 0xd5) != 0xff) {
    uVar1 = (uint)*(byte *)(arg1 + 0xd5);
  }
  if (0x2ffff < (uVar1 | (uint)*(byte *)(arg1 + 0xd4) << 0x10)) {
    if (*(int *)(arg1 + 0x38) == 0) {
      failf(arg1,"%s","Out of tokens in destination parameter");
      iVar2 = 1;
    }
    else {
      iVar2 = parse_destination_token_part_47(arg1,arg1 + 0xd8);
      iVar2 = iVar2 + 1;
    }
    iVar3 = parse_source_token(arg1,arg1 + 0x110);
    return iVar3 + iVar2;
  }
  if (*(int *)(arg1 + 0x38) == 0) {
    failf(arg1,"%s","Out of tokens in destination parameter");
    iVar2 = 1;
  }
  else {
    iVar2 = parse_destination_token_part_47(arg1,arg1 + 0xd8);
    iVar2 = iVar2 + 1;
  }
  iVar3 = parse_source_token(arg1,arg1 + 0x110);
  iVar4 = parse_source_token(arg1,arg1 + 0x150);
  iVar5 = parse_source_token(arg1,arg1 + 400);
  return iVar5 + iVar2 + iVar3 + iVar4;
}

/* ======================================================================
 * parse_args_TEXLD  (Ghidra `parse_args_TEXLD` @ 00525f60)
 * Signature: uint8_t parse_args_TEXLD(void)
 * Calls: `failf`, `parse_destination_token_part_47`, `parse_source_token`
 * Called by: `parse_args_TEXLD__0052e210`
 */
int parse_args_TEXLD(long arg1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(arg1 + 0xd5);
  uVar2 = (uint)*(byte *)(arg1 + 0xd4) << 0x10;
  uVar6 = 1;
  if (bVar1 != 0xff) {
    uVar6 = (uint)bVar1;
  }
  if (0x1ffff < (uVar6 | uVar2)) {
    if (*(int *)(arg1 + 0x38) == 0) {
      iVar3 = 1;
      failf(arg1,"%s","Out of tokens in destination parameter");
    }
    else {
      iVar3 = parse_destination_token_part_47(arg1,arg1 + 0xd8);
      iVar3 = iVar3 + 1;
    }
    iVar4 = parse_source_token(arg1,arg1 + 0x110);
    iVar5 = parse_source_token(arg1,arg1 + 0x150);
    return iVar5 + iVar3 + iVar4;
  }
  uVar6 = 1;
  if (bVar1 != 0xff) {
    uVar6 = (uint)bVar1;
  }
  if ((uVar6 | uVar2) < 0x10004) {
    if (*(int *)(arg1 + 0x38) != 0) {
      iVar3 = parse_destination_token_part_47(arg1,arg1 + 0xd8);
      return iVar3 + 1;
    }
    failf(arg1,"%s","Out of tokens in destination parameter");
    return 1;
  }
  if (*(int *)(arg1 + 0x38) == 0) {
    iVar3 = 1;
    failf(arg1,"%s","Out of tokens in destination parameter");
  }
  else {
    iVar3 = parse_destination_token_part_47(arg1,arg1 + 0xd8);
    iVar3 = iVar3 + 1;
  }
  iVar4 = parse_source_token(arg1,arg1 + 0x110);
  return iVar4 + iVar3;
}

/* ======================================================================
 * parse_args_DCL  (Ghidra `parse_args_DCL` @ 005260b0)
 * Signature: uint8_t parse_args_DCL(void)
 * Calls: `failf`, `parse_destination_token_part_47`
 * Called by: `parse_args_DCL__0052cd90`
 */
uint64_t parse_args_DCL(long arg1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = **(uint **)(arg1 + 0x30);
  if (-1 < (int)uVar4) {
    failf(arg1,"%s","Bit #31 in DCL token must be one");
  }
  *(long *)(arg1 + 0x30) = *(long *)(arg1 + 0x30) + 4;
  *(int *)(arg1 + 0x20) = *(int *)(arg1 + 0x20) + 4;
  *(uint32_t *)(arg1 + 0x460) = 1;
  iVar3 = *(int *)(arg1 + 0x38) + -1;
  *(int *)(arg1 + 0x38) = iVar3;
  if (iVar3 == 0) {
    failf(arg1,"%s","Out of tokens in destination parameter");
  }
  else {
    parse_destination_token_part_47(arg1,arg1 + 0xd8);
  }
  *(uint32_t *)(arg1 + 0x460) = 0;
  if (*(int *)(arg1 + 0x104) == 0) {
    iVar3 = *(int *)(arg1 + 0xe4);
  }
  else {
    failf(arg1,"%s","shift scale in DCL");
    iVar3 = *(int *)(arg1 + 0xe4);
  }
  if (iVar3 != 0) {
    failf(arg1,"%s","relative addressing in DCL");
  }
  iVar3 = *(int *)(arg1 + 0x108);
  iVar2 = *(int *)(arg1 + 0xe0);
  if (*(int *)(arg1 + 0xd0) == 1) {
    bVar1 = *(byte *)(arg1 + 0xd5);
    uVar6 = (uint)*(byte *)(arg1 + 0xd4) << 0x10;
    uVar5 = 1;
    if (bVar1 != 0xff) {
      uVar5 = (uint)bVar1;
    }
    if ((uVar5 | uVar6) < 0x30000) {
      uVar5 = 1;
      if (bVar1 != 0xff) {
        uVar5 = (uint)bVar1;
      }
      if ((uVar5 | uVar6) < 0x20000) goto LAB_00526163;
      if (iVar3 == 1) {
        *(uint32_t *)(arg1 + 0x290) = 10;
        *(int *)(arg1 + 0x294) = iVar2;
        uVar5 = 0x7fffffff;
      }
      else {
        if (iVar3 != 3) goto LAB_005262c6;
        *(uint32_t *)(arg1 + 0x290) = 5;
        *(int *)(arg1 + 0x294) = iVar2;
        uVar5 = 0x7fffffff;
      }
LAB_00526201:
      uVar4 = uVar4 & uVar5;
    }
    else {
      if (iVar3 == 1) goto LAB_005261e3;
      if (iVar3 != 0x11) {
        if (iVar3 == 3) {
          uVar6 = uVar4 & 0xf;
          uVar5 = uVar4 >> 0x10 & 0xf;
          if (uVar6 == 5) {
            if (7 < uVar5) {
              failf(arg1,"%s","DCL texcoord usage must have 0-7 index");
            }
          }
          else if (uVar6 == 10) {
            if (uVar5 != 0) {
              failf(arg1,"%s","DCL color usage must have 0 index");
            }
          }
          else {
            failf(arg1,"%s","Invalid DCL texture usage");
          }
          *(uint *)(arg1 + 0x290) = uVar6;
          *(uint *)(arg1 + 0x294) = uVar5;
          uVar5 = 0x7ff0ffe0;
        }
        else {
LAB_005262c6:
          if (iVar3 != 10) goto LAB_00526163;
          uVar5 = uVar4 >> 0x1b & 0xf;
          if (2 < uVar5 - 2) {
            failf(arg1,"%s","unknown sampler texture type");
          }
          *(uint *)(arg1 + 0x290) = uVar5;
          uVar5 = 0x7ffffff;
        }
        goto LAB_00526201;
      }
      if (iVar2 != 0) {
        if (iVar2 != 1) {
          *(uint32_t *)(arg1 + 0x290) = 0xffffffff;
          *(uint32_t *)(arg1 + 0x294) = 0;
          goto LAB_00526163;
        }
        if (*(int *)(arg1 + 0xfc) != 0xf) {
          failf(arg1,"%s","DCL face writemask must be full");
        }
        if (*(int *)(arg1 + 0x100) != 0) {
          failf(arg1,"%s","DCL face result modifier must be zero");
        }
        if (*(int *)(arg1 + 0x104) != 0) {
          failf(arg1,"%s","DCL face shift scale must be zero");
        }
      }
      *(uint32_t *)(arg1 + 0x290) = 0xffffffff;
      *(uint32_t *)(arg1 + 0x294) = 0;
      uVar4 = uVar4 & 0x7fffffff;
    }
    if (uVar4 != 0) {
      failf(arg1,"%s","reserved bits in DCL dword aren\'t zero");
    }
  }
  else {
    if (*(int *)(arg1 + 0xd0) == 2) {
      bVar1 = *(byte *)(arg1 + 0xd5);
      uVar5 = (uint)*(byte *)(arg1 + 0xd4) << 0x10;
      uVar6 = 1;
      if (bVar1 != 0xff) {
        uVar6 = (uint)bVar1;
      }
      if ((uVar6 | uVar5) < 0x30000) {
        uVar6 = 1;
        if (bVar1 != 0xff) {
          uVar6 = (uint)bVar1;
        }
        if ((uVar6 | uVar5) < 0x10001) goto LAB_00526163;
      }
      else if (iVar3 == 6) goto LAB_005261e3;
      if (iVar3 == 1) {
LAB_005261e3:
        *(uint *)(arg1 + 0x290) = uVar4 & 0xf;
        *(uint *)(arg1 + 0x294) = uVar4 >> 0x10 & 0xf;
        uVar5 = 0x7ff0ffe0;
        goto LAB_00526201;
      }
    }
LAB_00526163:
    failf(arg1,"%s","invalid DCL register type for this shader model");
  }
  return 3;
}

/* ======================================================================
 * emit_ARB1_EXPP  (Ghidra `emit_ARB1_EXPP` @ 005264d0)
 * Signature: uint8_t emit_ARB1_EXPP(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`
 * Called by: (none)
 */
void emit_ARB1_EXPP(long arg1)

{
  uint8_t auStack_88 [64];
  uint8_t local_48 [64];
  
  make_ARB1_destarg_string_constprop_77(arg1,auStack_88);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_48);
  output_line(arg1,"%s%s, %s;",&DAT_005ca7a8 /* R:4.6234399492979085e-39f */,auStack_88,local_48);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_ABS  (Ghidra `emit_ARB1_ABS` @ 00526520)
 * Signature: uint8_t emit_ARB1_ABS(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`
 * Called by: (none)
 */
void emit_ARB1_ABS(long arg1)

{
  uint8_t auStack_88 [64];
  uint8_t local_48 [64];
  
  make_ARB1_destarg_string_constprop_77(arg1,auStack_88);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_48);
  output_line(arg1,"%s%s, %s;",&DAT_005ca58b /* R:7.646113604366684e-39f */,auStack_88,local_48);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_FRC  (Ghidra `emit_ARB1_FRC` @ 00526570)
 * Signature: uint8_t emit_ARB1_FRC(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`
 * Called by: (none)
 */
void emit_ARB1_FRC(long arg1)

{
  uint8_t auStack_88 [64];
  uint8_t local_48 [64];
  
  make_ARB1_destarg_string_constprop_77(arg1,auStack_88);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_48);
  output_line(arg1,"%s%s, %s;",&DAT_005ca58f /* R:6.18249239084102e-39f */,auStack_88,local_48);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_LIT  (Ghidra `emit_ARB1_LIT` @ 005265c0)
 * Signature: uint8_t emit_ARB1_LIT(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`
 * Called by: (none)
 */
void emit_ARB1_LIT(long arg1)

{
  uint8_t auStack_88 [64];
  uint8_t local_48 [64];
  
  make_ARB1_destarg_string_constprop_77(arg1,auStack_88);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_48);
  output_line(arg1,"%s%s, %s;",&DAT_005ca593 /* R:7.740475641655853e-39f */,auStack_88,local_48);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_EXP  (Ghidra `emit_ARB1_EXP` @ 00526610)
 * Signature: uint8_t emit_ARB1_EXP(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`
 * Called by: (none)
 */
void emit_ARB1_EXP(long arg1)

{
  uint8_t auStack_88 [64];
  uint8_t local_48 [64];
  
  make_ARB1_destarg_string_constprop_77(arg1,auStack_88);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_48);
  output_line(arg1,"%s%s, %s;",&DAT_005ca7a8 /* R:4.6234399492979085e-39f */,auStack_88,local_48);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_RCP  (Ghidra `emit_ARB1_RCP` @ 00526660)
 * Signature: uint8_t emit_ARB1_RCP(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`
 * Called by: (none)
 */
void emit_ARB1_RCP(long arg1)

{
  uint8_t auStack_88 [64];
  uint8_t local_48 [64];
  
  make_ARB1_destarg_string_constprop_77(arg1,auStack_88);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_48);
  output_line(arg1,"%s%s, %s;",&DAT_005ca5a3 /* R:7.370989670373471e-39f */,auStack_88,local_48);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_MOV  (Ghidra `emit_ARB1_MOV` @ 005266b0)
 * Signature: uint8_t emit_ARB1_MOV(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`
 * Called by: (none)
 */
void emit_ARB1_MOV(long arg1)

{
  uint8_t auStack_88 [64];
  uint8_t local_48 [64];
  
  make_ARB1_destarg_string_constprop_77(arg1,auStack_88);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_48);
  output_line(arg1,"%s%s, %s;",&DAT_005ca5a7 /* R:7.926300429711502e-39f */,auStack_88,local_48);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_DSY  (Ghidra `emit_ARB1_DSY` @ 00526700)
 * Signature: uint8_t emit_ARB1_DSY(void)
 * Calls: `emit_ARB1_dest_modifiers`, `failf`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`
 * Called by: (none)
 */
void emit_ARB1_DSY(long arg1)

{
  uint8_t auStack_88 [64];
  uint8_t local_48 [64];
  
  if (*(int *)(arg1 + 0x4a8) == 0) {
    failf(arg1,"DSY unsupported in %s profile",**(uint64_t **)(arg1 + 200));
    return;
  }
  make_ARB1_destarg_string_constprop_77(arg1,auStack_88);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_48);
  output_line(arg1,"%s%s, %s;",&DAT_005ca7ac /* R:8.197848250023758e-39f */,auStack_88,local_48);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_DSX  (Ghidra `emit_ARB1_DSX` @ 00526780)
 * Signature: uint8_t emit_ARB1_DSX(void)
 * Calls: `emit_ARB1_dest_modifiers`, `failf`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`
 * Called by: (none)
 */
void emit_ARB1_DSX(long arg1)

{
  uint8_t auStack_88 [64];
  uint8_t local_48 [64];
  
  if (*(int *)(arg1 + 0x4a8) == 0) {
    failf(arg1,"DSX unsupported in %s profile",**(uint64_t **)(arg1 + 200));
    return;
  }
  make_ARB1_destarg_string_constprop_77(arg1,auStack_88);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_48);
  output_line(arg1,"%s%s, %s;",&DAT_005ca7ce /* R:8.106012753865767e-39f */,auStack_88,local_48);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_SGN  (Ghidra `emit_ARB1_SGN` @ 00526800)
 * Signature: uint8_t emit_ARB1_SGN(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_SGN(long arg1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_108 [64];
  char local_c8 [64];
  char local_88 [64];
  char local_48 [64];
  
  pcVar3 = acStack_108;
  if (*(int *)(arg1 + 0x4a8) == 0) {
    make_ARB1_destarg_string_constprop_77(arg1,local_c8);
    make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,acStack_108);
    iVar1 = *(int *)(arg1 + 0x2c0);
    iVar2 = iVar1 + 1;
    *(int *)(arg1 + 0x2c0) = iVar2;
    if (iVar1 < *(int *)(arg1 + 0x2c4)) {
      iVar2 = *(int *)(arg1 + 0x2c4);
    }
    *(int *)(arg1 + 0x2c4) = iVar2;
    snprintf(local_88,0x40,"scratch%d");
    iVar1 = *(int *)(arg1 + 0x2c0);
    iVar2 = iVar1 + 1;
    *(int *)(arg1 + 0x2c0) = iVar2;
    if (iVar1 < *(int *)(arg1 + 0x2c4)) {
      iVar2 = *(int *)(arg1 + 0x2c4);
    }
    *(int *)(arg1 + 0x2c4) = iVar2;
    snprintf(local_48,0x40,"scratch%d");
    output_line(arg1,"SLT %s, %s, 0.0;",local_88,acStack_108);
    output_line(arg1,"SLT %s, -%s, 0.0;",local_48,acStack_108);
    pcVar6 = local_48;
    pcVar3 = local_88;
    pcVar4 = local_c8;
    pcVar5 = "ADD%s -%s, %s;";
  }
  else {
    make_ARB1_destarg_string_constprop_77(arg1,acStack_108);
    make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_c8);
    pcVar6 = local_c8;
    pcVar4 = "SSG";
    pcVar5 = "%s%s, %s;";
  }
  output_line(arg1,pcVar5,pcVar4,pcVar3,pcVar6);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_NRM  (Ghidra `emit_ARB1_NRM` @ 00526940)
 * Signature: uint8_t emit_ARB1_NRM(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_NRM(long arg1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint8_t *puVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_c8 [64];
  uint8_t local_88 [64];
  char local_48 [64];
  
  pcVar6 = acStack_c8;
  pcVar3 = acStack_c8;
  if ((*(int *)(arg1 + 0x4b0) == 0) &&
     ((*(int *)(arg1 + 0x4a8) == 0 || (*(int *)(arg1 + 0xd0) != 1)))) {
    make_ARB1_destarg_string_constprop_77(arg1,local_88);
    make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,acStack_c8);
    iVar1 = *(int *)(arg1 + 0x2c0);
    iVar2 = iVar1 + 1;
    *(int *)(arg1 + 0x2c0) = iVar2;
    if (iVar1 < *(int *)(arg1 + 0x2c4)) {
      iVar2 = *(int *)(arg1 + 0x2c4);
    }
    *(int *)(arg1 + 0x2c4) = iVar2;
    snprintf(local_48,0x40,"scratch%d");
    output_line(arg1,"DP3 %s.w, %s, %s;",local_48,acStack_c8,acStack_c8);
    output_line(arg1,"RSQ %s.w, %s.w;",local_48);
    pcVar3 = local_48;
    puVar4 = local_88;
    pcVar5 = "MUL%s, %s.w, %s;";
  }
  else {
    make_ARB1_destarg_string_constprop_77(arg1,acStack_c8);
    make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_88);
    pcVar6 = local_88;
    puVar4 = &DAT_005ca587 /* R:7.100858562808647e-39f */;
    pcVar5 = "%s%s, %s;";
  }
  output_line(arg1,pcVar5,puVar4,pcVar3,pcVar6);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_MOVA  (Ghidra `emit_ARB1_MOVA` @ 00526a70)
 * Signature: uint8_t emit_ARB1_MOVA(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_MOVA(long arg1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char acStack_a8 [64];
  char local_68 [64];
  char local_28 [32];
  
  pcVar5 = acStack_a8;
  pcVar3 = acStack_a8;
  if (*(int *)(arg1 + 0x4b0) == 0) {
    if (*(long *)(arg1 + 0x4a8) == 0) {
      make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,acStack_a8);
      iVar1 = *(int *)(arg1 + 0x2c0);
      iVar2 = iVar1 + 1;
      *(int *)(arg1 + 0x2c0) = iVar2;
      if (iVar1 < *(int *)(arg1 + 0x2c4)) {
        iVar2 = *(int *)(arg1 + 0x2c4);
      }
      *(int *)(arg1 + 0x2c4) = iVar2;
      snprintf(local_68,0x40,"scratch%d");
      snprintf(local_28,0x20,"addr%d",(ulong)*(uint *)(arg1 + 0xe0));
      if (*(int *)(arg1 + 0xd0) == 1) {
        output_line(arg1,"CMP %s, %s, -1.0, 1.0;",local_68,acStack_a8);
      }
      else {
        output_line(arg1,"SLT %s, %s, 0.0;",local_68,acStack_a8);
        output_line(arg1,"MAD %s, %s, -2.0, 1.0;",local_68);
      }
      output_line(arg1,"ABS %s, %s;",local_28,acStack_a8);
      output_line(arg1,"ADD %s, %s, 0.5;",local_28);
      output_line(arg1,"FLR %s, %s;",local_28);
      output_line(arg1,"MUL %s, %s, %s;",local_28,local_28,local_68);
      *(uint32_t *)(arg1 + 0x354) = 0xffffffff;
      return;
    }
    make_ARB1_destarg_string_constprop_77(arg1,local_68);
    make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,acStack_a8);
    pcVar3 = local_68;
    pcVar4 = "ARR";
  }
  else {
    make_ARB1_destarg_string_constprop_77(arg1,acStack_a8);
    make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_68);
    pcVar5 = local_68;
    pcVar4 = "ROUND.S";
  }
  output_line(arg1,"%s%s, %s;",pcVar4,pcVar3,pcVar5);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_RSQ  (Ghidra `emit_ARB1_RSQ` @ 00526c60)
 * Signature: uint8_t emit_ARB1_RSQ(void)
 * Calls: `emit_ARB1_dest_modifiers`, `make_ARB1_destarg_string_constprop_77`, `make_ARB1_srcarg_string_in_buf_constprop_62`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_RSQ(long arg1)

{
  int iVar1;
  int iVar2;
  uint8_t auStack_108 [64];
  uint8_t local_c8 [64];
  char local_88 [64];
  uint8_t local_48 [64];
  
  if (*(int *)(arg1 + 0x4b0) != 0) {
    if ((*(uint *)(arg1 + 0x130) == 0xc) || (*(uint *)(arg1 + 0x130) < 2)) {
      *(uint32_t *)(arg1 + 0x130) = 0xb;
    }
    make_ARB1_destarg_string_constprop_77(arg1,auStack_108);
    make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_c8);
    if (*(int *)(arg1 + 0x130) == 0xb) {
      output_line(arg1,"RSQ%s, %s;",auStack_108,local_c8);
    }
    else {
      iVar1 = *(int *)(arg1 + 0x2c0);
      iVar2 = iVar1 + 1;
      *(int *)(arg1 + 0x2c0) = iVar2;
      if (iVar1 < *(int *)(arg1 + 0x2c4)) {
        iVar2 = *(int *)(arg1 + 0x2c4);
      }
      *(int *)(arg1 + 0x2c4) = iVar2;
      snprintf(local_88,0x40,"scratch%d");
      output_line(arg1,"ABS %s, %s;",local_88,local_c8);
      output_line(arg1,"RSQ%s, %s.x;",auStack_108,local_88);
    }
    emit_ARB1_dest_modifiers(arg1);
    return;
  }
  make_ARB1_destarg_string_constprop_77(arg1,local_88);
  make_ARB1_srcarg_string_in_buf_constprop_62(arg1,arg1 + 0x110,local_48);
  output_line(arg1,"%s%s, %s;",&DAT_005ca59f /* R:7.468564885041336e-39f */,local_88,local_48);
  emit_ARB1_dest_modifiers(arg1);
  return;
}

/* ======================================================================
 * emit_ARB1_finalize  (Ghidra `emit_ARB1_finalize` @ 00526dd0)
 * Signature: uint8_t emit_ARB1_finalize(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_finalize(long arg1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char acStack_58 [64];
  
  iVar1 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar1 + 1;
  lVar2 = *(long *)(arg1 + 0x58);
  if (lVar2 == 0) {
    lVar2 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x58) = lVar2;
    if (lVar2 != 0) goto LAB_00526e13;
  }
  else {
LAB_00526e13:
    *(long *)(arg1 + 0x50) = lVar2;
    *(uint32_t *)(arg1 + 0xac) = 0;
  }
  iVar1 = *(int *)(arg1 + 0xd0);
  if (iVar1 == 2) {
    if (*(int *)(arg1 + 0x494) == 0) {
      output_line(arg1,"OPTION ARB_position_invariant;");
      iVar1 = *(int *)(arg1 + 0xd0);
      goto LAB_00526e30;
    }
  }
  else {
LAB_00526e30:
    if ((iVar1 == 1) && (*(int *)(arg1 + 0x47c) != 0)) {
      output_line(arg1,"OPTION ARB_draw_buffers;");
    }
  }
  pcVar5 = "FLOAT TEMP";
  lVar2 = (long)(*(int *)(arg1 + 0xa8) + -1);
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + lVar2 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + lVar2 * 4);
  if (*(int *)(arg1 + 0x4b0) == 0) {
    pcVar5 = "TEMP";
  }
  lVar2 = *(long *)(arg1 + 0x60);
  if (lVar2 == 0) {
    lVar2 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar2;
    if (lVar2 == 0) goto LAB_00526e8f;
  }
  *(long *)(arg1 + 0x50) = lVar2;
  *(uint32_t *)(arg1 + 0xac) = 0;
LAB_00526e8f:
  iVar1 = *(int *)(arg1 + 0x2c4);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(arg1 + 0x2c0) + 1;
      if (iVar1 <= *(int *)(arg1 + 0x2c0)) {
        iVar1 = iVar3;
      }
      *(int *)(arg1 + 0x2c0) = iVar3;
      *(int *)(arg1 + 0x2c4) = iVar1;
      iVar4 = iVar4 + 1;
      snprintf(acStack_58,0x40,"scratch%d");
      output_line(arg1,"%s %s;",pcVar5,acStack_58);
      iVar1 = *(int *)(arg1 + 0x2c4);
    } while (iVar4 < iVar1);
  }
  if ((((*(int *)(arg1 + 0x4a8) != 0) && (*(int *)(arg1 + 0xd0) != 1)) &&
      (*(int *)(arg1 + 0x4b0) == 0)) && (0 < *(int *)(arg1 + 0x2b8))) {
    iVar1 = 0;
    do {
      iVar4 = iVar1 + 1;
      output_line(arg1,"TEMP rep%d;",iVar1);
      iVar1 = iVar4;
    } while (iVar4 < *(int *)(arg1 + 0x2b8));
  }
  iVar1 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar1;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4);
  return;
}

/* ======================================================================
 * emit_ARB1_array  (Ghidra `emit_ARB1_array` @ 00527020)
 * Signature: uint8_t emit_ARB1_array(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_array(long arg1,long arg2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  char acStack_68 [72];
  
  uVar1 = *(uint *)(arg2 + 8);
  iVar4 = *(int *)(arg1 + 0x3c4) + *(int *)(arg1 + 0x3c8) + *(int *)(arg1 + 0x3cc);
  snprintf(acStack_68,0x40,"c_array_%d_%d",(ulong)*(uint *)(arg2 + 4),(ulong)uVar1);
  iVar2 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar2 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar2 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar2 + 1;
  lVar3 = *(long *)(arg1 + 0x60);
  if (lVar3 == 0) {
    lVar3 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar3;
    if (lVar3 == 0) goto LAB_005270b0;
  }
  *(long *)(arg1 + 0x50) = lVar3;
  *(uint32_t *)(arg1 + 0xac) = 0;
LAB_005270b0:
  output_line(arg1,"PARAM %s[%d] = { program.local[%d..%d] };",acStack_68,uVar1,iVar4,
              (uVar1 - 1) + iVar4);
  iVar2 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar2;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar2 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar2 * 4);
  *(int *)(arg2 + 0x1c) = iVar4;
  return;
}

/* ======================================================================
 * emit_GLSL_const_array  (Ghidra `emit_GLSL_const_array` @ 00527150)
 * Signature: uint8_t emit_GLSL_const_array(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_GLSL_const_array(long arg1,uint64_t arg2,uint arg3,uint arg4)

{
  int iVar1;
  long lVar2;
  char acStack_58 [72];
  
  snprintf(acStack_58,0x40,"%s_const_array_%d_%d",*(uint64_t *)(arg1 + 0xb0),(ulong)arg3,
           (ulong)arg4);
  iVar1 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar1 + 1;
  lVar2 = *(long *)(arg1 + 0x60);
  if (lVar2 == 0) {
    lVar2 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar2;
    if (lVar2 == 0) goto LAB_005271be;
  }
  *(long *)(arg1 + 0x50) = lVar2;
  *(uint32_t *)(arg1 + 0xac) = 0;
LAB_005271be:
  output_line(arg1,"uniform vec4 %s[%d];",acStack_58,arg4);
  iVar1 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar1;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4);
  return;
}

/* ======================================================================
 * emit_GLSL_array  (Ghidra `emit_GLSL_array` @ 00527230)
 * Signature: uint8_t emit_GLSL_array(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_array(long arg1,long arg2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)(arg1 + 0xa8);
  uVar1 = *(uint32_t *)(arg2 + 4);
  uVar2 = *(uint32_t *)(arg1 + 0x3c4);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar3 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar3 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar3 + 1;
  lVar4 = *(long *)(arg1 + 0x60);
  if (lVar4 == 0) {
    lVar4 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar4;
    if (lVar4 == 0) goto LAB_0052729b;
  }
  *(long *)(arg1 + 0x50) = lVar4;
  *(uint32_t *)(arg1 + 0xac) = 0;
LAB_0052729b:
  output_line(arg1,"#define ARRAYBASE_%d %d",uVar1,uVar2);
  iVar3 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar3;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar3 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar3 * 4);
  *(uint32_t *)(arg2 + 0x1c) = uVar2;
  return;
}

/* ======================================================================
 * emit_ARB1_uniform  (Ghidra `emit_ARB1_uniform` @ 00527330)
 * Signature: uint8_t emit_ARB1_uniform(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_uniform(long arg1,uint64_t arg2,int arg3,long arg4)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  long lVar4;
  char *pcVar5;
  char *__s;
  uint8_t auStack_d8 [8];
  char acStack_d0 [64];
  uint64_t uStack_90;
  char local_88 [64];
  uint8_t local_48 [24];
  
  pcVar5 = local_88;
  uStack_90 = 0x52735e;
  uVar3 = get_D3D_register_string_constprop_65();
  uStack_90 = 0x52737a;
  snprintf(local_88,0x40,"%s%s",uVar3,local_48);
  iVar2 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar2 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar2 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar2 + 1;
  lVar4 = *(long *)(arg1 + 0x60);
  if (lVar4 == 0) {
    uStack_90 = 0x5274b7;
    lVar4 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar4;
    if (lVar4 == 0) goto LAB_005273c0;
  }
  *(long *)(arg1 + 0x50) = lVar4;
  *(uint32_t *)(arg1 + 0xac) = 0;
LAB_005273c0:
  if (arg4 == 0) {
    __s = "program.local";
    arg3 = *(int *)(arg1 + 0x3c4) + *(int *)(arg1 + 0x3c8) + *(int *)(arg1 + 0x3cc);
  }
  else {
    uVar1 = *(uint *)(arg4 + 4);
    if (*(long *)(arg4 + 0x10) == 0) {
      __s = "program.local";
      arg3 = (arg3 - uVar1) + *(int *)(arg4 + 0x1c);
      pcVar5 = local_88;
    }
    else {
      __s = acStack_d0;
      snprintf(__s,0x40,"c_array_%d_%d",(ulong)uVar1,(ulong)*(uint *)(arg4 + 8));
      arg3 = arg3 - uVar1;
      pcVar5 = auStack_d8;
    }
  }
  *(uint64_t *)(pcVar5 + -8) = 0x52741f;
  output_line(arg1,"PARAM %s = %s[%d];",local_88,__s,arg3);
  iVar2 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar2;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar2 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar2 * 4);
  return;
}

/* ======================================================================
 * emit_ARB1_DEFI  (Ghidra `emit_ARB1_DEFI` @ 005274d0)
 * Signature: uint8_t emit_ARB1_DEFI(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_DEFI(long arg1)

{
  int iVar1;
  uint64_t uVar2;
  long lVar3;
  char local_58 [64];
  uint8_t local_18 [16];
  
  uVar2 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x108),*(uint32_t *)(arg1 + 0xe0),
                     local_18);
  snprintf(local_58,0x40,"%s%s",uVar2,local_18);
  iVar1 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar1 + 1;
  lVar3 = *(long *)(arg1 + 0x60);
  if (lVar3 == 0) {
    lVar3 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar3;
    if (lVar3 == 0) goto LAB_0052754e;
  }
  *(long *)(arg1 + 0x50) = lVar3;
  *(uint32_t *)(arg1 + 0xac) = 0;
LAB_0052754e:
  output_line(arg1,"PARAM %s = { %d, %d, %d, %d };",local_58,*(uint32_t *)(arg1 + 0x290),
              *(uint32_t *)(arg1 + 0x294),*(uint32_t *)(arg1 + 0x298),
              *(uint32_t *)(arg1 + 0x29c));
  iVar1 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar1;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4);
  return;
}

/* ======================================================================
 * emit_ARB1_DEFB  (Ghidra `emit_ARB1_DEFB` @ 005275e0)
 * Signature: uint8_t emit_ARB1_DEFB(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_DEFB(long arg1)

{
  int iVar1;
  uint64_t uVar2;
  long lVar3;
  char acStack_58 [64];
  uint8_t local_18 [16];
  
  uVar2 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x108),*(uint32_t *)(arg1 + 0xe0),
                     local_18);
  snprintf(acStack_58,0x40,"%s%s",uVar2,local_18);
  iVar1 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar1 + 1;
  lVar3 = *(long *)(arg1 + 0x60);
  if (lVar3 == 0) {
    lVar3 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar3;
    if (lVar3 == 0) goto LAB_0052765c;
  }
  *(long *)(arg1 + 0x50) = lVar3;
  *(uint32_t *)(arg1 + 0xac) = 0;
LAB_0052765c:
  output_line(arg1,"PARAM %s = %d;",acStack_58,*(int *)(arg1 + 0x290) != 0);
  iVar1 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar1;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4);
  return;
}

/* ======================================================================
 * emit_GLSL_DEFI  (Ghidra `emit_GLSL_DEFI` @ 005276e0)
 * Signature: uint8_t emit_GLSL_DEFI(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_GLSL_DEFI(long arg1)

{
  int iVar1;
  uint64_t uVar2;
  long lVar3;
  char local_58 [64];
  uint8_t local_18 [16];
  
  uVar2 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x108),*(uint32_t *)(arg1 + 0xe0),
                     local_18);
  snprintf(local_58,0x40,"%s_%s%s",*(uint64_t *)(arg1 + 0xb0),uVar2,local_18);
  iVar1 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar1 + 1;
  lVar3 = *(long *)(arg1 + 0x60);
  if (lVar3 == 0) {
    lVar3 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar3;
    if (lVar3 == 0) goto LAB_00527765;
  }
  *(long *)(arg1 + 0x50) = lVar3;
  *(uint32_t *)(arg1 + 0xac) = 0;
LAB_00527765:
  output_line(arg1,"const ivec4 %s = ivec4(%d, %d, %d, %d);",local_58,
              *(uint32_t *)(arg1 + 0x290),*(uint32_t *)(arg1 + 0x294),
              *(uint32_t *)(arg1 + 0x298),*(uint32_t *)(arg1 + 0x29c));
  iVar1 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar1;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4);
  return;
}

/* ======================================================================
 * emit_GLSL_DEFB  (Ghidra `emit_GLSL_DEFB` @ 00527800)
 * Signature: uint8_t emit_GLSL_DEFB(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_GLSL_DEFB(long arg1)

{
  int iVar1;
  uint64_t uVar2;
  long lVar3;
  char *pcVar4;
  char acStack_58 [64];
  uint8_t local_18 [16];
  
  uVar2 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x108),*(uint32_t *)(arg1 + 0xe0),
                     local_18);
  snprintf(acStack_58,0x40,"%s_%s%s",*(uint64_t *)(arg1 + 0xb0),uVar2,local_18);
  iVar1 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar1 + 1;
  lVar3 = *(long *)(arg1 + 0x60);
  if (lVar3 == 0) {
    lVar3 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar3;
    if (lVar3 == 0) goto LAB_00527883;
  }
  *(long *)(arg1 + 0x50) = lVar3;
  *(uint32_t *)(arg1 + 0xac) = 0;
LAB_00527883:
  pcVar4 = "true";
  if (*(int *)(arg1 + 0x290) == 0) {
    pcVar4 = "false";
  }
  output_line(arg1,"const bool %s = %s;",acStack_58,pcVar4);
  iVar1 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar1;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4);
  return;
}

/* ======================================================================
 * emit_ARB1_const_array  (Ghidra `emit_ARB1_const_array` @ 00527910)
 * Signature: uint8_t emit_ARB1_const_array(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `floatstr_constprop_59`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_const_array(long arg1,int *arg2,ulong arg3,uint arg4)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  char local_f8 [64];
  uint8_t local_b8 [32];
  uint8_t local_98 [32];
  uint8_t local_78 [32];
  uint8_t local_58 [40];
  
  snprintf(local_f8,0x40,"c_array_%d_%d",arg3 & 0xffffffff,(ulong)arg4);
  iVar1 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar1 + 1;
  lVar3 = *(long *)(arg1 + 0x60);
  if (lVar3 == 0) {
    lVar3 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar3;
    if (lVar3 == 0) goto LAB_0052798b;
  }
  *(long *)(arg1 + 0x50) = lVar3;
  *(uint32_t *)(arg1 + 0xac) = 0;
LAB_0052798b:
  output_line(arg1,"PARAM %s[%d] = {",local_f8,arg4);
  iVar1 = *(int *)(arg1 + 0xac) + 1;
  *(int *)(arg1 + 0xac) = iVar1;
  if (0 < (int)arg4) {
    uVar4 = 0;
    do {
      for (; *arg2 != 0; arg2 = *(int **)(arg2 + 6)) {
      }
      floatstr_constprop_59(arg2[2],arg1,local_b8,1);
      floatstr_constprop_59(arg2[3],arg1,local_98,1);
      floatstr_constprop_59(arg2[4],arg1,local_78,1);
      floatstr_constprop_59(arg2[5],arg1,local_58,1);
      pcVar2 = ",";
      if ((int)(arg4 - 1) <= (int)uVar4) {
        pcVar2 = "";
      }
      uVar4 = uVar4 + 1;
      output_line(arg1,"{ %s, %s, %s, %s }%s",local_b8,local_98,local_78,local_58,pcVar2);
      arg2 = *(int **)(arg2 + 6);
    } while (uVar4 != arg4);
    iVar1 = *(int *)(arg1 + 0xac);
  }
  *(int *)(arg1 + 0xac) = iVar1 + -1;
  output_line(arg1,&DAT_005ca998 /* R:525239.8125f */);
  iVar1 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar1;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4);
  return;
}

/* ======================================================================
 * emit_ARB1_DEF  (Ghidra `emit_ARB1_DEF` @ 00527b10)
 * Signature: uint8_t emit_ARB1_DEF(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `floatstr_constprop_59`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_DEF(long arg1)

{
  int iVar1;
  uint64_t uVar2;
  long lVar3;
  char local_e8 [64];
  uint8_t local_a8 [32];
  uint8_t local_88 [32];
  uint8_t local_68 [32];
  uint8_t local_48 [32];
  uint8_t local_28 [24];
  
  uVar2 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x108),*(uint32_t *)(arg1 + 0xe0),
                     local_28);
  snprintf(local_e8,0x40,"%s%s",uVar2,local_28);
  floatstr_constprop_59(*(uint32_t *)(arg1 + 0x290),arg1,local_a8,1);
  floatstr_constprop_59(*(uint32_t *)(arg1 + 0x294),arg1,local_88,1);
  floatstr_constprop_59(*(uint32_t *)(arg1 + 0x298),arg1,local_68,1);
  floatstr_constprop_59(*(uint32_t *)(arg1 + 0x29c),arg1,local_48,1);
  iVar1 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar1 + 1;
  lVar3 = *(long *)(arg1 + 0x60);
  if (lVar3 == 0) {
    lVar3 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar3;
    if (lVar3 == 0) goto LAB_00527c09;
  }
  *(long *)(arg1 + 0x50) = lVar3;
  *(uint32_t *)(arg1 + 0xac) = 0;
LAB_00527c09:
  output_line(arg1,"PARAM %s = { %s, %s, %s, %s };",local_e8,local_a8,local_88,local_68,local_48)
  ;
  iVar1 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar1;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4);
  return;
}

/* ======================================================================
 * emit_GLSL_DEF  (Ghidra `emit_GLSL_DEF` @ 00527ca0)
 * Signature: uint8_t emit_GLSL_DEF(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `floatstr_constprop_59`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_GLSL_DEF(long arg1)

{
  int iVar1;
  uint64_t uVar2;
  long lVar3;
  char local_e8 [64];
  uint8_t local_a8 [32];
  uint8_t local_88 [32];
  uint8_t local_68 [32];
  uint8_t local_48 [32];
  uint8_t local_28 [24];
  
  uVar2 = get_D3D_register_string_constprop_65
                    (arg1,*(uint32_t *)(arg1 + 0x108),*(uint32_t *)(arg1 + 0xe0),
                     local_28);
  snprintf(local_e8,0x40,"%s_%s%s",*(uint64_t *)(arg1 + 0xb0),uVar2,local_28);
  floatstr_constprop_59(*(uint32_t *)(arg1 + 0x290),arg1,local_a8,1);
  floatstr_constprop_59(*(uint32_t *)(arg1 + 0x294),arg1,local_88,1);
  floatstr_constprop_59(*(uint32_t *)(arg1 + 0x298),arg1,local_68,1);
  floatstr_constprop_59(*(uint32_t *)(arg1 + 0x29c),arg1,local_48,1);
  iVar1 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar1 + 1;
  lVar3 = *(long *)(arg1 + 0x60);
  if (lVar3 == 0) {
    lVar3 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar3;
    if (lVar3 == 0) goto LAB_00527da0;
  }
  *(long *)(arg1 + 0x50) = lVar3;
  *(uint32_t *)(arg1 + 0xac) = 0;
LAB_00527da0:
  output_line(arg1,"const vec4 %s = vec4(%s, %s, %s, %s);",local_e8,local_a8,local_88,local_68,
              local_48);
  iVar1 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar1;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4);
  return;
}

/* ======================================================================
 * emit_ARB1_global  (Ghidra `emit_ARB1_global` @ 00527e30)
 * Signature: uint8_t emit_ARB1_global(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `failf`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_global(long arg1,int arg2,uint32_t arg3)

{
  int iVar1;
  uint64_t uVar2;
  long lVar3;
  char *pcVar4;
  char acStack_68 [64];
  uint8_t local_28 [16];
  
  uVar2 = get_D3D_register_string_constprop_65();
  snprintf(acStack_68,0x40,"%s%s",uVar2,local_28);
  iVar1 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar1 + 1;
  lVar3 = *(long *)(arg1 + 0x60);
  if (lVar3 == 0) {
    lVar3 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar3;
    if (lVar3 == 0) goto LAB_00527eac;
  }
  *(long *)(arg1 + 0x50) = lVar3;
  *(uint32_t *)(arg1 + 0xac) = 0;
LAB_00527eac:
  if (arg2 == 0) {
    pcVar4 = "FLOAT TEMP";
    if (*(int *)(arg1 + 0x4b0) == 0) {
      pcVar4 = "TEMP";
    }
    output_line(arg1,"%s %s;",pcVar4,acStack_68);
  }
  else if (arg2 == 3) {
    if (*(int *)(arg1 + 0x4b0) == 0) {
      output_line(arg1,"ADDRESS %s;",acStack_68);
      if (*(int *)(arg1 + 0x4a8) == 0) {
        output_line(arg1,"TEMP addr%d;",arg3);
      }
    }
    else {
      output_line(arg1,"INT TEMP %s;",acStack_68);
    }
  }
  else {
    failf(arg1,"%s","BUG: we used a register we don\'t know how to define.");
  }
  iVar1 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar1;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4);
  return;
}

/* ======================================================================
 * emit_GLSL_finalize  (Ghidra `emit_GLSL_finalize` @ 00527fc0)
 * Signature: uint8_t emit_GLSL_finalize(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_append`, `buffer_create`, `failf`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_GLSL_finalize(int *arg1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint64_t uVar4;
  char acStack_58 [72];
  
  iVar1 = arg1[0x2a];
  *(uint64_t *)(arg1 + (long)iVar1 * 2 + 0x24) = *(uint64_t *)(arg1 + 0x14);
  arg1[(long)iVar1 + 0x28] = arg1[0x2b];
  arg1[0x2a] = iVar1 + 1;
  lVar2 = *(long *)(arg1 + 0x18);
  if (lVar2 == 0) {
    lVar2 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x18) = lVar2;
    if (lVar2 != 0) goto LAB_00528001;
  }
  else {
LAB_00528001:
    *(long *)(arg1 + 0x14) = lVar2;
    arg1[0x2b] = 0;
  }
  if (*arg1 == 0) {
    buffer_append(*(uint64_t *)(arg1 + 0x14),*(uint64_t *)(arg1 + 0x2e),
                  (long)arg1[0x30]);
  }
  iVar3 = arg1[0x2a] + -1;
  lVar2 = (long)iVar3;
  arg1[0x2a] = iVar3;
  uVar4 = *(uint64_t *)(arg1 + lVar2 * 2 + 0x24);
  *(uint64_t *)(arg1 + 0x14) = uVar4;
  iVar1 = arg1[lVar2 + 0x28];
  arg1[0x2b] = iVar1;
  if (arg1[0x11e] != 0) {
    failf(arg1,"%s","Relative addressing of input registers not supported.");
    iVar3 = arg1[0x2a];
    uVar4 = *(uint64_t *)(arg1 + 0x14);
    iVar1 = arg1[0x2b];
    lVar2 = (long)iVar3;
  }
  *(uint64_t *)(arg1 + lVar2 * 2 + 0x24) = uVar4;
  arg1[lVar2 + 0x28] = iVar1;
  lVar2 = *(long *)(arg1 + 0x16);
  arg1[0x2a] = iVar3 + 1;
  if (lVar2 == 0) {
    lVar2 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x16) = lVar2;
    if (lVar2 == 0) goto LAB_00528087;
  }
  *(long *)(arg1 + 0x14) = lVar2;
  arg1[0x2b] = 0;
LAB_00528087:
  iVar1 = arg1[0xf1];
  if (0 < iVar1) {
    snprintf(acStack_58,0x40,"%s_uniforms_%s",*(uint64_t *)(arg1 + 0x2c),"vec4");
    output_line(arg1,"uniform vec4 %s[%d];",acStack_58,iVar1);
  }
  iVar1 = arg1[0xf2];
  if (0 < iVar1) {
    snprintf(acStack_58,0x40,"%s_uniforms_%s",*(uint64_t *)(arg1 + 0x2c),"ivec4");
    output_line(arg1,"uniform vec4 %s[%d];",acStack_58,iVar1);
  }
  iVar1 = arg1[0xf3];
  if (0 < iVar1) {
    snprintf(acStack_58,0x40,"%s_uniforms_%s",*(uint64_t *)(arg1 + 0x2c),"bool");
    output_line(arg1,"uniform vec4 %s[%d];",acStack_58,iVar1);
  }
  iVar1 = arg1[0x2a] + -1;
  arg1[0x2a] = iVar1;
  *(uint64_t *)(arg1 + 0x14) = *(uint64_t *)(arg1 + (long)iVar1 * 2 + 0x24);
  arg1[0x2b] = arg1[(long)iVar1 + 0x28];
  return;
}

/* ======================================================================
 * emit_GLSL_uniform  (Ghidra `emit_GLSL_uniform` @ 00528230)
 * Signature: uint8_t emit_GLSL_uniform(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `failf`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_GLSL_uniform(long arg1,int arg2,int arg3,long arg4)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  long lVar4;
  char *pcVar5;
  char local_c8 [64];
  char local_88 [64];
  uint8_t local_48 [24];
  
  uVar3 = get_D3D_register_string_constprop_65();
  snprintf(local_c8,0x40,"%s_%s%s",*(uint64_t *)(arg1 + 0xb0),uVar3,local_48);
  iVar2 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar2 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar2 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar2 + 1;
  lVar4 = *(long *)(arg1 + 0x60);
  if (lVar4 == 0) {
    lVar4 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar4;
    if (lVar4 != 0) goto LAB_005282ce;
  }
  else {
LAB_005282ce:
    *(long *)(arg1 + 0x50) = lVar4;
    *(uint32_t *)(arg1 + 0xac) = 0;
  }
  if (arg4 == 0) {
    uVar3 = *(uint64_t *)(arg1 + 0xb0);
    if (arg2 == 7) {
      pcVar5 = "ivec4";
    }
    else if (arg2 == 0xe) {
      pcVar5 = "bool";
    }
    else {
      if (arg2 == 2) {
        snprintf(local_88,0x40,"%s_uniforms_%s",uVar3,"vec4");
        arg3 = *(int *)(arg1 + 0x3c4);
        goto LAB_00528321;
      }
      failf(arg1,"%s","BUG: used a uniform we don\'t know how to define.");
      pcVar5 = (char *)0x0;
    }
    snprintf(local_88,0x40,"%s_uniforms_%s",uVar3,pcVar5);
    if (arg2 == 7) {
      arg3 = *(int *)(arg1 + 0x3c8);
    }
    else {
      arg3 = 0;
      if (arg2 == 0xe) {
        arg3 = *(int *)(arg1 + 0x3cc);
      }
    }
  }
  else {
    uVar1 = *(uint *)(arg4 + 4);
    uVar3 = *(uint64_t *)(arg1 + 0xb0);
    if (*(long *)(arg4 + 0x10) == 0) {
      pcVar5 = "ivec4";
      if (((arg2 != 7) && (pcVar5 = "bool", arg2 != 0xe)) && (pcVar5 = "vec4", arg2 != 2))
      {
        failf(arg1,"%s","BUG: used a uniform we don\'t know how to define.",uVar3,"vec4");
        pcVar5 = (char *)0x0;
      }
      snprintf(local_88,0x40,"%s_uniforms_%s",uVar3,pcVar5);
      arg3 = (arg3 - uVar1) + *(int *)(arg4 + 0x1c);
    }
    else {
      snprintf(local_88,0x40,"%s_const_array_%d_%d",uVar3,(ulong)uVar1,(ulong)*(uint *)(arg4 + 8)
              );
      arg3 = arg3 - uVar1;
    }
  }
LAB_00528321:
  output_line(arg1,"#define %s %s[%d]",local_c8,local_88,arg3);
  iVar2 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar2;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar2 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar2 * 4);
  return;
}

/* ======================================================================
 * emit_GLSL_sampler  (Ghidra `emit_GLSL_sampler` @ 00528520)
 * Signature: uint8_t emit_GLSL_sampler(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `failf`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_GLSL_sampler(long arg1,uint32_t arg2,int arg3)

{
  int iVar1;
  uint64_t uVar2;
  long lVar3;
  char *pcVar4;
  char acStack_68 [64];
  uint8_t local_28 [16];
  
  pcVar4 = "samplerCube";
  if (((arg3 != 3) && (pcVar4 = "sampler3D", arg3 != 4)) &&
     (pcVar4 = "sampler2D", arg3 != 2)) {
    pcVar4 = "";
    failf(arg1,"%s","BUG: used a sampler we don\'t know how to define.");
  }
  uVar2 = get_D3D_register_string_constprop_65(arg1,10,arg2,local_28);
  snprintf(acStack_68,0x40,"%s_%s%s",*(uint64_t *)(arg1 + 0xb0),uVar2,local_28);
  iVar1 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar1 + 1;
  lVar3 = *(long *)(arg1 + 0x60);
  if (lVar3 == 0) {
    lVar3 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar3;
    if (lVar3 == 0) goto LAB_005285dc;
  }
  *(long *)(arg1 + 0x50) = lVar3;
  *(uint32_t *)(arg1 + 0xac) = 0;
LAB_005285dc:
  output_line(arg1,"uniform %s %s;",pcVar4,acStack_68);
  iVar1 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar1;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4);
  return;
}

/* ======================================================================
 * emit_GLSL_global  (Ghidra `emit_GLSL_global` @ 00528650)
 * Signature: uint8_t emit_GLSL_global(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `failf`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_GLSL_global(long arg1,uint32_t arg2,uint64_t arg3)

{
  int iVar1;
  uint64_t uVar2;
  long lVar3;
  char acStack_68 [64];
  uint8_t local_28 [24];
  
  uVar2 = get_D3D_register_string_constprop_65(arg1,arg2,arg3,local_28);
  snprintf(acStack_68,0x40,"%s_%s%s",*(uint64_t *)(arg1 + 0xb0),uVar2,local_28);
  iVar1 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar1 + 1;
  lVar3 = *(long *)(arg1 + 0x60);
  if (lVar3 == 0) {
    lVar3 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar3;
    if (lVar3 == 0) goto switchD_00528720_switchD;
  }
  *(long *)(arg1 + 0x50) = lVar3;
  *(uint32_t *)(arg1 + 0xac) = 0;
switchD_00528720_switchD:
  switch(arg2) {
  case 0:
    output_line(arg1,"vec4 %s;",acStack_68);
    break;
  default:
    failf(arg1,"%s","BUG: we used a register we don\'t know how to define.");
    break;
  case 3:
    output_line(arg1,"ivec4 %s;",acStack_68);
    break;
  case 0xf:
  case 0x12:
    break;
  case 0x13:
    output_line(arg1,"bvec4 %s;",acStack_68);
  }
  iVar1 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar1;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4);
  return;
}

/* ======================================================================
 * emit_GLSL_LIT  (Ghidra `emit_GLSL_LIT` @ 005287b0)
 * Signature: uint8_t emit_GLSL_LIT(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_append`, `buffer_create`, `make_GLSL_destarg_assign`, `make_GLSL_srcarg_string_constprop_72`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_LIT(int *arg1)

{
  int iVar1;
  long lVar2;
  uint8_t auStack_c8 [128];
  uint8_t local_48 [64];
  
  make_GLSL_srcarg_string_constprop_72(arg1,0,0xf,local_48);
  make_GLSL_destarg_assign(arg1,auStack_c8,0x80,"LIT(%s)",local_48);
  output_line(arg1,"%s",auStack_c8);
  if (arg1[0x123] != 0) {
    return;
  }
  iVar1 = arg1[0x2a];
  arg1[0x123] = 1;
  *(uint64_t *)(arg1 + (long)iVar1 * 2 + 0x24) = *(uint64_t *)(arg1 + 0x14);
  arg1[(long)iVar1 + 0x28] = arg1[0x2b];
  arg1[0x2a] = iVar1 + 1;
  lVar2 = *(long *)(arg1 + 0x1a);
  if (lVar2 == 0) {
    lVar2 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x1a) = lVar2;
    if (lVar2 == 0) goto LAB_00528868;
  }
  *(long *)(arg1 + 0x14) = lVar2;
  arg1[0x2b] = 0;
LAB_00528868:
  output_line(arg1,"const vec4 LIT(const vec4 src)");
  output_line(arg1,"{");
  arg1[0x2b] = arg1[0x2b] + 1;
  output_line(arg1,"const float power = clamp(src.w, -%s, %s);","127.9961f");
  output_line(arg1,"vec4 retval(1.0, 0.0, 0.0, 1.0)");
  output_line(arg1,"if (src.x > 0.0) {");
  arg1[0x2b] = arg1[0x2b] + 1;
  output_line(arg1,"retval.y = src.x;");
  output_line(arg1,"if (src.y > 0.0) {");
  arg1[0x2b] = arg1[0x2b] + 1;
  output_line(arg1,"retval.z = pow(src.y, power);");
  arg1[0x2b] = arg1[0x2b] + -1;
  output_line(arg1,"}");
  arg1[0x2b] = arg1[0x2b] + -1;
  output_line(arg1,"}");
  output_line(arg1,"return retval;");
  arg1[0x2b] = arg1[0x2b] + -1;
  output_line(arg1,"}");
  if (*arg1 == 0) {
    buffer_append(*(uint64_t *)(arg1 + 0x14),*(uint64_t *)(arg1 + 0x2e),
                  (long)arg1[0x30]);
  }
  iVar1 = arg1[0x2a] + -1;
  arg1[0x2a] = iVar1;
  *(uint64_t *)(arg1 + 0x14) = *(uint64_t *)(arg1 + (long)iVar1 * 2 + 0x24);
  arg1[0x2b] = arg1[(long)iVar1 + 0x28];
  return;
}

/* ======================================================================
 * emit_GLSL_TEXLDD  (Ghidra `emit_GLSL_TEXLDD` @ 005289e0)
 * Signature: uint8_t emit_GLSL_TEXLDD(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_append`, `buffer_create`, `glsl_texld`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_TEXLDD(int *arg1)

{
  int iVar1;
  long lVar2;
  
  if (arg1[0x124] != 0) {
    glsl_texld(arg1,1);
    return;
  }
  iVar1 = arg1[0x2a];
  arg1[0x124] = 1;
  *(uint64_t *)(arg1 + (long)iVar1 * 2 + 0x24) = *(uint64_t *)(arg1 + 0x14);
  arg1[(long)iVar1 + 0x28] = arg1[0x2b];
  arg1[0x2a] = iVar1 + 1;
  lVar2 = *(long *)(arg1 + 0x16);
  if (lVar2 == 0) {
    lVar2 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x16) = lVar2;
    if (lVar2 == 0) goto LAB_00528a50;
  }
  *(long *)(arg1 + 0x14) = lVar2;
  arg1[0x2b] = 0;
LAB_00528a50:
  output_line(arg1,"#if GL_ARB_shader_texture_lod");
  output_line(arg1,"#extension GL_ARB_shader_texture_lod : enable");
  output_line(arg1,"#define texture2DGrad texture2DGradARB");
  output_line(arg1,"#define texture2DProjGrad texture2DProjARB");
  output_line(arg1,"#elif GL_EXT_gpu_shader4");
  output_line(arg1,"#extension GL_EXT_gpu_shader4 : enable");
  output_line(arg1,"#else");
  output_line(arg1,"#define texture2DGrad(a,b,c,d) texture2D(a,b)");
  output_line(arg1,"#define texture2DProjGrad(a,b,c,d) texture2DProj(a,b)");
  output_line(arg1,"#endif");
  if (*arg1 == 0) {
    buffer_append(*(uint64_t *)(arg1 + 0x14),*(uint64_t *)(arg1 + 0x2e),
                  (long)arg1[0x30]);
  }
  iVar1 = arg1[0x2a] + -1;
  arg1[0x2a] = iVar1;
  *(uint64_t *)(arg1 + 0x14) = *(uint64_t *)(arg1 + (long)iVar1 * 2 + 0x24);
  arg1[0x2b] = arg1[(long)iVar1 + 0x28];
  glsl_texld(arg1,1);
  return;
}

/* ======================================================================
 * emit_GLSL_start  (Ghidra `emit_GLSL_start` @ 00528b80)
 * Signature: uint8_t emit_GLSL_start(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `failf`, `output_line`
 * Called by: (none)
 */
void emit_GLSL_start(long arg1,char *arg2)

{
  uint32_t uVar1;
  uint64_t uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  bVar7 = *(int *)(arg1 + 0xd0) == 2;
  if ((!bVar7) && (bVar7 = *(int *)(arg1 + 0xd0) == 1, !bVar7)) {
    failf(arg1,"Shader type %u unsupported in this profile.");
    return;
  }
  lVar4 = 5;
  pcVar5 = arg2;
  pcVar6 = "glsl";
  do {
    if (lVar4 == 0) break;
    lVar4 = lVar4 + -1;
    bVar7 = *pcVar5 == *pcVar6;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    iVar3 = *(int *)(arg1 + 0xa8);
    *(uint64_t *)(arg1 + 0x90 + (long)iVar3 * 8) = *(uint64_t *)(arg1 + 0x50);
    *(uint32_t *)(arg1 + 0xa0 + (long)iVar3 * 4) = *(uint32_t *)(arg1 + 0xac);
    *(int *)(arg1 + 0xa8) = iVar3 + 1;
    lVar4 = *(long *)(arg1 + 0x58);
    if (lVar4 == 0) {
      lVar4 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
      *(long *)(arg1 + 0x58) = lVar4;
      if (lVar4 != 0) goto LAB_00528d2c;
    }
    else {
LAB_00528d2c:
      *(long *)(arg1 + 0x50) = lVar4;
      *(uint32_t *)(arg1 + 0xac) = 0;
    }
    pcVar5 = "#version 110";
  }
  else {
    lVar4 = 8;
    bVar7 = false;
    pcVar5 = arg2;
    pcVar6 = "glsl120";
    do {
      if (lVar4 == 0) break;
      lVar4 = lVar4 + -1;
      bVar7 = *pcVar5 == *pcVar6;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      failf(arg1,"Profile \'%s\' unsupported or unknown.",arg2);
      return;
    }
    iVar3 = *(int *)(arg1 + 0xa8);
    *(uint32_t *)(arg1 + 0x4b4) = 1;
    *(uint64_t *)(arg1 + 0x90 + (long)iVar3 * 8) = *(uint64_t *)(arg1 + 0x50);
    *(uint32_t *)(arg1 + 0xa0 + (long)iVar3 * 4) = *(uint32_t *)(arg1 + 0xac);
    *(int *)(arg1 + 0xa8) = iVar3 + 1;
    lVar4 = *(long *)(arg1 + 0x58);
    if (lVar4 == 0) {
      lVar4 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
      *(long *)(arg1 + 0x58) = lVar4;
      if (lVar4 != 0) goto LAB_00528c07;
    }
    else {
LAB_00528c07:
      *(long *)(arg1 + 0x50) = lVar4;
      *(uint32_t *)(arg1 + 0xac) = 0;
    }
    pcVar5 = "#version 120";
  }
  output_line(arg1,pcVar5);
  iVar3 = *(int *)(arg1 + 0xa8);
  lVar4 = (long)(iVar3 + -1);
  uVar2 = *(uint64_t *)(arg1 + 0x90 + lVar4 * 8);
  *(uint64_t *)(arg1 + 0x50) = uVar2;
  uVar1 = *(uint32_t *)(arg1 + 0xa0 + lVar4 * 4);
  *(uint32_t *)(arg1 + 0xac) = uVar1;
  *(uint64_t *)(arg1 + 0x90 + lVar4 * 8) = uVar2;
  *(uint32_t *)(arg1 + 0xa0 + lVar4 * 4) = uVar1;
  lVar4 = *(long *)(arg1 + 0x78);
  *(int *)(arg1 + 0xa8) = iVar3;
  if (lVar4 == 0) {
    lVar4 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x78) = lVar4;
    if (lVar4 != 0) goto LAB_00528c6e;
  }
  else {
LAB_00528c6e:
    *(long *)(arg1 + 0x50) = lVar4;
    *(uint32_t *)(arg1 + 0xac) = 0;
  }
  output_line(arg1,"void main()");
  output_line(arg1,"{");
  iVar3 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar3;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar3 * 8);
  iVar3 = *(int *)(arg1 + 0xa0 + (long)iVar3 * 4);
  lVar4 = *(long *)(arg1 + 0x80);
  *(int *)(arg1 + 0xac) = iVar3;
  if (lVar4 == 0) {
    lVar4 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x80) = lVar4;
    iVar3 = *(int *)(arg1 + 0xac);
    if (lVar4 == 0) goto LAB_00528cd8;
  }
  *(long *)(arg1 + 0x50) = lVar4;
LAB_00528cd8:
  *(int *)(arg1 + 0xac) = iVar3 + 1;
  return;
}

/* ======================================================================
 * emit_GLSL_attribute  (Ghidra `emit_GLSL_attribute` @ 00528e20)
 * Signature: uint8_t emit_GLSL_attribute(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `failf`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_GLSL_attribute(long arg1,int arg2,ulong arg3,int arg4,uint arg5,
                        uint64_t arg6,byte arg7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  char local_88 [64];
  ulong local_48 [2];
  uint8_t local_38 [16];
  
  uVar7 = arg3 & 0xffffffff;
  local_48[0] = 0;
  local_48[1] = 0;
  uVar4 = get_D3D_register_string_constprop_65(arg1,arg2,arg3,local_38);
  snprintf(local_88,0x40,"%s_%s%s",*(uint64_t *)(arg1 + 0xb0),uVar4,local_38);
  iVar3 = (int)arg3;
  if (arg5 == 0) {
    iVar1 = *(int *)(arg1 + 0xd0);
    if (iVar1 == 2) goto LAB_00528f9b;
LAB_00528ea9:
    if (iVar1 != 1) {
      failf(arg1,"%s","Unknown shader type");
      return;
    }
    if ((arg7 & 4) != 0) {
      failf(arg1,"centroid unsupported in %s profile",**(uint64_t **)(arg1 + 200));
      return;
    }
    if (arg2 == 8) {
      if (*(int *)(arg1 + 0x47c) == 0) {
        pcVar8 = "";
        pcVar6 = "gl_FragColor";
        pcVar9 = "";
      }
      else {
        pcVar8 = "]";
        pcVar6 = "gl_FragData";
        snprintf((char *)local_48,0x10,"%u",uVar7);
        pcVar9 = "[";
      }
    }
    else if (arg2 == 9) {
      pcVar8 = "";
      pcVar6 = "gl_FragDepth";
      pcVar9 = "";
    }
    else if ((arg2 == 1) || (arg2 == 3)) {
      if (arg4 == 5) {
        pcVar8 = "]";
        pcVar6 = "gl_TexCoord";
        snprintf((char *)local_48,0x10,"%u",(ulong)arg5);
        pcVar9 = "[";
      }
      else {
        if (arg4 != 10) {
          return;
        }
        local_48[0] = (ulong)local_48[0]._1_7_ << 8;
        if (arg5 == 0) {
          pcVar8 = "";
          pcVar6 = "gl_Color";
          pcVar9 = "";
        }
        else {
          if (arg5 != 1) {
            failf(arg1,"%s","unsupported color index");
            return;
          }
          pcVar9 = "";
          pcVar6 = "gl_SecondaryColor";
          pcVar8 = pcVar9;
        }
      }
    }
    else {
      if (arg2 != 0x11) {
        failf(arg1,"%s","unknown pixel shader attribute register");
        return;
      }
      if (iVar3 == 1) {
        iVar3 = *(int *)(arg1 + 0xa8);
        *(uint64_t *)(arg1 + 0x90 + (long)iVar3 * 8) = *(uint64_t *)(arg1 + 0x50);
        *(uint32_t *)(arg1 + 0xa0 + (long)iVar3 * 4) = *(uint32_t *)(arg1 + 0xac);
        *(int *)(arg1 + 0xa8) = iVar3 + 1;
        lVar5 = *(long *)(arg1 + 0x60);
        if (lVar5 == 0) {
          lVar5 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
          *(long *)(arg1 + 0x60) = lVar5;
          if (lVar5 != 0) goto LAB_005294c0;
        }
        else {
LAB_005294c0:
          *(long *)(arg1 + 0x50) = lVar5;
          *(uint32_t *)(arg1 + 0xac) = 0;
        }
        output_line(arg1,"float %s = gl_FrontFacing ? 1.0 : -1.0;",local_88);
        goto LAB_00529084;
      }
      if (iVar3 != 0) {
        failf(arg1,"%s","BUG: unhandled misc register");
        return;
      }
      pcVar8 = "";
      local_48[0] = (ulong)local_48[0]._1_7_ << 8;
      pcVar6 = "gl_FragCoord";
      pcVar9 = "";
    }
    iVar3 = *(int *)(arg1 + 0xa8);
    *(uint64_t *)(arg1 + 0x90 + (long)iVar3 * 8) = *(uint64_t *)(arg1 + 0x50);
    *(uint32_t *)(arg1 + 0xa0 + (long)iVar3 * 4) = *(uint32_t *)(arg1 + 0xac);
    *(int *)(arg1 + 0xa8) = iVar3 + 1;
    lVar5 = *(long *)(arg1 + 0x60);
    if (lVar5 == 0) {
      lVar5 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
      *(long *)(arg1 + 0x60) = lVar5;
      if (lVar5 != 0) goto LAB_0052905b;
    }
    else {
LAB_0052905b:
      *(long *)(arg1 + 0x50) = lVar5;
      *(uint32_t *)(arg1 + 0xac) = 0;
    }
  }
  else {
    snprintf((char *)local_48,0x10,"%u",(ulong)arg5);
    iVar1 = *(int *)(arg1 + 0xd0);
    if (iVar1 != 2) goto LAB_00528ea9;
LAB_00528f9b:
    uVar2 = (uint)CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    if (*(byte *)(arg1 + 0xd5) != 0xff) {
      uVar2 = (uint)*(byte *)(arg1 + 0xd5);
    }
    if ((uVar2 | (uint)*(byte *)(arg1 + 0xd4) << 0x10) < 0x30000) {
      if (arg2 == 4) {
        if (iVar3 == 1) {
          arg4 = 0xb;
        }
        else if (iVar3 == 0) {
          arg4 = 0;
        }
        else if (iVar3 == 2) {
          arg4 = 4;
        }
      }
      else if (arg2 == 5) {
        arg4 = 10;
      }
      else {
        if (arg2 != 6) goto LAB_00528fdb;
        arg4 = 5;
      }
    }
    else {
LAB_00528fdb:
      if (arg2 == 1) {
        iVar3 = *(int *)(arg1 + 0xa8);
        *(uint64_t *)(arg1 + 0x90 + (long)iVar3 * 8) = *(uint64_t *)(arg1 + 0x50);
        *(uint32_t *)(arg1 + 0xa0 + (long)iVar3 * 4) = *(uint32_t *)(arg1 + 0xac);
        *(int *)(arg1 + 0xa8) = iVar3 + 1;
        lVar5 = *(long *)(arg1 + 0x60);
        if (lVar5 == 0) {
          lVar5 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
          *(long *)(arg1 + 0x60) = lVar5;
          if (lVar5 != 0) goto LAB_00529348;
        }
        else {
LAB_00529348:
          *(long *)(arg1 + 0x50) = lVar5;
          *(uint32_t *)(arg1 + 0xac) = 0;
        }
        output_line(arg1,"attribute vec4 %s;",local_88);
        goto LAB_00529084;
      }
      uVar7 = (ulong)arg5;
      if (arg2 != 6) {
        failf(arg1,"%s","unknown vertex shader attribute register");
        return;
      }
    }
    switch(arg4) {
    case 0:
      pcVar8 = "";
      pcVar6 = "gl_Position";
      pcVar9 = "";
      break;
    default:
      pcVar6 = (char *)0x0;
      pcVar9 = "";
      pcVar8 = "";
      break;
    case 4:
      pcVar8 = "";
      pcVar6 = "gl_PointSize";
      pcVar9 = "";
      break;
    case 5:
      pcVar8 = "]";
      snprintf((char *)local_48,0x10,"%u",uVar7);
      pcVar6 = "gl_TexCoord";
      pcVar9 = "[";
      break;
    case 10:
      pcVar8 = "";
      local_48[0] = local_48[0] & 0xffffffffffffff00;
      pcVar9 = "";
      pcVar6 = "gl_FrontColor";
      if (((int)uVar7 != 0) && (pcVar6 = (char *)0x0, (int)uVar7 == 1)) {
        pcVar6 = "gl_FrontSecondaryColor";
      }
      break;
    case 0xb:
      pcVar9 = "";
      pcVar6 = "gl_FogFragCoord";
      pcVar8 = pcVar9;
    }
    iVar3 = *(int *)(arg1 + 0xa8);
    *(uint64_t *)(arg1 + 0x90 + (long)iVar3 * 8) = *(uint64_t *)(arg1 + 0x50);
    *(uint32_t *)(arg1 + 0xa0 + (long)iVar3 * 4) = *(uint32_t *)(arg1 + 0xac);
    *(int *)(arg1 + 0xa8) = iVar3 + 1;
    lVar5 = *(long *)(arg1 + 0x60);
    if (lVar5 == 0) {
      lVar5 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
      *(long *)(arg1 + 0x60) = lVar5;
      if (lVar5 != 0) goto LAB_00529138;
    }
    else {
LAB_00529138:
      *(long *)(arg1 + 0x50) = lVar5;
      *(uint32_t *)(arg1 + 0xac) = 0;
    }
    if (pcVar6 == (char *)0x0) {
      output_line(arg1,"vec4 %s;",local_88);
      goto LAB_00529084;
    }
  }
  output_line(arg1,"#define %s %s%s%s%s",local_88,pcVar6,pcVar9,local_48,pcVar8);
LAB_00529084:
  iVar3 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar3;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar3 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar3 * 4);
  return;
}

/* ======================================================================
 * emit_ARB1_attribute  (Ghidra `emit_ARB1_attribute` @ 00529550)
 * Signature: uint8_t emit_ARB1_attribute(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `failf`, `get_D3D_register_string_constprop_65`, `output_line`, `snprintf`
 * Called by: (none)
 */
void emit_ARB1_attribute(long arg1,int arg2,ulong arg3,int arg4,uint arg5,
                        uint64_t arg6,byte arg7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  char local_98 [64];
  ulong local_58;
  uint64_t local_50;
  uint8_t local_48 [24];
  
  uVar10 = arg3 & 0xffffffff;
  local_58 = 0;
  local_50 = 0;
  uVar4 = get_D3D_register_string_constprop_65(arg1,arg2,arg3,local_48);
  snprintf(local_98,0x40,"%s%s",uVar4,local_48);
  iVar3 = (int)arg3;
  if (arg5 == 0) {
    iVar1 = *(int *)(arg1 + 0xd0);
  }
  else {
    snprintf((char *)&local_58,0x10,"%u",(ulong)arg5);
    iVar1 = *(int *)(arg1 + 0xd0);
  }
  if (iVar1 != 2) {
    if (iVar1 != 1) {
      failf(arg1,"%s","Unknown shader type");
      return;
    }
    pcVar9 = "ATTRIB";
    if (((arg7 & 4) != 0) && (pcVar9 = "CENTROID ATTRIB", *(int *)(arg1 + 0x4b0) == 0)) {
      failf(arg1,"centroid unsupported in %s profile",**(uint64_t **)(arg1 + 200));
      return;
    }
    if (arg2 == 8) {
      if (*(int *)(arg1 + 0x47c) == 0) {
        pcVar6 = "";
        pcVar9 = "OUTPUT";
        pcVar7 = "result.color";
        pcVar8 = "";
      }
      else {
        pcVar6 = "]";
        snprintf((char *)&local_58,0x10,"%u",uVar10);
        pcVar9 = "OUTPUT";
        pcVar8 = "[";
        pcVar7 = "result.color";
      }
    }
    else if (arg2 == 9) {
      pcVar6 = "";
      pcVar9 = "OUTPUT";
      pcVar8 = "";
      pcVar7 = "result.depth";
    }
    else if ((arg2 == 1) || (arg2 == 3)) {
      if (arg4 == 5) {
        pcVar6 = "]";
        snprintf((char *)&local_58,0x10,"%u",(ulong)arg5);
        pcVar8 = "[";
        pcVar7 = "fragment.texcoord";
      }
      else {
        if (arg4 != 10) {
          return;
        }
        local_58 = local_58 & 0xffffffffffffff00;
        if (arg5 == 0) {
          pcVar6 = "";
          pcVar7 = "fragment.color.primary";
          pcVar8 = "";
        }
        else {
          if (arg5 != 1) {
            failf(arg1,"%s","unsupported color index");
            return;
          }
          pcVar6 = "";
          pcVar7 = "fragment.color.secondary";
          pcVar8 = pcVar6;
        }
      }
    }
    else {
      if (arg2 != 0x11) {
        failf(arg1,"%s","unknown pixel shader attribute register");
        return;
      }
      local_58._1_7_ = (uint7)(local_58 >> 8);
      if (iVar3 == 1) {
        if (*(int *)(arg1 + 0x4b0) == 0) {
          failf(arg1,"vFace unsupported in %s profile",**(uint64_t **)(arg1 + 200));
          return;
        }
        pcVar6 = "";
        local_58 = (ulong)local_58._1_7_ << 8;
        pcVar7 = "fragment.facing";
        pcVar8 = "";
      }
      else {
        if (iVar3 != 0) {
          failf(arg1,"%s","BUG: unhandled misc register");
          return;
        }
        pcVar6 = "";
        local_58 = (ulong)local_58._1_7_ << 8;
        pcVar7 = "fragment.position";
        pcVar8 = "";
      }
    }
    iVar3 = *(int *)(arg1 + 0xa8);
    *(uint64_t *)(arg1 + 0x90 + (long)iVar3 * 8) = *(uint64_t *)(arg1 + 0x50);
    *(uint32_t *)(arg1 + 0xa0 + (long)iVar3 * 4) = *(uint32_t *)(arg1 + 0xac);
    *(int *)(arg1 + 0xa8) = iVar3 + 1;
    lVar5 = *(long *)(arg1 + 0x60);
    if (lVar5 == 0) {
      lVar5 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
      *(long *)(arg1 + 0x60) = lVar5;
      if (lVar5 != 0) goto LAB_005297d9;
    }
    else {
LAB_005297d9:
      *(long *)(arg1 + 0x50) = lVar5;
      *(uint32_t *)(arg1 + 0xac) = 0;
    }
    output_line(arg1,"%s %s = %s%s%s%s;",pcVar9,local_98,pcVar7,pcVar8,&local_58,pcVar6);
    goto LAB_00529807;
  }
  uVar2 = 1;
  if (*(byte *)(arg1 + 0xd5) != 0xff) {
    uVar2 = (uint)*(byte *)(arg1 + 0xd5);
  }
  if ((uVar2 | (uint)*(byte *)(arg1 + 0xd4) << 0x10) < 0x30000) {
    if (arg2 == 4) {
      if (iVar3 == 1) {
        arg4 = 0xb;
      }
      else if (iVar3 == 0) {
        arg4 = 0;
      }
      else if (iVar3 == 2) {
        arg4 = 4;
      }
    }
    else if (arg2 == 5) {
      arg4 = 10;
    }
    else {
      if (arg2 != 6) goto LAB_0052971b;
      arg4 = 5;
    }
  }
  else {
LAB_0052971b:
    if (arg2 == 1) {
      iVar3 = *(int *)(arg1 + 0x350);
      *(int *)(arg1 + 0x350) = iVar3 + 1;
      iVar1 = *(int *)(arg1 + 0xa8);
      *(uint64_t *)(arg1 + 0x90 + (long)iVar1 * 8) = *(uint64_t *)(arg1 + 0x50);
      *(uint32_t *)(arg1 + 0xa0 + (long)iVar1 * 4) = *(uint32_t *)(arg1 + 0xac);
      *(int *)(arg1 + 0xa8) = iVar1 + 1;
      lVar5 = *(long *)(arg1 + 0x60);
      if (lVar5 == 0) {
        lVar5 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
        *(long *)(arg1 + 0x60) = lVar5;
        if (lVar5 != 0) goto LAB_00529b27;
      }
      else {
LAB_00529b27:
        *(long *)(arg1 + 0x50) = lVar5;
        *(uint32_t *)(arg1 + 0xac) = 0;
      }
      output_line(arg1,"ATTRIB %s = vertex.attrib[%d];",local_98,iVar3);
      goto LAB_00529807;
    }
    uVar10 = (ulong)arg5;
    if (arg2 != 6) {
      failf(arg1,"%s","unknown vertex shader attribute register");
      return;
    }
  }
  switch(arg4) {
  case 0:
    pcVar9 = "";
    *(uint32_t *)(arg1 + 0x494) = 1;
    pcVar8 = "result.position";
    pcVar6 = "";
    break;
  default:
    pcVar8 = (char *)0x0;
    pcVar6 = "";
    pcVar9 = "";
    break;
  case 4:
    pcVar9 = "";
    pcVar8 = "result.pointsize";
    pcVar6 = "";
    break;
  case 5:
    pcVar9 = "]";
    snprintf((char *)&local_58,0x10,"%u",uVar10);
    pcVar8 = "result.texcoord";
    pcVar6 = "[";
    break;
  case 10:
    pcVar9 = "";
    local_58 = local_58 & 0xffffffffffffff00;
    pcVar6 = "";
    pcVar8 = "result.color.primary";
    if (((int)uVar10 != 0) && (pcVar8 = (char *)0x0, (int)uVar10 == 1)) {
      pcVar8 = "result.color.secondary";
    }
    break;
  case 0xb:
    pcVar6 = "";
    pcVar8 = "result.fogcoord";
    pcVar9 = pcVar6;
  }
  iVar3 = *(int *)(arg1 + 0xa8);
  *(uint64_t *)(arg1 + 0x90 + (long)iVar3 * 8) = *(uint64_t *)(arg1 + 0x50);
  *(uint32_t *)(arg1 + 0xa0 + (long)iVar3 * 4) = *(uint32_t *)(arg1 + 0xac);
  *(int *)(arg1 + 0xa8) = iVar3 + 1;
  lVar5 = *(long *)(arg1 + 0x60);
  if (lVar5 == 0) {
    lVar5 = buffer_create(0x100,MallocBridge,FreeBridge,arg1);
    *(long *)(arg1 + 0x60) = lVar5;
    if (lVar5 != 0) goto LAB_005298c8;
  }
  else {
LAB_005298c8:
    *(long *)(arg1 + 0x50) = lVar5;
    *(uint32_t *)(arg1 + 0xac) = 0;
  }
  if (pcVar8 == (char *)0x0) {
    pcVar9 = "FLOAT TEMP";
    if (*(int *)(arg1 + 0x4b0) == 0) {
      pcVar9 = "TEMP";
    }
    output_line(arg1,"%s %s;",pcVar9,local_98,pcVar6);
  }
  else {
    output_line(arg1,"OUTPUT %s = %s%s%s%s;",local_98,pcVar8,pcVar6,&local_58,pcVar9);
  }
LAB_00529807:
  iVar3 = *(int *)(arg1 + 0xa8) + -1;
  *(int *)(arg1 + 0xa8) = iVar3;
  *(uint64_t *)(arg1 + 0x50) = *(uint64_t *)(arg1 + 0x90 + (long)iVar3 * 8);
  *(uint32_t *)(arg1 + 0xac) = *(uint32_t *)(arg1 + 0xa0 + (long)iVar3 * 4);
  return;
}

/* ======================================================================
 * MOJOSHADER_parse  (Ghidra `MOJOSHADER_parse` @ 0052a2c0)
 * Signature: uint8_t MOJOSHADER_parse(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_create`, `build_parsedata`, `destroy_context`, `determine_constants_arrays`, `errorlist_create`, `errorlist_destroy`, `failf`, `memset` (+5 more)
 * Called by: `MOJOSHADER_assemble`, `MOJOSHADER_glCompileShader`
 */
uint8_t *
MOJOSHADER_parse(char *arg1,uint64_t arg2,uint arg3,uint64_t arg4,int arg5,
                code *arg6,code *arg7,uint64_t arg8)

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint *puVar6;
  code *pcVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  char *pcVar13;
  uint8_t *puVar14;
  void *__s;
  size_t sVar15;
  char *pcVar16;
  uint32_t *puVar17;
  uint uVar18;
  uint32_t uVar19;
  ulong uVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  ulong uVar26;
  char *pcVar27;
  uint *puVar28;
  uint *puVar29;
  int *piVar30;
  uint uVar31;
  uint64_t *puVar32;
  uint *puVar33;
  long lVar34;
  bool bVar35;
  byte bVar36;
  uint local_68;
  uint local_64;
  uint local_50;
  uint local_4c;
  
  bVar36 = 0;
  if ((arg7 != (code *)0x0) && (arg6 == (code *)0x0)) {
    return MOJOSHADER_out_of_mem_data;
  }
  if (((arg7 == (code *)0x0) && (arg6 != (code *)0x0)) ||
     (piVar11 = (int *)(*arg6)(0x4b8,arg8), piVar11 == (int *)0x0)) goto LAB_0052a2ff;
  bVar35 = ((ulong)piVar11 & 1) != 0;
  uVar26 = 0x4b8;
  piVar30 = piVar11;
  if (bVar35) {
    *(uint8_t *)piVar11 = 0;
    piVar30 = (int *)((long)piVar11 + 1);
    uVar26 = 0x4b7;
  }
  if (((ulong)piVar30 & 2) != 0) {
    *(uint16_t *)piVar30 = 0;
    uVar26 = (ulong)((int)uVar26 - 2);
    piVar30 = (int *)((long)piVar30 + 2);
  }
  if (((ulong)piVar30 & 4) != 0) {
    *piVar30 = 0;
    uVar26 = (ulong)((int)uVar26 - 4);
    piVar30 = piVar30 + 1;
  }
  for (uVar20 = uVar26 >> 3; uVar20 != 0; uVar20 = uVar20 - 1) {
    piVar30[0] = 0;
    piVar30[1] = 0;
    piVar30 = piVar30 + (ulong)bVar36 * -4 + 2;
  }
  if ((uVar26 & 4) != 0) {
    *piVar30 = 0;
    piVar30 = piVar30 + 1;
  }
  if ((uVar26 & 2) != 0) {
    *(uint16_t *)piVar30 = 0;
    piVar30 = (int *)((long)piVar30 + 2);
  }
  if (bVar35) {
    *(uint8_t *)piVar30 = 0;
  }
  *(code **)(piVar11 + 2) = arg6;
  *(code **)(piVar11 + 4) = arg7;
  piVar11[0xe] = arg3 >> 2;
  *(uint64_t *)(piVar11 + 6) = arg8;
  *(uint64_t *)(piVar11 + 0xc) = arg2;
  *(uint64_t *)(piVar11 + 10) = arg2;
  *(uint64_t *)(piVar11 + 0x10) = arg4;
  piVar11[0x12] = arg5;
  *(char **)(piVar11 + 0x2e) = "\n";
  piVar11[0x30] = 1;
  piVar11[0xd5] = -1;
  piVar11[8] = -2;
  lVar12 = errorlist_create(MallocBridge,FreeBridge,piVar11);
  *(long *)(piVar11 + 0xea) = lVar12;
  if (lVar12 == 0) {
LAB_0052afcf:
    (*arg7)(piVar11,arg8);
LAB_0052a2ff:
    return MOJOSHADER_out_of_mem_data;
  }
  lVar12 = *(long *)(piVar11 + 0x20);
  if (lVar12 == 0) {
    lVar12 = buffer_create(0x100,MallocBridge,FreeBridge,piVar11);
    *(long *)(piVar11 + 0x20) = lVar12;
    if (lVar12 == 0) {
      errorlist_destroy(*(uint64_t *)(piVar11 + 0xea));
      goto LAB_0052afcf;
    }
  }
  bVar35 = false;
  *(long *)(piVar11 + 0x14) = lVar12;
  lVar12 = 8;
  pcVar13 = "glsl120";
  pcVar16 = arg1;
  do {
    if (lVar12 == 0) break;
    lVar12 = lVar12 + -1;
    bVar35 = *pcVar13 == *pcVar16;
    pcVar13 = pcVar13 + (ulong)bVar36 * -2 + 1;
    pcVar16 = pcVar16 + (ulong)bVar36 * -2 + 1;
  } while (bVar35);
  if (bVar35) {
    lVar12 = 0;
LAB_0052a77e:
    bVar35 = lVar12 == 0;
    pcVar13 = *(char **)(profileMap + lVar12 * 0x10 + 8);
  }
  else {
    lVar12 = 4;
    bVar35 = false;
    pcVar13 = "nv2";
    pcVar16 = arg1;
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      bVar35 = *pcVar13 == *pcVar16;
      pcVar13 = pcVar13 + (ulong)bVar36 * -2 + 1;
      pcVar16 = pcVar16 + (ulong)bVar36 * -2 + 1;
    } while (bVar35);
    if (bVar35) {
      lVar12 = 1;
      goto LAB_0052a77e;
    }
    lVar12 = 4;
    bVar35 = false;
    pcVar13 = "nv3";
    pcVar16 = arg1;
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      bVar35 = *pcVar13 == *pcVar16;
      pcVar13 = pcVar13 + (ulong)bVar36 * -2 + 1;
      pcVar16 = pcVar16 + (ulong)bVar36 * -2 + 1;
    } while (bVar35);
    if (bVar35) {
      lVar12 = 2;
      goto LAB_0052a77e;
    }
    lVar12 = 4;
    bVar35 = false;
    pcVar13 = "nv4";
    pcVar16 = arg1;
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      bVar35 = *pcVar13 == *pcVar16;
      pcVar13 = pcVar13 + (ulong)bVar36 * -2 + 1;
      pcVar16 = pcVar16 + (ulong)bVar36 * -2 + 1;
    } while (bVar35);
    if (bVar35) {
      lVar12 = 3;
      goto LAB_0052a77e;
    }
    bVar35 = false;
    pcVar13 = arg1;
  }
  lVar12 = 4;
  pcVar16 = "d3d";
  pcVar27 = pcVar13;
  do {
    if (lVar12 == 0) break;
    lVar12 = lVar12 + -1;
    bVar35 = *pcVar16 == *pcVar27;
    pcVar16 = pcVar16 + (ulong)bVar36 * -2 + 1;
    pcVar27 = pcVar27 + (ulong)bVar36 * -2 + 1;
  } while (bVar35);
  if (bVar35) {
    lVar12 = 0;
LAB_0052b0ca:
    piVar11[0x31] = (int)lVar12;
    *(uint8_t **)(piVar11 + 0x32) = profiles + lVar12 * 0x68;
  }
  else {
    lVar12 = 9;
    bVar35 = false;
    pcVar16 = "bytecode";
    pcVar27 = pcVar13;
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      bVar35 = *pcVar16 == *pcVar27;
      pcVar16 = pcVar16 + (ulong)bVar36 * -2 + 1;
      pcVar27 = pcVar27 + (ulong)bVar36 * -2 + 1;
    } while (bVar35);
    if (bVar35) {
      lVar12 = 1;
      goto LAB_0052b0ca;
    }
    lVar12 = 5;
    bVar35 = false;
    pcVar16 = "glsl";
    pcVar27 = pcVar13;
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      bVar35 = *pcVar16 == *pcVar27;
      pcVar16 = pcVar16 + (ulong)bVar36 * -2 + 1;
      pcVar27 = pcVar27 + (ulong)bVar36 * -2 + 1;
    } while (bVar35);
    if (bVar35) {
      lVar12 = 2;
      goto LAB_0052b0ca;
    }
    lVar12 = 5;
    bVar35 = false;
    pcVar16 = "arb1";
    do {
      if (lVar12 == 0) break;
      lVar12 = lVar12 + -1;
      bVar35 = *pcVar16 == *pcVar13;
      pcVar16 = pcVar16 + (ulong)bVar36 * -2 + 1;
      pcVar13 = pcVar13 + (ulong)bVar36 * -2 + 1;
    } while (bVar35);
    if (bVar35) {
      lVar12 = 3;
      goto LAB_0052b0ca;
    }
    piVar11[0x31] = -1;
    failf(piVar11,"Profile \'%s\' is unknown or unsupported",arg1);
  }
  if (*piVar11 != 0) goto LAB_0052a731;
  if ((ulong)(uint)piVar11[0x12] != 0) {
    lVar12 = *(long *)(piVar11 + 0x10);
    if (((*(byte *)(lVar12 + 8) < 4) && (*(byte *)(lVar12 + 9) < 4)) &&
       ((*(byte *)(lVar12 + 10) < 4 && (*(byte *)(lVar12 + 0xb) < 4)))) {
      uVar26 = 0;
      do {
        uVar26 = uVar26 + 1;
        if ((uint)piVar11[0x12] <= uVar26) goto LAB_0052a558;
      } while (((*(byte *)(lVar12 + 0x14) < 4) && (*(byte *)(lVar12 + 0x15) < 4)) &&
              ((*(byte *)(lVar12 + 0x16) < 4 &&
               (pbVar1 = (byte *)(lVar12 + 0x17), lVar12 = lVar12 + 0xc, *pbVar1 < 4))));
    }
    failf(piVar11,"%s","invalid swizzle");
  }
LAB_0052a558:
  piVar11[8] = 0;
  if (piVar11[0xe] == 0) {
    lVar12 = 0;
    failf(piVar11,"%s","Expected version token, got none at all.");
    iVar10 = piVar11[0xe];
    iVar23 = 0;
LAB_0052aa5b:
    puVar33 = (uint *)(lVar12 + *(long *)(piVar11 + 0xc));
    piVar11[8] = piVar11[8] + iVar23;
    piVar11[0xe] = iVar10;
    *(uint **)(piVar11 + 0xc) = puVar33;
    if (iVar10 == 0) goto LAB_0052a620;
    bVar35 = false;
    do {
      if (*piVar11 != 0) {
        *piVar11 = 0;
        bVar35 = true;
      }
      uVar24 = *puVar33;
      if ((short)uVar24 == -2) {
        if ((int)uVar24 < 0) {
          failf(piVar11,"%s","comment token high bit must be zero.");
        }
        uVar31 = 1;
        uVar9 = uVar24 >> 0x10;
        if (uVar24 >> 0x10 != 0) {
          if (uVar9 < (uint)piVar11[0xe]) {
            lVar12 = *(long *)(piVar11 + 0xc);
            if (*(int *)(lVar12 + 4) == 0x53455250) {
              if (1 < uVar9) {
                failf(piVar11,"%s","Preshader found, but preshader support is disabled!");
              }
            }
            else if (*(int *)(lVar12 + 4) == 0x42415443) {
              uVar24 = uVar9 * 4;
              piVar11[0x11a] = 1;
              if (uVar24 < 0x20) {
                failf(piVar11,"%s","Truncated CTAB data");
              }
              else {
                uVar31 = *(uint *)(lVar12 + 0x18);
                uVar18 = *(uint *)(lVar12 + 0x14);
                uVar22 = *(uint *)(lVar12 + 0x20);
                if ((((*(int *)(lVar12 + 8) == 0x1c) && (piVar11[0xa8] == *(int *)(lVar12 + 0x10)))
                    && (*(uint *)(lVar12 + 0xc) <= uVar24 && uVar24 - *(uint *)(lVar12 + 0xc) != 0))
                   && (((uVar31 + uVar18 * 0x14 < uVar24 &&
                        (uVar22 <= uVar24 && uVar24 - uVar22 != 0)) && (0 < (int)(uVar24 - uVar22)))
                      )) {
                  lVar12 = lVar12 + 8;
                  uVar26 = 0;
                  cVar2 = *(char *)(lVar12 + (ulong)uVar22);
                  while (cVar2 != '\0') {
                    if (uVar26 == (uVar24 - uVar22) - 1) goto LAB_0052b036;
                    uVar26 = uVar26 + 1;
                    cVar2 = ((char *)(lVar12 + (ulong)uVar22))[uVar26];
                  }
                  piVar11[0x11b] = uVar18;
                  __s = (void *)(**(code **)(piVar11 + 2))((ulong)uVar18 * 0x38 & 0xffffffff);
                  if (__s == (void *)0x0) {
                    piVar11[1] = 1;
                    *piVar11 = 1;
                    piVar11[0x11c] = 0;
                    piVar11[0x11d] = 0;
                  }
                  else {
                    *(void **)(piVar11 + 0x11c) = __s;
                    memset(__s,0,(ulong)uVar18 * 0x38);
                    if (uVar18 != 0) {
                      puVar33 = (uint *)((ulong)uVar31 + lVar12);
                      uVar8 = (ushort)puVar33[1];
                      uVar5 = *puVar33;
                      uVar22 = puVar33[4];
                      uVar3 = *(ushort *)((long)puVar33 + 6);
                      uVar4 = (ushort)puVar33[2];
                      local_4c = puVar33[3];
                      if (uVar5 <= uVar24 && uVar24 - uVar5 != 0) {
                        local_50 = 0x14;
                        lVar34 = 0;
                        while( true ) {
                          local_64 = (uint)uVar3;
                          local_68 = (uint)uVar4;
                          if ((int)(uVar24 - uVar5) < 1) break;
                          pcVar13 = (char *)(lVar12 + (ulong)uVar5);
                          uVar26 = 0;
                          cVar2 = *pcVar13;
                          while (cVar2 != '\0') {
                            if (uVar26 == (uVar24 - uVar5) - 1) goto LAB_0052b036;
                            uVar26 = uVar26 + 1;
                            cVar2 = pcVar13[uVar26];
                          }
                          if (uVar24 < uVar22 || uVar24 - uVar22 == 0) break;
                          if (uVar8 == 1) {
                            uVar19 = 1;
LAB_0052b3f9:
                            puVar17 = (uint32_t *)
                                      (**(code **)(piVar11 + 2))(0x28,*(uint64_t *)(piVar11 + 6));
                            if (puVar17 == (uint32_t *)0x0) {
                              piVar11[1] = 1;
                              *piVar11 = 1;
                            }
                            else {
                              *puVar17 = uVar19;
                              *(uint64_t *)(puVar17 + 4) = 0;
                              puVar17[6] = 0;
                              puVar17[7] = 0xffffffff;
                              puVar17[1] = local_64;
                              puVar17[2] = local_68;
                              *(uint64_t *)(puVar17 + 8) = *(uint64_t *)(piVar11 + 0x116);
                              *(uint32_t **)(piVar11 + 0x116) = puVar17;
                            }
                          }
                          else {
                            uVar19 = 2;
                            if (uVar8 == 0) goto LAB_0052b3f9;
                            if (uVar8 == 2) {
                              uVar19 = 0;
                              goto LAB_0052b3f9;
                            }
                            if (uVar8 != 3) break;
                          }
                          sVar15 = strlen(pcVar13);
                          pcVar16 = (char *)(**(code **)(piVar11 + 2))
                                                      (sVar15 + 1,*(uint64_t *)(piVar11 + 6));
                          if (pcVar16 == (char *)0x0) {
                            piVar11[1] = 1;
                            *piVar11 = 1;
                            goto LAB_0052ad36;
                          }
                          strcpy(pcVar16,pcVar13);
                          puVar32 = (uint64_t *)(lVar34 + *(long *)(piVar11 + 0x11c));
                          *(uint *)(puVar32 + 1) = (uint)uVar8;
                          *puVar32 = pcVar16;
                          *(uint *)((long)puVar32 + 0xc) = local_64;
                          *(uint *)(puVar32 + 2) = local_68;
                          iVar10 = parse_ctab_typeinfo(piVar11,lVar12,uVar24,local_4c,puVar32 + 3);
                          if (iVar10 == 0) break;
                          if ((piVar11[1] != 0) || (lVar34 == (ulong)(uVar18 - 1) * 0x38))
                          goto LAB_0052ad36;
                          uVar26 = (ulong)local_50;
                          lVar34 = lVar34 + 0x38;
                          local_50 = local_50 + 0x14;
                          puVar33 = (uint *)(uVar26 + uVar31 + lVar12);
                          uVar8 = (ushort)puVar33[1];
                          uVar5 = *puVar33;
                          uVar22 = puVar33[4];
                          uVar3 = *(ushort *)((long)puVar33 + 6);
                          uVar4 = (ushort)puVar33[2];
                          local_4c = puVar33[3];
                          if (uVar24 < uVar5 || uVar24 - uVar5 == 0) break;
                        }
                      }
                      goto LAB_0052b036;
                    }
                  }
                }
                else {
LAB_0052b036:
                  failf(piVar11,"%s","Shader has corrupt CTAB data");
                }
              }
            }
          }
LAB_0052ad36:
          uVar31 = uVar9 + 1;
          if (uVar31 == 0) {
            puVar33 = *(uint **)(piVar11 + 0xc);
            uVar24 = *puVar33;
            goto joined_r0x0052ad4f;
          }
        }
        goto LAB_0052ac80;
      }
joined_r0x0052ad4f:
      if (uVar24 == 0xffff) {
        if (piVar11[0xe] != 1) {
          failf(piVar11,"%s","end token before end of stream");
        }
        if (*piVar11 == 0) {
          (**(code **)(*(long *)(piVar11 + 0x32) + 0x10))(piVar11);
        }
LAB_0052ace0:
        uVar31 = 1;
      }
      else {
        if (uVar24 == 0xfffd) {
          if (((piVar11[0x34] != 1) || ((char)piVar11[0x35] != '\x01')) ||
             (*(char *)((long)piVar11 + 0xd5) != '\x04')) {
            failf(piVar11,"%s","phase token only available in 1.4 pixel shaders");
          }
          if (*piVar11 == 0) {
            (**(code **)(*(long *)(piVar11 + 0x32) + 0x18))(piVar11);
          }
          goto LAB_0052ace0;
        }
        iVar10 = piVar11[8];
        uVar9 = uVar24 & 0xffff;
        iVar23 = piVar11[0xe];
        if (0x60 < uVar9) {
LAB_0052accf:
          failf(piVar11,"unknown token (0x%x)",uVar24);
          goto LAB_0052ace0;
        }
        lVar12 = (ulong)uVar9 * 0x40;
        pcVar7 = *(code **)(lVar12 + 0x5cddc0 + (long)piVar11[0x31] * 8);
        if ((int)uVar24 < 0) {
          failf(piVar11,"%s","instruction token high bit must be zero.");
        }
        uVar18 = uVar24 >> 0x18 & 0xf;
        if (*(long *)(instructions + lVar12) == 0) {
          failf(piVar11,"%s","Unknown opcode.");
          uVar31 = uVar18 + 1;
        }
        else {
          if ((uVar24 & 0x40000000) != 0) {
            if (piVar11[0x34] != 1) {
              failf(piVar11,"%s","coissue instruction on non-pixel shader");
            }
            uVar31 = 1;
            if (*(byte *)((long)piVar11 + 0xd5) != 0xff) {
              uVar31 = (uint)*(byte *)((long)piVar11 + 0xd5);
            }
            if (0x1ffff < (uVar31 | (uint)*(byte *)(piVar11 + 0x35) << 0x10)) {
              failf(piVar11,"%s","coissue instruction in Shader Model >= 2.0");
            }
            failf(piVar11,"%s","coissue instructions unsupported");
          }
          if ((piVar11[0x34] & *(uint *)(instructions + lVar12 + 0xc)) == 0) {
            failf(piVar11,"opcode \'%s\' not available in this shader type.",
                  *(uint64_t *)(instructions + lVar12));
          }
          piVar11[0xa4] = 0;
          piVar11[0xa5] = 0;
          *(long *)(piVar11 + 0xc) = *(long *)(piVar11 + 0xc) + 4;
          piVar11[0xe] = piVar11[0xe] + -1;
          uVar22 = (uint)((uVar24 & 0x10000000) != 0);
          piVar11[0x121] = uVar22;
          piVar11[8] = piVar11[8] + 4;
          piVar11[0xa6] = 0;
          piVar11[0xa7] = 0;
          piVar11[0xaa] = uVar24 >> 0x10 & 0xff;
          uVar31 = (**(code **)(instructions + lVar12 + 0x10))(piVar11);
          if (uVar22 != 0) {
            parse_source_token(piVar11,piVar11 + 0x94);
            if (piVar11[0x9d] != 0x13) {
              failf(piVar11,"%s","Predicated instruction but not predicate register!");
            }
            if ((piVar11[0x9c] != 0xd) && (piVar11[0x9c] != 0)) {
              failf(piVar11,"%s","Predicated instruction register is not NONE or NOT");
            }
            uVar24 = piVar11[0x97];
            if ((uVar24 != 0xe4) &&
               ((((((int)uVar24 >> 2 ^ uVar24) & 3) != 0 ||
                 ((((int)uVar24 >> 2 ^ (int)uVar24 >> 4) & 3U) != 0)) ||
                ((((int)uVar24 >> 6 ^ (int)uVar24 >> 4) & 3U) != 0)))) {
              failf(piVar11,"%s","Predicated instruction register has wrong swizzle");
            }
            if (piVar11[0x9e] != 0) {
              failf(piVar11,"%s","relative addressing in predicated token");
            }
            uVar31 = uVar31 + 1;
          }
          *(uint **)(piVar11 + 0xc) = puVar33;
          piVar11[0xe] = iVar23;
          piVar11[8] = iVar10;
          if (*(code **)(instructions + lVar12 + 0x18) != (code *)0x0) {
            (**(code **)(instructions + lVar12 + 0x18))(piVar11);
          }
          piVar11[0xa9] = piVar11[0xa9] + *(int *)(instructions + lVar12 + 8);
          if (*piVar11 == 0) {
            (*pcVar7)(piVar11);
          }
          piVar11[0xab] = uVar9;
          piVar11[0xb0] = 0;
          uVar24 = 1;
          if (*(byte *)((long)piVar11 + 0xd5) != 0xff) {
            uVar24 = (uint)*(byte *)((long)piVar11 + 0xd5);
          }
          if ((uVar24 | (uint)*(byte *)(piVar11 + 0x35) << 0x10) < 0x20000) {
            if (uVar18 != 0) {
              failf(piVar11,"%s","instruction token count must be zero");
            }
          }
          else {
            uVar18 = uVar18 + 1;
            if (uVar31 != uVar18) {
              failf(piVar11,"wrong token count (%u, not %u) for opcode \'%s\'.",uVar31,uVar18,
                    *(uint64_t *)(instructions + lVar12));
              uVar31 = uVar18;
            }
          }
          if (uVar31 == 0) {
            uVar24 = **(uint **)(piVar11 + 0xc);
            goto LAB_0052accf;
          }
        }
      }
LAB_0052ac80:
      if ((uint)piVar11[0xe] < uVar31) {
        failf(piVar11,"%s","Corrupted or truncated shader");
        break;
      }
      iVar10 = piVar11[0xe] - uVar31;
      piVar11[8] = piVar11[8] + uVar31 * 4;
      piVar11[0xe] = iVar10;
      puVar33 = (uint *)(*(long *)(piVar11 + 0xc) + (long)(int)uVar31 * 4);
      *(uint **)(piVar11 + 0xc) = puVar33;
    } while (iVar10 != 0);
    piVar11[8] = -1;
    if (bVar35) {
      *piVar11 = 1;
      goto LAB_0052a731;
    }
  }
  else {
    uVar24 = **(uint **)(piVar11 + 0xc);
    piVar11[0xa8] = uVar24;
    if (uVar24 >> 0x10 == 0xffff) {
      piVar11[0x34] = 1;
      *(char **)(piVar11 + 0x2c) = "ps";
    }
    else {
      if (uVar24 >> 0x10 != 0xfffe) {
        failf(piVar11,"%s","Unsupported shader type or not a shader at all");
        goto LAB_0052a731;
      }
      piVar11[0x34] = 2;
      *(uint8_t **)(piVar11 + 0x2c) = &DAT_005cadd2 /* R:128.45101928710938f */;
    }
    *(char *)((long)piVar11 + 0xd5) = (char)uVar24;
    *(char *)(piVar11 + 0x35) = (char)(uVar24 >> 8);
    uVar31 = 1;
    if ((char)uVar24 != -1) {
      uVar31 = uVar24 & 0xff;
    }
    if (0x30001 < (uVar31 | (uVar24 >> 8 & 0xff) << 0x10)) {
      failf(piVar11,"Shader Model %u.%u is currently unsupported.");
    }
    if (*piVar11 == 0) {
      (**(code **)(*(long *)(piVar11 + 0x32) + 8))(piVar11,arg1);
    }
    if (piVar11[0xe] != 0) {
      iVar10 = piVar11[0xe] + -1;
      iVar23 = 4;
      lVar12 = 4;
      goto LAB_0052aa5b;
    }
    failf(piVar11,"%s","Corrupted or truncated shader");
    *(long *)(piVar11 + 0xc) = *(long *)(piVar11 + 0xc) + 4;
    piVar11[0xe] = 0;
LAB_0052a620:
    piVar11[8] = -1;
  }
  determine_constants_arrays(piVar11);
  if (*(uint **)(piVar11 + 0xde) != (uint *)0x0) {
    puVar33 = (uint *)(piVar11 + 0xf4);
    puVar25 = *(uint **)(piVar11 + 0xde);
    puVar28 = (uint *)(piVar11 + 0xd6);
    do {
      puVar21 = *(uint **)(piVar11 + 0xe8);
      puVar6 = *(uint **)(puVar25 + 8);
      uVar24 = *puVar25;
      puVar29 = puVar25;
      if (puVar21 != (uint *)0x0) {
        uVar31 = puVar25[1] << 0x10 | uVar24;
        do {
          uVar9 = puVar21[1] << 0x10 | *puVar21;
          if (uVar31 == uVar9) goto LAB_0052a6a3;
        } while ((uVar9 <= uVar31) && (puVar21 = *(uint **)(puVar21 + 8), puVar21 != (uint *)0x0));
      }
      if (uVar24 < 0x14) {
        uVar26 = 1L << ((byte)uVar24 & 0x3f);
        if ((uVar26 & 0xc8009) == 0) {
          if ((uVar26 & 0x4084) == 0) {
            if ((uVar26 & 0x370) == 0) goto LAB_0052a795;
            if (piVar11[0x34] == 2) {
              uVar31 = 1;
              if (*(byte *)((long)piVar11 + 0xd5) != 0xff) {
                uVar31 = (uint)*(byte *)((long)piVar11 + 0xd5);
              }
              if (0x2ffff < (uVar31 | (uint)*(byte *)(piVar11 + 0x35) << 0x10)) {
                failf(piVar11,"%s","vs_3 can\'t use output registers without declaring them first.")
                ;
                goto LAB_0052a71c;
              }
            }
            lVar12 = reglist_insert(piVar11,piVar11 + 0x100,uVar24,puVar25[1]);
            *(uint32_t *)(lVar12 + 8) = 0xffffffff;
            *(uint32_t *)(lVar12 + 0xc) = 0;
            *(uint32_t *)(lVar12 + 0x10) = 0xf;
            *(uint32_t *)(lVar12 + 0x14) = 0;
          }
          else {
            *(uint **)(puVar28 + 8) = puVar6;
            puVar25[8] = 0;
            puVar25[9] = 0;
            *(uint **)(puVar33 + 8) = puVar25;
            puVar29 = puVar28;
            puVar33 = puVar25;
          }
        }
        else {
          (**(code **)(*(long *)(piVar11 + 0x32) + 0x20))(piVar11);
        }
      }
      else {
LAB_0052a795:
        failf(piVar11,"%s","BUG: we used a register we don\'t know how to define.");
      }
LAB_0052a6a3:
      puVar25 = puVar6;
      puVar28 = puVar29;
    } while (puVar6 != (uint *)0x0);
  }
  for (lVar12 = *(long *)(piVar11 + 0x116); lVar12 != 0; lVar12 = *(long *)(lVar12 + 0x20)) {
    if (*(int *)(lVar12 + 0x18) != 0) {
      if (*(long *)(lVar12 + 0x10) == 0) {
        (**(code **)(*(long *)(piVar11 + 0x32) + 0x28))(piVar11,lVar12);
        iVar10 = *(int *)(lVar12 + 8);
        piVar11[0xf0] = piVar11[0xf0] + 1;
        piVar11[0xf1] = piVar11[0xf1] + iVar10;
      }
      else {
        (**(code **)(*(long *)(piVar11 + 0x32) + 0x30))
                  (piVar11,*(long *)(lVar12 + 0x10),*(uint32_t *)(lVar12 + 4),
                   *(uint32_t *)(lVar12 + 8));
      }
    }
  }
  piVar30 = *(int **)(piVar11 + 0xfc);
  if (piVar30 != (int *)0x0) {
    lVar12 = 0;
    do {
      if (*piVar30 == 2) {
        iVar10 = piVar30[1];
        for (lVar12 = *(long *)(piVar11 + 0x116); lVar12 != 0; lVar12 = *(long *)(lVar12 + 0x20)) {
          if (((*(int *)(lVar12 + 0x18) != 0) && (*(int *)(lVar12 + 4) <= iVar10)) &&
             (iVar10 < *(int *)(lVar12 + 4) + *(int *)(lVar12 + 8))) {
            *(long *)(piVar30 + 6) = lVar12;
            iVar23 = *(int *)(lVar12 + 8);
            (**(code **)(*(long *)(piVar11 + 0x32) + 0x38))(piVar11,2,iVar10,lVar12);
            if (iVar23 < 0) goto LAB_0052a8dd;
            goto LAB_0052a910;
          }
        }
      }
      else {
        iVar10 = piVar30[1];
      }
      (**(code **)(*(long *)(piVar11 + 0x32) + 0x38))(piVar11,*piVar30,iVar10,lVar12);
LAB_0052a8dd:
      piVar11[0xf0] = piVar11[0xf0] + 1;
      iVar10 = *piVar30;
      if (iVar10 == 7) {
        piVar11[0xf2] = piVar11[0xf2] + 1;
      }
      else if (iVar10 == 0xe) {
        piVar11[0xf3] = piVar11[0xf3] + 1;
      }
      else if (iVar10 == 2) {
        piVar11[0xf1] = piVar11[0xf1] + 1;
      }
LAB_0052a910:
      piVar30 = *(int **)(piVar30 + 8);
    } while (piVar30 != (int *)0x0);
  }
  for (lVar12 = *(long *)(piVar11 + 0x114); lVar12 != 0; lVar12 = *(long *)(lVar12 + 0x20)) {
    piVar11[0x10a] = piVar11[0x10a] + 1;
    (**(code **)(*(long *)(piVar11 + 0x32) + 0x40))
              (piVar11,*(uint32_t *)(lVar12 + 4),*(uint32_t *)(lVar12 + 0xc));
  }
  for (puVar17 = *(uint32_t **)(piVar11 + 0x108); puVar17 != (uint32_t *)0x0;
      puVar17 = *(uint32_t **)(puVar17 + 8)) {
    piVar11[0xfe] = piVar11[0xfe] + 1;
    (**(code **)(*(long *)(piVar11 + 0x32) + 0x48))
              (piVar11,*puVar17,puVar17[1],puVar17[2],puVar17[3],puVar17[4],puVar17[5]);
  }
LAB_0052a71c:
  iVar10 = *piVar11;
  if (iVar10 == 0) {
    (**(code **)(*(long *)(piVar11 + 0x32) + 0x50))(piVar11);
  }
  *piVar11 = iVar10;
LAB_0052a731:
  puVar14 = (uint8_t *)build_parsedata(piVar11);
  destroy_context(piVar11);
  return puVar14;
}

/* ======================================================================
 * MOJOSHADER_freeParseData  (Ghidra `MOJOSHADER_freeParseData` @ 0052b490)
 * Signature: uint8_t MOJOSHADER_freeParseData(void)
 * Calls: `free_symbols`
 * Called by: `MOJOSHADER_assemble`, `MOJOSHADER_glCompileShader`, `MOJOSHADER_glDeleteShader`, `program_unref_part_10`
 */
void MOJOSHADER_freeParseData(int *arg1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  int iVar4;
  
  if ((arg1 != (int *)0x0) && (arg1 != (int *)MOJOSHADER_out_of_mem_data)) {
    uVar2 = *(uint64_t *)(arg1 + 0x2e);
    UNRECOVERED_JUMPTABLE = *(code **)(arg1 + 0x2c);
    (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(arg1 + 6),uVar2);
    (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(arg1 + 0x12),uVar2);
    (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(arg1 + 0x22),uVar2);
    if (0 < *arg1) {
      lVar3 = 0;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(*(long *)(arg1 + 2) + lVar3),uVar2);
        puVar1 = (uint64_t *)(*(long *)(arg1 + 2) + 8 + lVar3);
        lVar3 = lVar3 + 0x18;
        (*UNRECOVERED_JUMPTABLE)(*puVar1,uVar2);
      } while (iVar4 < *arg1);
    }
    (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(arg1 + 2),uVar2);
    if (0 < arg1[0xd]) {
      lVar3 = 0;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        puVar1 = (uint64_t *)(*(long *)(arg1 + 0xe) + 0x10 + lVar3);
        lVar3 = lVar3 + 0x18;
        (*UNRECOVERED_JUMPTABLE)(*puVar1,uVar2);
      } while (iVar4 < arg1[0xd]);
    }
    (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(arg1 + 0xe),uVar2);
    if (0 < arg1[0x18]) {
      lVar3 = 0;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        puVar1 = (uint64_t *)(*(long *)(arg1 + 0x1a) + 8 + lVar3);
        lVar3 = lVar3 + 0x10;
        (*UNRECOVERED_JUMPTABLE)(*puVar1,uVar2);
      } while (iVar4 < arg1[0x18]);
    }
    (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(arg1 + 0x1a),uVar2);
    if (0 < arg1[0x1c]) {
      lVar3 = 0;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        puVar1 = (uint64_t *)(*(long *)(arg1 + 0x1e) + 8 + lVar3);
        lVar3 = lVar3 + 0x10;
        (*UNRECOVERED_JUMPTABLE)(*puVar1,uVar2);
      } while (iVar4 < arg1[0x1c]);
    }
    (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(arg1 + 0x1e),uVar2);
    if (0 < arg1[0x14]) {
      lVar3 = 0;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        puVar1 = (uint64_t *)(*(long *)(arg1 + 0x16) + 8 + lVar3);
        lVar3 = lVar3 + 0x10;
        (*UNRECOVERED_JUMPTABLE)(*puVar1,uVar2);
      } while (iVar4 < arg1[0x14]);
    }
    (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(arg1 + 0x16),uVar2);
    free_symbols(UNRECOVERED_JUMPTABLE,uVar2,*(uint64_t *)(arg1 + 0x26),arg1[0x24]);
    lVar3 = *(long *)(arg1 + 0x28);
    if (lVar3 != 0) {
      (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(lVar3 + 8),uVar2);
      (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(lVar3 + 0x28),uVar2);
      free_symbols(UNRECOVERED_JUMPTABLE,uVar2,*(uint64_t *)(lVar3 + 0x18),
                   *(uint32_t *)(lVar3 + 0x14));
      (*UNRECOVERED_JUMPTABLE)(lVar3,uVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x0052b65f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(arg1,uVar2);
    return;
  }
  return;
}

/* ======================================================================
 * MOJOSHADER_version  (Ghidra `MOJOSHADER_version` @ 0052b680)
 * Signature: uint8_t MOJOSHADER_version(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t MOJOSHADER_version(void)

{
  return 0x431;
}

/* ======================================================================
 * MOJOSHADER_changeset  (Ghidra `MOJOSHADER_changeset` @ 0052b690)
 * Signature: uint8_t MOJOSHADER_changeset(void)
 * Calls: (none)
 * Called by: (none)
 */
char * MOJOSHADER_changeset(void)

{
  return "hg-1073:6eccf031c7e6";
}

/* ======================================================================
 * MOJOSHADER_maxShaderModel  (Ghidra `MOJOSHADER_maxShaderModel` @ 0052b6a0)
 * Signature: uint8_t MOJOSHADER_maxShaderModel(void)
 * Calls: (none)
 * Called by: (none)
 */
int MOJOSHADER_maxShaderModel(byte *arg1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  bVar1 = *arg1;
  bVar6 = bVar1 < 100;
  if (bVar1 == 100) {
    bVar6 = arg1[1] < 0x33;
    if (arg1[1] == 0x33) {
      bVar6 = arg1[2] < 100;
      if (arg1[2] == 100) {
        bVar6 = false;
        if (arg1[3] == 0) {
          return 3;
        }
      }
    }
  }
  bVar8 = false;
  lVar3 = 9;
  pbVar4 = arg1;
  pbVar5 = (byte *)"bytecode";
  do {
    if (lVar3 == 0) break;
    lVar3 = lVar3 + -1;
    bVar6 = *pbVar4 < *pbVar5;
    bVar8 = *pbVar4 == *pbVar5;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
  } while (bVar8);
  iVar2 = 3;
  bVar7 = (!bVar6 && !bVar8) < bVar6;
  bVar6 = (!bVar6 && !bVar8) == bVar6;
  if (!bVar6) {
    lVar3 = 5;
    pbVar4 = arg1;
    pbVar5 = &DAT_005caac4 /* R:"glsl" */;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      bVar7 = *pbVar4 < *pbVar5;
      bVar6 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      lVar3 = 8;
      pbVar4 = arg1;
      pbVar5 = &DAT_005caad6 /* R:"glsl120" */;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar7 = *pbVar4 < *pbVar5;
        bVar6 = *pbVar4 == *pbVar5;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
      } while (bVar6);
      if (!bVar6) {
        lVar3 = 5;
        pbVar4 = arg1;
        pbVar5 = &DAT_005c9ab8 /* R:"arb1" */;
        do {
          if (lVar3 == 0) break;
          lVar3 = lVar3 + -1;
          bVar7 = *pbVar4 < *pbVar5;
          bVar6 = *pbVar4 == *pbVar5;
          pbVar4 = pbVar4 + 1;
          pbVar5 = pbVar5 + 1;
        } while (bVar6);
        iVar2 = 2;
        if (((((!bVar7 && !bVar6) != bVar7) && (iVar2 = -1, bVar1 == 0x6e)) && (arg1[1] == 0x76))
           && ((arg1[2] != 0x32 || (iVar2 = 2, arg1[3] != 0)))) {
          if ((arg1[2] == 0x33) && (arg1[3] == 0)) {
            return 2;
          }
          if (arg1[2] != 0x34) {
            return -1;
          }
          return (-(uint)(arg1[3] == 0) & 4) - 1;
        }
      }
    }
  }
  return iVar2;
}

/* ======================================================================
 * parse_args_NULL__0052b7c0  (Ghidra `parse_args_NULL` @ 0052b7c0)
 * Signature: uint8_t parse_args_NULL(void)
 * Calls: `parse_args_NULL`
 * Called by: (none)
 */
uint64_t parse_args_NULL(void)

{
  return 1;
}

/* ======================================================================
 * parse_num  (Ghidra `parse_num` @ 0052bb70)
 * Signature: uint8_t parse_num(void)
 * Calls: `failf`, `nexttoken`
 * Called by: `parse_args_DEFx`
 */
uint64_t parse_num(long arg1,int arg2,float *arg3)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  float local_48 [4];
  float local_38 [6];
  
  iVar1 = nexttoken();
  bVar3 = iVar1 == 0x2d;
  if (bVar3) {
    iVar1 = nexttoken(arg1);
  }
  if (iVar1 == 0x102) {
    local_38[0] = 0.0;
    __isoc99_sscanf(*(uint64_t *)(arg1 + 0x50),&DAT_005c9dfd /* R:8.024449348449707f */,local_38);
    if (arg2 == 0) {
      local_48[0] = local_38[0];
      if (bVar3) {
        local_48[0] = (float)-(int)local_38[0];
      }
    }
    else if (bVar3) {
      local_48[0] = (float)-(int)local_38[0];
    }
    else {
      local_48[0] = (float)(int)local_38[0];
    }
LAB_0052bbeb:
    *arg3 = local_48[0];
    return 1;
  }
  if (iVar1 == 0x103) {
    pcVar2 = "Expected whole number";
    if (arg2 != 0) {
      __isoc99_sscanf(*(uint64_t *)(arg1 + 0x50),&DAT_005c9be1 /* R:33659028.0f */,local_48);
      if (bVar3) {
        local_48[0] = (float)((uint)local_48[0] ^ DAT_005be6f0 /* R:u32=2147483648 */);
      }
      goto LAB_0052bbeb;
    }
  }
  else {
    pcVar2 = "Expected number";
  }
  failf(arg1,"%s",pcVar2);
  *arg3 = 0.0;
  return 0;
}

/* ======================================================================
 * parse_register_name_part_13  (Ghidra `parse_register_name.part.13` @ 0052c100)
 * Signature: uint8_t parse_register_name.part.13(void)
 * Calls: `check_token_segment_isra_6`, `failf`, `nexttoken`, `strncasecmp`
 * Called by: `parse_destination_token`, `parse_source_token_maybe_relative`
 */
uint64_t parse_register_name_part_13(long arg1,int *arg2,int *arg3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  bool bVar13;
  
  uVar4 = *(uint *)(arg1 + 0x58);
  if (uVar4 < 6) {
    if (4 < uVar4) {
      pcVar12 = *(char **)(arg1 + 0x50);
      goto LAB_0052c1a0;
    }
    if (3 < uVar4) {
      pcVar12 = *(char **)(arg1 + 0x50);
      goto LAB_0052c218;
    }
  }
  else {
    pcVar12 = *(char **)(arg1 + 0x50);
    iVar6 = strncasecmp(pcVar12,"oDepth",6);
    if (iVar6 == 0) {
      *(char **)(arg1 + 0x50) = pcVar12 + 6;
      *(uint *)(arg1 + 0x58) = uVar4 - 6;
      iVar11 = 9;
      iVar6 = 0;
      goto LAB_0052c167;
    }
LAB_0052c1a0:
    iVar6 = strncasecmp(pcVar12,"vFace",5);
    if (iVar6 == 0) {
      *(char **)(arg1 + 0x50) = pcVar12 + 5;
      *(uint *)(arg1 + 0x58) = uVar4 - 5;
      iVar11 = 0x11;
      iVar6 = 1;
      goto LAB_0052c167;
    }
LAB_0052c218:
    iVar6 = strncasecmp(pcVar12,"vPos",4);
    if (iVar6 == 0) {
      *(char **)(arg1 + 0x50) = pcVar12 + 4;
      *(uint *)(arg1 + 0x58) = uVar4 - 4;
      iVar11 = 0x11;
      iVar6 = 0;
      goto LAB_0052c167;
    }
    iVar6 = strncasecmp(pcVar12,"oPos",4);
    if (iVar6 == 0) {
      *(char **)(arg1 + 0x50) = pcVar12 + 4;
      *(uint *)(arg1 + 0x58) = uVar4 - 4;
      iVar11 = 4;
      iVar6 = 0;
      goto LAB_0052c167;
    }
    iVar6 = strncasecmp(pcVar12,"oFog",4);
    if (iVar6 == 0) {
      *(char **)(arg1 + 0x50) = pcVar12 + 4;
      *(uint *)(arg1 + 0x58) = uVar4 - 4;
      iVar11 = 4;
      iVar6 = 1;
      goto LAB_0052c167;
    }
    iVar6 = strncasecmp(pcVar12,"oPts",4);
    if (iVar6 == 0) {
      *(char **)(arg1 + 0x50) = pcVar12 + 4;
      *(uint *)(arg1 + 0x58) = uVar4 - 4;
      iVar11 = 4;
      iVar6 = 2;
      goto LAB_0052c167;
    }
  }
  lVar1 = arg1 + 0x50;
  lVar2 = arg1 + 0x58;
  iVar6 = check_token_segment_isra_6(lVar1,lVar2,"aL");
  if (iVar6 != 0) {
    iVar11 = 0xf;
    iVar6 = 0;
    goto LAB_0052c167;
  }
  iVar6 = check_token_segment_isra_6(lVar1,lVar2,&DAT_005c9c7b /* R:u32=1979728751 */);
  iVar11 = 8;
  if (iVar6 == 0) {
    iVar6 = check_token_segment_isra_6(lVar1,lVar2,&DAT_005c9c78 /* R:u32=1862292591 */);
    iVar11 = 6;
    if (iVar6 == 0) {
      iVar6 = check_token_segment_isra_6(lVar1,lVar2,&DAT_005c9c75 /* R:u32=1862288495 */);
      iVar11 = 5;
      if (iVar6 == 0) {
        iVar6 = check_token_segment_isra_6(lVar1,lVar2,&DAT_005db9f0 /* R:u32=1818165362 */);
        iVar11 = 0;
        if (iVar6 == 0) {
          iVar6 = check_token_segment_isra_6(lVar1,lVar2,&DAT_005c1e93 /* R:u32=1969291382 */);
          iVar11 = 1;
          if (iVar6 == 0) {
            iVar6 = check_token_segment_isra_6(lVar1,lVar2,"c");
            iVar11 = 2;
            if (iVar6 == 0) {
              iVar6 = check_token_segment_isra_6(lVar1,lVar2,&DAT_005c8bfa /* R:u32=1769406569 */);
              iVar11 = 7;
              if (iVar6 == 0) {
                iVar6 = check_token_segment_isra_6(lVar1,lVar2,"b");
                iVar11 = 0xe;
                if (iVar6 == 0) {
                  iVar6 = check_token_segment_isra_6(lVar1,lVar2,"s");
                  iVar11 = 10;
                  if (iVar6 == 0) {
                    iVar6 = check_token_segment_isra_6(lVar1,lVar2,&DAT_005db9f3 /* R:2.5757129762382647e-09f */);
                    iVar11 = 0x12;
                    if (iVar6 == 0) {
                      iVar6 = check_token_segment_isra_6(lVar1,lVar2,"p");
                      iVar11 = 0x13;
                      if (iVar6 == 0) {
                        iVar6 = check_token_segment_isra_6(lVar1,lVar2,&DAT_005c31dd /* R:u32=1967980655 */);
                        iVar11 = 6;
                        if (iVar6 == 0) {
                          iVar6 = check_token_segment_isra_6(lVar1,lVar2,"a");
                          iVar11 = 3;
                          if ((iVar6 == 0) &&
                             (iVar6 = check_token_segment_isra_6(lVar1,lVar2,"t"), iVar6 == 0)) {
                            failf(arg1,"%s","expected register type");
                            iVar11 = 2;
                            iVar6 = 0;
                            goto LAB_0052c167;
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
  if (*(int *)(arg1 + 0x58) == 0) {
    iVar6 = nexttoken(arg1);
    *(uint32_t *)(arg1 + 0x48) = 1;
    *(uint32_t *)(arg1 + 0x58) = 0;
    if (iVar6 != 0x5b) goto LAB_0052c30e;
    iVar6 = 0;
  }
  else {
LAB_0052c30e:
    uVar4 = *(uint *)(arg1 + 0x58);
    if ((uVar4 != 0) && (pcVar12 = *(char **)(arg1 + 0x50), (byte)(*pcVar12 - 0x30U) < 10)) {
      pcVar9 = pcVar12;
      uVar5 = 0;
      do {
        uVar7 = uVar5;
        uVar5 = uVar7 + 1;
        if (uVar5 == uVar4) goto LAB_0052c356;
        pcVar3 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
      } while ((byte)(*pcVar3 - 0x30U) < 10);
      if (uVar5 != 0) {
LAB_0052c356:
        iVar6 = 0;
        iVar8 = 1;
        do {
          iVar10 = (pcVar12[uVar7] + -0x30) * iVar8;
          iVar8 = iVar8 * 10;
          iVar6 = iVar6 + iVar10;
          bVar13 = uVar7 != 0;
          uVar7 = uVar7 - 1;
        } while (bVar13);
        *(uint *)(arg1 + 0x58) = uVar4 - uVar5;
        *(char **)(arg1 + 0x50) = pcVar12 + uVar5;
        goto LAB_0052c38b;
      }
    }
    iVar6 = 0;
    failf(arg1,"%s","Invalid register index");
  }
LAB_0052c38b:
  if ((iVar11 == 2) && (0x7ff < iVar6)) {
    if (iVar6 < 0x1000) {
      iVar6 = iVar6 + -0x800;
      iVar11 = 0xb;
    }
    else if (iVar6 < 0x1800) {
      iVar6 = iVar6 + -0x1000;
      iVar11 = 0xc;
    }
    else if (iVar6 < 0x2000) {
      iVar6 = iVar6 + -0x1800;
      iVar11 = 0xd;
    }
    else {
      failf(arg1,"%s","Invalid const register index");
    }
  }
LAB_0052c167:
  *arg2 = iVar11;
  *arg3 = iVar6;
  return 1;
}

/* ======================================================================
 * parse_destination_token  (Ghidra `parse_destination_token` @ 0052c5d0)
 * Signature: uint8_t parse_destination_token(void)
 * Calls: `failf`, `memcpy`, `nexttoken`, `parse_register_name_part_13`, `strncasecmp`
 * Called by: `parse_args_DCL__0052cd90`, `parse_args_DEFB__0052d3a0`, `parse_args_DEFx`, `parse_args_DSSSS__0052de90`, `parse_args_DSSS__0052dfe0`, `parse_args_DSS__0052e090`, `parse_args_DS__0052de40`, `parse_args_D__0052cd70`, `parse_args_SINCOS__0052e110`, `parse_args_TEXCRD__0052e190` (+2 more)
 */
uint64_t parse_destination_token(long arg1)

{
  char *__s1;
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint64_t *puVar13;
  char local_28;
  char local_27 [15];
  
  uVar8 = 0x38;
  bVar2 = false;
  iVar4 = 0x38;
  bVar1 = false;
  puVar13 = (uint64_t *)(arg1 + 0xa8);
  pcVar9 = &local_28;
  if (((ulong)puVar13 & 1) == 0) {
    if (((ulong)puVar13 & 2) == 0) goto LAB_0052c5fb;
LAB_0052cb7f:
    *(uint16_t *)puVar13 = 0;
    puVar13 = (uint64_t *)((long)puVar13 + 2);
    uVar10 = iVar4 - 2;
    uVar8 = (ulong)uVar10;
  }
  else {
    puVar13 = (uint64_t *)(arg1 + 0xa9);
    *(uint8_t *)(arg1 + 0xa8) = 0;
    uVar8 = 0x37;
    bVar2 = true;
    iVar4 = 0x37;
    bVar1 = true;
    if (((ulong)puVar13 & 2) != 0) goto LAB_0052cb7f;
LAB_0052c5fb:
    uVar10 = (uint)uVar8;
    bVar1 = bVar2;
  }
  if (((ulong)puVar13 & 4) != 0) {
    *(uint32_t *)puVar13 = 0;
    uVar8 = (ulong)(uVar10 - 4);
    puVar13 = (uint64_t *)((long)puVar13 + 4);
  }
  for (uVar7 = uVar8 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  if ((uVar8 & 4) != 0) {
    *(uint32_t *)puVar13 = 0;
    puVar13 = (uint64_t *)((long)puVar13 + 4);
  }
  if ((uVar8 & 2) != 0) {
    *(uint16_t *)puVar13 = 0;
    puVar13 = (uint64_t *)((long)puVar13 + 2);
  }
  if (bVar1) {
    *(uint8_t *)puVar13 = 0;
  }
  uVar10 = *(uint *)(arg1 + 0x58);
  bVar1 = false;
LAB_0052c640:
  if (!bVar1) {
    while( true ) {
      if (uVar10 == 0) goto LAB_0052c6ad;
      bVar1 = true;
      if (uVar10 < 3) goto LAB_0052c640;
      __s1 = *(char **)(arg1 + 0x50);
      iVar4 = strncasecmp(__s1,"_x2",3);
      if (iVar4 != 0) break;
      uVar10 = uVar10 - 3;
      *(char **)(arg1 + 0x50) = __s1 + 3;
      *(uint *)(arg1 + 0x58) = uVar10;
      if (*(int *)(arg1 + 0xd4) != 0) {
        failf(arg1,"%s","Multiple result shift modifiers");
        uVar10 = *(uint *)(arg1 + 0x58);
      }
      bVar1 = false;
      *(uint32_t *)(arg1 + 0xd4) = 1;
    }
    iVar4 = strncasecmp(__s1,"_x4",3);
    if (iVar4 == 0) {
      uVar10 = uVar10 - 3;
      *(char **)(arg1 + 0x50) = __s1 + 3;
      *(uint *)(arg1 + 0x58) = uVar10;
      if (*(int *)(arg1 + 0xd4) != 0) {
        failf(arg1,"%s","Multiple result shift modifiers");
        uVar10 = *(uint *)(arg1 + 0x58);
      }
      *(uint32_t *)(arg1 + 0xd4) = 2;
      bVar1 = false;
    }
    else {
      iVar4 = strncasecmp(__s1,"_x8",3);
      if (iVar4 == 0) {
        uVar10 = uVar10 - 3;
        *(char **)(arg1 + 0x50) = __s1 + 3;
        *(uint *)(arg1 + 0x58) = uVar10;
        if (*(int *)(arg1 + 0xd4) != 0) {
          failf(arg1,"%s","Multiple result shift modifiers");
          uVar10 = *(uint *)(arg1 + 0x58);
        }
        *(uint32_t *)(arg1 + 0xd4) = 3;
        bVar1 = false;
      }
      else {
        iVar4 = strncasecmp(__s1,"_d8",3);
        if (iVar4 == 0) {
          uVar10 = uVar10 - 3;
          *(char **)(arg1 + 0x50) = __s1 + 3;
          *(uint *)(arg1 + 0x58) = uVar10;
          if (*(int *)(arg1 + 0xd4) != 0) {
            failf(arg1,"%s","Multiple result shift modifiers");
            uVar10 = *(uint *)(arg1 + 0x58);
          }
          *(uint32_t *)(arg1 + 0xd4) = 0xd;
          bVar1 = false;
        }
        else {
          iVar4 = strncasecmp(__s1,"_d4",3);
          if (iVar4 == 0) {
            uVar10 = uVar10 - 3;
            *(char **)(arg1 + 0x50) = __s1 + 3;
            *(uint *)(arg1 + 0x58) = uVar10;
            if (*(int *)(arg1 + 0xd4) == 0) {
              *(uint32_t *)(arg1 + 0xd4) = 0xe;
              bVar1 = false;
            }
            else {
              failf(arg1,"%s","Multiple result shift modifiers");
              uVar10 = *(uint *)(arg1 + 0x58);
              *(uint32_t *)(arg1 + 0xd4) = 0xe;
              bVar1 = false;
            }
          }
          else {
            iVar4 = strncasecmp(__s1,"_d2",3);
            if (iVar4 == 0) {
              uVar10 = uVar10 - 3;
              *(char **)(arg1 + 0x50) = __s1 + 3;
              *(uint *)(arg1 + 0x58) = uVar10;
              if (*(int *)(arg1 + 0xd4) != 0) {
                failf(arg1,"%s","Multiple result shift modifiers");
                uVar10 = *(uint *)(arg1 + 0x58);
              }
              *(uint32_t *)(arg1 + 0xd4) = 0xf;
              bVar1 = false;
            }
            else if ((uVar10 < 4) || (iVar4 = strncasecmp(__s1,"_sat",4), iVar4 != 0)) {
              iVar4 = strncasecmp(__s1,"_pp",3);
              if (iVar4 == 0) {
                uVar10 = uVar10 - 3;
                *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) | 2;
                *(char **)(arg1 + 0x50) = __s1 + 3;
                *(uint *)(arg1 + 0x58) = uVar10;
                bVar1 = false;
              }
              else if (uVar10 < 9) {
                bVar1 = true;
              }
              else {
                iVar4 = strncasecmp(__s1,"_centroid",9);
                bVar1 = true;
                if (iVar4 == 0) {
                  uVar10 = uVar10 - 9;
                  *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) | 4;
                  *(char **)(arg1 + 0x50) = __s1 + 9;
                  *(uint *)(arg1 + 0x58) = uVar10;
                  bVar1 = false;
                }
              }
            }
            else {
              uVar10 = uVar10 - 4;
              *(uint *)(arg1 + 0xd0) = *(uint *)(arg1 + 0xd0) | 1;
              *(char **)(arg1 + 0x50) = __s1 + 4;
              *(uint *)(arg1 + 0x58) = uVar10;
              bVar1 = false;
            }
          }
        }
      }
    }
    goto LAB_0052c640;
  }
LAB_0052c6ad:
  if (bVar1) {
    failf(arg1,"%s","Invalid destination modifier");
    iVar4 = nexttoken(arg1);
  }
  else {
    iVar4 = nexttoken(arg1);
  }
  if (iVar4 == 0x28) {
    failf(arg1,"%s","Predicates unsupported at this time");
  }
  *(uint32_t *)(arg1 + 0x48) = 1;
  iVar4 = nexttoken(arg1);
  if (iVar4 == 0x101) {
    parse_register_name_part_13(arg1,arg1 + 0xd8,arg1 + 0xb0);
  }
  else {
    failf(arg1,"%s","Expected register");
  }
  if (*(int *)(arg1 + 0x58) == 0) {
    iVar4 = nexttoken(arg1);
    if (iVar4 != 0x2e) goto LAB_0052c710;
LAB_0052c9ad:
    iVar4 = *(int *)(arg1 + 0xb0);
    switch(*(int *)(arg1 + 0xd8)) {
    case 9:
    case 0xe:
    case 0xf:
      if (*(int *)(arg1 + 0xd8) == 9) goto switchD_0052caa0_caseD_a;
      goto LAB_0052cb5b;
    default:
      goto switchD_0052caa0_caseD_a;
    case 0x11:
      break;
    case 0x13:
      iVar4 = *(int *)(arg1 + 0x40);
    }
    if (iVar4 == 1) {
LAB_0052cb5b:
      pcVar9 = "Writemask specified for scalar register";
    }
    else {
switchD_0052caa0_caseD_a:
      uVar5 = nexttoken(arg1);
      if ((int)uVar5 == 0x101) {
        uVar10 = (uint)CONCAT62((int6)((ulong)uVar5 >> 0x10),4);
        if (*(uint *)(arg1 + 0x58) < 5) {
          uVar10 = *(uint *)(arg1 + 0x58);
        }
        local_28 = '\0';
        local_27[0] = '\0';
        local_27[1] = 0;
        local_27[2] = 0;
        local_27[3] = 0;
        memcpy(&local_28,*(void **)(arg1 + 0x50),(ulong)uVar10);
        if ((local_28 == 'x') || (local_28 == 'r')) {
          *(uint32_t *)(arg1 + 0xbc) = 1;
          uVar10 = 1;
          pcVar9 = local_27;
          cVar3 = local_27[0];
        }
        else {
          uVar10 = *(uint *)(arg1 + 0xbc) & 1;
          cVar3 = local_28;
        }
        if ((cVar3 == 'y') || (cVar3 == 'g')) {
          cVar3 = pcVar9[1];
          *(uint32_t *)(arg1 + 0xc0) = 1;
          pcVar9 = pcVar9 + 1;
          uVar12 = 2;
        }
        else {
          uVar12 = (*(uint *)(arg1 + 0xc0) & 1) * 2;
        }
        if ((cVar3 == 'z') || (cVar3 == 'b')) {
          cVar3 = pcVar9[1];
          *(uint32_t *)(arg1 + 0xc4) = 1;
          pcVar9 = pcVar9 + 1;
          uVar11 = 4;
        }
        else {
          uVar11 = (*(uint *)(arg1 + 0xc4) & 1) << 2;
        }
        if ((cVar3 == 'w') || (cVar3 == 'a')) {
          cVar3 = pcVar9[1];
          *(uint32_t *)(arg1 + 200) = 1;
          uVar6 = 8;
        }
        else {
          uVar6 = (*(uint *)(arg1 + 200) & 1) << 3;
        }
        *(uint *)(arg1 + 0xb8) = uVar10 | uVar12 | uVar11 | uVar6;
        if (cVar3 == '\0') {
          bVar1 = false;
          goto LAB_0052c74e;
        }
      }
      pcVar9 = "Invalid writemask";
    }
    failf(arg1,"%s",pcVar9);
    bVar1 = false;
    iVar4 = *(int *)(arg1 + 0xd8);
  }
  else {
    failf(arg1,"%s","invalid register name");
    iVar4 = nexttoken(arg1);
    if (iVar4 == 0x2e) goto LAB_0052c9ad;
LAB_0052c710:
    *(uint32_t *)(arg1 + 0xb8) = 0xf;
    *(uint32_t *)(arg1 + 200) = 1;
    bVar1 = true;
    *(uint32_t *)(arg1 + 0xc4) = 1;
    *(uint32_t *)(arg1 + 0xc0) = 1;
    *(uint32_t *)(arg1 + 0xbc) = 1;
    *(uint32_t *)(arg1 + 0x48) = 1;
LAB_0052c74e:
    iVar4 = *(int *)(arg1 + 0xd8);
  }
  if (((iVar4 == 9) && (!bVar1)) &&
     (1 < *(int *)(arg1 + 0xbc) + *(int *)(arg1 + 0xc0) + *(int *)(arg1 + 0xc4) +
          *(int *)(arg1 + 200))) {
    failf(arg1,"%s","Writemask specified for scalar register");
  }
  iVar4 = *(int *)(arg1 + 0xa4);
  *(uint *)(arg1 + 0xcc) = *(uint *)(arg1 + 0xb8);
  if (iVar4 < 0x10) {
    *(uint *)(arg1 + 100 + (long)iVar4 * 4) =
         *(uint *)(arg1 + 0xb0) & 0x7ff | (*(uint *)(arg1 + 0xd8) & 7) << 0x1c | 0x80000000 |
         (*(uint *)(arg1 + 0xd8) & 0x18) << 8 | (*(uint *)(arg1 + 0xb4) & 1) << 0xd |
         (*(uint *)(arg1 + 0xd0) & 0xf) << 0x14 | (*(uint *)(arg1 + 0xd4) & 0xf) << 0x18 |
         (*(uint *)(arg1 + 0xb8) & 0xf) << 0x10;
    *(int *)(arg1 + 0xa4) = iVar4 + 1;
    return 1;
  }
  failf(arg1,"%s","Too many tokens");
  return 1;
}

/* ======================================================================
 * parse_args_D__0052cd70  (Ghidra `parse_args_D` @ 0052cd70)
 * Signature: uint8_t parse_args_D(void)
 * Calls: `parse_args_D`, `parse_destination_token`
 * Called by: (none)
 */
int parse_args_D(void)

{
  int iVar1;
  
  iVar1 = parse_destination_token();
  return iVar1 + 1;
}

/* ======================================================================
 * parse_args_DCL__0052cd90  (Ghidra `parse_args_DCL` @ 0052cd90)
 * Signature: uint8_t parse_args_DCL(void)
 * Calls: `failf`, `parse_args_DCL`, `parse_destination_token`, `strncasecmp`
 * Called by: (none)
 */
uint64_t parse_args_DCL(long arg1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  bool bVar13;
  
  uVar7 = *(uint *)(arg1 + 0x58);
  *(int *)(arg1 + 0xa4) = *(int *)(arg1 + 0xa4) + 1;
  *(uint32_t *)(arg1 + 100) = 0;
  if (uVar7 < 9) {
LAB_0052ce40:
    if (0xb < uVar7) {
      pcVar4 = *(char **)(arg1 + 0x50);
      uVar12 = 1;
      iVar3 = strncasecmp(pcVar4,"_blendweight",0xc);
      lVar6 = 0xc;
      if (iVar3 == 0) goto LAB_0052cddb;
    }
    if (0xc < uVar7) {
      pcVar4 = *(char **)(arg1 + 0x50);
      uVar12 = 2;
      iVar3 = strncasecmp(pcVar4,"_blendindices",0xd);
      lVar6 = 0xd;
      if (iVar3 == 0) goto LAB_0052cddb;
    }
    if (6 < uVar7) {
      pcVar4 = *(char **)(arg1 + 0x50);
      uVar12 = 3;
      iVar3 = strncasecmp(pcVar4,"_normal",7);
      lVar6 = 7;
      if (iVar3 == 0) goto LAB_0052cddb;
    }
    if (5 < uVar7) {
      pcVar4 = *(char **)(arg1 + 0x50);
      uVar12 = 4;
      iVar3 = strncasecmp(pcVar4,"_psize",6);
      lVar6 = 6;
      if (iVar3 == 0) goto LAB_0052cddb;
    }
    if (8 < uVar7) {
      pcVar4 = *(char **)(arg1 + 0x50);
      uVar12 = 5;
      iVar3 = strncasecmp(pcVar4,"_texcoord",9);
      lVar6 = 9;
      if (iVar3 == 0) goto LAB_0052cddb;
    }
    if (7 < uVar7) {
      pcVar4 = *(char **)(arg1 + 0x50);
      iVar3 = strncasecmp(pcVar4,"_tangent",8);
      if (iVar3 == 0) {
        lVar6 = 8;
        uVar12 = 6;
        goto LAB_0052cddb;
      }
    }
    if (8 < uVar7) {
      pcVar4 = *(char **)(arg1 + 0x50);
      iVar3 = strncasecmp(pcVar4,"_binormal",9);
      if (iVar3 == 0) {
        lVar6 = 9;
        uVar12 = 7;
        goto LAB_0052cddb;
      }
    }
    if (10 < uVar7) {
      pcVar4 = *(char **)(arg1 + 0x50);
      iVar3 = strncasecmp(pcVar4,"_tessfactor",0xb);
      if (iVar3 == 0) {
        lVar6 = 0xb;
        uVar12 = 8;
        goto LAB_0052cddb;
      }
    }
    if (9 < uVar7) {
      pcVar4 = *(char **)(arg1 + 0x50);
      iVar3 = strncasecmp(pcVar4,"_positiont",10);
      if (iVar3 == 0) {
        lVar6 = 10;
        uVar12 = 9;
        goto LAB_0052cddb;
      }
    }
    if (5 < uVar7) {
      pcVar4 = *(char **)(arg1 + 0x50);
      iVar3 = strncasecmp(pcVar4,"_color",6);
      if (iVar3 == 0) {
        lVar6 = 6;
        uVar12 = 10;
        goto LAB_0052cddb;
      }
    }
    if (3 < uVar7) {
      pcVar4 = *(char **)(arg1 + 0x50);
      iVar3 = strncasecmp(pcVar4,"_fog",4);
      if (iVar3 == 0) {
        lVar6 = 4;
        uVar12 = 0xb;
        goto LAB_0052cddb;
      }
    }
    if (5 < uVar7) {
      pcVar4 = *(char **)(arg1 + 0x50);
      iVar3 = strncasecmp(pcVar4,"_depth",6);
      if (iVar3 == 0) {
        lVar6 = 6;
        uVar12 = 0xc;
        goto LAB_0052cddb;
      }
    }
    if (6 < uVar7) {
      pcVar4 = *(char **)(arg1 + 0x50);
      iVar3 = strncasecmp(pcVar4,"_sample",7);
      if (iVar3 == 0) {
        lVar6 = 7;
        uVar12 = 0xd;
        goto LAB_0052cddb;
      }
    }
    if (uVar7 < 3) {
LAB_0052d1f0:
      if (4 < uVar7) {
        pcVar4 = *(char **)(arg1 + 0x50);
        iVar8 = 1;
        iVar3 = strncasecmp(pcVar4,"_cube",5);
        lVar6 = 5;
        if (iVar3 == 0) goto LAB_0052d1d0;
      }
      if (6 < uVar7) {
        pcVar4 = *(char **)(arg1 + 0x50);
        iVar3 = strncasecmp(pcVar4,"_volume",7);
        if (iVar3 == 0) {
          iVar8 = 2;
          lVar6 = 7;
          goto LAB_0052d1d0;
        }
      }
      bVar11 = false;
      uVar12 = 0;
      iVar3 = 0;
      goto LAB_0052cdf6;
    }
    pcVar4 = *(char **)(arg1 + 0x50);
    iVar8 = 0;
    iVar3 = strncasecmp(pcVar4,"_2d",3);
    lVar6 = 3;
    if (iVar3 != 0) goto LAB_0052d1f0;
LAB_0052d1d0:
    pcVar4 = pcVar4 + lVar6;
    uVar7 = uVar7 - (int)lVar6;
    uVar12 = iVar8 + 2;
    *(uint *)(arg1 + 0x58) = uVar7;
    bVar11 = true;
    *(char **)(arg1 + 0x50) = pcVar4;
  }
  else {
    pcVar4 = *(char **)(arg1 + 0x50);
    uVar12 = 0;
    iVar3 = strncasecmp(pcVar4,"_position",9);
    lVar6 = 9;
    if (iVar3 != 0) goto LAB_0052ce40;
LAB_0052cddb:
    pcVar4 = pcVar4 + lVar6;
    uVar7 = uVar7 - (int)lVar6;
    bVar11 = false;
    *(uint *)(arg1 + 0x58) = uVar7;
    *(char **)(arg1 + 0x50) = pcVar4;
  }
  iVar3 = 0;
  if ((uVar7 != 0) && (iVar3 = 0, *pcVar4 != '_')) {
    if ((byte)(*pcVar4 - 0x30U) < 10) {
      pcVar9 = pcVar4;
      uVar2 = 0;
      do {
        uVar5 = uVar2;
        uVar2 = uVar5 + 1;
        if (uVar2 == uVar7) goto LAB_0052cfca;
        pcVar1 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
      } while ((byte)(*pcVar1 - 0x30U) < 10);
      if (uVar2 != 0) {
LAB_0052cfca:
        iVar3 = 0;
        iVar8 = 1;
        do {
          iVar10 = (pcVar4[uVar5] + -0x30) * iVar8;
          iVar8 = iVar8 * 10;
          iVar3 = iVar3 + iVar10;
          bVar13 = uVar5 != 0;
          uVar5 = uVar5 - 1;
        } while (bVar13);
        *(uint *)(arg1 + 0x58) = uVar7 - uVar2;
        *(char **)(arg1 + 0x50) = pcVar4 + uVar2;
        goto LAB_0052cdf6;
      }
    }
    iVar3 = 0;
    failf(arg1,"%s","Expected usage index");
  }
LAB_0052cdf6:
  parse_destination_token(arg1);
  if ((*(int *)(arg1 + 0xd8) == 10) != bVar11) {
    failf(arg1,"%s","Invalid usage");
    return 3;
  }
  if (bVar11 != false) {
    *(uint *)(arg1 + 100) = uVar12 << 0x1b | 0x80000000;
    return 3;
  }
  *(uint *)(arg1 + 100) = uVar12 | 0x80000000 | iVar3 << 0x10;
  return 3;
}

/* ======================================================================
 * parse_args_DEFx  (Ghidra `parse_args_DEFx` @ 0052d260)
 * Signature: uint8_t parse_args_DEFx(void)
 * Calls: `failf`, `nexttoken`, `parse_destination_token`, `parse_num`
 * Called by: `parse_args_DEFI__0052d390`, `parse_args_DEF__0052d380`
 */
uint64_t parse_args_DEFx(long arg1,uint32_t arg2)

{
  int iVar1;
  
  parse_destination_token();
  iVar1 = nexttoken(arg1);
  if (iVar1 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar1 = *(int *)(arg1 + 0xa4);
  *(int *)(arg1 + 0xa4) = iVar1 + 1;
  parse_num(arg1,arg2,arg1 + 100 + (long)iVar1 * 4);
  iVar1 = nexttoken(arg1);
  if (iVar1 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar1 = *(int *)(arg1 + 0xa4);
  *(int *)(arg1 + 0xa4) = iVar1 + 1;
  parse_num(arg1,arg2,arg1 + 100 + (long)iVar1 * 4);
  iVar1 = nexttoken(arg1);
  if (iVar1 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar1 = *(int *)(arg1 + 0xa4);
  *(int *)(arg1 + 0xa4) = iVar1 + 1;
  parse_num(arg1,arg2,arg1 + 100 + (long)iVar1 * 4);
  iVar1 = nexttoken(arg1);
  if (iVar1 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar1 = *(int *)(arg1 + 0xa4);
  *(int *)(arg1 + 0xa4) = iVar1 + 1;
  parse_num(arg1,arg2,arg1 + 100 + (long)iVar1 * 4);
  return 6;
}

/* ======================================================================
 * parse_args_DEF__0052d380  (Ghidra `parse_args_DEF` @ 0052d380)
 * Signature: uint8_t parse_args_DEF(void)
 * Calls: `parse_args_DEF`, `parse_args_DEFx`
 * Called by: (none)
 */
void parse_args_DEF(uint64_t arg1)

{
  parse_args_DEFx(arg1,1);
  return;
}

/* ======================================================================
 * parse_args_DEFI__0052d390  (Ghidra `parse_args_DEFI` @ 0052d390)
 * Signature: uint8_t parse_args_DEFI(void)
 * Calls: `parse_args_DEFI`, `parse_args_DEFx`
 * Called by: (none)
 */
void parse_args_DEFI(uint64_t arg1)

{
  parse_args_DEFx(arg1,0);
  return;
}

/* ======================================================================
 * parse_args_DEFB__0052d3a0  (Ghidra `parse_args_DEFB` @ 0052d3a0)
 * Signature: uint8_t parse_args_DEFB(void)
 * Calls: `failf`, `nexttoken`, `parse_args_DEFB`, `parse_destination_token`, `strncasecmp`
 * Called by: (none)
 */
uint64_t parse_args_DEFB(long arg1)

{
  char *__s1;
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  parse_destination_token();
  iVar2 = nexttoken(arg1);
  if (iVar2 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar2 = nexttoken(arg1);
  uVar3 = *(uint *)(arg1 + 0x58);
  if ((iVar2 == 0x101) && (3 < uVar3)) {
    __s1 = *(char **)(arg1 + 0x50);
    iVar2 = strncasecmp(__s1,"true",4);
    if (iVar2 == 0) {
      iVar2 = *(int *)(arg1 + 0xa4);
      uVar3 = uVar3 - 4;
      *(char **)(arg1 + 0x50) = __s1 + 4;
      *(uint *)(arg1 + 0x58) = uVar3;
      *(uint32_t *)(arg1 + 100 + (long)iVar2 * 4) = 1;
      *(int *)(arg1 + 0xa4) = iVar2 + 1;
      bVar1 = false;
    }
    else {
      if (uVar3 < 5) goto LAB_0052d3ee;
      iVar2 = strncasecmp(__s1,"false",5);
      if (iVar2 != 0) goto LAB_0052d418;
      iVar2 = *(int *)(arg1 + 0xa4);
      uVar3 = uVar3 - 5;
      *(char **)(arg1 + 0x50) = __s1 + 5;
      *(uint *)(arg1 + 0x58) = uVar3;
      *(uint32_t *)(arg1 + 100 + (long)iVar2 * 4) = 0;
      *(int *)(arg1 + 0xa4) = iVar2 + 1;
      bVar1 = false;
    }
  }
  else {
LAB_0052d3ee:
    bVar1 = true;
  }
  if ((uVar3 == 0) && (!bVar1)) {
    return 3;
  }
LAB_0052d418:
  failf(arg1,"%s","Expected \'true\' or \'false\'");
  return 3;
}

/* ======================================================================
 * parse_source_token_maybe_relative  (Ghidra `parse_source_token_maybe_relative` @ 0052d4d0)
 * Signature: uint8_t parse_source_token_maybe_relative(void)
 * Calls: `failf`, `memcpy`, `nexttoken`, `parse_args_NULL`, `parse_destination_token`, `parse_register_name_part_13`, `strncasecmp`
 * Called by: `parse_args_DSSSS__0052de90`, `parse_args_DSSS__0052dfe0`, `parse_args_DSS__0052e090`, `parse_args_DS__0052de40`, `parse_args_SINCOS__0052e110`, `parse_args_SS__0052df70`, `parse_args_S__0052dfc0`, `parse_args_TEXCRD__0052e190`, `parse_args_TEXLD__0052e210`
 */
/* WARNING: Removing unreachable block (ram,0x0052dc2b) */
/* WARNING: Exceeded maximum restarts with more pending */

int parse_source_token_maybe_relative(long arg1,int arg2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint64_t uVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  int local_74;
  char *local_70;
  uint8_t local_68;
  uint8_t local_67;
  uint8_t local_66;
  uint8_t local_65;
  uint8_t local_64;
  uint local_58 [4];
  uint local_48 [6];
  
  iVar3 = *(int *)(arg1 + 0xa4);
  if (0xf < iVar3) {
    failf(arg1,"%s","Too many tokens");
    return 0;
  }
  *(int *)(arg1 + 0xa4) = iVar3 + 1;
  *(uint32_t *)(arg1 + 4 + ((long)iVar3 + 0x18) * 4) = 0;
  iVar4 = nexttoken();
  if (iVar4 == 0x21) {
    local_74 = 0xd;
    bVar14 = false;
    iVar4 = nexttoken(arg1);
    uVar11 = 0xd000000;
    if (iVar4 == 0x101) goto LAB_0052d684;
LAB_0052d569:
    failf(arg1,"%s","Expected register");
    uVar13 = *(uint *)(arg1 + 0x58);
    if (uVar13 == 0) goto LAB_0052d58a;
LAB_0052d6a3:
    if (4 < uVar13) {
      local_70 = *(char **)(arg1 + 0x50);
      iVar4 = strncasecmp(local_70,"_bias",5);
      if (iVar4 != 0) goto LAB_0052d8a0;
      *(uint *)(arg1 + 0x58) = uVar13 - 5;
      *(char **)(arg1 + 0x50) = local_70 + 5;
      if (local_74 == 0) {
        uVar11 = (-(uint)!bVar14 & 0xff000000) + 0x3000000;
        goto LAB_0052d593;
      }
      goto LAB_0052d810;
    }
    if (uVar13 < 4) {
      if (uVar13 < 3) {
LAB_0052dac8:
        failf(arg1,"%s","Invalid source modifier");
        goto LAB_0052d593;
      }
      local_70 = *(char **)(arg1 + 0x50);
LAB_0052da58:
      iVar4 = strncasecmp(local_70,"_x2",3);
      if (iVar4 != 0) {
        iVar4 = strncasecmp(local_70,"_dz",3);
        if (iVar4 == 0) {
          *(uint *)(arg1 + 0x58) = uVar13 - 3;
          *(char **)(arg1 + 0x50) = local_70 + 3;
          if ((local_74 != 0) || (bVar14)) goto LAB_0052d810;
          uVar11 = 0x9000000;
        }
        else {
          iVar4 = strncasecmp(local_70,"_dw",3);
          if (iVar4 == 0) {
            *(uint *)(arg1 + 0x58) = uVar13 - 3;
            *(char **)(arg1 + 0x50) = local_70 + 3;
            if ((local_74 != 0) || (bVar14)) goto LAB_0052d810;
            uVar11 = 0xa000000;
          }
          else {
            if ((uVar13 < 4) || (iVar4 = strncasecmp(local_70,"_abs",4), iVar4 != 0))
            goto LAB_0052dac8;
            *(uint *)(arg1 + 0x58) = uVar13 - 4;
            *(char **)(arg1 + 0x50) = local_70 + 4;
            if (local_74 != 0) goto LAB_0052d810;
            uVar11 = (0xc - (uint)!bVar14) * 0x1000000;
          }
        }
        goto LAB_0052d593;
      }
      *(uint *)(arg1 + 0x58) = uVar13 - 3;
      *(char **)(arg1 + 0x50) = local_70 + 3;
      if (local_74 == 0) {
        uVar11 = (-(uint)!bVar14 & 0xff000000) + 0x8000000;
        goto LAB_0052d593;
      }
      goto LAB_0052d810;
    }
    local_70 = *(char **)(arg1 + 0x50);
LAB_0052d8a0:
    iVar4 = strncasecmp(local_70,"_bx2",4);
    if (iVar4 != 0) goto LAB_0052da58;
    *(uint *)(arg1 + 0x58) = uVar13 - 4;
    *(char **)(arg1 + 0x50) = local_70 + 4;
    if (local_74 != 0) goto LAB_0052d810;
    uVar11 = (-(uint)!bVar14 & 0xff000000) + 0x5000000;
  }
  else {
    if (iVar4 == 0x2d) {
      uVar11 = 0;
      local_74 = 0;
      bVar14 = true;
    }
    else {
      if ((iVar4 == 0x102) && (*(int *)(arg1 + 0x58) == 1)) {
        pcVar2 = *(char **)(arg1 + 0x50);
        iVar4 = strncasecmp(pcVar2,"1",1);
        if (iVar4 == 0) {
          *(uint32_t *)(arg1 + 0x58) = 0;
          *(char **)(arg1 + 0x50) = pcVar2 + 1;
          iVar4 = nexttoken(arg1);
          if (iVar4 == 0x2d) {
            uVar11 = 0x6000000;
            local_74 = 6;
            bVar14 = false;
          }
          else {
            uVar11 = 0;
            bVar14 = false;
            failf(arg1,"%s","Unexpected token");
            local_74 = 0;
          }
          goto LAB_0052d556;
        }
      }
      *(uint32_t *)(arg1 + 0x48) = 1;
      uVar11 = 0;
      local_74 = 0;
      bVar14 = false;
    }
LAB_0052d556:
    iVar4 = nexttoken(arg1);
    if (iVar4 != 0x101) goto LAB_0052d569;
LAB_0052d684:
    parse_register_name_part_13(arg1,local_58,local_48);
    uVar13 = *(uint *)(arg1 + 0x58);
    if (uVar13 != 0) goto LAB_0052d6a3;
LAB_0052d58a:
    if (bVar14) {
      if (local_74 == 0) {
        uVar11 = 0x1000000;
      }
      else {
LAB_0052d810:
        failf(arg1,"%s","Incompatible source modifiers");
      }
    }
  }
LAB_0052d593:
  iVar4 = nexttoken(arg1);
  if (iVar4 == 0x5b) {
    iVar4 = 2;
    if (arg2 == 0) {
      iVar4 = 1;
      failf(arg1,"%s","Relative addressing not permitted here.");
    }
    parse_source_token_maybe_relative(arg1,0);
    iVar5 = nexttoken(arg1);
    if (iVar5 == 0x2b) {
      if (local_48[0] != 0) {
        failf(arg1,"%s","Relative addressing with explicit register number.");
      }
      iVar7 = nexttoken(arg1);
      iVar5 = 0;
      if (((iVar7 == 0x102) && (uVar13 = *(uint *)(arg1 + 0x58), uVar13 != 0)) &&
         (pcVar2 = *(char **)(arg1 + 0x50), iVar5 = 0, (byte)(*pcVar2 - 0x30U) < 10)) {
        pcVar9 = pcVar2;
        uVar12 = 0;
        do {
          uVar6 = uVar12;
          uVar12 = uVar6 + 1;
          if (uVar12 == uVar13) goto LAB_0052db3e;
          pcVar1 = pcVar9 + 1;
          pcVar9 = pcVar9 + 1;
        } while ((byte)(*pcVar1 - 0x30U) < 10);
        iVar5 = 0;
        if (uVar12 == 0) goto LAB_0052da2a;
LAB_0052db3e:
        iVar5 = 0;
        iVar7 = 1;
        do {
          iVar10 = (pcVar2[uVar6] + -0x30) * iVar7;
          iVar7 = iVar7 * 10;
          iVar5 = iVar5 + iVar10;
          bVar14 = uVar6 != 0;
          uVar6 = uVar6 - 1;
        } while (bVar14);
        *(uint *)(arg1 + 0x58) = uVar13 - uVar12;
        *(char **)(arg1 + 0x50) = pcVar2 + uVar12;
        if (uVar13 - uVar12 != 0) goto LAB_0052da2a;
      }
      else {
LAB_0052da2a:
        failf(arg1,"%s","Invalid relative addressing offset");
      }
      local_48[0] = local_48[0] + iVar5;
    }
    else {
      *(uint32_t *)(arg1 + 0x48) = 1;
    }
    uVar13 = 0x2000;
    iVar5 = nexttoken(arg1);
    if (iVar5 != 0x5d) {
      failf(arg1,"%s","Expected \']\'");
    }
  }
  else {
    *(uint32_t *)(arg1 + 0x48) = 1;
    uVar13 = 0;
    iVar4 = 1;
  }
  iVar5 = nexttoken(arg1);
  if (iVar5 != 0x2e) {
    *(uint32_t *)(arg1 + 0x48) = 1;
    uVar12 = 0xe40000;
    goto LAB_0052d5d2;
  }
  switch(local_58[0]) {
  case 9:
  case 0xe:
  case 0xf:
    goto switchD_0052d723_caseD_9;
  default:
    goto switchD_0052d723_caseD_a;
  case 0x11:
    uVar12 = local_48[0];
    break;
  case 0x13:
    uVar12 = *(uint *)(arg1 + 0x40);
  }
  if (uVar12 == 1) {
switchD_0052d723_caseD_9:
    uVar12 = 0;
    failf(arg1,"%s","Swizzle specified for scalar register");
  }
  else {
switchD_0052d723_caseD_a:
    uVar12 = 0;
    uVar8 = nexttoken(arg1);
    if ((int)uVar8 == 0x101) {
      uVar12 = *(uint *)(arg1 + 0x58);
      local_68 = 0;
      local_67 = 0;
      local_66 = 0;
      local_65 = 0;
      local_64 = 0;
      uVar6 = (uint)CONCAT62((int6)((ulong)uVar8 >> 0x10),4);
      if (uVar12 < 5) {
        uVar6 = uVar12;
      }
      memcpy(&local_68,*(void **)(arg1 + 0x50),(ulong)uVar6);
      if (uVar12 == 1) {
        local_67 = local_68;
        local_65 = local_68;
        local_66 = local_68;
      }
      else if (uVar12 == 2) {
        local_66 = local_67;
        local_65 = local_67;
      }
      else if (uVar12 == 3) {
        local_65 = local_66;
      }
      local_64 = 0;
      switch(local_68) {
      case 0xbad1abe1bad1abe1:
                    /* WARNING: Calculation of case label failed */
        iVar3 = parse_destination_token();
        return iVar3 + 1;
      }
      switch(local_67) {
      case 0xbad1abe1bad1abe1:
parse_args_NULL:
                    /* WARNING: Calculation of case label failed */
        return 1;
      default:
        switch(local_66) {
        default:
          switch(local_65) {
          case 0x61:
          case 0x77:
            iVar5 = 0xc0;
            break;
          case 0x62:
          case 0x7a:
            iVar5 = 0x80;
            break;
          default:
            iVar5 = 0;
            break;
          case 0x67:
          case 0x79:
            iVar5 = 0x40;
            break;
          case 0x72:
          case 0x78:
            iVar5 = 0;
          }
          uVar12 = iVar5 << 0x10;
          break;
        case 0xbad1abe1bad1abe1:
          goto parse_args_NULL;
        }
      }
    }
    failf(arg1,"%s","Invalid swizzle");
  }
LAB_0052d5d2:
  *(uint *)(arg1 + 4 + ((long)iVar3 + 0x18) * 4) =
       local_48[0] & 0x7ff | (local_58[0] & 7) << 0x1c | 0x80000000 | (local_58[0] & 0x18) << 8 |
       uVar11 | uVar13 | uVar12;
  return iVar4;
}

/* ======================================================================
 * parse_args_DS__0052de40  (Ghidra `parse_args_DS` @ 0052de40)
 * Signature: uint8_t parse_args_DS(void)
 * Calls: `failf`, `nexttoken`, `parse_args_DS`, `parse_destination_token`, `parse_source_token_maybe_relative`
 * Called by: (none)
 */
int parse_args_DS(uint64_t arg1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = parse_destination_token();
  iVar2 = nexttoken(arg1);
  if (iVar2 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar2 = parse_source_token_maybe_relative(arg1,1);
  return iVar2 + iVar1 + 1;
}

/* ======================================================================
 * parse_args_DSSSS__0052de90  (Ghidra `parse_args_DSSSS` @ 0052de90)
 * Signature: uint8_t parse_args_DSSSS(void)
 * Calls: `failf`, `nexttoken`, `parse_args_DSSSS`, `parse_destination_token`, `parse_source_token_maybe_relative`
 * Called by: (none)
 */
int parse_args_DSSSS(uint64_t arg1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = parse_destination_token();
  iVar2 = nexttoken(arg1);
  if (iVar2 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar2 = parse_source_token_maybe_relative(arg1,1);
  iVar3 = nexttoken(arg1);
  if (iVar3 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar3 = parse_source_token_maybe_relative(arg1,1);
  iVar4 = nexttoken(arg1);
  if (iVar4 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar4 = parse_source_token_maybe_relative(arg1,1);
  iVar5 = nexttoken(arg1);
  if (iVar5 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar5 = parse_source_token_maybe_relative(arg1,1);
  return iVar5 + iVar1 + 1 + iVar2 + iVar3 + iVar4;
}

/* ======================================================================
 * parse_args_SS__0052df70  (Ghidra `parse_args_SS` @ 0052df70)
 * Signature: uint8_t parse_args_SS(void)
 * Calls: `failf`, `nexttoken`, `parse_args_SS`, `parse_source_token_maybe_relative`
 * Called by: (none)
 */
int parse_args_SS(uint64_t arg1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = parse_source_token_maybe_relative(arg1,1);
  iVar2 = nexttoken(arg1);
  if (iVar2 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar2 = parse_source_token_maybe_relative(arg1,1);
  return iVar2 + iVar1 + 1;
}

/* ======================================================================
 * parse_args_S__0052dfc0  (Ghidra `parse_args_S` @ 0052dfc0)
 * Signature: uint8_t parse_args_S(void)
 * Calls: `parse_args_S`, `parse_source_token_maybe_relative`
 * Called by: (none)
 */
int parse_args_S(uint64_t arg1)

{
  int iVar1;
  
  iVar1 = parse_source_token_maybe_relative(arg1,1);
  return iVar1 + 1;
}

/* ======================================================================
 * parse_args_DSSS__0052dfe0  (Ghidra `parse_args_DSSS` @ 0052dfe0)
 * Signature: uint8_t parse_args_DSSS(void)
 * Calls: `failf`, `nexttoken`, `parse_args_DSSS`, `parse_destination_token`, `parse_source_token_maybe_relative`
 * Called by: (none)
 */
int parse_args_DSSS(uint64_t arg1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = parse_destination_token();
  iVar2 = nexttoken(arg1);
  if (iVar2 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar2 = parse_source_token_maybe_relative(arg1,1);
  iVar3 = nexttoken(arg1);
  if (iVar3 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar3 = parse_source_token_maybe_relative(arg1,1);
  iVar4 = nexttoken(arg1);
  if (iVar4 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar4 = parse_source_token_maybe_relative(arg1,1);
  return iVar4 + iVar1 + 1 + iVar2 + iVar3;
}

/* ======================================================================
 * parse_args_DSS__0052e090  (Ghidra `parse_args_DSS` @ 0052e090)
 * Signature: uint8_t parse_args_DSS(void)
 * Calls: `failf`, `nexttoken`, `parse_args_DSS`, `parse_destination_token`, `parse_source_token_maybe_relative`
 * Called by: (none)
 */
int parse_args_DSS(uint64_t arg1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = parse_destination_token();
  iVar2 = nexttoken(arg1);
  if (iVar2 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar2 = parse_source_token_maybe_relative(arg1,1);
  iVar3 = nexttoken(arg1);
  if (iVar3 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar3 = parse_source_token_maybe_relative(arg1,1);
  return iVar3 + iVar1 + 1 + iVar2;
}

/* ======================================================================
 * parse_args_SINCOS__0052e110  (Ghidra `parse_args_SINCOS` @ 0052e110)
 * Signature: uint8_t parse_args_SINCOS(void)
 * Calls: `failf`, `nexttoken`, `parse_args_DSSS`, `parse_args_SINCOS`, `parse_destination_token`, `parse_source_token_maybe_relative`
 * Called by: (none)
 */
ulong parse_args_SINCOS(long arg1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar1 = 0;
  if (*(byte *)(arg1 + 0x45) != 0xff) {
    uVar1 = (uint)*(byte *)(arg1 + 0x45);
  }
  if (0x2ffff < (uVar1 | (uint)*(byte *)(arg1 + 0x44) << 0x10)) {
    iVar2 = parse_destination_token();
    iVar3 = nexttoken(arg1);
    if (iVar3 != 0x2c) {
      failf(arg1,"%s","Comma expected");
    }
    iVar3 = parse_source_token_maybe_relative(arg1,1);
    return (ulong)(uint)(iVar3 + iVar2 + 1);
  }
  uVar4 = parse_args_DSSS();
  return uVar4;
}

/* ======================================================================
 * parse_args_TEXCRD__0052e190  (Ghidra `parse_args_TEXCRD` @ 0052e190)
 * Signature: uint8_t parse_args_TEXCRD(void)
 * Calls: `failf`, `nexttoken`, `parse_args_TEXCRD`, `parse_destination_token`, `parse_source_token_maybe_relative`
 * Called by: (none)
 */
int parse_args_TEXCRD(long arg1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if (*(byte *)(arg1 + 0x45) != 0xff) {
    uVar1 = (uint)*(byte *)(arg1 + 0x45);
  }
  if ((uVar1 | (uint)*(byte *)(arg1 + 0x44) << 0x10) < 0x10004) {
    iVar2 = parse_destination_token();
    return iVar2 + 1;
  }
  iVar2 = parse_destination_token();
  iVar3 = nexttoken(arg1);
  if (iVar3 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar3 = parse_source_token_maybe_relative(arg1,1);
  return iVar3 + iVar2 + 1;
}

/* ======================================================================
 * parse_args_TEXLD__0052e210  (Ghidra `parse_args_TEXLD` @ 0052e210)
 * Signature: uint8_t parse_args_TEXLD(void)
 * Calls: `failf`, `nexttoken`, `parse_args_TEXLD`, `parse_destination_token`, `parse_source_token_maybe_relative`
 * Called by: (none)
 */
int parse_args_TEXLD(long arg1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(arg1 + 0x45);
  uVar2 = (uint)*(byte *)(arg1 + 0x44) << 0x10;
  uVar5 = 0;
  uVar6 = uVar5;
  if (bVar1 != 0xff) {
    uVar6 = (uint)bVar1;
  }
  if ((uVar6 | uVar2) < 0x20000) {
    if (bVar1 != 0xff) {
      uVar5 = (uint)bVar1;
    }
    if ((uVar5 | uVar2) < 0x10004) {
      iVar3 = parse_destination_token(arg1);
      return iVar3 + 1;
    }
    iVar4 = parse_destination_token(arg1);
    iVar4 = iVar4 + 1;
    iVar3 = nexttoken(arg1);
  }
  else {
    iVar3 = parse_destination_token(arg1);
    iVar4 = nexttoken(arg1);
    if (iVar4 != 0x2c) {
      failf(arg1,"%s","Comma expected");
    }
    iVar4 = parse_source_token_maybe_relative(arg1,1);
    iVar4 = iVar3 + 1 + iVar4;
    iVar3 = nexttoken(arg1);
  }
  if (iVar3 != 0x2c) {
    failf(arg1,"%s","Comma expected");
  }
  iVar3 = parse_source_token_maybe_relative(arg1,1);
  return iVar3 + iVar4;
}

/* ======================================================================
 * parse_instruction_token  (Ghidra `parse_instruction_token` @ 0052e2f0)
 * Signature: uint8_t parse_instruction_token(void)
 * Calls: `buffer_append`, `failf`, `memcpy`, `nexttoken`, `preprocessor_sourcepos`, `strlen`, `strncasecmp`
 * Called by: `MOJOSHADER_assemble`
 */
uint64_t parse_instruction_token(int *arg1,int arg2)

{
  char *__s1;
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  size_t __n;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  uint64_t local_68;
  ulong local_60;
  uint local_48 [3];
  uint local_3c [3];
  
  bVar10 = arg2 == 0x2b;
  if (bVar10) {
    arg2 = nexttoken();
  }
  if (arg2 != 0x101) {
    failf(arg1,"%s","Expected instruction");
    return 0;
  }
  uVar6 = arg1[0x16];
  __s1 = *(char **)(arg1 + 0x14);
  if (uVar6 < 6) {
LAB_0052e450:
    uVar7 = 0;
    do {
      pcVar1 = (&instructions)[uVar7 * 2];
      if (pcVar1 != (char *)0x0) {
        __n = strlen(pcVar1);
        uVar5 = arg1[0x16];
        if (__n <= uVar5) {
          pcVar2 = *(char **)(arg1 + 0x14);
          iVar3 = strncasecmp(pcVar2,pcVar1,__n);
          if (iVar3 == 0) {
            uVar5 = uVar5 - (int)__n;
            pcVar2 = pcVar2 + __n;
            arg1[0x16] = uVar5;
            *(char **)(arg1 + 0x14) = pcVar2;
            if (uVar5 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar5;
              if (*pcVar2 != '_') {
                *(char **)(arg1 + 0x14) = __s1;
                arg1[0x16] = uVar6;
                goto LAB_0052e460;
              }
            }
            iVar3 = (int)uVar7;
            if (iVar3 == 0x28) {
              iVar3 = 0;
              if ((uVar5 < 3) || (uVar9 < 3)) goto LAB_0052e3b4;
              iVar4 = strncasecmp(pcVar2,"_gt",3);
              iVar3 = 0;
              if (iVar4 != 0) {
                iVar4 = strncasecmp(pcVar2,"_eq",3);
                iVar3 = 1;
                if (iVar4 != 0) {
                  iVar4 = strncasecmp(pcVar2,"_ge",3);
                  iVar3 = 2;
                  if (iVar4 != 0) {
                    iVar4 = strncasecmp(pcVar2,"_lt",3);
                    iVar3 = 3;
                    if (iVar4 != 0) {
                      iVar4 = strncasecmp(pcVar2,"_ne",3);
                      iVar3 = 4;
                      if (iVar4 != 0) {
                        iVar4 = strncasecmp(pcVar2,"_le",3);
                        iVar3 = 0;
                        if (iVar4 != 0) goto LAB_0052e3b4;
                        iVar3 = 5;
                      }
                    }
                  }
                }
              }
              uVar9 = uVar9 - 3;
              iVar3 = iVar3 + 1;
              *(char **)(arg1 + 0x14) = pcVar2 + 3;
              arg1[0x16] = uVar9;
              uVar7 = 0x29;
              goto LAB_0052e3b4;
            }
            if (iVar3 == 0x2c) {
              iVar3 = 0;
              if (uVar9 < 3) goto LAB_0052e3b4;
              iVar4 = strncasecmp(pcVar2,"_gt",3);
              iVar3 = 0;
              if (iVar4 != 0) {
                iVar4 = strncasecmp(pcVar2,"_eq",3);
                iVar3 = 1;
                if (iVar4 != 0) {
                  iVar4 = strncasecmp(pcVar2,"_ge",3);
                  iVar3 = 2;
                  if (iVar4 != 0) {
                    iVar4 = strncasecmp(pcVar2,"_lt",3);
                    iVar3 = 3;
                    if (iVar4 != 0) {
                      iVar4 = strncasecmp(pcVar2,"_ne",3);
                      iVar3 = 4;
                      if (iVar4 != 0) {
                        iVar4 = strncasecmp(pcVar2,"_le",3);
                        iVar3 = 0;
                        if (iVar4 != 0) goto LAB_0052e3b4;
                        iVar3 = 5;
                      }
                    }
                  }
                }
              }
              uVar9 = uVar9 - 3;
              iVar3 = iVar3 + 1;
              *(char **)(arg1 + 0x14) = pcVar2 + 3;
              arg1[0x16] = uVar9;
              uVar7 = 0x2d;
              goto LAB_0052e3b4;
            }
            if (iVar3 == 0x5e) {
              uVar9 = arg1[0x16];
              if (uVar9 < 3) {
LAB_0052e75c:
                failf(arg1,"%s","SETP requires a condition");
                uVar9 = arg1[0x16];
                iVar3 = 0;
              }
              else {
                pcVar1 = *(char **)(arg1 + 0x14);
                iVar4 = strncasecmp(pcVar1,"_gt",3);
                iVar3 = 0;
                if (iVar4 != 0) {
                  iVar4 = strncasecmp(pcVar1,"_eq",3);
                  iVar3 = 1;
                  if (iVar4 != 0) {
                    iVar4 = strncasecmp(pcVar1,"_ge",3);
                    iVar3 = 2;
                    if (iVar4 != 0) {
                      iVar4 = strncasecmp(pcVar1,"_lt",3);
                      iVar3 = 3;
                      if (iVar4 != 0) {
                        iVar4 = strncasecmp(pcVar1,"_ne",3);
                        iVar3 = 4;
                        if (iVar4 != 0) {
                          iVar3 = strncasecmp(pcVar1,"_le",3);
                          if (iVar3 != 0) goto LAB_0052e75c;
                          iVar3 = 5;
                        }
                      }
                    }
                  }
                }
                iVar3 = iVar3 + 1;
                *(char **)(arg1 + 0x14) = pcVar1 + 3;
                uVar9 = uVar9 - 3;
                arg1[0x16] = uVar9;
              }
              goto LAB_0052e3b4;
            }
            if (iVar3 != 0x61) {
              uVar9 = arg1[0x16];
              iVar3 = 0;
              goto LAB_0052e3b4;
            }
            break;
          }
        }
      }
LAB_0052e460:
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x61);
  }
  else {
    iVar3 = strncasecmp(__s1,"TEXLDP",6);
    if (iVar3 == 0) {
      uVar9 = uVar6 - 6;
      iVar3 = 1;
      uVar7 = 0x42;
      *(char **)(arg1 + 0x14) = __s1 + 6;
      arg1[0x16] = uVar9;
    }
    else {
      iVar3 = strncasecmp(__s1,"TEXLDB",6);
      if (iVar3 != 0) goto LAB_0052e450;
      uVar9 = uVar6 - 6;
      iVar3 = 2;
      uVar7 = 0x42;
      *(char **)(arg1 + 0x14) = __s1 + 6;
      arg1[0x16] = uVar9;
    }
LAB_0052e3b4:
    if ((uVar9 == 0) || (**(char **)(arg1 + 0x14) == '_')) {
      arg1[0x29] = 0;
      iVar4 = (*(code *)(&PTR_parse_args_NULL_005d01a8)[(uVar7 & 0xffffffff) * 2])(arg1);
      uVar6 = 0;
      if (*(byte *)((long)arg1 + 0x45) != 0xff) {
        uVar6 = (uint)*(byte *)((long)arg1 + 0x45);
      }
      uVar5 = 0;
      if (0x1ffff < (uVar6 | (uint)*(byte *)(arg1 + 0x11) << 0x10)) {
        uVar5 = (iVar4 - 1U & 0xf) << 0x18;
      }
      local_48[0] = iVar3 << 0x10 | (uint)uVar7 | uVar5 | -(uint)bVar10 & 0x40000000;
      if (*arg1 == 0) {
        buffer_append(*(uint64_t *)(arg1 + 0x38),local_48,4);
        local_3c[0] = 0;
        local_68 = preprocessor_sourcepos(*(uint64_t *)(arg1 + 0xe),local_3c);
        local_60 = (ulong)local_3c[0];
        buffer_append(*(uint64_t *)(arg1 + 0x3a),&local_68,0x10);
      }
      if ((int)(iVar4 - 1U) < 1) {
        return 1;
      }
      piVar8 = arg1;
      do {
        local_48[0] = piVar8[0x19];
        if (*arg1 == 0) {
          buffer_append(*(uint64_t *)(arg1 + 0x38),local_48,4);
          local_3c[0] = 0;
          local_68 = preprocessor_sourcepos(*(uint64_t *)(arg1 + 0xe),local_3c);
          local_60 = (ulong)local_3c[0];
          buffer_append(*(uint64_t *)(arg1 + 0x3a),&local_68,0x10);
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != arg1 + (ulong)(iVar4 - 2) + 1);
      return 1;
    }
  }
  uVar5 = 0x1f;
  if ((int)uVar6 < 0x20) {
    uVar5 = uVar6;
  }
  memcpy(&local_68,__s1,(long)(int)uVar5);
  *(uint8_t *)((long)&local_68 + (long)(int)uVar5) = 0;
  failf(arg1,"Unknown instruction \'%s\'",&local_68);
  return 0;
}

/* ======================================================================
 * MOJOSHADER_assemble  (Ghidra `MOJOSHADER_assemble` @ 0052e9d0)
 * Signature: uint8_t MOJOSHADER_assemble(void)
 * Calls: `FreeBridge`, `MOJOSHADER_freeParseData`, `MOJOSHADER_internal_include_close`, `MOJOSHADER_internal_include_open`, `MOJOSHADER_parse`, `MallocBridge`, `add_ctab_members_isra_11`, `buffer_append`, `buffer_create`, `buffer_destroy` (+17 more)
 * Called by: (none)
 */
int * MOJOSHADER_assemble(uint64_t arg1,uint64_t arg2,uint32_t arg3,long arg4,
                         uint arg5,long arg6,int arg7,uint64_t arg8,uint32_t arg9
                         ,code *arg10,code *arg11,code *arg12,long arg13,
                         uint64_t arg14)

{
  char *pcVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  uint32_t uVar5;
  uint uVar6;
  code *pcVar7;
  code *pcVar8;
  int *piVar9;
  long lVar10;
  uint64_t *puVar11;
  size_t sVar12;
  uint32_t *puVar13;
  int *piVar14;
  char *pcVar15;
  uint8_t uVar16;
  ulong uVar17;
  uint8_t *puVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  uint64_t uVar22;
  uint uVar23;
  char *pcVar24;
  int iVar25;
  uint uVar26;
  int *piVar27;
  int iVar28;
  uint8_t uVar29;
  char *pcVar30;
  uint32_t *puVar31;
  bool bVar32;
  bool bVar33;
  byte bVar34;
  uint64_t in_stack_ffffffffffffff08;
  uint64_t in_stack_ffffffffffffff10;
  uint32_t uVar35;
  long local_90;
  uint64_t local_58;
  uint64_t local_50;
  uint local_40;
  uint local_3c [3];
  
  uVar5 = (uint32_t)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  uVar35 = (uint32_t)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  bVar34 = 0;
  if ((arg13 != 0) && (arg12 == (code *)0x0)) {
    return (int *)MOJOSHADER_out_of_mem_data;
  }
  if ((arg13 == 0) && (arg12 != (code *)0x0)) {
    return (int *)MOJOSHADER_out_of_mem_data;
  }
  pcVar7 = MOJOSHADER_internal_include_open;
  if (arg10 != (code *)0x0) {
    pcVar7 = arg10;
  }
  pcVar8 = MOJOSHADER_internal_include_close;
  if (arg11 != (code *)0x0) {
    pcVar8 = arg11;
  }
  piVar9 = (int *)(*arg12)(0xf8,arg14);
  if (piVar9 == (int *)0x0) {
    return (int *)MOJOSHADER_out_of_mem_data;
  }
  bVar32 = ((ulong)piVar9 & 1) != 0;
  uVar21 = 0xf8;
  piVar14 = piVar9;
  if (bVar32) {
    *(uint8_t *)piVar9 = 0;
    piVar14 = (int *)((long)piVar9 + 1);
    uVar21 = 0xf7;
  }
  if (((ulong)piVar14 & 2) != 0) {
    *(uint16_t *)piVar14 = 0;
    uVar21 = (ulong)((int)uVar21 - 2);
    piVar14 = (int *)((long)piVar14 + 2);
  }
  if (((ulong)piVar14 & 4) != 0) {
    *piVar14 = 0;
    uVar21 = (ulong)((int)uVar21 - 4);
    piVar14 = piVar14 + 1;
  }
  for (uVar17 = uVar21 >> 3; uVar17 != 0; uVar17 = uVar17 - 1) {
    piVar14[0] = 0;
    piVar14[1] = 0;
    piVar14 = piVar14 + (ulong)bVar34 * -4 + 2;
  }
  if ((uVar21 & 4) != 0) {
    *piVar14 = 0;
    piVar14 = piVar14 + 1;
  }
  if ((uVar21 & 2) != 0) {
    *(uint16_t *)piVar14 = 0;
    piVar14 = (int *)((long)piVar14 + 2);
  }
  if (bVar32) {
    *(uint8_t *)piVar14 = 0;
  }
  *(code **)(piVar9 + 2) = arg12;
  *(long *)(piVar9 + 4) = arg13;
  piVar9[10] = -2;
  *(uint64_t *)(piVar9 + 6) = arg14;
  lVar10 = buffer_create(0x400,MallocBridge,FreeBridge,piVar9);
  *(long *)(piVar9 + 0x38) = lVar10;
  if (lVar10 != 0) {
    lVar10 = buffer_create(0x1000,MallocBridge,FreeBridge,piVar9);
    *(long *)(piVar9 + 0x3a) = lVar10;
    if (lVar10 != 0) {
      lVar10 = errorlist_create(MallocBridge,FreeBridge,piVar9);
      *(long *)(piVar9 + 0xc) = lVar10;
      if (lVar10 != 0) {
        lVar10 = preprocessor_start(arg1,arg2,arg3,pcVar7,pcVar8,arg8,
                                    CONCAT44(uVar5,arg9),CONCAT44(uVar35,1),MallocBridge,
                                    FreeBridge,piVar9);
        *(long *)(piVar9 + 0xe) = lVar10;
        if (lVar10 == 0) {
          uVar22 = 0;
          goto LAB_0052f580;
        }
        iVar3 = nexttoken(piVar9);
        uVar20 = piVar9[0x16];
        if ((iVar3 == 0x101) && (1 < uVar20)) {
          pcVar24 = *(char **)(piVar9 + 0x14);
          iVar3 = strncasecmp(pcVar24,"vs",2);
          if (iVar3 == 0) {
            uVar26 = 0xfffe0000;
            *(char **)(piVar9 + 0x14) = pcVar24 + 2;
            piVar9[0x16] = uVar20 - 2;
            uVar23 = 0xfffe0000;
            piVar9[0x10] = 2;
          }
          else {
            iVar3 = strncasecmp(pcVar24,"ps",2);
            if (iVar3 != 0) {
              uVar26 = 0;
              uVar23 = 0;
              bVar32 = true;
              goto LAB_0052ec08;
            }
            uVar26 = 0xffff0000;
            *(char **)(piVar9 + 0x14) = pcVar24 + 2;
            piVar9[0x16] = uVar20 - 2;
            uVar23 = 0xffff0000;
            piVar9[0x10] = 1;
          }
          uVar20 = uVar20 - 2;
          if (uVar20 != 0) {
            bVar32 = false;
            pcVar24 = *(char **)(piVar9 + 0x14);
            goto LAB_0052ec08;
          }
          iVar3 = nexttoken(piVar9);
          if (iVar3 == 0x2e) {
            iVar3 = nexttoken(piVar9);
            if (iVar3 == 0x102) {
              uVar20 = piVar9[0x16];
              goto LAB_0052f7e3;
            }
            goto LAB_0052ede0;
          }
          if ((iVar3 != 0x103) || (**(char **)(piVar9 + 0x14) != '.')) goto LAB_0052ede0;
          piVar9[0x17] = 0x102;
          *(char **)(piVar9 + 0x14) = *(char **)(piVar9 + 0x14) + 1;
          uVar20 = piVar9[0x16] - 1;
          piVar9[0x16] = uVar20;
LAB_0052f7e3:
          if ((uVar20 == 0) || (pcVar24 = *(char **)(piVar9 + 0x14), 9 < (byte)(*pcVar24 - 0x30U)))
          goto LAB_0052ede0;
          pcVar30 = pcVar24;
          uVar4 = 0;
          do {
            uVar6 = uVar4;
            uVar4 = uVar6 + 1;
            if (uVar4 == uVar20) goto LAB_0052f826;
            pcVar15 = pcVar30 + 1;
            pcVar30 = pcVar30 + 1;
          } while ((byte)(*pcVar15 - 0x30U) < 10);
          if (uVar4 == 0) goto LAB_0052ede0;
LAB_0052f826:
          iVar28 = 0;
          iVar3 = 1;
          do {
            iVar25 = (pcVar24[uVar6] + -0x30) * iVar3;
            iVar3 = iVar3 * 10;
            iVar28 = iVar28 + iVar25;
            bVar32 = uVar6 != 0;
            uVar6 = uVar6 - 1;
          } while (bVar32);
          piVar9[0x16] = uVar20 - uVar4;
          *(char **)(piVar9 + 0x14) = pcVar24 + uVar4;
          iVar3 = nexttoken(piVar9);
          if (iVar3 != 0x2e) {
            if ((iVar3 != 0x103) || (**(char **)(piVar9 + 0x14) != '.')) goto LAB_0052f630;
            piVar9[0x17] = 0x102;
            *(char **)(piVar9 + 0x14) = *(char **)(piVar9 + 0x14) + 1;
            uVar20 = piVar9[0x16] - 1;
            piVar9[0x16] = uVar20;
LAB_0052f8aa:
            if ((uVar20 != 0) &&
               (pcVar24 = *(char **)(piVar9 + 0x14), (byte)(*pcVar24 - 0x30U) < 10)) {
              pcVar30 = pcVar24;
              uVar26 = 0;
              do {
                uVar4 = uVar26;
                uVar26 = uVar4 + 1;
                if (uVar26 == uVar20) goto LAB_0052f8ef;
                pcVar15 = pcVar30 + 1;
                pcVar30 = pcVar30 + 1;
              } while ((byte)(*pcVar15 - 0x30U) < 10);
              if (uVar26 != 0) {
LAB_0052f8ef:
                uVar6 = 0;
                iVar3 = 1;
                do {
                  iVar25 = (pcVar24[uVar4] + -0x30) * iVar3;
                  iVar3 = iVar3 * 10;
                  uVar6 = uVar6 + iVar25;
                  bVar32 = uVar4 != 0;
                  uVar4 = uVar4 - 1;
                } while (bVar32);
                iVar3 = uVar20 - uVar26;
                piVar9[0x16] = iVar3;
                *(char **)(piVar9 + 0x14) = pcVar24 + uVar26;
                uVar20 = uVar6;
                goto LAB_0052ed74;
              }
            }
            goto LAB_0052f630;
          }
          iVar3 = nexttoken(piVar9);
          if (iVar3 == 0x102) {
            uVar20 = piVar9[0x16];
            goto LAB_0052f8aa;
          }
          if ((iVar3 != 0x101) || (uVar20 = piVar9[0x16], uVar20 == 0)) goto LAB_0052f630;
          pcVar24 = *(char **)(piVar9 + 0x14);
          iVar3 = strncasecmp(pcVar24,"x",1);
          if (iVar3 == 0) {
            iVar3 = uVar20 - 1;
            *(char **)(piVar9 + 0x14) = pcVar24 + 1;
            piVar9[0x16] = iVar3;
            uVar6 = 1;
            uVar20 = 1;
          }
          else {
            if ((uVar20 < 2) || (iVar3 = strncasecmp(pcVar24,"sw",2), iVar3 != 0))
            goto LAB_0052f630;
            iVar3 = uVar20 - 2;
            *(char **)(piVar9 + 0x14) = pcVar24 + 2;
            piVar9[0x16] = iVar3;
            uVar6 = 0xff;
            uVar20 = 0xffffffff;
          }
LAB_0052ed74:
          uVar16 = (uint8_t)uVar20;
          uVar29 = (uint8_t)iVar28;
          if (iVar3 != 0) {
            uVar26 = uVar6 | uVar23 | iVar28 << 8;
            uVar6 = uVar20;
            goto LAB_0052ede5;
          }
          uVar26 = uVar6 | uVar23 | iVar28 << 8;
        }
        else {
          uVar26 = 0;
          if (uVar20 == 0) goto LAB_0052ede0;
          pcVar24 = *(char **)(piVar9 + 0x14);
          bVar32 = true;
          uVar23 = 0;
LAB_0052ec08:
          iVar3 = strncasecmp(pcVar24,"_",1);
          if (iVar3 == 0) {
            uVar20 = uVar20 - 1;
            pcVar30 = pcVar24 + 1;
            *(char **)(piVar9 + 0x14) = pcVar30;
            piVar9[0x16] = uVar20;
            if ((uVar20 == 0) || (9 < (byte)(pcVar24[1] - 0x30U))) goto LAB_0052ede0;
            pcVar24 = pcVar30;
            uVar26 = 0;
            do {
              uVar4 = uVar26;
              uVar26 = uVar4 + 1;
              if (uVar20 <= uVar26) break;
              pcVar15 = pcVar24 + 1;
              pcVar24 = pcVar24 + 1;
            } while ((byte)(*pcVar15 - 0x30U) < 10);
            iVar28 = 0;
            iVar3 = 1;
            do {
              iVar25 = (pcVar30[uVar4] + -0x30) * iVar3;
              iVar3 = iVar3 * 10;
              iVar28 = iVar28 + iVar25;
              bVar33 = uVar4 != 0;
              uVar4 = uVar4 - 1;
            } while (bVar33);
            iVar3 = uVar20 - uVar26;
            pcVar30 = pcVar30 + uVar26;
            *(char **)(piVar9 + 0x14) = pcVar30;
            piVar9[0x16] = iVar3;
            if ((iVar3 != 0) && (iVar25 = strncasecmp(pcVar30,"_",1), iVar25 == 0)) {
              uVar20 = iVar3 - 1;
              pcVar24 = pcVar30 + 1;
              *(char **)(piVar9 + 0x14) = pcVar24;
              piVar9[0x16] = uVar20;
              if (uVar20 != 0) {
                iVar25 = strncasecmp(pcVar24,"x",1);
                if (iVar25 == 0) {
                  iVar3 = iVar3 + -2;
                  uVar6 = 1;
                  *(char **)(piVar9 + 0x14) = pcVar30 + 2;
                  piVar9[0x16] = iVar3;
                }
                else if ((uVar20 == 1) || (iVar25 = strncasecmp(pcVar24,"sw",2), iVar25 != 0)) {
                  pcVar30 = *(char **)(piVar9 + 0x14);
                  if (9 < (byte)(*pcVar30 - 0x30U)) goto LAB_0052f630;
                  pcVar15 = pcVar30;
                  uVar26 = 0;
                  do {
                    uVar4 = uVar26;
                    uVar26 = uVar4 + 1;
                    if (uVar20 <= uVar26) break;
                    pcVar1 = pcVar15 + 1;
                    pcVar15 = pcVar15 + 1;
                  } while ((byte)(*pcVar1 - 0x30U) < 10);
                  uVar6 = 0;
                  iVar3 = 1;
                  do {
                    iVar25 = (pcVar30[uVar4] + -0x30) * iVar3;
                    iVar3 = iVar3 * 10;
                    uVar6 = uVar6 + iVar25;
                    bVar33 = uVar4 != 0;
                    uVar4 = uVar4 - 1;
                  } while (bVar33);
                  iVar3 = uVar20 - uVar26;
                  *(char **)(piVar9 + 0x14) = pcVar24 + uVar26;
                  piVar9[0x16] = iVar3;
                }
                else {
                  iVar3 = iVar3 + -3;
                  uVar6 = 0xff;
                  *(char **)(piVar9 + 0x14) = pcVar30 + 3;
                  piVar9[0x16] = iVar3;
                }
                uVar20 = uVar6;
                if (!bVar32) goto LAB_0052ed74;
                uVar29 = (uint8_t)iVar28;
                uVar26 = iVar28 * 0x100 | uVar23 | uVar6;
                goto LAB_0052ede5;
              }
            }
LAB_0052f630:
            uVar26 = iVar28 << 8 | uVar23;
          }
          else {
LAB_0052ede0:
            iVar28 = 0;
          }
          uVar29 = (uint8_t)iVar28;
          uVar6 = 0;
LAB_0052ede5:
          uVar16 = (uint8_t)uVar6;
          failf(piVar9,"%s","Expected valid version string");
        }
        *(uint8_t *)(piVar9 + 0x11) = uVar29;
        *(uint8_t *)((long)piVar9 + 0x45) = uVar16;
        piVar9[0x18] = uVar26;
        local_40 = uVar26;
        if (*piVar9 == 0) {
          buffer_append(*(uint64_t *)(piVar9 + 0x38),&local_40,4);
          local_3c[0] = 0;
          local_58 = preprocessor_sourcepos(*(uint64_t *)(piVar9 + 0xe),local_3c);
          local_50 = (ulong)local_3c[0];
          buffer_append(*(uint64_t *)(piVar9 + 0x3a),&local_58,0x10);
          if (*piVar9 == 0) {
            uVar22 = *(uint64_t *)(piVar9 + 8);
            iVar3 = piVar9[10];
            piVar9[8] = 0;
            piVar9[9] = 0;
            piVar9[10] = -2;
            if (arg7 == 0) {
              output_comment_bytes_part_12(piVar9,"MojoShader revision hg-1073:6eccf031c7e6",0x28);
            }
            else {
              lVar10 = buffer_create(0x100,MallocBridge,FreeBridge,piVar9);
              *(long *)(piVar9 + 0x3c) = lVar10;
              if (lVar10 != 0) {
                puVar13 = (uint32_t *)buffer_reserve(lVar10,0x20);
                if (puVar13 != (uint32_t *)0x0) {
                  *puVar13 = 0x42415443;
                  puVar13[1] = 0x1c;
                  iVar28 = 0;
                  if (*piVar9 == 0) {
                    lVar10 = buffer_find(*(uint64_t *)(piVar9 + 0x3c),0x20,
                                         "MojoShader revision hg-1073:6eccf031c7e6",0x29);
                    if (lVar10 < 0) {
                      iVar28 = buffer_size(*(uint64_t *)(piVar9 + 0x3c));
                      iVar28 = iVar28 + -4;
                      buffer_append(*(uint64_t *)(piVar9 + 0x3c),
                                    "MojoShader revision hg-1073:6eccf031c7e6",0x29);
                    }
                    else {
                      iVar28 = (int)lVar10 + -4;
                    }
                  }
                  puVar13[2] = iVar28;
                  puVar13[3] = piVar9[0x18];
                  puVar13[4] = arg7;
                  iVar28 = arg7 * 0x14;
                  piVar14 = (int *)(**(code **)(piVar9 + 2))(iVar28,*(uint64_t *)(piVar9 + 6));
                  if (piVar14 == (int *)0x0) {
                    piVar9[1] = 1;
                    *piVar9 = 1;
                    iVar25 = 0;
                  }
                  else {
                    puVar31 = (uint32_t *)(arg6 + 0x18);
                    arg6 = arg6 + 0x2c;
                    piVar27 = piVar14;
                    do {
                      pcVar24 = *(char **)(arg6 + -0x2c);
                      sVar12 = strlen(pcVar24);
                      iVar25 = 0;
                      if (*piVar9 == 0) {
                        lVar10 = buffer_find(*(uint64_t *)(piVar9 + 0x3c),0x20,pcVar24,sVar12 + 1)
                        ;
                        iVar25 = (int)lVar10 + -4;
                        if (lVar10 < 0) {
                          iVar25 = buffer_size(*(uint64_t *)(piVar9 + 0x3c));
                          iVar25 = iVar25 + -4;
                          buffer_append(*(uint64_t *)(piVar9 + 0x3c),pcVar24,sVar12 + 1);
                        }
                      }
                      *piVar27 = iVar25;
                      iVar25 = 0;
                      *(short *)(piVar27 + 1) = (short)*(uint32_t *)(arg6 + -0x24);
                      *(short *)((long)piVar27 + 6) = (short)*(uint32_t *)(arg6 + -0x20);
                      uVar5 = *(uint32_t *)(arg6 + -0x1c);
                      *(uint16_t *)((long)piVar27 + 10) = 0;
                      *(short *)(piVar27 + 2) = (short)uVar5;
                      local_58 = CONCAT26((short)puVar31[3],
                                          CONCAT24((short)puVar31[2],
                                                   CONCAT22((short)puVar31[1],(short)*puVar31)));
                      local_50._0_4_ = CONCAT22((short)puVar31[5],(short)puVar31[4]);
                      uVar5 = add_ctab_members_isra_11(piVar9,arg6,arg6 + 4);
                      local_50 = CONCAT44(uVar5,(uint32_t)local_50);
                      if (*piVar9 == 0) {
                        lVar10 = buffer_find(*(uint64_t *)(piVar9 + 0x3c),0x20,&local_58,0x10);
                        iVar25 = (int)lVar10 + -4;
                        if (lVar10 < 0) {
                          iVar25 = buffer_size(*(uint64_t *)(piVar9 + 0x3c));
                          iVar25 = iVar25 + -4;
                          buffer_append(*(uint64_t *)(piVar9 + 0x3c),&local_58,0x10);
                        }
                      }
                      piVar27[3] = iVar25;
                      piVar27[4] = 0;
                      puVar31 = puVar31 + 0xe;
                      piVar27 = piVar27 + 5;
                      arg6 = arg6 + 0x38;
                    } while (piVar27 != piVar14 + (ulong)(arg7 - 1) * 5 + 5);
                    iVar25 = 0;
                    if (*piVar9 == 0) {
                      lVar10 = buffer_find(*(uint64_t *)(piVar9 + 0x3c),0x20,piVar14,iVar28);
                      iVar25 = (int)lVar10 + -4;
                      if (lVar10 < 0) {
                        iVar25 = buffer_size(*(uint64_t *)(piVar9 + 0x3c));
                        iVar25 = iVar25 + -4;
                        buffer_append(*(uint64_t *)(piVar9 + 0x3c),piVar14,iVar28);
                      }
                    }
                    (**(code **)(piVar9 + 4))(piVar14,*(uint64_t *)(piVar9 + 6));
                  }
                  puVar13[5] = iVar25;
                  puVar13[6] = 0;
                  iVar28 = 0;
                  if (*piVar9 == 0) {
                    lVar10 = buffer_find(*(uint64_t *)(piVar9 + 0x3c),0x20,"",1);
                    if (lVar10 < 0) {
                      iVar28 = buffer_size(*(uint64_t *)(piVar9 + 0x3c));
                      iVar28 = iVar28 + -4;
                      buffer_append(*(uint64_t *)(piVar9 + 0x3c),"",1);
                    }
                    else {
                      iVar28 = (int)lVar10 + -4;
                    }
                  }
                  puVar13[7] = iVar28;
                  uVar21 = buffer_size(*(uint64_t *)(piVar9 + 0x3c));
                  lVar10 = buffer_flatten(*(uint64_t *)(piVar9 + 0x3c));
                  if (lVar10 != 0) {
                    if (uVar21 < 0x3fffd) {
                      if (*piVar9 == 0) {
                        output_comment_bytes_part_12(piVar9,lVar10,uVar21);
                      }
                    }
                    else {
                      failf(piVar9,"%s","Comment field is too big");
                    }
                    (**(code **)(piVar9 + 4))(lVar10,*(uint64_t *)(piVar9 + 6));
                  }
                }
                buffer_destroy(*(uint64_t *)(piVar9 + 0x3c));
                piVar9[0x3c] = 0;
                piVar9[0x3d] = 0;
              }
            }
            lVar10 = 0;
            if (arg5 != 0) {
              do {
                pcVar24 = *(char **)(arg4 + lVar10 * 8);
                sVar12 = strlen(pcVar24);
                if (sVar12 < 0x3fffd) {
                  if (*piVar9 == 0) {
                    output_comment_bytes_part_12(piVar9,pcVar24,sVar12);
                  }
                }
                else {
                  failf(piVar9,"%s","Comment field is too big");
                }
                lVar10 = lVar10 + 1;
              } while ((uint)lVar10 < arg5);
            }
            *(uint64_t *)(piVar9 + 8) = uVar22;
            piVar9[10] = iVar3;
          }
        }
        while (iVar3 = nexttoken(piVar9), iVar3 != 0x11b) {
          while (iVar3 != 0x101) {
            parse_instruction_token(piVar9,iVar3);
            iVar3 = nexttoken(piVar9);
            if (iVar3 == 0x11b) goto LAB_0052ee5b;
          }
          if (piVar9[0x16] == 3) {
            pcVar24 = *(char **)(piVar9 + 0x14);
            iVar3 = strncasecmp(pcVar24,"end",3);
            if (iVar3 == 0) {
              piVar9[0x16] = 0;
              *(char **)(piVar9 + 0x14) = pcVar24 + 3;
              iVar3 = nexttoken(piVar9);
              if (iVar3 != 0x11b) {
                failf(piVar9,"%s","Content after END");
              }
            }
            else {
LAB_0052f018:
              parse_instruction_token(piVar9,0x101);
            }
          }
          else {
            if (piVar9[0x16] != 5) goto LAB_0052f018;
            pcVar24 = *(char **)(piVar9 + 0x14);
            iVar3 = strncasecmp(pcVar24,"phase",5);
            if (iVar3 != 0) goto LAB_0052f018;
            piVar9[0x16] = 0;
            *(char **)(piVar9 + 0x14) = pcVar24 + 5;
            local_3c[0] = 0xfffd;
            if (*piVar9 == 0) {
              buffer_append(*(uint64_t *)(piVar9 + 0x38),local_3c,4);
              local_40 = 0;
              local_58 = preprocessor_sourcepos(*(uint64_t *)(piVar9 + 0xe),&local_40);
              local_50 = (ulong)local_40;
              buffer_append(*(uint64_t *)(piVar9 + 0x3a),&local_58,0x10);
            }
          }
        }
LAB_0052ee5b:
        piVar9[8] = 0;
        piVar9[9] = 0;
        piVar9[10] = -1;
        local_40 = 0xffff;
        if (*piVar9 == 0) {
          buffer_append(*(uint64_t *)(piVar9 + 0x38),&local_40,4);
          local_3c[0] = 0;
          local_58 = preprocessor_sourcepos(*(uint64_t *)(piVar9 + 0xe),local_3c);
          local_50 = (ulong)local_3c[0];
          buffer_append(*(uint64_t *)(piVar9 + 0x3a),&local_58,0x10);
          if (*piVar9 == 0) {
            uVar20 = buffer_size(*(uint64_t *)(piVar9 + 0x38));
            lVar10 = buffer_flatten(*(uint64_t *)(piVar9 + 0x38));
            buffer_destroy(*(uint64_t *)(piVar9 + 0x38));
            piVar9[0x38] = 0;
            piVar9[0x39] = 0;
            if (lVar10 != 0) {
              puVar18 = (uint8_t *)
                        MOJOSHADER_parse("bytecode",lVar10,uVar20,0,0,*(uint64_t *)(piVar9 + 2),
                                         *(uint64_t *)(piVar9 + 4),*(uint64_t *)(piVar9 + 6));
              (**(code **)(piVar9 + 4))(lVar10,*(uint64_t *)(piVar9 + 6));
              local_90 = 0;
              if (0 < *(int *)puVar18) {
                local_90 = buffer_flatten(*(uint64_t *)(piVar9 + 0x3a));
              }
              buffer_destroy(*(uint64_t *)(piVar9 + 0x3a));
              piVar9[0x3a] = 0;
              piVar9[0x3b] = 0;
              iVar3 = *(int *)puVar18;
              if (iVar3 < 1) goto LAB_0052ee96;
              lVar10 = 0;
              iVar28 = 0;
              if (local_90 != 0) {
                do {
                  lVar19 = lVar10 + *(long *)((long)puVar18 + 8);
                  if (-1 < *(int *)(lVar19 + 0x10)) {
                    uVar21 = (ulong)(long)*(int *)(lVar19 + 0x10) >> 2;
                    if (uVar21 < uVar20) {
                      puVar11 = (uint64_t *)(uVar21 * 0x10 + local_90);
                      pcVar30 = (char *)0x0;
                      (**(code **)(piVar9 + 4))
                                (*(uint64_t *)(lVar19 + 8),*(uint64_t *)(piVar9 + 6));
                      pcVar24 = (char *)*puVar11;
                      if (pcVar24 != (char *)0x0) {
                        sVar12 = strlen(pcVar24);
                        pcVar30 = (char *)(**(code **)(piVar9 + 2))
                                                    (sVar12 + 1,*(uint64_t *)(piVar9 + 6));
                        if (pcVar30 == (char *)0x0) {
                          piVar9[1] = 1;
                          *piVar9 = 1;
                        }
                        else {
                          strcpy(pcVar30,pcVar24);
                        }
                      }
                      uVar5 = *(uint32_t *)(puVar11 + 1);
                      *(char **)(lVar19 + 8) = pcVar30;
                      *(uint32_t *)(lVar19 + 0x10) = uVar5;
                      iVar3 = *(int *)puVar18;
                    }
                    else {
                      *(uint32_t *)(lVar19 + 0x10) = 0xffffffff;
                      iVar3 = *(int *)puVar18;
                    }
                  }
                  iVar28 = iVar28 + 1;
                  lVar10 = lVar10 + 0x18;
                } while (iVar28 < iVar3);
                (**(code **)(piVar9 + 4))(local_90,*(uint64_t *)(piVar9 + 6));
                goto LAB_0052ee96;
              }
              MOJOSHADER_freeParseData(puVar18);
            }
          }
        }
        puVar18 = MOJOSHADER_out_of_mem_data;
        if (piVar9[1] == 0) {
          puVar18 = (uint8_t *)build_failed_assembly_part_14(piVar9);
        }
LAB_0052ee96:
        pcVar7 = *(code **)(piVar9 + 4);
        uVar22 = *(uint64_t *)(piVar9 + 6);
        preprocessor_end(*(uint64_t *)(piVar9 + 0xe));
        errorlist_destroy(*(uint64_t *)(piVar9 + 0xc));
        buffer_destroy(*(uint64_t *)(piVar9 + 0x3c));
        buffer_destroy(*(uint64_t *)(piVar9 + 0x3a));
        buffer_destroy(*(uint64_t *)(piVar9 + 0x38));
        (*pcVar7)(piVar9,uVar22);
        return (int *)puVar18;
      }
    }
  }
  uVar22 = *(uint64_t *)(piVar9 + 0xe);
LAB_0052f580:
  pcVar7 = *(code **)(piVar9 + 4);
  uVar2 = *(uint64_t *)(piVar9 + 6);
  preprocessor_end(uVar22);
  errorlist_destroy(*(uint64_t *)(piVar9 + 0xc));
  buffer_destroy(*(uint64_t *)(piVar9 + 0x3c));
  buffer_destroy(*(uint64_t *)(piVar9 + 0x3a));
  buffer_destroy(*(uint64_t *)(piVar9 + 0x38));
  (*pcVar7)(piVar9,uVar2);
  return (int *)MOJOSHADER_out_of_mem_data;
}

/* ======================================================================
 * preprocessor_lexer  (Ghidra `preprocessor_lexer` @ 00531d90)
 * Signature: uint8_t preprocessor_lexer(void)
 * Calls: `update_state`
 * Called by: `handle_pp_identifier`, `handle_pp_ifdef`, `handle_pp_include`, `handle_pp_line`, `handle_pp_undef`, `preprocessor_nexttoken`, `reduce_pp_expression`
 */
/* WARNING: Type propagation algorithm not settling */

uint64_t preprocessor_lexer(long arg1)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  uint64_t uVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  pbVar3 = *(byte **)(arg1 + 0x10);
  iVar2 = 0;
  pbVar10 = pbVar3 + *(uint *)(arg1 + 0x44);
  if (*(int *)(arg1 + 0x24) == 10) {
    iVar2 = 0;
    pbVar7 = pbVar3;
    pbVar9 = pbVar10;
LAB_00531ed8:
    if (pbVar9 == pbVar7) goto LAB_00531f38;
LAB_00531ee0:
    bVar5 = *pbVar7;
    if (0xc < bVar5) goto LAB_00531f50;
LAB_00531ee8:
    if ((bVar5 == 9) || (10 < bVar5)) {
LAB_00531ef6:
      bVar5 = pbVar7[1];
      pbVar7 = pbVar7 + 1;
      do {
        if (bVar5 < 0xb) {
          if (bVar5 != 9) goto LAB_00531ed8;
        }
        else if ((0xc < bVar5) && (bVar5 != 0x20)) goto code_r0x00531f30;
        pbVar7 = pbVar7 + 1;
        if (pbVar9 <= pbVar7) {
          iVar2 = 1;
          pbVar9 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
          pbVar7 = &sentinel;
        }
        bVar5 = *pbVar7;
      } while( true );
    }
  }
  goto LAB_00531da7;
code_r0x00531f30:
  if (pbVar9 != pbVar7) goto LAB_00531ee0;
LAB_00531f38:
  pbVar7 = &sentinel;
  iVar2 = 1;
  pbVar9 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
  bVar5 = sentinel;
  if (sentinel < 0xd) goto LAB_00531ee8;
LAB_00531f50:
  if (0x20 < bVar5) {
    if (bVar5 != 0x23) goto LAB_00531da7;
    pbVar9 = pbVar7 + 1;
    *(byte **)(arg1 + 0x30) = pbVar9;
    bVar5 = pbVar7[1];
    if (0x68 < bVar5) {
      if (bVar5 < 0x70) {
        if ((bVar5 == 0x69) || (bVar5 == 0x6c)) goto LAB_005334cf;
      }
      else if ((bVar5 == 0x70) || (bVar5 == 0x75)) goto LAB_005334cf;
      goto LAB_00531da7;
    }
    if (bVar5 < 0x20) {
      if (bVar5 == 9) goto LAB_00531fc9;
      goto LAB_00531da7;
    }
    if (bVar5 == 0x20) goto LAB_00531fe3;
    if ((bVar5 < 100) || (0x65 < bVar5)) goto LAB_00531da7;
    goto LAB_0053384f;
  }
  if (bVar5 != 0x20) {
    if (pbVar10 != pbVar3) goto LAB_00531db0;
    goto LAB_00531f60;
  }
  goto LAB_00531ef6;
LAB_005334cf:
  if (bVar5 < 0x70) {
    if (bVar5 == 0x69) {
      if (pbVar9[1] == 0x66) {
        *(byte **)(arg1 + 0x30) = pbVar9 + 2;
        if (pbVar9[2] == 100) {
          if ((pbVar9[3] == 0x65) && (pbVar9[4] == 0x66)) {
            uVar4 = update_state(arg1,iVar2,pbVar9 + 5,pbVar3,0x123);
            return uVar4;
          }
        }
        else if ((((pbVar9[2] == 0x6e) && (pbVar9[3] == 100)) && (pbVar9[4] == 0x65)) &&
                (pbVar9[5] == 0x66)) {
          uVar4 = update_state(arg1,iVar2,pbVar9 + 6,pbVar3,0x124);
          return uVar4;
        }
        uVar4 = update_state();
        return uVar4;
      }
      if ((((pbVar9[1] == 0x6e) && (pbVar9[2] == 99)) &&
          ((pbVar9[3] == 0x6c && ((pbVar9[4] == 0x75 && (pbVar9[5] == 100)))))) &&
         (pbVar9[6] == 0x65)) {
        uVar4 = update_state(arg1,iVar2,pbVar9 + 7,pbVar3,0x11e);
        return uVar4;
      }
    }
    else if ((((bVar5 == 0x6c) && (pbVar9[1] == 0x69)) && (pbVar9[2] == 0x6e)) &&
            (pbVar9[3] == 0x65)) {
      uVar4 = update_state(arg1,iVar2,pbVar9 + 4,pbVar3,0x11f);
      return uVar4;
    }
  }
  else if (bVar5 == 0x70) {
    if ((((pbVar9[1] == 0x72) && (pbVar9[2] == 0x61)) && (pbVar9[3] == 0x67)) &&
       ((pbVar9[4] == 0x6d && (pbVar9[5] == 0x61)))) {
      uVar4 = update_state(arg1,iVar2,pbVar9 + 6,pbVar3,0x129);
      return uVar4;
    }
  }
  else if (((bVar5 == 0x75) && (pbVar9[1] == 0x6e)) &&
          ((pbVar9[2] == 100 && ((pbVar9[3] == 0x65 && (pbVar9[4] == 0x66)))))) {
    uVar4 = update_state(arg1,iVar2,pbVar9 + 5,pbVar3,0x121);
    return uVar4;
  }
  goto LAB_00531da7;
LAB_0053224b:
  if (bVar5 < 0x5b) {
    if ((bVar5 < 0x30) || ((0x39 < bVar5 && (bVar5 < 0x41)))) goto LAB_0053225b;
  }
  else if (bVar5 < 0x60) {
    if (bVar5 != 0x5f) goto LAB_0053225b;
  }
  else if ((bVar5 == 0x60) || (0x7a < bVar5)) goto LAB_0053225b;
  pbVar7 = pbVar7 + 1;
  if (pbVar10 <= pbVar7) {
    iVar2 = 1;
    pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
    pbVar7 = &sentinel;
  }
  bVar5 = *pbVar7;
  goto LAB_0053224b;
joined_r0x00532418:
  if (0x4c < bVar5) goto LAB_00533da5;
  if (0x39 < bVar5) {
    if (bVar5 == 0x45) goto LAB_005333fb;
    if (bVar5 == 0x4c) goto LAB_00532461;
    goto LAB_00532639;
  }
  if (bVar5 == 0x2e) goto LAB_00533038;
  if (bVar5 < 0x30) goto LAB_00532639;
  pbVar9 = pbVar9 + 1;
  *(byte **)(arg1 + 0x30) = pbVar9;
  bVar5 = *pbVar9;
  goto joined_r0x00532418;
LAB_00533da5:
  if (0x65 < bVar5) goto joined_r0x00533df0;
  if (bVar5 != 0x55) goto LAB_005333f2;
LAB_00532461:
  do {
    pbVar9 = pbVar9 + 1;
    if (pbVar10 <= pbVar9) {
      iVar2 = 1;
      pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
      pbVar9 = &sentinel;
    }
    bVar5 = *pbVar9;
    if (bVar5 < 0x56) {
      if ((bVar5 != 0x4c) && (bVar5 != 0x55)) break;
      goto LAB_00532461;
    }
joined_r0x00533df0:
    if (0x6c < bVar5) {
      if (bVar5 != 0x75) break;
      goto LAB_00532461;
    }
  } while (bVar5 == 0x6c);
  goto LAB_00532639;
LAB_005324ee:
  if (0x4c < bVar5) goto LAB_005333e3;
  if (0x39 < bVar5) {
    if (bVar5 == 0x45) goto LAB_005333fb;
    if (bVar5 == 0x4c) goto LAB_0053342e;
    goto LAB_00532639;
  }
  if (bVar5 == 0x2e) goto LAB_00533038;
  if (bVar5 < 0x30) goto LAB_00532639;
  pbVar9 = pbVar9 + 1;
  *(byte **)(arg1 + 0x30) = pbVar9;
  bVar5 = *pbVar9;
  goto LAB_005324ee;
LAB_005333e3:
  if (0x65 < bVar5) goto joined_r0x00533d4c;
  if (bVar5 == 0x55) {
LAB_0053342e:
    do {
      pbVar9 = pbVar9 + 1;
      if (pbVar10 <= pbVar9) {
        iVar2 = 1;
        pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
        pbVar9 = &sentinel;
      }
      bVar5 = *pbVar9;
      if (bVar5 < 0x56) {
        if ((bVar5 != 0x4c) && (bVar5 != 0x55)) break;
        goto LAB_0053342e;
      }
joined_r0x00533d4c:
      if (bVar5 < 0x6d) {
        if (bVar5 != 0x6c) break;
        goto LAB_0053342e;
      }
    } while (bVar5 == 0x75);
  }
  else {
LAB_005333f2:
    if (bVar5 == 0x65) {
LAB_005333fb:
      bVar5 = pbVar9[1];
      if (0x2c < bVar5) {
        if (bVar5 == 0x2d) goto LAB_00533c4b;
        if ((bVar5 < 0x30) || (pbVar7 = pbVar9 + 1, 0x39 < bVar5)) goto LAB_00533414;
LAB_00533c68:
        do {
          pbVar7 = pbVar7 + 1;
          if (pbVar10 <= pbVar7) {
            iVar2 = 1;
            pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
            pbVar7 = &sentinel;
          }
          bVar5 = *pbVar7;
          if (0x47 < bVar5) goto LAB_0053367c;
          if (0x39 < bVar5) goto joined_r0x00534076;
        } while (0x2f < bVar5);
        goto LAB_00532ed0;
      }
      if (bVar5 == 0x2b) {
LAB_00533c4b:
        if ((0x2f < pbVar9[2]) && (pbVar7 = pbVar9 + 2, pbVar9[2] < 0x3a)) goto LAB_00533c68;
      }
LAB_00533414:
      pbVar9 = *(byte **)(arg1 + 0x30);
    }
  }
  goto LAB_00532639;
LAB_00533a28:
  pbVar9 = pbVar9 + 1;
  if (pbVar10 <= pbVar9) {
    iVar2 = 1;
    pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
    pbVar9 = &sentinel;
  }
  bVar5 = *pbVar9;
  if (bVar5 < 0x55) {
    if (bVar5 < 0x41) {
      if ((bVar5 < 0x30) || (0x39 < bVar5)) goto LAB_00532639;
    }
    else if (0x46 < bVar5) {
      if (bVar5 == 0x4c) goto LAB_00533a9c;
      goto LAB_00532639;
    }
    goto LAB_00533a28;
  }
  if (0x6b < bVar5) {
    if (bVar5 != 0x6c) goto joined_r0x00533ad5;
    goto LAB_00533a9c;
  }
  if (bVar5 == 0x55) goto LAB_00533a9c;
  if ((bVar5 < 0x61) || (0x66 < bVar5)) goto LAB_00532639;
  goto LAB_00533a28;
LAB_0053279a:
  pbVar7 = pbVar9 + 1;
  *(byte **)(arg1 + 0x30) = pbVar7;
  bVar5 = pbVar9[1];
  if (0x47 < bVar5) {
    if (0x65 < bVar5) {
      if ((bVar5 != 0x67) && (bVar5 < 0x69)) goto LAB_00533693;
      goto LAB_00532ed0;
    }
    if (bVar5 == 0x48) goto LAB_00533693;
    if (bVar5 != 0x65) goto LAB_00532ed0;
LAB_00533600:
    bVar5 = pbVar9[2];
    if (bVar5 < 0x2d) {
      if (bVar5 != 0x2b) goto LAB_00532ed0;
    }
    else if (bVar5 != 0x2d) {
      if ((0x2f < bVar5) && (bVar5 < 0x3a)) {
        pbVar7 = pbVar9 + 2;
        goto LAB_0053362e;
      }
      goto LAB_00532ed0;
    }
    if ((0x2f < pbVar9[3]) && (pbVar9[3] < 0x3a)) {
      pbVar7 = pbVar9 + 3;
      goto LAB_0053362e;
    }
    goto LAB_00532ed0;
  }
  if (0x44 < bVar5) {
    if (bVar5 == 0x45) goto LAB_00533600;
    goto joined_r0x00534076;
  }
  if ((bVar5 < 0x30) || (pbVar9 = pbVar7, 0x39 < bVar5)) goto LAB_00532ed0;
  goto LAB_0053279a;
  while( true ) {
    if (0x39 < bVar5) goto joined_r0x00534076;
    if (bVar5 < 0x30) break;
LAB_0053362e:
    pbVar7 = pbVar7 + 1;
    if (pbVar10 <= pbVar7) {
      iVar2 = 1;
      pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
      pbVar7 = &sentinel;
    }
    bVar5 = *pbVar7;
    if (0x47 < bVar5) goto LAB_0053367c;
  }
  goto LAB_00532ed0;
LAB_0053367c:
  if (bVar5 < 0x67) {
    if ((bVar5 != 0x48) && (bVar5 != 0x66)) goto LAB_00532ed0;
  }
  else if (bVar5 != 0x68) goto LAB_00532ed0;
  goto LAB_00533693;
LAB_00532623:
  if (bVar5 < 0xe) {
    if (bVar5 == 10) goto LAB_00531de4;
LAB_005325fa:
    if (bVar5 == 0xd) goto LAB_00531de4;
  }
  else if (bVar5 < 0x28) {
joined_r0x00533eb0:
    if (bVar5 == 0x27) goto LAB_00532635;
  }
  else if (bVar5 == 0x5c) {
LAB_00532e07:
    do {
      pbVar9 = pbVar9 + 1;
      if (pbVar10 <= pbVar9) {
        iVar2 = 1;
        pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
        pbVar9 = &sentinel;
      }
      bVar5 = *pbVar9;
      if (bVar5 < 99) {
        if (bVar5 < 0x38) {
          if (bVar5 < 0x27) {
            if (bVar5 != 0x22) goto LAB_00531de4;
          }
          else if (bVar5 != 0x27) {
            if (bVar5 < 0x30) goto LAB_00531de4;
            while( true ) {
              pbVar9 = pbVar9 + 1;
              if (pbVar10 <= pbVar9) {
                iVar2 = 1;
                pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
                pbVar9 = &sentinel;
              }
              bVar5 = *pbVar9;
              if (bVar5 < 0x27) break;
              if (0x37 < bVar5) goto LAB_00533d7c;
              if (bVar5 == 0x27) goto LAB_00532635;
              if (bVar5 < 0x30) goto LAB_00532606;
            }
            if (10 < bVar5) goto LAB_005325fa;
joined_r0x00533e81:
            if (bVar5 == 10) goto LAB_00531de4;
          }
        }
        else if (bVar5 < 0x5c) {
          if (bVar5 != 0x3f) goto LAB_00531de4;
        }
        else if ((bVar5 != 0x5c) && (bVar5 < 0x61)) goto LAB_00531de4;
        break;
      }
      if (bVar5 < 0x73) {
        if (bVar5 < 0x6e) {
          if (bVar5 != 0x66) goto LAB_00531de4;
        }
        else if ((bVar5 != 0x6e) && (bVar5 != 0x72)) goto LAB_00531de4;
        break;
      }
      if (bVar5 < 0x76) {
        if (bVar5 != 0x74) goto LAB_00531de4;
        break;
      }
      if (bVar5 == 0x76) break;
      if (bVar5 != 0x78) goto LAB_00531de4;
      pbVar9 = pbVar9 + 1;
      if (pbVar10 <= pbVar9) {
        iVar2 = 1;
        pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
        pbVar9 = &sentinel;
      }
      bVar5 = *pbVar9;
      if (bVar5 < 0x41) {
        if ((bVar5 < 0x30) || (0x39 < bVar5)) goto LAB_00531de4;
      }
      else if ((0x46 < bVar5) && ((bVar5 < 0x61 || (0x66 < bVar5)))) goto LAB_00531de4;
      while( true ) {
        while( true ) {
          pbVar9 = pbVar9 + 1;
          if (pbVar10 <= pbVar9) {
            iVar2 = 1;
            pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
            pbVar9 = &sentinel;
          }
          bVar5 = *pbVar9;
          if (bVar5 < 0x30) {
            if (bVar5 < 0xd) goto joined_r0x00533e81;
            if (bVar5 != 0xd) goto joined_r0x00533eb0;
            goto LAB_00531de4;
          }
          if (0x5b < bVar5) break;
          if ((0x39 < bVar5) && ((bVar5 < 0x41 || (0x46 < bVar5)))) goto LAB_00532606;
        }
        if (bVar5 == 0x5c) break;
        if ((bVar5 < 0x61) || (0x66 < bVar5)) goto LAB_00532606;
      }
    } while( true );
  }
LAB_00532606:
  pbVar9 = pbVar9 + 1;
  if (pbVar10 <= pbVar9) {
    iVar2 = 1;
    pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
    pbVar9 = &sentinel;
  }
  bVar5 = *pbVar9;
  goto LAB_00532623;
LAB_00533d7c:
  if (bVar5 != 0x5c) goto LAB_00532606;
  goto LAB_00532e07;
LAB_00532635:
  pbVar9 = pbVar9 + 1;
  goto LAB_00532639;
LAB_00532559:
  if (bVar5 < 0xe) {
    if (bVar5 == 10) goto LAB_00531de4;
LAB_00532532:
    if (bVar5 == 0xd) goto LAB_00531de4;
  }
  else if (bVar5 < 0x23) {
joined_r0x00533fc5:
    if (bVar5 == 0x22) {
LAB_0053256b:
      uVar4 = update_state(arg1,iVar2,pbVar9 + 1,pbVar3,0x104);
      return uVar4;
    }
  }
  else if (bVar5 == 0x5c) {
LAB_00532d68:
    do {
      pbVar9 = pbVar9 + 1;
      if (pbVar10 <= pbVar9) {
        iVar2 = 1;
        pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
        pbVar9 = &sentinel;
      }
      bVar5 = *pbVar9;
      if (bVar5 < 99) {
        if (bVar5 < 0x38) {
          if (bVar5 < 0x27) {
            if (bVar5 != 0x22) goto LAB_00531de4;
          }
          else if (bVar5 != 0x27) {
            if (bVar5 < 0x30) goto LAB_00531de4;
            while( true ) {
              pbVar9 = pbVar9 + 1;
              if (pbVar10 <= pbVar9) {
                iVar2 = 1;
                pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
                pbVar9 = &sentinel;
              }
              bVar5 = *pbVar9;
              if (bVar5 < 0x22) break;
              if (0x37 < bVar5) goto LAB_00533dc5;
              if (bVar5 == 0x22) goto LAB_0053256b;
              if (bVar5 < 0x30) goto LAB_0053253c;
            }
            if (10 < bVar5) goto LAB_00532532;
joined_r0x00533f98:
            if (bVar5 == 10) goto LAB_00531de4;
          }
        }
        else if (bVar5 < 0x5c) {
          if (bVar5 != 0x3f) goto LAB_00531de4;
        }
        else if ((bVar5 != 0x5c) && (bVar5 < 0x61)) goto LAB_00531de4;
        break;
      }
      if (bVar5 < 0x73) {
        if (bVar5 < 0x6e) {
          if (bVar5 != 0x66) goto LAB_00531de4;
        }
        else if ((bVar5 != 0x6e) && (bVar5 != 0x72)) goto LAB_00531de4;
        break;
      }
      if (bVar5 < 0x76) {
        if (bVar5 != 0x74) goto LAB_00531de4;
        break;
      }
      if (bVar5 == 0x76) break;
      if (bVar5 != 0x78) goto LAB_00531de4;
      pbVar9 = pbVar9 + 1;
      if (pbVar10 <= pbVar9) {
        iVar2 = 1;
        pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
        pbVar9 = &sentinel;
      }
      bVar5 = *pbVar9;
      if (bVar5 < 0x41) {
        if ((bVar5 < 0x30) || (0x39 < bVar5)) goto LAB_00531de4;
      }
      else if ((0x46 < bVar5) && ((bVar5 < 0x61 || (0x66 < bVar5)))) goto LAB_00531de4;
      while( true ) {
        while( true ) {
          pbVar9 = pbVar9 + 1;
          if (pbVar10 <= pbVar9) {
            iVar2 = 1;
            pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
            pbVar9 = &sentinel;
          }
          bVar5 = *pbVar9;
          if (bVar5 < 0x30) {
            if (bVar5 < 0xd) goto joined_r0x00533f98;
            if (bVar5 != 0xd) goto joined_r0x00533fc5;
            goto LAB_00531de4;
          }
          if (0x5b < bVar5) break;
          if ((0x39 < bVar5) && ((bVar5 < 0x41 || (0x46 < bVar5)))) goto LAB_0053253c;
        }
        if (bVar5 == 0x5c) break;
        if ((bVar5 < 0x61) || (0x66 < bVar5)) goto LAB_0053253c;
      }
    } while( true );
  }
LAB_0053253c:
  pbVar9 = pbVar9 + 1;
  if (pbVar10 <= pbVar9) {
    iVar2 = 1;
    pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
    pbVar9 = &sentinel;
  }
  bVar5 = *pbVar9;
  goto LAB_00532559;
LAB_00533dc5:
  if (bVar5 != 0x5c) goto LAB_0053253c;
  goto LAB_00532d68;
LAB_005328b8:
  if (*(int *)(arg1 + 0x38) != 0) {
    uVar4 = update_state();
    return uVar4;
  }
  goto LAB_00531da7;
LAB_00531de4:
  if ((pbVar10 == pbVar7) || (pbVar10 <= pbVar7)) {
    iVar2 = 1;
    pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
    pbVar7 = &sentinel;
  }
  bVar5 = *pbVar7;
  if (bVar5 < 0x24) {
    if (bVar5 < 0xe) {
      if (bVar5 == 0) {
        if (iVar2 != 0) {
          *(byte **)(arg1 + 0x18) = pbVar3;
          lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
          uVar4 = *(uint64_t *)(arg1 + 0x10);
          iVar2 = (int)lVar8;
          *(long *)(arg1 + 0x10) = lVar8;
          *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - (iVar2 - (int)uVar4);
          iVar6 = iVar2 - iVar6;
          goto LAB_00531f89;
        }
      }
      else if (8 < bVar5) goto LAB_00531e15;
    }
    else if ((0x1f < bVar5) && (bVar5 != 0x22)) goto LAB_00531e15;
  }
  else if (bVar5 < 0x41) {
    if ((bVar5 != 0x24) && (bVar5 != 0x40)) goto LAB_00531e15;
  }
  else if ((bVar5 != 0x60) && (bVar5 < 0x7f)) goto LAB_00531e15;
  pbVar7 = pbVar7 + 1;
  goto LAB_00531de4;
LAB_00533038:
  pbVar7 = pbVar9 + 1;
  *(byte **)(arg1 + 0x30) = pbVar7;
  bVar5 = pbVar9[1];
  if ((bVar5 == 0x45) || (bVar5 == 0x65)) {
    bVar5 = pbVar9[2];
    if (bVar5 < 0x2d) {
      if (bVar5 != 0x2b) goto LAB_00532ed0;
LAB_00534096:
      if ((pbVar9[3] < 0x30) || (0x39 < pbVar9[3])) goto LAB_00532ed0;
      pbVar7 = pbVar9 + 3;
    }
    else {
      if (bVar5 == 0x2d) goto LAB_00534096;
      if ((bVar5 < 0x30) || (0x39 < bVar5)) goto LAB_00532ed0;
      pbVar7 = pbVar9 + 2;
    }
    do {
      pbVar7 = pbVar7 + 1;
      if (pbVar10 <= pbVar7) {
        iVar2 = 1;
        pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
        pbVar7 = &sentinel;
      }
      bVar5 = *pbVar7;
      if (0x47 < bVar5) goto LAB_0053367c;
      if (0x39 < bVar5) goto joined_r0x00534076;
    } while (0x2f < bVar5);
    goto LAB_00532ed0;
  }
  if (bVar5 < 0x48) {
    if (bVar5 < 0x45) {
      do {
        if ((bVar5 < 0x30) || (0x39 < bVar5)) goto LAB_00532ed0;
        pbVar7 = pbVar7 + 1;
        *(byte **)(arg1 + 0x30) = pbVar7;
        bVar5 = *pbVar7;
        if (0x47 < bVar5) goto LAB_00532e9c;
      } while (bVar5 < 0x45);
      if (bVar5 == 0x45) goto LAB_00532eb6;
    }
joined_r0x00534076:
    if (bVar5 != 0x46) goto LAB_00532ed0;
  }
  else {
LAB_00532e9c:
    if (bVar5 < 0x66) {
      if (bVar5 != 0x48) {
        if (bVar5 != 0x65) goto LAB_00532ed0;
LAB_00532eb6:
        bVar5 = pbVar7[1];
        if (bVar5 < 0x2d) {
          if (bVar5 == 0x2b) {
LAB_00534125:
            pbVar9 = pbVar7 + 2;
            if ((0x2f < *pbVar9) && (pbVar7 = pbVar7 + 2, *pbVar9 < 0x3a)) goto LAB_0053413f;
          }
LAB_00532ecc:
          pbVar7 = *(byte **)(arg1 + 0x30);
        }
        else {
          if (bVar5 == 0x2d) goto LAB_00534125;
          if ((bVar5 < 0x30) || (pbVar7 = pbVar7 + 1, 0x39 < bVar5)) goto LAB_00532ecc;
LAB_0053413f:
          do {
            pbVar7 = pbVar7 + 1;
            if (pbVar10 <= pbVar7) {
              iVar2 = 1;
              pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
              pbVar7 = &sentinel;
            }
            bVar5 = *pbVar7;
            if (0x47 < bVar5) goto LAB_0053367c;
            if (0x39 < bVar5) goto joined_r0x00534076;
          } while (0x2f < bVar5);
        }
        goto LAB_00532ed0;
      }
    }
    else if ((bVar5 == 0x67) || (0x68 < bVar5)) goto LAB_00532ed0;
  }
LAB_00533693:
  pbVar7 = pbVar7 + 1;
LAB_00532ed0:
  if (iVar2 == 0) {
    *(byte **)(arg1 + 0x18) = pbVar3;
    *(int *)(arg1 + 0x44) =
         *(int *)(arg1 + 0x44) - ((int)pbVar7 - (int)*(uint64_t *)(arg1 + 0x10));
    *(byte **)(arg1 + 0x10) = pbVar7;
    iVar6 = (int)pbVar7 - iVar6;
  }
  else {
    *(uint32_t *)(arg1 + 0x44) = 0;
    lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
    *(long *)(arg1 + 0x10) = lVar8;
    if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
      *(byte **)(arg1 + 0x18) = pbVar3;
      iVar6 = (int)lVar8 - iVar6;
    }
    else {
      *(long *)(arg1 + 0x18) = lVar8;
      iVar6 = 0;
    }
  }
  *(int *)(arg1 + 0x20) = iVar6;
  *(uint32_t *)(arg1 + 0x24) = 0x103;
  return 0x103;
LAB_00531fc9:
  while( true ) {
    pbVar9 = pbVar9 + 1;
    bVar5 = *pbVar9;
    if (0x68 < bVar5) goto LAB_005334cf;
    if (0x20 < bVar5) break;
LAB_00531fe3:
    if ((bVar5 != 9) && (bVar5 != 0x20)) goto LAB_00531da7;
  }
  if (99 < bVar5) {
LAB_0053384f:
    if (bVar5 == 100) {
      if (((pbVar9[1] == 0x65) && (pbVar9[2] == 0x66)) &&
         ((pbVar9[3] == 0x69 && ((pbVar9[4] == 0x6e && (pbVar9[5] == 0x65)))))) {
        uVar4 = update_state(arg1,iVar2,pbVar9 + 6,pbVar3,0x120);
        return uVar4;
      }
    }
    else if (bVar5 == 0x65) {
      bVar5 = pbVar9[1];
      if (bVar5 < 0x6e) {
        if (bVar5 == 0x6c) {
          if (pbVar9[2] == 0x69) {
            if (pbVar9[3] == 0x66) {
              uVar4 = update_state(arg1,iVar2,pbVar9 + 4,pbVar3,0x126);
              return uVar4;
            }
          }
          else if ((pbVar9[2] == 0x73) && (pbVar9[3] == 0x65)) {
            uVar4 = update_state(arg1,iVar2,pbVar9 + 4,pbVar3,0x125);
            return uVar4;
          }
        }
      }
      else if (bVar5 == 0x6e) {
        if (((pbVar9[2] == 100) && (pbVar9[3] == 0x69)) && (pbVar9[4] == 0x66)) {
          uVar4 = update_state(arg1,iVar2,pbVar9 + 5,pbVar3,0x127);
          return uVar4;
        }
      }
      else if (((bVar5 == 0x72) && (pbVar9[2] == 0x72)) &&
              ((pbVar9[3] == 0x6f && (pbVar9[4] == 0x72)))) {
        uVar4 = update_state(arg1,iVar2,pbVar9 + 5,pbVar3,0x128);
        return uVar4;
      }
    }
  }
LAB_00531da7:
  if (pbVar10 == pbVar3) {
LAB_00531f60:
    iVar2 = 1;
    pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
    pbVar3 = &sentinel;
  }
LAB_00531db0:
  iVar6 = (int)pbVar3;
  switch(*pbVar3) {
  case 0:
    pbVar7 = pbVar3 + 1;
    if (iVar2 != 0) goto LAB_005328d7;
    goto LAB_00531de4;
  default:
    pbVar7 = pbVar3 + 1;
    goto LAB_00531de4;
  case 9:
  case 0xb:
  case 0xc:
  case 0x20:
    bVar5 = pbVar3[1];
    pbVar3 = pbVar3 + 1;
    do {
      if (bVar5 < 0xb) {
        if (bVar5 != 9) goto LAB_005328b8;
      }
      else if ((0xc < bVar5) && (bVar5 != 0x20)) goto LAB_005328b8;
      pbVar3 = pbVar3 + 1;
      if (pbVar10 <= pbVar3) {
        iVar2 = 1;
        pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
        pbVar3 = &sentinel;
      }
      bVar5 = *pbVar3;
    } while( true );
  case 10:
    pbVar10 = pbVar3 + 1;
    break;
  case 0xd:
    pbVar10 = pbVar3 + 1;
    if (pbVar3[1] == 10) {
      pbVar10 = pbVar3 + 2;
    }
    break;
  case 0x21:
    if (pbVar3[1] != 0x3d) {
      if (iVar2 == 0) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        uVar4 = *(uint64_t *)(arg1 + 0x10);
        *(byte **)(arg1 + 0x10) = pbVar3 + 1;
        *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
        iVar6 = 1;
      }
      else {
        *(uint32_t *)(arg1 + 0x44) = 0;
        lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
        *(long *)(arg1 + 0x10) = lVar8;
        if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
          *(byte **)(arg1 + 0x18) = pbVar3;
          iVar6 = (int)lVar8 - iVar6;
        }
        else {
          *(long *)(arg1 + 0x18) = lVar8;
          iVar6 = 0;
        }
      }
      *(int *)(arg1 + 0x20) = iVar6;
      *(uint32_t *)(arg1 + 0x24) = 0x21;
      return 0x21;
    }
    uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x118);
    return uVar4;
  case 0x22:
    pbVar7 = pbVar3 + 1;
    *(byte **)(arg1 + 0x30) = pbVar7;
    bVar5 = pbVar3[1];
    if ((bVar5 == 10) || (pbVar9 = pbVar7, bVar5 == 0xd)) goto LAB_00531de4;
    goto LAB_00532559;
  case 0x23:
    if (pbVar3[1] != 0x23) {
      if (iVar2 == 0) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        uVar4 = *(uint64_t *)(arg1 + 0x10);
        *(byte **)(arg1 + 0x10) = pbVar3 + 1;
        *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
        iVar6 = 1;
      }
      else {
        *(uint32_t *)(arg1 + 0x44) = 0;
        lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
        *(long *)(arg1 + 0x10) = lVar8;
        if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
          *(byte **)(arg1 + 0x18) = pbVar3;
          iVar6 = (int)lVar8 - iVar6;
        }
        else {
          *(long *)(arg1 + 0x18) = lVar8;
          iVar6 = 0;
        }
      }
      *(int *)(arg1 + 0x20) = iVar6;
      *(uint32_t *)(arg1 + 0x24) = 0x119;
      return 0x119;
    }
    uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x11a);
    return uVar4;
  case 0x25:
    if (pbVar3[1] != 0x3d) {
      if (iVar2 == 0) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        uVar4 = *(uint64_t *)(arg1 + 0x10);
        *(byte **)(arg1 + 0x10) = pbVar3 + 1;
        *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
        iVar6 = 1;
      }
      else {
        *(uint32_t *)(arg1 + 0x44) = 0;
        lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
        *(long *)(arg1 + 0x10) = lVar8;
        if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
          *(byte **)(arg1 + 0x18) = pbVar3;
          iVar6 = (int)lVar8 - iVar6;
        }
        else {
          *(long *)(arg1 + 0x18) = lVar8;
          iVar6 = 0;
        }
      }
      *(int *)(arg1 + 0x20) = iVar6;
      *(uint32_t *)(arg1 + 0x24) = 0x25;
      return 0x25;
    }
    uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x10b);
    return uVar4;
  case 0x26:
    if (pbVar3[1] == 0x26) {
      uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x113);
      return uVar4;
    }
    if (pbVar3[1] != 0x3d) {
      if (iVar2 == 0) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        uVar4 = *(uint64_t *)(arg1 + 0x10);
        *(byte **)(arg1 + 0x10) = pbVar3 + 1;
        *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
        iVar6 = 1;
      }
      else {
        *(uint32_t *)(arg1 + 0x44) = 0;
        lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
        *(long *)(arg1 + 0x10) = lVar8;
        if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
          *(byte **)(arg1 + 0x18) = pbVar3;
          iVar6 = (int)lVar8 - iVar6;
        }
        else {
          *(long *)(arg1 + 0x18) = lVar8;
          iVar6 = 0;
        }
      }
      *(int *)(arg1 + 0x20) = iVar6;
      *(uint32_t *)(arg1 + 0x24) = 0x26;
      return 0x26;
    }
    uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x10d);
    return uVar4;
  case 0x27:
    pbVar7 = pbVar3 + 1;
    *(byte **)(arg1 + 0x30) = pbVar7;
    bVar5 = pbVar3[1];
    if ((bVar5 == 10) || (pbVar9 = pbVar7, bVar5 == 0xd)) goto LAB_00531de4;
    goto LAB_00532623;
  case 0x28:
    if (iVar2 == 0) {
      *(byte **)(arg1 + 0x18) = pbVar3;
      uVar4 = *(uint64_t *)(arg1 + 0x10);
      *(byte **)(arg1 + 0x10) = pbVar3 + 1;
      *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
      iVar6 = 1;
    }
    else {
      *(uint32_t *)(arg1 + 0x44) = 0;
      lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
      *(long *)(arg1 + 0x10) = lVar8;
      if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        iVar6 = (int)lVar8 - iVar6;
      }
      else {
        *(long *)(arg1 + 0x18) = lVar8;
        iVar6 = 0;
      }
    }
    *(int *)(arg1 + 0x20) = iVar6;
    *(uint32_t *)(arg1 + 0x24) = 0x28;
    return 0x28;
  case 0x29:
    if (iVar2 == 0) {
      *(byte **)(arg1 + 0x18) = pbVar3;
      uVar4 = *(uint64_t *)(arg1 + 0x10);
      *(byte **)(arg1 + 0x10) = pbVar3 + 1;
      *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
      iVar6 = 1;
    }
    else {
      *(uint32_t *)(arg1 + 0x44) = 0;
      lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
      *(long *)(arg1 + 0x10) = lVar8;
      if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        iVar6 = (int)lVar8 - iVar6;
      }
      else {
        *(long *)(arg1 + 0x18) = lVar8;
        iVar6 = 0;
      }
    }
    *(int *)(arg1 + 0x20) = iVar6;
    *(uint32_t *)(arg1 + 0x24) = 0x29;
    return 0x29;
  case 0x2a:
    if (pbVar3[1] != 0x3d) {
      if (iVar2 == 0) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        uVar4 = *(uint64_t *)(arg1 + 0x10);
        *(byte **)(arg1 + 0x10) = pbVar3 + 1;
        *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
        iVar6 = 1;
      }
      else {
        *(uint32_t *)(arg1 + 0x44) = 0;
        lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
        *(long *)(arg1 + 0x10) = lVar8;
        if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
          *(byte **)(arg1 + 0x18) = pbVar3;
          iVar6 = (int)lVar8 - iVar6;
        }
        else {
          *(long *)(arg1 + 0x18) = lVar8;
          iVar6 = 0;
        }
      }
      *(int *)(arg1 + 0x20) = iVar6;
      *(uint32_t *)(arg1 + 0x24) = 0x2a;
      return 0x2a;
    }
    uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x109);
    return uVar4;
  case 0x2b:
    if (pbVar3[1] == 0x2b) {
      uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x10f);
      return uVar4;
    }
    if (pbVar3[1] != 0x3d) {
      if (iVar2 == 0) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        uVar4 = *(uint64_t *)(arg1 + 0x10);
        *(byte **)(arg1 + 0x10) = pbVar3 + 1;
        *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
        iVar6 = 1;
      }
      else {
        *(uint32_t *)(arg1 + 0x44) = 0;
        lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
        *(long *)(arg1 + 0x10) = lVar8;
        if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
          *(byte **)(arg1 + 0x18) = pbVar3;
          iVar6 = (int)lVar8 - iVar6;
        }
        else {
          *(long *)(arg1 + 0x18) = lVar8;
          iVar6 = 0;
        }
      }
      *(int *)(arg1 + 0x20) = iVar6;
      *(uint32_t *)(arg1 + 0x24) = 0x2b;
      return 0x2b;
    }
    uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x107);
    return uVar4;
  case 0x2c:
    if (iVar2 == 0) {
      *(byte **)(arg1 + 0x18) = pbVar3;
      uVar4 = *(uint64_t *)(arg1 + 0x10);
      *(byte **)(arg1 + 0x10) = pbVar3 + 1;
      *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
      iVar6 = 1;
    }
    else {
      *(uint32_t *)(arg1 + 0x44) = 0;
      lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
      *(long *)(arg1 + 0x10) = lVar8;
      if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        iVar6 = (int)lVar8 - iVar6;
      }
      else {
        *(long *)(arg1 + 0x18) = lVar8;
        iVar6 = 0;
      }
    }
    *(int *)(arg1 + 0x20) = iVar6;
    *(uint32_t *)(arg1 + 0x24) = 0x2c;
    return 0x2c;
  case 0x2d:
    if (pbVar3[1] == 0x2d) {
      uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x110);
      return uVar4;
    }
    if (pbVar3[1] != 0x3d) {
      if (iVar2 == 0) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        uVar4 = *(uint64_t *)(arg1 + 0x10);
        *(byte **)(arg1 + 0x10) = pbVar3 + 1;
        *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
        iVar6 = 1;
      }
      else {
        *(uint32_t *)(arg1 + 0x44) = 0;
        lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
        *(long *)(arg1 + 0x10) = lVar8;
        if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
          *(byte **)(arg1 + 0x18) = pbVar3;
          iVar6 = (int)lVar8 - iVar6;
        }
        else {
          *(long *)(arg1 + 0x18) = lVar8;
          iVar6 = 0;
        }
      }
      *(int *)(arg1 + 0x20) = iVar6;
      *(uint32_t *)(arg1 + 0x24) = 0x2d;
      return 0x2d;
    }
    uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x108);
    return uVar4;
  case 0x2e:
    pbVar9 = pbVar3 + 1;
    if ((pbVar3[1] < 0x30) || (0x39 < pbVar3[1])) {
      if (iVar2 == 0) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        *(int *)(arg1 + 0x44) =
             *(int *)(arg1 + 0x44) - ((int)pbVar9 - (int)*(uint64_t *)(arg1 + 0x10));
        *(byte **)(arg1 + 0x10) = pbVar9;
        iVar6 = (int)pbVar9 - iVar6;
      }
      else {
        *(uint32_t *)(arg1 + 0x44) = 0;
        lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
        *(long *)(arg1 + 0x10) = lVar8;
        if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
          *(byte **)(arg1 + 0x18) = pbVar3;
          iVar6 = (int)lVar8 - iVar6;
        }
        else {
          *(long *)(arg1 + 0x18) = lVar8;
          iVar6 = 0;
        }
      }
      *(int *)(arg1 + 0x20) = iVar6;
      *(uint32_t *)(arg1 + 0x24) = 0x2e;
      return 0x2e;
    }
    goto LAB_0053279a;
  case 0x2f:
    bVar5 = pbVar3[1];
    if (bVar5 < 0x2f) {
      if (bVar5 == 0x2a) {
        pbVar7 = pbVar3 + 2;
        bVar1 = false;
        pbVar9 = pbVar3;
LAB_00532703:
        pbVar3 = pbVar7;
        if (pbVar10 == pbVar7) goto LAB_00532728;
LAB_00532708:
        bVar5 = *pbVar3;
        if (0xc < bVar5) goto LAB_0053273f;
        do {
          if (bVar5 == 0) {
            if (iVar2 != 0) {
              *(uint32_t *)(arg1 + 0x44) = 0;
              pbVar3 = (byte *)((ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8));
              *(byte **)(arg1 + 0x10) = pbVar3;
              if ((pbVar9 < &sentinel) || (iVar2 = 0, &DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar9)) {
                iVar2 = (int)pbVar3 - (int)pbVar9;
                pbVar3 = pbVar9;
              }
              *(byte **)(arg1 + 0x18) = pbVar3;
              *(int *)(arg1 + 0x20) = iVar2;
              *(uint32_t *)(arg1 + 0x24) = 0x12a;
              return 0x12a;
            }
          }
          else if (bVar5 == 10) {
            pbVar7 = pbVar3 + 1;
            pbVar9 = pbVar3;
LAB_00532ce0:
            *(int *)(arg1 + 0x48) = *(int *)(arg1 + 0x48) + 1;
            bVar1 = true;
            goto LAB_00532703;
          }
          while( true ) {
            pbVar3 = pbVar3 + 1;
            if (pbVar10 != pbVar3) goto LAB_00532708;
LAB_00532728:
            pbVar3 = &sentinel;
            iVar2 = 1;
            pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
            bVar5 = sentinel;
            if (sentinel < 0xd) break;
LAB_0053273f:
            if (bVar5 == 0xd) {
              pbVar7 = pbVar3 + 1;
              pbVar9 = pbVar3;
              if (pbVar3[1] == 10) {
                pbVar7 = pbVar3 + 2;
              }
              goto LAB_00532ce0;
            }
            if ((bVar5 == 0x2a) && (pbVar3[1] == 0x2f)) {
              pbVar3 = pbVar3 + 2;
              if (bVar1) {
                uVar4 = update_state(arg1,iVar2,pbVar3,pbVar9,10);
                return uVar4;
              }
              if (*(int *)(arg1 + 0x38) != 0) {
                uVar4 = update_state(arg1,iVar2,pbVar3,pbVar9,0x20);
                return uVar4;
              }
              goto LAB_00531da7;
            }
          }
        } while( true );
      }
LAB_005339d4:
      uVar4 = update_state(arg1,iVar2,pbVar3 + 1,pbVar3,0x2f);
      return uVar4;
    }
    pbVar7 = pbVar3 + 2;
    if (bVar5 != 0x2f) {
      if (bVar5 == 0x3d) {
        uVar4 = update_state();
        return uVar4;
      }
      goto LAB_005339d4;
    }
LAB_00532367:
    do {
      if (pbVar10 == pbVar7) goto LAB_0053238e;
LAB_0053236c:
      bVar5 = *pbVar7;
      if (10 < bVar5) goto LAB_005323a6;
      while (bVar5 != 0) {
        if (bVar5 == 10) {
          pbVar3 = pbVar7 + 1;
LAB_005323bb:
          *(int *)(arg1 + 0x48) = *(int *)(arg1 + 0x48) + 1;
          if (iVar2 == 0) {
            uVar4 = *(uint64_t *)(arg1 + 0x10);
            *(byte **)(arg1 + 0x10) = pbVar3;
            *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)pbVar3 - (int)uVar4);
          }
          else {
            *(uint32_t *)(arg1 + 0x44) = 0;
            pbVar3 = (byte *)((ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8));
            *(byte **)(arg1 + 0x10) = pbVar3;
            if ((cNullColor + 0xf < pbVar7) && (pbVar7 < &DAT_0081ca28 /* R:1.395132751081788e-41f */)) {
              *(byte **)(arg1 + 0x18) = pbVar3;
              iVar2 = 0;
              goto LAB_005323f9;
            }
          }
          *(byte **)(arg1 + 0x18) = pbVar7;
          iVar2 = (int)pbVar3 - (int)pbVar7;
LAB_005323f9:
          *(int *)(arg1 + 0x20) = iVar2;
          *(uint32_t *)(arg1 + 0x24) = 10;
          return 10;
        }
        while( true ) {
          pbVar7 = pbVar7 + 1;
          if (pbVar10 != pbVar7) goto LAB_0053236c;
LAB_0053238e:
          pbVar7 = &sentinel;
          iVar2 = 1;
          pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
          bVar5 = sentinel;
          if (sentinel < 0xb) break;
LAB_005323a6:
          if (bVar5 == 0xd) {
            pbVar3 = pbVar7 + 1;
            if (pbVar7[1] == 10) {
              pbVar3 = pbVar7 + 2;
            }
            goto LAB_005323bb;
          }
        }
      }
      pbVar7 = pbVar7 + 1;
    } while (iVar2 == 0);
LAB_005328d7:
    uVar4 = update_state();
    return uVar4;
  case 0x30:
    pbVar9 = pbVar3 + 1;
    *(byte **)(arg1 + 0x30) = pbVar9;
    bVar5 = pbVar3[1];
    if (bVar5 < 0x59) {
      if (bVar5 < 0x55) {
        if (bVar5 != 0x4c) goto LAB_005324ee;
        goto LAB_00532461;
      }
      if (bVar5 == 0x55) goto LAB_00532461;
      if (bVar5 != 0x58) goto LAB_005324ee;
    }
    else {
      if (bVar5 < 0x75) {
        if (bVar5 != 0x6c) goto LAB_005333e3;
        goto LAB_00532461;
      }
      if (bVar5 == 0x75) goto LAB_00532461;
      if (bVar5 != 0x78) goto LAB_005333e3;
    }
    bVar5 = pbVar3[2];
    if (bVar5 < 0x41) {
      if ((bVar5 < 0x30) || (0x39 < bVar5)) goto LAB_00532639;
    }
    else if ((0x46 < bVar5) && ((bVar5 < 0x61 || (0x66 < bVar5)))) goto LAB_00532639;
    pbVar9 = pbVar3 + 2;
    goto LAB_00533a28;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    pbVar9 = pbVar3 + 1;
    *(byte **)(arg1 + 0x30) = pbVar9;
    bVar5 = pbVar3[1];
    goto joined_r0x00532418;
  case 0x3a:
    if (iVar2 == 0) {
      *(byte **)(arg1 + 0x18) = pbVar3;
      uVar4 = *(uint64_t *)(arg1 + 0x10);
      *(byte **)(arg1 + 0x10) = pbVar3 + 1;
      *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
      iVar6 = 1;
    }
    else {
      *(uint32_t *)(arg1 + 0x44) = 0;
      lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
      *(long *)(arg1 + 0x10) = lVar8;
      if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        iVar6 = (int)lVar8 - iVar6;
      }
      else {
        *(long *)(arg1 + 0x18) = lVar8;
        iVar6 = 0;
      }
    }
    *(int *)(arg1 + 0x20) = iVar6;
    *(uint32_t *)(arg1 + 0x24) = 0x3a;
    return 0x3a;
  case 0x3b:
    pbVar7 = pbVar3 + 1;
    if (*(int *)(arg1 + 0x3c) == 0) {
      uVar4 = update_state();
      return uVar4;
    }
    goto LAB_00532367;
  case 0x3c:
    bVar5 = pbVar3[1];
    if (0x3b < bVar5) {
      if (bVar5 == 0x3c) {
        if (pbVar3[2] != 0x3d) {
          uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x112);
          return uVar4;
        }
        uVar4 = update_state(arg1,iVar2,pbVar3 + 3,pbVar3,0x106);
        return uVar4;
      }
      if (bVar5 == 0x3d) {
        uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x115);
        return uVar4;
      }
    }
    if (iVar2 == 0) {
      *(byte **)(arg1 + 0x18) = pbVar3;
      uVar4 = *(uint64_t *)(arg1 + 0x10);
      *(byte **)(arg1 + 0x10) = pbVar3 + 1;
      *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
      iVar6 = 1;
    }
    else {
      *(uint32_t *)(arg1 + 0x44) = 0;
      lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
      *(long *)(arg1 + 0x10) = lVar8;
      if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        iVar6 = (int)lVar8 - iVar6;
      }
      else {
        *(long *)(arg1 + 0x18) = lVar8;
        iVar6 = 0;
      }
    }
    *(int *)(arg1 + 0x20) = iVar6;
    *(uint32_t *)(arg1 + 0x24) = 0x3c;
    return 0x3c;
  case 0x3d:
    if (pbVar3[1] != 0x3d) {
      if (iVar2 == 0) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        uVar4 = *(uint64_t *)(arg1 + 0x10);
        *(byte **)(arg1 + 0x10) = pbVar3 + 1;
        *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
        iVar6 = 1;
      }
      else {
        *(uint32_t *)(arg1 + 0x44) = 0;
        lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
        *(long *)(arg1 + 0x10) = lVar8;
        if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
          *(byte **)(arg1 + 0x18) = pbVar3;
          iVar6 = (int)lVar8 - iVar6;
        }
        else {
          *(long *)(arg1 + 0x18) = lVar8;
          iVar6 = 0;
        }
      }
      *(int *)(arg1 + 0x20) = iVar6;
      *(uint32_t *)(arg1 + 0x24) = 0x3d;
      return 0x3d;
    }
    uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x117);
    return uVar4;
  case 0x3e:
    bVar5 = pbVar3[1];
    if (0x3c < bVar5) {
      if (bVar5 == 0x3d) {
        uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x116);
        return uVar4;
      }
      if (bVar5 == 0x3e) {
        if (pbVar3[2] != 0x3d) {
          uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x111);
          return uVar4;
        }
        uVar4 = update_state(arg1,iVar2,pbVar3 + 3,pbVar3,0x105);
        return uVar4;
      }
    }
    if (iVar2 == 0) {
      *(byte **)(arg1 + 0x18) = pbVar3;
      uVar4 = *(uint64_t *)(arg1 + 0x10);
      *(byte **)(arg1 + 0x10) = pbVar3 + 1;
      *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
      iVar6 = 1;
    }
    else {
      *(uint32_t *)(arg1 + 0x44) = 0;
      lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
      *(long *)(arg1 + 0x10) = lVar8;
      if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        iVar6 = (int)lVar8 - iVar6;
      }
      else {
        *(long *)(arg1 + 0x18) = lVar8;
        iVar6 = 0;
      }
    }
    *(int *)(arg1 + 0x20) = iVar6;
    *(uint32_t *)(arg1 + 0x24) = 0x3e;
    return 0x3e;
  case 0x3f:
    if (iVar2 == 0) {
      *(byte **)(arg1 + 0x18) = pbVar3;
      uVar4 = *(uint64_t *)(arg1 + 0x10);
      *(byte **)(arg1 + 0x10) = pbVar3 + 1;
      *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
      iVar6 = 1;
    }
    else {
      *(uint32_t *)(arg1 + 0x44) = 0;
      lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
      *(long *)(arg1 + 0x10) = lVar8;
      if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        iVar6 = (int)lVar8 - iVar6;
      }
      else {
        *(long *)(arg1 + 0x18) = lVar8;
        iVar6 = 0;
      }
    }
    *(int *)(arg1 + 0x20) = iVar6;
    *(uint32_t *)(arg1 + 0x24) = 0x3f;
    return 0x3f;
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5f:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
    pbVar7 = pbVar3 + 1;
    bVar5 = pbVar3[1];
    goto LAB_0053224b;
  case 0x5b:
    if (iVar2 == 0) {
      *(byte **)(arg1 + 0x18) = pbVar3;
      uVar4 = *(uint64_t *)(arg1 + 0x10);
      *(byte **)(arg1 + 0x10) = pbVar3 + 1;
      *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
      iVar6 = 1;
    }
    else {
      *(uint32_t *)(arg1 + 0x44) = 0;
      lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
      *(long *)(arg1 + 0x10) = lVar8;
      if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        iVar6 = (int)lVar8 - iVar6;
      }
      else {
        *(long *)(arg1 + 0x18) = lVar8;
        iVar6 = 0;
      }
    }
    *(int *)(arg1 + 0x20) = iVar6;
    *(uint32_t *)(arg1 + 0x24) = 0x5b;
    return 0x5b;
  case 0x5c:
    pbVar7 = pbVar3 + 1;
    *(byte **)(arg1 + 0x30) = pbVar7;
    bVar5 = pbVar3[1];
    if ((bVar5 < 9) || ((pbVar9 = pbVar7, 0xd < bVar5 && (bVar5 != 0x20)))) goto LAB_00531de4;
LAB_00532934:
    if (bVar5 < 0xd) {
      if (bVar5 < 9) goto LAB_00531de4;
      if (bVar5 == 10) goto LAB_00533b84;
    }
    else {
      if (bVar5 == 0xd) {
        pbVar3 = pbVar9 + 1;
        pbVar7 = pbVar9 + 1;
        pbVar9 = pbVar3;
        if (*pbVar7 != 10) goto LAB_00533b88;
LAB_00533b84:
        pbVar3 = pbVar9 + 1;
LAB_00533b88:
        *(int *)(arg1 + 0x48) = *(int *)(arg1 + 0x48) + 1;
        goto LAB_00531da7;
      }
      if (bVar5 != 0x20) goto LAB_00531de4;
    }
    bVar5 = pbVar9[1];
    pbVar9 = pbVar9 + 1;
    goto LAB_00532934;
  case 0x5d:
    if (iVar2 == 0) {
      *(byte **)(arg1 + 0x18) = pbVar3;
      uVar4 = *(uint64_t *)(arg1 + 0x10);
      *(byte **)(arg1 + 0x10) = pbVar3 + 1;
      *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
      iVar6 = 1;
    }
    else {
      *(uint32_t *)(arg1 + 0x44) = 0;
      lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
      *(long *)(arg1 + 0x10) = lVar8;
      if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        iVar6 = (int)lVar8 - iVar6;
      }
      else {
        *(long *)(arg1 + 0x18) = lVar8;
        iVar6 = 0;
      }
    }
    *(int *)(arg1 + 0x20) = iVar6;
    *(uint32_t *)(arg1 + 0x24) = 0x5d;
    return 0x5d;
  case 0x5e:
    if (pbVar3[1] != 0x3d) {
      if (iVar2 == 0) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        uVar4 = *(uint64_t *)(arg1 + 0x10);
        *(byte **)(arg1 + 0x10) = pbVar3 + 1;
        *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
        iVar6 = 1;
      }
      else {
        *(uint32_t *)(arg1 + 0x44) = 0;
        lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
        *(long *)(arg1 + 0x10) = lVar8;
        if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
          *(byte **)(arg1 + 0x18) = pbVar3;
          iVar6 = (int)lVar8 - iVar6;
        }
        else {
          *(long *)(arg1 + 0x18) = lVar8;
          iVar6 = 0;
        }
      }
      *(int *)(arg1 + 0x20) = iVar6;
      *(uint32_t *)(arg1 + 0x24) = 0x5e;
      return 0x5e;
    }
    uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x10c);
    return uVar4;
  case 0x7b:
    if (iVar2 == 0) {
      *(byte **)(arg1 + 0x18) = pbVar3;
      uVar4 = *(uint64_t *)(arg1 + 0x10);
      *(byte **)(arg1 + 0x10) = pbVar3 + 1;
      *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
      iVar6 = 1;
    }
    else {
      *(uint32_t *)(arg1 + 0x44) = 0;
      lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
      *(long *)(arg1 + 0x10) = lVar8;
      if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        iVar6 = (int)lVar8 - iVar6;
      }
      else {
        *(long *)(arg1 + 0x18) = lVar8;
        iVar6 = 0;
      }
    }
    *(int *)(arg1 + 0x20) = iVar6;
    *(uint32_t *)(arg1 + 0x24) = 0x7b;
    return 0x7b;
  case 0x7c:
    if (pbVar3[1] == 0x3d) {
      uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x10e);
      return uVar4;
    }
    if (pbVar3[1] != 0x7c) {
      if (iVar2 == 0) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        uVar4 = *(uint64_t *)(arg1 + 0x10);
        *(byte **)(arg1 + 0x10) = pbVar3 + 1;
        *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
        iVar6 = 1;
      }
      else {
        *(uint32_t *)(arg1 + 0x44) = 0;
        lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
        *(long *)(arg1 + 0x10) = lVar8;
        if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
          *(byte **)(arg1 + 0x18) = pbVar3;
          iVar6 = (int)lVar8 - iVar6;
        }
        else {
          *(long *)(arg1 + 0x18) = lVar8;
          iVar6 = 0;
        }
      }
      *(int *)(arg1 + 0x20) = iVar6;
      *(uint32_t *)(arg1 + 0x24) = 0x7c;
      return 0x7c;
    }
    uVar4 = update_state(arg1,iVar2,pbVar3 + 2,pbVar3,0x114);
    return uVar4;
  case 0x7d:
    if (iVar2 == 0) {
      *(byte **)(arg1 + 0x18) = pbVar3;
      uVar4 = *(uint64_t *)(arg1 + 0x10);
      *(byte **)(arg1 + 0x10) = pbVar3 + 1;
      *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
      iVar6 = 1;
    }
    else {
      *(uint32_t *)(arg1 + 0x44) = 0;
      lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
      *(long *)(arg1 + 0x10) = lVar8;
      if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        iVar6 = (int)lVar8 - iVar6;
      }
      else {
        *(long *)(arg1 + 0x18) = lVar8;
        iVar6 = 0;
      }
    }
    *(int *)(arg1 + 0x20) = iVar6;
    *(uint32_t *)(arg1 + 0x24) = 0x7d;
    return 0x7d;
  case 0x7e:
    if (iVar2 == 0) {
      *(byte **)(arg1 + 0x18) = pbVar3;
      uVar4 = *(uint64_t *)(arg1 + 0x10);
      *(byte **)(arg1 + 0x10) = pbVar3 + 1;
      *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)(pbVar3 + 1) - (int)uVar4);
      iVar6 = 1;
    }
    else {
      *(uint32_t *)(arg1 + 0x44) = 0;
      lVar8 = (ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8);
      *(long *)(arg1 + 0x10) = lVar8;
      if ((pbVar3 < &sentinel) || (&DAT_0081ca27 /* R:3.571539842769377e-39f */ < pbVar3)) {
        *(byte **)(arg1 + 0x18) = pbVar3;
        iVar6 = (int)lVar8 - iVar6;
      }
      else {
        *(long *)(arg1 + 0x18) = lVar8;
        iVar6 = 0;
      }
    }
    *(int *)(arg1 + 0x20) = iVar6;
    *(uint32_t *)(arg1 + 0x24) = 0x7e;
    return 0x7e;
  }
  *(int *)(arg1 + 0x48) = *(int *)(arg1 + 0x48) + 1;
  if (iVar2 == 0) {
    uVar4 = *(uint64_t *)(arg1 + 0x10);
    *(byte **)(arg1 + 0x10) = pbVar10;
    *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)pbVar10 - (int)uVar4);
  }
  else {
    *(uint32_t *)(arg1 + 0x44) = 0;
    pbVar10 = (byte *)((ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8));
    *(byte **)(arg1 + 0x10) = pbVar10;
    if ((cNullColor + 0xf < pbVar3) && (pbVar3 < &DAT_0081ca28 /* R:1.395132751081788e-41f */)) {
      *(byte **)(arg1 + 0x18) = pbVar10;
      iVar6 = 0;
      goto LAB_00532a82;
    }
  }
  *(byte **)(arg1 + 0x18) = pbVar3;
  iVar6 = (int)pbVar10 - iVar6;
LAB_00532a82:
  *(int *)(arg1 + 0x20) = iVar6;
  *(uint32_t *)(arg1 + 0x24) = 10;
  return 10;
LAB_00531e15:
  if (iVar2 == 0) {
    uVar4 = *(uint64_t *)(arg1 + 0x10);
    *(byte **)(arg1 + 0x10) = pbVar7;
    *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)pbVar7 - (int)uVar4);
  }
  else {
    *(uint32_t *)(arg1 + 0x44) = 0;
    pbVar7 = (byte *)((ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8));
    *(byte **)(arg1 + 0x10) = pbVar7;
    if ((cNullColor + 0xf < pbVar3) && (pbVar3 < &DAT_0081ca28 /* R:1.395132751081788e-41f */)) {
      *(byte **)(arg1 + 0x18) = pbVar7;
      iVar6 = 0;
      goto LAB_00531f89;
    }
  }
  *(byte **)(arg1 + 0x18) = pbVar3;
  iVar6 = (int)pbVar7 - iVar6;
LAB_00531f89:
  *(int *)(arg1 + 0x20) = iVar6;
  *(uint32_t *)(arg1 + 0x24) = 0x11c;
  return 0x11c;
LAB_0053225b:
  if (iVar2 == 0) {
    uVar4 = *(uint64_t *)(arg1 + 0x10);
    *(byte **)(arg1 + 0x10) = pbVar7;
    *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)pbVar7 - (int)uVar4);
  }
  else {
    *(uint32_t *)(arg1 + 0x44) = 0;
    pbVar7 = (byte *)((ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8));
    *(byte **)(arg1 + 0x10) = pbVar7;
    if ((cNullColor + 0xf < pbVar3) && (pbVar3 < &DAT_0081ca28 /* R:1.395132751081788e-41f */)) {
      *(byte **)(arg1 + 0x18) = pbVar7;
      iVar6 = 0;
      goto LAB_00532296;
    }
  }
  *(byte **)(arg1 + 0x18) = pbVar3;
  iVar6 = (int)pbVar7 - iVar6;
LAB_00532296:
  *(int *)(arg1 + 0x20) = iVar6;
  *(uint32_t *)(arg1 + 0x24) = 0x101;
  return 0x101;
  while (bVar5 == 0x6c) {
LAB_00533a9c:
    pbVar9 = pbVar9 + 1;
    if (pbVar10 <= pbVar9) {
      iVar2 = 1;
      pbVar10 = &DAT_0081ca28 /* R:1.395132751081788e-41f */;
      pbVar9 = &sentinel;
    }
    bVar5 = *pbVar9;
    if (bVar5 < 0x56) {
      if ((bVar5 != 0x4c) && (bVar5 != 0x55)) break;
      goto LAB_00533a9c;
    }
    if (0x6c < bVar5) {
joined_r0x00533ad5:
      if (bVar5 != 0x75) break;
      goto LAB_00533a9c;
    }
  }
LAB_00532639:
  if (iVar2 == 0) {
    uVar4 = *(uint64_t *)(arg1 + 0x10);
    *(byte **)(arg1 + 0x10) = pbVar9;
    *(int *)(arg1 + 0x44) = *(int *)(arg1 + 0x44) - ((int)pbVar9 - (int)uVar4);
  }
  else {
    *(uint32_t *)(arg1 + 0x44) = 0;
    pbVar9 = (byte *)((ulong)*(uint *)(arg1 + 0x40) + *(long *)(arg1 + 8));
    *(byte **)(arg1 + 0x10) = pbVar9;
    if ((cNullColor + 0xf < pbVar3) && (pbVar3 < &DAT_0081ca28 /* R:1.395132751081788e-41f */)) {
      *(byte **)(arg1 + 0x18) = pbVar9;
      iVar6 = 0;
      goto LAB_00532671;
    }
  }
  *(byte **)(arg1 + 0x18) = pbVar3;
  iVar6 = (int)pbVar9 - iVar6;
LAB_00532671:
  *(int *)(arg1 + 0x20) = iVar6;
  *(uint32_t *)(arg1 + 0x24) = 0x102;
  return 0x102;
}

/* ======================================================================
 * impl_GLSL_MustPushConstantArrays  (Ghidra `impl_GLSL_MustPushConstantArrays` @ 00534240)
 * Signature: uint8_t impl_GLSL_MustPushConstantArrays(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
uint64_t impl_GLSL_MustPushConstantArrays(void)

{
  return 1;
}

/* ======================================================================
 * impl_GLSL_MustPushSamplers  (Ghidra `impl_GLSL_MustPushSamplers` @ 00534250)
 * Signature: uint8_t impl_GLSL_MustPushSamplers(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
uint64_t impl_GLSL_MustPushSamplers(void)

{
  return 1;
}

/* ======================================================================
 * impl_GLSL_MaxUniforms  (Ghidra `impl_GLSL_MaxUniforms` @ 00534260)
 * Signature: uint8_t impl_GLSL_MaxUniforms(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
uint32_t impl_GLSL_MaxUniforms(int arg1)

{
  uint64_t uVar1;
  uint32_t local_18 [6];
  
  local_18[0] = 0;
  if (arg1 == 2) {
    uVar1 = 0x8b4a;
  }
  else {
    if (arg1 != 1) {
      return 0xffffffff;
    }
    uVar1 = 0x8b49;
  }
  (**(code **)(ctx + 0x51108))(uVar1,local_18);
  return local_18[0];
}

/* ======================================================================
 * impl_GLSL_CompileShader  (Ghidra `impl_GLSL_CompileShader` @ 005342b0)
 * Signature: uint8_t impl_GLSL_CompileShader(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
uint64_t impl_GLSL_CompileShader(long arg1,uint32_t *arg2)

{
  uint32_t uVar1;
  uint64_t uVar2;
  int local_38 [4];
  uint32_t local_28 [3];
  uint32_t local_1c;
  
  local_28[0] = *(uint32_t *)(arg1 + 0x20);
  local_38[0] = 0;
  uVar2 = 0x8b31;
  if ((*(int *)(arg1 + 0x28) != 2) && (uVar2 = 0x8b30, *(int *)(arg1 + 0x28) != 1)) {
    uVar2 = 0;
  }
  if (*(int *)(ctx + 0x510bc) == 0) {
    uVar1 = (**(code **)(ctx + 0x511e8))(uVar2);
    (**(code **)(ctx + 0x51228))(uVar1,1,arg1 + 0x18,local_28);
    (**(code **)(ctx + 0x511d8))(uVar1);
    (**(code **)(ctx + 0x51210))(uVar1,0x8b81,local_38);
  }
  else {
    uVar1 = (**(code **)(ctx + 0x51140))();
    (**(code **)(ctx + 0x51190))(uVar1,1,arg1 + 0x18,local_28);
    (**(code **)(ctx + 0x51138))(uVar1);
    (**(code **)(ctx + 0x51170))(uVar1,0x8b81,local_38);
  }
  if (local_38[0] != 0) {
    *arg2 = uVar1;
    return 1;
  }
  local_1c = 0;
  (**(code **)(ctx + 0x51208))(uVar1,0x400,&local_1c,error_buffer);
  *arg2 = 0;
  return 0;
}

/* ======================================================================
 * impl_GLSL_GetUniformLocation  (Ghidra `impl_GLSL_GetUniformLocation` @ 005343f0)
 * Signature: uint8_t impl_GLSL_GetUniformLocation(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
uint64_t impl_GLSL_GetUniformLocation(void)

{
  return 0;
}

/* ======================================================================
 * impl_GLSL_GetAttribLocation  (Ghidra `impl_GLSL_GetAttribLocation` @ 00534400)
 * Signature: uint8_t impl_GLSL_GetAttribLocation(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_GLSL_GetAttribLocation(uint64_t *arg1,int arg2)

{
  if (*(int *)(ctx + 0x510bc) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00534433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(ctx + 0x51200))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0053443f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(ctx + 0x51160))
            (*(uint32_t *)(arg1 + 2),
             *(uint64_t *)(*(long *)(*(long *)*arg1 + 0x68) + 8 + (long)arg2 * 0x10));
  return;
}

/* ======================================================================
 * impl_GLSL_LinkProgram  (Ghidra `impl_GLSL_LinkProgram` @ 00534450)
 * Signature: uint8_t impl_GLSL_LinkProgram(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
uint32_t impl_GLSL_LinkProgram(long arg1,long arg2)

{
  uint32_t uVar1;
  int local_28 [3];
  uint32_t local_1c;
  
  local_28[0] = 0;
  if (*(int *)(ctx + 0x510bc) == 0) {
    uVar1 = (**(code **)(ctx + 0x511e0))();
    if (arg1 != 0) {
      (**(code **)(ctx + 0x511d0))(uVar1,*(uint32_t *)(arg1 + 8));
    }
    if (arg2 != 0) {
      (**(code **)(ctx + 0x511d0))(uVar1,*(uint32_t *)(arg2 + 8));
    }
    (**(code **)(ctx + 0x51220))(uVar1);
    (**(code **)(ctx + 0x51210))(uVar1,0x8b82,local_28);
    if (local_28[0] == 0) {
      local_1c = 0;
      (**(code **)(ctx + 0x51208))(uVar1,0x400,&local_1c,error_buffer);
      (**(code **)(ctx + 0x511c8))(uVar1);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = (**(code **)(ctx + 0x51148))();
    if (arg1 != 0) {
      (**(code **)(ctx + 0x51130))(uVar1,*(uint32_t *)(arg1 + 8));
    }
    if (arg2 != 0) {
      (**(code **)(ctx + 0x51130))(uVar1,*(uint32_t *)(arg2 + 8));
    }
    (**(code **)(ctx + 0x51188))(uVar1);
    (**(code **)(ctx + 0x51178))(uVar1,0x8b82,local_28);
    if (local_28[0] == 0) {
      local_1c = 0;
      (**(code **)(ctx + 0x51168))(uVar1,0x400,&local_1c,error_buffer);
      (**(code **)(ctx + 0x51128))(uVar1);
      uVar1 = 0;
    }
  }
  return uVar1;
}

/* ======================================================================
 * impl_GLSL_PushUniforms  (Ghidra `impl_GLSL_PushUniforms` @ 00534610)
 * Signature: uint8_t impl_GLSL_PushUniforms(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_GLSL_PushUniforms(void)

{
  long lVar1;
  
  lVar1 = *(long *)(ctx + 0x510a0);
  if (*(int *)(lVar1 + 0xc0) != -1) {
    (**(code **)(ctx + 0x511a8))
              (*(int *)(lVar1 + 0xc0),*(uint64_t *)(lVar1 + 0x38),*(uint64_t *)(lVar1 + 0x40));
  }
  if (*(int *)(lVar1 + 0xc4) != -1) {
    (**(code **)(ctx + 0x511b0))
              (*(int *)(lVar1 + 0xc4),*(uint64_t *)(lVar1 + 0x48),*(uint64_t *)(lVar1 + 0x50));
  }
  if (*(int *)(lVar1 + 200) != -1) {
    (**(code **)(ctx + 0x511a0))
              (*(int *)(lVar1 + 200),*(uint64_t *)(lVar1 + 0x58),*(uint64_t *)(lVar1 + 0x60));
  }
  if (*(int *)(lVar1 + 0xcc) != -1) {
    (**(code **)(ctx + 0x511a8))
              (*(int *)(lVar1 + 0xcc),*(uint64_t *)(lVar1 + 0x68),*(uint64_t *)(lVar1 + 0x70));
  }
  if (*(int *)(lVar1 + 0xd0) != -1) {
    (**(code **)(ctx + 0x511b0))
              (*(int *)(lVar1 + 0xd0),*(uint64_t *)(lVar1 + 0x78),*(uint64_t *)(lVar1 + 0x80));
  }
  if (*(int *)(lVar1 + 0xd4) != -1) {
                    /* WARNING: Could not recover jumptable at 0x005346e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(ctx + 0x511a0))
              (*(int *)(lVar1 + 0xd4),*(uint64_t *)(lVar1 + 0x88),*(uint64_t *)(lVar1 + 0x90));
    return;
  }
  return;
}

/* ======================================================================
 * impl_GLSL_PushSampler  (Ghidra `impl_GLSL_PushSampler` @ 005346f0)
 * Signature: uint8_t impl_GLSL_PushSampler(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_GLSL_PushSampler(void)

{
                    /* WARNING: Could not recover jumptable at 0x005346fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(ctx + 0x51198))();
  return;
}

/* ======================================================================
 * impl_ARB1_MustPushConstantArrays  (Ghidra `impl_ARB1_MustPushConstantArrays` @ 00534700)
 * Signature: uint8_t impl_ARB1_MustPushConstantArrays(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
uint64_t impl_ARB1_MustPushConstantArrays(void)

{
  return 0;
}

/* ======================================================================
 * impl_ARB1_MustPushSamplers  (Ghidra `impl_ARB1_MustPushSamplers` @ 00534710)
 * Signature: uint8_t impl_ARB1_MustPushSamplers(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
uint64_t impl_ARB1_MustPushSamplers(void)

{
  return 0;
}

/* ======================================================================
 * impl_ARB1_MaxUniforms  (Ghidra `impl_ARB1_MaxUniforms` @ 00534720)
 * Signature: uint8_t impl_ARB1_MaxUniforms(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
uint32_t impl_ARB1_MaxUniforms(int arg1)

{
  uint64_t uVar1;
  uint32_t local_18 [6];
  
  local_18[0] = 0;
  if (arg1 == 2) {
    uVar1 = 0x8620;
  }
  else {
    if (arg1 != 1) {
      return 0xffffffff;
    }
    uVar1 = 0x8804;
  }
  (**(code **)(ctx + 0x51260))(uVar1,0x88a9,local_18);
  return local_18[0];
}

/* ======================================================================
 * impl_ARB1_DeleteShader  (Ghidra `impl_ARB1_DeleteShader` @ 00534770)
 * Signature: uint8_t impl_ARB1_DeleteShader(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_ARB1_DeleteShader(uint32_t arg1)

{
  uint32_t local_c [3];
  
  local_c[0] = arg1;
  (**(code **)(ctx + 0x51278))(1,local_c);
  return;
}

/* ======================================================================
 * impl_ARB1_DeleteProgram  (Ghidra `impl_ARB1_DeleteProgram` @ 005347a0)
 * Signature: uint8_t impl_ARB1_DeleteProgram(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_ARB1_DeleteProgram(void)

{
  return;
}

/* ======================================================================
 * impl_ARB1_GetUniformLocation  (Ghidra `impl_ARB1_GetUniformLocation` @ 005347b0)
 * Signature: uint8_t impl_ARB1_GetUniformLocation(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
uint64_t impl_ARB1_GetUniformLocation(void)

{
  return 0;
}

/* ======================================================================
 * impl_ARB1_GetSamplerLocation  (Ghidra `impl_ARB1_GetSamplerLocation` @ 005347c0)
 * Signature: uint8_t impl_ARB1_GetSamplerLocation(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
uint32_t impl_ARB1_GetSamplerLocation(uint64_t arg1,long *arg2,int arg3)

{
  return *(uint32_t *)((long)arg3 * 0x10 + *(long *)(*arg2 + 0x58) + 4);
}

/* ======================================================================
 * impl_ARB1_GetAttribLocation  (Ghidra `impl_ARB1_GetAttribLocation` @ 005347e0)
 * Signature: uint8_t impl_ARB1_GetAttribLocation(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
uint32_t impl_ARB1_GetAttribLocation(uint64_t arg1,uint32_t arg2)

{
  return arg2;
}

/* ======================================================================
 * impl_ARB1_LinkProgram  (Ghidra `impl_ARB1_LinkProgram` @ 005347f0)
 * Signature: uint8_t impl_ARB1_LinkProgram(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_ARB1_LinkProgram(void)

{
  retval_10870 = retval_10870 + 1;
  return;
}

/* ======================================================================
 * impl_ARB1_FinalInitProgram  (Ghidra `impl_ARB1_FinalInitProgram` @ 00534800)
 * Signature: uint8_t impl_ARB1_FinalInitProgram(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_ARB1_FinalInitProgram(void)

{
  return;
}

/* ======================================================================
 * impl_ARB1_UseProgram  (Ghidra `impl_ARB1_UseProgram` @ 00534810)
 * Signature: uint8_t impl_ARB1_UseProgram(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_ARB1_UseProgram(long *arg1)

{
  int iVar1;
  int iVar2;
  
  if (arg1 == (long *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    if (*arg1 != 0) {
      iVar2 = *(int *)(*arg1 + 8);
    }
    iVar1 = 0;
    if (arg1[1] != 0) {
      iVar1 = *(int *)(arg1[1] + 8);
    }
    if (iVar2 != 0) {
      (**(code **)(ctx + 0x51110))(0x8620);
      goto joined_r0x005348bc;
    }
  }
  iVar2 = 0;
  (**(code **)(ctx + 0x51118))(0x8620);
joined_r0x005348bc:
  if (iVar1 == 0) {
    (**(code **)(ctx + 0x51118))();
  }
  else {
    (**(code **)(ctx + 0x51110))(0x8804);
  }
  (**(code **)(ctx + 0x51288))(0x8620,iVar2);
                    /* WARNING: Could not recover jumptable at 0x00534891. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(ctx + 0x51288))(0x8804,iVar1);
  return;
}

/* ======================================================================
 * impl_ARB1_PushConstantArray  (Ghidra `impl_ARB1_PushConstantArray` @ 005348d0)
 * Signature: uint8_t impl_ARB1_PushConstantArray(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_ARB1_PushConstantArray(void)

{
  return;
}

/* ======================================================================
 * impl_ARB1_PushUniforms  (Ghidra `impl_ARB1_PushUniforms` @ 005348e0)
 * Signature: uint8_t impl_ARB1_PushUniforms(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_ARB1_PushUniforms(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint32_t uVar11;
  int iVar12;
  long local_80;
  int local_74;
  long local_68;
  int *local_58;
  long local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  lVar4 = *(long *)(ctx + 0x510a0);
  iVar2 = *(int *)(lVar4 + 0x18);
  local_68 = *(long *)(lVar4 + 0x40);
  local_58 = *(int **)(lVar4 + 0x50);
  local_50 = *(long *)(lVar4 + 0x60);
  if (iVar2 != 0) {
    local_80 = 0;
    iVar12 = 0;
    uVar11 = 0x8620;
    local_74 = 2;
    do {
      piVar6 = (int *)(local_80 + *(long *)(lVar4 + 0x20));
      iVar7 = *piVar6;
      piVar6 = *(int **)(piVar6 + 2);
      uVar3 = piVar6[2];
      iVar8 = *piVar6;
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      if (local_74 != iVar7) {
        if (iVar7 == 1) {
          iVar12 = 0;
          uVar11 = 0x8804;
          local_74 = 1;
          local_68 = *(long *)(lVar4 + 0x70);
          local_58 = *(int **)(lVar4 + 0x80);
          local_50 = *(long *)(lVar4 + 0x90);
        }
        else {
          uVar11 = 0;
          local_74 = iVar7;
          if (iVar7 == 2) {
            uVar11 = 0x8620;
          }
        }
      }
      if (iVar8 == 0) {
        if (0 < (int)uVar3) {
          lVar9 = local_68;
          iVar7 = iVar12;
          do {
            iVar8 = iVar7 + 1;
            (**(code **)(ctx + 0x51268))(uVar11,iVar7,lVar9);
            lVar9 = lVar9 + 0x10;
            iVar7 = iVar8;
          } while (iVar8 != iVar12 + uVar3);
          iVar12 = iVar12 + 1 + (uVar3 - 1);
          local_68 = local_68 + ((ulong)(uVar3 - 1) + 1) * 0x10;
        }
      }
      else if (iVar8 == 1) {
        if (*(int *)(ctx + 0x510d4) == 0) {
          piVar6 = local_58;
          uVar5 = 0;
          if (0 < (int)uVar3) {
            do {
              uVar10 = uVar5;
              local_48 = (float)*piVar6;
              iVar7 = (int)uVar10;
              local_44 = (float)piVar6[1];
              local_40 = (float)piVar6[2];
              local_3c = (float)piVar6[3];
              piVar6 = piVar6 + 4;
              (**(code **)(ctx + 0x51268))(uVar11,iVar7 + iVar12,&local_48);
              uVar5 = (ulong)(iVar7 + 1U);
            } while (iVar7 + 1U != uVar3);
            iVar12 = iVar12 + 1 + iVar7;
            local_58 = local_58 + (uVar10 + 1) * 4;
          }
        }
        else if (0 < (int)uVar3) {
          iVar7 = 0;
          piVar6 = local_58;
          do {
            iVar8 = iVar12 + iVar7;
            iVar7 = iVar7 + 1;
            (**(code **)(ctx + 0x51270))(uVar11,iVar8,piVar6);
            piVar6 = piVar6 + 4;
          } while (iVar7 < (int)uVar3);
          iVar12 = iVar12 + 1 + (uVar3 - 1);
          local_58 = local_58 + ((ulong)(uVar3 - 1) + 1) * 4;
        }
      }
      else if (iVar8 == 2) {
        if (*(int *)(ctx + 0x510d4) == 0) {
          lVar9 = 0;
          if (0 < (int)uVar3) {
            do {
              local_48 = 0.0;
              if (*(int *)(local_50 + lVar9 * 4) != 0) {
                local_48 = 1.0;
              }
              iVar7 = (int)lVar9;
              lVar9 = lVar9 + 1;
              local_44 = local_48;
              local_40 = local_48;
              local_3c = local_48;
              (**(code **)(ctx + 0x51268))(uVar11,iVar12 + iVar7,&local_48);
            } while ((int)lVar9 < (int)uVar3);
LAB_00534a9b:
            iVar12 = iVar12 + 1 + (uVar3 - 1);
            local_50 = local_50 + 4 + (ulong)(uVar3 - 1) * 4;
          }
        }
        else if (0 < (int)uVar3) {
          lVar9 = 0;
          do {
            lVar1 = lVar9 * 4;
            iVar7 = (int)lVar9;
            lVar9 = lVar9 + 1;
            local_48 = (float)(uint)(*(int *)(local_50 + lVar1) != 0);
            local_44 = local_48;
            local_40 = local_48;
            local_3c = local_48;
            (**(code **)(ctx + 0x51270))(uVar11,iVar12 + iVar7,&local_48);
          } while ((int)lVar9 < (int)uVar3);
          goto LAB_00534a9b;
        }
      }
      local_80 = local_80 + 0x18;
    } while (local_80 != ((ulong)(iVar2 - 1) * 3 + 3) * 8);
  }
  return;
}

/* ======================================================================
 * impl_ARB1_PushSampler  (Ghidra `impl_ARB1_PushSampler` @ 00534c70)
 * Signature: uint8_t impl_ARB1_PushSampler(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_ARB1_PushSampler(void)

{
  return;
}

/* ======================================================================
 * lookup_entry_points  (Ghidra `lookup_entry_points` @ 00534c80)
 * Signature: uint8_t lookup_entry_points(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glDestroyContext`, `load_extensions`
 */
void lookup_entry_points(code *arg1,uint64_t arg2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = ctx;
  if ((arg1 == (code *)0x0) || (lVar1 = (*arg1)("glGetString"), lVar3 = ctx, lVar1 == 0)) {
    lVar3 = ctx;
    *(uint32_t *)(lVar4 + 0x510b8) = 0;
    *(uint64_t *)(lVar4 + 0x510f8) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00534cbc;
LAB_005353b5:
    *(uint32_t *)(lVar3 + 0x510b8) = 0;
    *(uint64_t *)(lVar3 + 0x51100) = 0;
    lVar1 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00534cde;
LAB_005353d6:
    *(uint32_t *)(lVar1 + 0x510b8) = 0;
    *(uint64_t *)(lVar1 + 0x51108) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00534cff;
LAB_005353f8:
    *(uint32_t *)(lVar4 + 0x510b8) = 0;
    *(uint64_t *)(lVar4 + 0x51110) = 0;
    lVar1 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00534d21;
LAB_0053541c:
    *(uint32_t *)(lVar1 + 0x510b8) = 0;
    *(uint64_t *)(lVar1 + 0x51118) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00534d42;
LAB_0053543e:
    *(uint32_t *)(lVar3 + 0x510bc) = 0;
    *(uint64_t *)(lVar3 + 0x51120) = 0;
    lVar1 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00534d64;
LAB_0053545f:
    *(uint32_t *)(lVar1 + 0x510bc) = 0;
    *(uint64_t *)(lVar1 + 0x51128) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00534d85;
LAB_00535481:
    *(uint32_t *)(lVar4 + 0x510bc) = 0;
    *(uint64_t *)(lVar4 + 0x51130) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00534da7;
LAB_005354a2:
    *(uint32_t *)(lVar3 + 0x510bc) = 0;
    *(uint64_t *)(lVar3 + 0x51138) = 0;
    lVar1 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00534dc8;
LAB_005354c6:
    *(uint32_t *)(lVar1 + 0x510bc) = 0;
    *(uint64_t *)(lVar1 + 0x51140) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00534de9;
LAB_005354e8:
    *(uint32_t *)(lVar4 + 0x510bc) = 0;
    *(uint64_t *)(lVar4 + 0x51148) = 0;
    lVar1 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00534e0a;
LAB_0053550a:
    *(uint32_t *)(lVar1 + 0x510bc) = 0;
    *(uint64_t *)(lVar1 + 0x51150) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00534e2b;
LAB_0053552c:
    *(uint32_t *)(lVar3 + 0x510bc) = 0;
    *(uint64_t *)(lVar3 + 0x51158) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00534e4d;
LAB_00535550:
    *(uint32_t *)(lVar4 + 0x510bc) = 0;
    *(uint64_t *)(lVar4 + 0x51160) = 0;
    lVar1 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00534e6e;
LAB_00535572:
    *(uint32_t *)(lVar1 + 0x510bc) = 0;
    *(uint64_t *)(lVar1 + 0x51168) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00534e8f;
LAB_00535594:
    *(uint32_t *)(lVar3 + 0x510bc) = 0;
    *(uint64_t *)(lVar3 + 0x51170) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00534eb1;
LAB_005355b8:
    *(uint32_t *)(lVar4 + 0x510bc) = 0;
    *(uint64_t *)(lVar4 + 0x51178) = 0;
    lVar1 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00534ed2;
LAB_005355da:
    *(uint32_t *)(lVar1 + 0x510bc) = 0;
    *(uint64_t *)(lVar1 + 0x51180) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00534ef3;
LAB_005355fc:
    *(uint32_t *)(lVar3 + 0x510bc) = 0;
    *(uint64_t *)(lVar3 + 0x51188) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00534f15;
LAB_00535620:
    *(uint32_t *)(lVar4 + 0x510bc) = 0;
    *(uint64_t *)(lVar4 + 0x51190) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00534f36;
LAB_00535642:
    *(uint32_t *)(lVar3 + 0x510bc) = 0;
    *(uint64_t *)(lVar3 + 0x51198) = 0;
    lVar1 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00534f58;
LAB_00535666:
    *(uint32_t *)(lVar1 + 0x510bc) = 0;
    *(uint64_t *)(lVar1 + 0x511a0) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00534f79;
LAB_00535688:
    *(uint32_t *)(lVar4 + 0x510bc) = 0;
    *(uint64_t *)(lVar4 + 0x511a8) = 0;
    lVar1 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00534f9b;
LAB_005356a9:
    *(uint32_t *)(lVar1 + 0x510bc) = 0;
    *(uint64_t *)(lVar1 + 0x511b0) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00534fbc;
LAB_005356cb:
    *(uint32_t *)(lVar3 + 0x510bc) = 0;
    *(uint64_t *)(lVar3 + 0x511b8) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00534fde;
LAB_005356ef:
    *(uint32_t *)(lVar4 + 0x510bc) = 0;
    *(uint64_t *)(lVar4 + 0x511c0) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00534fff;
LAB_00535711:
    *(uint32_t *)(lVar3 + 0x510d8) = 0;
    *(uint64_t *)(lVar3 + 0x511c8) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00535021;
LAB_00535735:
    *(uint32_t *)(lVar4 + 0x510d8) = 0;
    *(uint64_t *)(lVar4 + 0x511d0) = 0;
    lVar1 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00535042;
LAB_00535757:
    *(uint32_t *)(lVar1 + 0x510d8) = 0;
    *(uint64_t *)(lVar1 + 0x511d8) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00535063;
LAB_00535779:
    *(uint32_t *)(lVar3 + 0x510d8) = 0;
    *(uint64_t *)(lVar3 + 0x511e0) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00535085;
LAB_0053579a:
    *(uint32_t *)(lVar4 + 0x510d8) = 0;
    *(uint64_t *)(lVar4 + 0x511e8) = 0;
    lVar1 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_005350a6;
LAB_005357bc:
    *(uint32_t *)(lVar1 + 0x510d8) = 0;
    *(uint64_t *)(lVar1 + 0x51208) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_005350c7;
LAB_005357de:
    *(uint32_t *)(lVar3 + 0x510d8) = 0;
    *(uint64_t *)(lVar3 + 0x51210) = 0;
    lVar1 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_005350e9;
LAB_005357ff:
    *(uint32_t *)(lVar1 + 0x510d8) = 0;
    *(uint64_t *)(lVar1 + 0x51218) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_0053510a;
LAB_00535821:
    *(uint32_t *)(lVar4 + 0x510d8) = 0;
    *(uint64_t *)(lVar4 + 0x51220) = 0;
    lVar1 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_0053512c;
LAB_00535842:
    *(uint32_t *)(lVar1 + 0x510d8) = 0;
    *(uint64_t *)(lVar1 + 0x51228) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_0053514d;
LAB_00535864:
    *(uint32_t *)(lVar3 + 0x510d8) = 0;
    *(uint64_t *)(lVar3 + 0x51230) = 0;
    lVar1 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_0053516f;
LAB_00535885:
    *(uint32_t *)(lVar1 + 0x510d8) = 0;
    *(uint64_t *)(lVar1 + 0x51238) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00535190;
LAB_005358a7:
    *(uint32_t *)(lVar4 + 0x510d8) = 0;
    *(uint64_t *)(lVar4 + 0x51240) = 0;
    lVar1 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_005351b2;
LAB_005358c8:
    *(uint32_t *)(lVar1 + 0x510d8) = 0;
    *(uint64_t *)(lVar1 + 0x51248) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_005351d3;
LAB_005358ea:
    *(uint32_t *)(lVar3 + 0x510d8) = 0;
    *(uint64_t *)(lVar3 + 0x51250) = 0;
    lVar1 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_005351f5;
LAB_0053590b:
    *(uint32_t *)(lVar1 + 0x510dc) = 0;
    *(uint64_t *)(lVar1 + 0x511f0) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00535216;
LAB_0053592d:
    *(uint32_t *)(lVar4 + 0x510dc) = 0;
    *(uint64_t *)(lVar4 + 0x511f8) = 0;
    lVar1 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00535238;
LAB_0053594e:
    *(uint32_t *)(lVar1 + 0x510dc) = 0;
    *(uint64_t *)(lVar1 + 0x51200) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00535259;
LAB_00535970:
    *(uint32_t *)(lVar3 + 0x510dc) = 0;
    *(uint64_t *)(lVar3 + 0x51258) = 0;
    lVar1 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_0053527b;
LAB_00535991:
    *(uint32_t *)(lVar1 + 0x510c0) = 0;
    *(uint64_t *)(lVar1 + 0x51258) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_0053529c;
LAB_005359b3:
    *(uint32_t *)(lVar4 + 0x510c0) = 0;
    *(uint64_t *)(lVar4 + 0x51260) = 0;
    lVar1 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_005352be;
LAB_005359d4:
    *(uint32_t *)(lVar1 + 0x510c0) = 0;
    *(uint64_t *)(lVar1 + 0x51268) = 0;
    lVar4 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_005352df;
LAB_005359f6:
    *(uint32_t *)(lVar3 + 0x510c0) = 0;
    *(uint64_t *)(lVar3 + 0x51278) = 0;
    lVar1 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00535301;
LAB_00535a17:
    *(uint32_t *)(lVar1 + 0x510c0) = 0;
    *(uint64_t *)(lVar1 + 0x51280) = 0;
    lVar3 = lVar4;
    if (arg1 != (code *)0x0) goto LAB_00535322;
LAB_00535a39:
    *(uint32_t *)(lVar4 + 0x510c0) = 0;
    *(uint64_t *)(lVar4 + 0x51288) = 0;
    lVar1 = lVar3;
    if (arg1 != (code *)0x0) goto LAB_00535344;
LAB_00535a5a:
    *(uint32_t *)(lVar1 + 0x510c0) = 0;
    *(uint64_t *)(lVar1 + 0x51290) = 0;
    if (arg1 != (code *)0x0) goto LAB_00535365;
  }
  else {
    *(long *)(lVar4 + 0x510f8) = lVar1;
LAB_00534cbc:
    lVar2 = (*arg1)("glGetError",arg2);
    lVar1 = ctx;
    lVar4 = ctx;
    if (lVar2 == 0) goto LAB_005353b5;
    *(long *)(lVar3 + 0x51100) = lVar2;
LAB_00534cde:
    lVar3 = (*arg1)("glGetIntegerv",arg2);
    lVar4 = ctx;
    if (lVar3 == 0) goto LAB_005353d6;
    *(long *)(lVar1 + 0x51108) = lVar3;
LAB_00534cff:
    lVar2 = (*arg1)("glEnable",arg2);
    lVar1 = ctx;
    lVar3 = ctx;
    if (lVar2 == 0) goto LAB_005353f8;
    *(long *)(lVar4 + 0x51110) = lVar2;
LAB_00534d21:
    lVar4 = (*arg1)("glDisable",arg2);
    lVar3 = ctx;
    if (lVar4 == 0) goto LAB_0053541c;
    *(long *)(lVar1 + 0x51118) = lVar4;
LAB_00534d42:
    lVar2 = (*arg1)("glDeleteShader",arg2);
    lVar1 = ctx;
    lVar4 = ctx;
    if (lVar2 == 0) goto LAB_0053543e;
    *(long *)(lVar3 + 0x51120) = lVar2;
LAB_00534d64:
    lVar3 = (*arg1)("glDeleteProgram",arg2);
    lVar4 = ctx;
    if (lVar3 == 0) goto LAB_0053545f;
    *(long *)(lVar1 + 0x51128) = lVar3;
LAB_00534d85:
    lVar1 = (*arg1)("glAttachShader",arg2);
    lVar3 = ctx;
    if (lVar1 == 0) goto LAB_00535481;
    *(long *)(lVar4 + 0x51130) = lVar1;
LAB_00534da7:
    lVar2 = (*arg1)("glCompileShader",arg2);
    lVar1 = ctx;
    lVar4 = ctx;
    if (lVar2 == 0) goto LAB_005354a2;
    *(long *)(lVar3 + 0x51138) = lVar2;
LAB_00534dc8:
    lVar3 = (*arg1)("glCreateShader",arg2);
    lVar4 = ctx;
    if (lVar3 == 0) goto LAB_005354c6;
    *(long *)(lVar1 + 0x51140) = lVar3;
LAB_00534de9:
    lVar2 = (*arg1)("glCreateProgram",arg2);
    lVar1 = ctx;
    lVar3 = ctx;
    if (lVar2 == 0) goto LAB_005354e8;
    *(long *)(lVar4 + 0x51148) = lVar2;
LAB_00534e0a:
    lVar4 = (*arg1)("glDisableVertexAttribArray",arg2);
    lVar3 = ctx;
    if (lVar4 == 0) goto LAB_0053550a;
    *(long *)(lVar1 + 0x51150) = lVar4;
LAB_00534e2b:
    lVar1 = (*arg1)("glEnableVertexAttribArray",arg2);
    lVar4 = ctx;
    if (lVar1 == 0) goto LAB_0053552c;
    *(long *)(lVar3 + 0x51158) = lVar1;
LAB_00534e4d:
    lVar2 = (*arg1)("glGetAttribLocation",arg2);
    lVar1 = ctx;
    lVar3 = ctx;
    if (lVar2 == 0) goto LAB_00535550;
    *(long *)(lVar4 + 0x51160) = lVar2;
LAB_00534e6e:
    lVar4 = (*arg1)("glGetProgramInfoLog",arg2);
    lVar3 = ctx;
    if (lVar4 == 0) goto LAB_00535572;
    *(long *)(lVar1 + 0x51168) = lVar4;
LAB_00534e8f:
    lVar1 = (*arg1)("glGetShaderiv",arg2);
    lVar4 = ctx;
    if (lVar1 == 0) goto LAB_00535594;
    *(long *)(lVar3 + 0x51170) = lVar1;
LAB_00534eb1:
    lVar2 = (*arg1)("glGetProgramiv",arg2);
    lVar1 = ctx;
    lVar3 = ctx;
    if (lVar2 == 0) goto LAB_005355b8;
    *(long *)(lVar4 + 0x51178) = lVar2;
LAB_00534ed2:
    lVar4 = (*arg1)("glGetUniformLocation",arg2);
    lVar3 = ctx;
    if (lVar4 == 0) goto LAB_005355da;
    *(long *)(lVar1 + 0x51180) = lVar4;
LAB_00534ef3:
    lVar1 = (*arg1)("glLinkProgram",arg2);
    lVar4 = ctx;
    if (lVar1 == 0) goto LAB_005355fc;
    *(long *)(lVar3 + 0x51188) = lVar1;
LAB_00534f15:
    lVar1 = (*arg1)("glShaderSource",arg2);
    lVar3 = ctx;
    if (lVar1 == 0) goto LAB_00535620;
    *(long *)(lVar4 + 0x51190) = lVar1;
LAB_00534f36:
    lVar2 = (*arg1)("glUniform1i",arg2);
    lVar1 = ctx;
    lVar4 = ctx;
    if (lVar2 == 0) goto LAB_00535642;
    *(long *)(lVar3 + 0x51198) = lVar2;
LAB_00534f58:
    lVar3 = (*arg1)("glUniform1iv",arg2);
    lVar4 = ctx;
    if (lVar3 == 0) goto LAB_00535666;
    *(long *)(lVar1 + 0x511a0) = lVar3;
LAB_00534f79:
    lVar2 = (*arg1)("glUniform4fv",arg2);
    lVar1 = ctx;
    lVar3 = ctx;
    if (lVar2 == 0) goto LAB_00535688;
    *(long *)(lVar4 + 0x511a8) = lVar2;
LAB_00534f9b:
    lVar4 = (*arg1)("glUniform4iv",arg2);
    lVar3 = ctx;
    if (lVar4 == 0) goto LAB_005356a9;
    *(long *)(lVar1 + 0x511b0) = lVar4;
LAB_00534fbc:
    lVar1 = (*arg1)("glUseProgram",arg2);
    lVar4 = ctx;
    if (lVar1 == 0) goto LAB_005356cb;
    *(long *)(lVar3 + 0x511b8) = lVar1;
LAB_00534fde:
    lVar1 = (*arg1)("glVertexAttribPointer",arg2);
    lVar3 = ctx;
    if (lVar1 == 0) goto LAB_005356ef;
    *(long *)(lVar4 + 0x511c0) = lVar1;
LAB_00534fff:
    lVar1 = (*arg1)("glDeleteObjectARB",arg2);
    lVar4 = ctx;
    if (lVar1 == 0) goto LAB_00535711;
    *(long *)(lVar3 + 0x511c8) = lVar1;
LAB_00535021:
    lVar2 = (*arg1)("glAttachObjectARB",arg2);
    lVar1 = ctx;
    lVar3 = ctx;
    if (lVar2 == 0) goto LAB_00535735;
    *(long *)(lVar4 + 0x511d0) = lVar2;
LAB_00535042:
    lVar4 = (*arg1)("glCompileShaderARB",arg2);
    lVar3 = ctx;
    if (lVar4 == 0) goto LAB_00535757;
    *(long *)(lVar1 + 0x511d8) = lVar4;
LAB_00535063:
    lVar1 = (*arg1)("glCreateProgramObjectARB",arg2);
    lVar4 = ctx;
    if (lVar1 == 0) goto LAB_00535779;
    *(long *)(lVar3 + 0x511e0) = lVar1;
LAB_00535085:
    lVar2 = (*arg1)("glCreateShaderObjectARB",arg2);
    lVar1 = ctx;
    lVar3 = ctx;
    if (lVar2 == 0) goto LAB_0053579a;
    *(long *)(lVar4 + 0x511e8) = lVar2;
LAB_005350a6:
    lVar4 = (*arg1)("glGetInfoLogARB",arg2);
    lVar3 = ctx;
    if (lVar4 == 0) goto LAB_005357bc;
    *(long *)(lVar1 + 0x51208) = lVar4;
LAB_005350c7:
    lVar2 = (*arg1)("glGetObjectParameterivARB",arg2);
    lVar1 = ctx;
    lVar4 = ctx;
    if (lVar2 == 0) goto LAB_005357de;
    *(long *)(lVar3 + 0x51210) = lVar2;
LAB_005350e9:
    lVar3 = (*arg1)("glGetUniformLocationARB",arg2);
    lVar4 = ctx;
    if (lVar3 == 0) goto LAB_005357ff;
    *(long *)(lVar1 + 0x51218) = lVar3;
LAB_0053510a:
    lVar2 = (*arg1)("glLinkProgramARB",arg2);
    lVar1 = ctx;
    lVar3 = ctx;
    if (lVar2 == 0) goto LAB_00535821;
    *(long *)(lVar4 + 0x51220) = lVar2;
LAB_0053512c:
    lVar4 = (*arg1)("glShaderSourceARB",arg2);
    lVar3 = ctx;
    if (lVar4 == 0) goto LAB_00535842;
    *(long *)(lVar1 + 0x51228) = lVar4;
LAB_0053514d:
    lVar2 = (*arg1)("glUniform1iARB",arg2);
    lVar1 = ctx;
    lVar4 = ctx;
    if (lVar2 == 0) goto LAB_00535864;
    *(long *)(lVar3 + 0x51230) = lVar2;
LAB_0053516f:
    lVar3 = (*arg1)("glUniform1ivARB",arg2);
    lVar4 = ctx;
    if (lVar3 == 0) goto LAB_00535885;
    *(long *)(lVar1 + 0x51238) = lVar3;
LAB_00535190:
    lVar2 = (*arg1)("glUniform4fvARB",arg2);
    lVar1 = ctx;
    lVar3 = ctx;
    if (lVar2 == 0) goto LAB_005358a7;
    *(long *)(lVar4 + 0x51240) = lVar2;
LAB_005351b2:
    lVar4 = (*arg1)("glUniform4ivARB",arg2);
    lVar3 = ctx;
    if (lVar4 == 0) goto LAB_005358c8;
    *(long *)(lVar1 + 0x51248) = lVar4;
LAB_005351d3:
    lVar2 = (*arg1)("glUseProgramObjectARB",arg2);
    lVar1 = ctx;
    lVar4 = ctx;
    if (lVar2 == 0) goto LAB_005358ea;
    *(long *)(lVar3 + 0x51250) = lVar2;
LAB_005351f5:
    lVar3 = (*arg1)("glDisableVertexAttribArrayARB",arg2);
    lVar4 = ctx;
    if (lVar3 == 0) goto LAB_0053590b;
    *(long *)(lVar1 + 0x511f0) = lVar3;
LAB_00535216:
    lVar2 = (*arg1)("glEnableVertexAttribArrayARB",arg2);
    lVar1 = ctx;
    lVar3 = ctx;
    if (lVar2 == 0) goto LAB_0053592d;
    *(long *)(lVar4 + 0x511f8) = lVar2;
LAB_00535238:
    lVar4 = (*arg1)("glGetAttribLocationARB",arg2);
    lVar3 = ctx;
    if (lVar4 == 0) goto LAB_0053594e;
    *(long *)(lVar1 + 0x51200) = lVar4;
LAB_00535259:
    lVar2 = (*arg1)("glVertexAttribPointerARB",arg2);
    lVar1 = ctx;
    lVar4 = ctx;
    if (lVar2 == 0) goto LAB_00535970;
    *(long *)(lVar3 + 0x51258) = lVar2;
LAB_0053527b:
    lVar3 = (*arg1)("glVertexAttribPointerARB",arg2);
    lVar4 = ctx;
    if (lVar3 == 0) goto LAB_00535991;
    *(long *)(lVar1 + 0x51258) = lVar3;
LAB_0053529c:
    lVar2 = (*arg1)("glGetProgramivARB",arg2);
    lVar1 = ctx;
    lVar3 = ctx;
    if (lVar2 == 0) goto LAB_005359b3;
    *(long *)(lVar4 + 0x51260) = lVar2;
LAB_005352be:
    lVar4 = (*arg1)("glProgramLocalParameter4fvARB",arg2);
    lVar3 = ctx;
    if (lVar4 == 0) goto LAB_005359d4;
    *(long *)(lVar1 + 0x51268) = lVar4;
LAB_005352df:
    lVar2 = (*arg1)("glDeleteProgramsARB",arg2);
    lVar1 = ctx;
    lVar4 = ctx;
    if (lVar2 == 0) goto LAB_005359f6;
    *(long *)(lVar3 + 0x51278) = lVar2;
LAB_00535301:
    lVar3 = (*arg1)("glGenProgramsARB",arg2);
    lVar4 = ctx;
    if (lVar3 == 0) goto LAB_00535a17;
    *(long *)(lVar1 + 0x51280) = lVar3;
LAB_00535322:
    lVar2 = (*arg1)("glBindProgramARB",arg2);
    lVar1 = ctx;
    lVar3 = ctx;
    if (lVar2 == 0) goto LAB_00535a39;
    *(long *)(lVar4 + 0x51288) = lVar2;
LAB_00535344:
    lVar4 = (*arg1)("glProgramStringARB",arg2);
    lVar3 = ctx;
    if (lVar4 == 0) goto LAB_00535a5a;
    *(long *)(lVar1 + 0x51290) = lVar4;
LAB_00535365:
    lVar4 = (*arg1)("glProgramLocalParameterI4ivNV",arg2);
    if (lVar4 != 0) goto LAB_00535378;
  }
  *(uint32_t *)(lVar3 + 0x510d4) = 0;
  lVar4 = 0;
LAB_00535378:
  *(long *)(lVar3 + 0x51270) = lVar4;
  return;
}

/* ======================================================================
 * hash_shaders  (Ghidra `hash_shaders` @ 00535cc0)
 * Signature: uint8_t hash_shaders(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glBindShaders`
 */
uint hash_shaders(long *arg1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (*arg1 != 0) {
    uVar1 = *(int *)(*arg1 + 8) << 0x10;
  }
  uVar2 = 0;
  if (arg1[1] != 0) {
    uVar2 = (uint)*(ushort *)(arg1[1] + 8);
  }
  return uVar1 | uVar2;
}

/* ======================================================================
 * impl_ARB1_CompileShader  (Ghidra `impl_ARB1_CompileShader` @ 00535cf0)
 * Signature: uint8_t impl_ARB1_CompileShader(void)
 * Calls: `snprintf`
 * Called by: `MOJOSHADER_glCreateContext`
 */
bool impl_ARB1_CompileShader(long arg1,uint32_t *arg2)

{
  uint32_t uVar1;
  int iVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  uint32_t local_38 [3];
  uint local_2c [3];
  
  uVar4 = 0x8620;
  uVar1 = *(uint32_t *)(arg1 + 0x20);
  if ((*(int *)(arg1 + 0x28) != 2) && (uVar4 = 0x8804, *(int *)(arg1 + 0x28) != 1)) {
    uVar4 = 0;
  }
  local_38[0] = 0;
  (**(code **)(ctx + 0x51280))(1,local_38);
  (**(code **)(ctx + 0x51100))();
  (**(code **)(ctx + 0x51288))(uVar4,local_38[0]);
  (**(code **)(ctx + 0x51290))(uVar4,0x8875,uVar1,*(uint64_t *)(arg1 + 0x18));
  iVar2 = (**(code **)(ctx + 0x51100))();
  if (iVar2 == 0x502) {
    local_2c[0] = 0;
    (**(code **)(ctx + 0x51108))(0x864b,local_2c);
    uVar3 = (**(code **)(ctx + 0x510f8))(0x8874);
    snprintf(error_buffer,0x400,"ARB1 compile error at position %d: %s",(ulong)local_2c[0],uVar3);
    (**(code **)(ctx + 0x51288))(uVar4,0);
    (**(code **)(ctx + 0x51278))(1,local_38);
    *arg2 = 0;
  }
  else {
    *arg2 = local_38[0];
  }
  return iVar2 != 0x502;
}

/* ======================================================================
 * impl_GLSL_DeleteShader  (Ghidra `impl_GLSL_DeleteShader` @ 00535e50)
 * Signature: uint8_t impl_GLSL_DeleteShader(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_GLSL_DeleteShader(void)

{
  if (*(int *)(ctx + 0x510bc) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00535e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(ctx + 0x511c8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00535e77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(ctx + 0x51120))();
  return;
}

/* ======================================================================
 * impl_GLSL_DeleteProgram  (Ghidra `impl_GLSL_DeleteProgram` @ 00535e80)
 * Signature: uint8_t impl_GLSL_DeleteProgram(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_GLSL_DeleteProgram(void)

{
  if (*(int *)(ctx + 0x510bc) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00535e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(ctx + 0x511c8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00535ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(ctx + 0x51128))();
  return;
}

/* ======================================================================
 * impl_GLSL_PushConstantArray  (Ghidra `impl_GLSL_PushConstantArray` @ 00535eb0)
 * Signature: uint8_t impl_GLSL_PushConstantArray(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_GLSL_PushConstantArray(long arg1,long arg2,uint64_t arg3)

{
  int iVar1;
  
  if (*(int *)(ctx + 0x510bc) == 0) {
    iVar1 = (**(code **)(ctx + 0x51218))();
  }
  else {
    iVar1 = (**(code **)(ctx + 0x51180))
                      (*(uint32_t *)(arg1 + 0x10),*(uint64_t *)(arg2 + 0x10));
  }
  if (-1 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x00535f0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(ctx + 0x511a8))
              (iVar1,*(uint32_t *)(arg2 + 8),arg3,*(code **)(ctx + 0x511a8));
    return;
  }
  return;
}

/* ======================================================================
 * impl_GLSL_UseProgram  (Ghidra `impl_GLSL_UseProgram` @ 00535f30)
 * Signature: uint8_t impl_GLSL_UseProgram(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_GLSL_UseProgram(long arg1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint32_t uVar1;
  
  if (*(int *)(ctx + 0x510bc) == 0) {
    uVar1 = 0;
    UNRECOVERED_JUMPTABLE = *(code **)(ctx + 0x51250);
    if (arg1 != 0) {
      uVar1 = *(uint32_t *)(arg1 + 0x10);
    }
  }
  else {
    uVar1 = 0;
    UNRECOVERED_JUMPTABLE = *(code **)(ctx + 0x511b8);
    if (arg1 != 0) {
      uVar1 = *(uint32_t *)(arg1 + 0x10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00535f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

/* ======================================================================
 * match_shaders  (Ghidra `match_shaders` @ 00535f80)
 * Signature: uint8_t match_shaders(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glBindShaders`
 */
bool match_shaders(long *arg1,long *arg2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*arg1 != 0) {
    iVar2 = *(int *)(*arg1 + 8);
  }
  iVar1 = 0;
  if (*arg2 != 0) {
    iVar1 = *(int *)(*arg2 + 8);
  }
  if (iVar2 != iVar1) {
    return false;
  }
  iVar2 = 0;
  if (arg1[1] != 0) {
    iVar2 = *(int *)(arg1[1] + 8);
  }
  iVar1 = 0;
  if (arg2[1] != 0) {
    iVar1 = *(int *)(arg2[1] + 8);
  }
  return iVar2 == iVar1;
}

/* ======================================================================
 * nuke_shaders  (Ghidra `nuke_shaders` @ 00536190)
 * Signature: uint8_t nuke_shaders(void)
 * Calls: `program_unref_part_10`
 * Called by: `MOJOSHADER_glBindShaders`
 */
void nuke_shaders(long arg1,long arg2)

{
  if (arg1 != 0) {
    (**(code **)(ctx + 8))(arg1,*(uint64_t *)(ctx + 0x10));
  }
  if (arg2 != 0) {
    if (*(uint *)(arg2 + 0xb8) < 2) {
      program_unref_part_10(arg2);
      return;
    }
    *(uint *)(arg2 + 0xb8) = *(uint *)(arg2 + 0xb8) - 1;
  }
  return;
}

/* ======================================================================
 * impl_GLSL_GetSamplerLocation  (Ghidra `impl_GLSL_GetSamplerLocation` @ 005361e0)
 * Signature: uint8_t impl_GLSL_GetSamplerLocation(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_GLSL_GetSamplerLocation(long arg1,long *arg2,int arg3)

{
  if (*(int *)(ctx + 0x510bc) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0053620f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(ctx + 0x51218))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0053621f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(ctx + 0x51180))
            (*(uint32_t *)(arg1 + 0x10),
             *(uint64_t *)((long)arg3 * 0x10 + *(long *)(*arg2 + 0x58) + 8));
  return;
}

/* ======================================================================
 * impl_GLSL_FinalInitProgram  (Ghidra `impl_GLSL_FinalInitProgram` @ 00536230)
 * Signature: uint8_t impl_GLSL_FinalInitProgram(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_glCreateContext`
 */
void impl_GLSL_FinalInitProgram(long arg1)

{
  uint32_t uVar1;
  
  if (*(int *)(ctx + 0x510bc) == 0) {
    uVar1 = (**(code **)(ctx + 0x51218))();
  }
  else {
    uVar1 = (**(code **)(ctx + 0x51180))(*(uint32_t *)(arg1 + 0x10),"vs_uniforms_vec4");
  }
  *(uint32_t *)(arg1 + 0xc0) = uVar1;
  if (*(int *)(ctx + 0x510bc) == 0) {
    uVar1 = (**(code **)(ctx + 0x51218))();
  }
  else {
    uVar1 = (**(code **)(ctx + 0x51180))(*(uint32_t *)(arg1 + 0x10),"vs_uniforms_ivec4");
  }
  *(uint32_t *)(arg1 + 0xc4) = uVar1;
  if (*(int *)(ctx + 0x510bc) == 0) {
    uVar1 = (**(code **)(ctx + 0x51218))();
  }
  else {
    uVar1 = (**(code **)(ctx + 0x51180))(*(uint32_t *)(arg1 + 0x10),"vs_uniforms_bool");
  }
  *(uint32_t *)(arg1 + 200) = uVar1;
  if (*(int *)(ctx + 0x510bc) == 0) {
    uVar1 = (**(code **)(ctx + 0x51218))();
  }
  else {
    uVar1 = (**(code **)(ctx + 0x51180))(*(uint32_t *)(arg1 + 0x10),"ps_uniforms_vec4");
  }
  *(uint32_t *)(arg1 + 0xcc) = uVar1;
  if (*(int *)(ctx + 0x510bc) == 0) {
    uVar1 = (**(code **)(ctx + 0x51218))();
  }
  else {
    uVar1 = (**(code **)(ctx + 0x51180))(*(uint32_t *)(arg1 + 0x10),"ps_uniforms_ivec4");
  }
  *(uint32_t *)(arg1 + 0xd0) = uVar1;
  if (*(int *)(ctx + 0x510bc) == 0) {
    uVar1 = (**(code **)(ctx + 0x51218))();
    *(uint32_t *)(arg1 + 0xd4) = uVar1;
    return;
  }
  uVar1 = (**(code **)(ctx + 0x51180))(*(uint32_t *)(arg1 + 0x10),"ps_uniforms_bool");
  *(uint32_t *)(arg1 + 0xd4) = uVar1;
  return;
}

/* ======================================================================
 * MOJOSHADER_glAvailableProfiles_constprop_14  (Ghidra `MOJOSHADER_glAvailableProfiles.constprop.14` @ 00537070)
 * Signature: uint8_t MOJOSHADER_glAvailableProfiles.constprop.14(void)
 * Calls: `load_extensions`, `memset`, `snprintf`, `valid_profile_part_12`
 * Called by: `MOJOSHADER_glBestProfile`
 */
uint MOJOSHADER_glAvailableProfiles_constprop_14
               (uint64_t arg1,uint64_t arg2,uint64_t *arg3)

{
  uint64_t uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  uint8_t auStack_51338 [332568];
  
  uVar1 = ctx;
  ctx = auStack_51338;
  memset(auStack_51338,0,0x51310);
  uVar5 = 0;
  load_extensions(arg1,arg2);
  if (*(int *)(ctx + 0x510b8) != 0) {
    iVar2 = valid_profile_part_12(&DAT_005caad6 /* R:"glsl120" */);
    bVar6 = iVar2 != 0;
    if (bVar6) {
      *arg3 = &DAT_005caad6 /* R:"glsl120" */;
    }
    uVar5 = (uint)bVar6;
    if ((*(int *)(ctx + 0x510b8) != 0) && (iVar2 = valid_profile_part_12(&DAT_005caac4 /* R:"glsl" */), iVar2 != 0)
       ) {
      uVar5 = bVar6 + 1;
      arg3[(int)(uint)bVar6] = &DAT_005caac4 /* R:"glsl" */;
    }
    if ((*(int *)(ctx + 0x510b8) != 0) && (iVar2 = valid_profile_part_12(&DAT_005cadb1 /* R:4.817930367056943e-39f */), iVar2 != 0)
       ) {
      lVar3 = (long)(int)uVar5;
      uVar5 = uVar5 + 1;
      arg3[lVar3] = &DAT_005cadb1 /* R:4.817930367056943e-39f */;
    }
    if ((*(int *)(ctx + 0x510b8) != 0) && (iVar2 = valid_profile_part_12(&DAT_005cadad /* R:4.7260948708989516e-39f */), iVar2 != 0)
       ) {
      lVar3 = (long)(int)uVar5;
      uVar5 = uVar5 + 1;
      arg3[lVar3] = &DAT_005cadad /* R:4.7260948708989516e-39f */;
    }
    if ((*(int *)(ctx + 0x510b8) != 0) && (iVar2 = valid_profile_part_12(&DAT_005cada9 /* R:4.6342593747409604e-39f */), iVar2 != 0)
       ) {
      lVar3 = (long)(int)uVar5;
      uVar5 = uVar5 + 1;
      arg3[lVar3] = &DAT_005cada9 /* R:4.6342593747409604e-39f */;
    }
    if (*(int *)(ctx + 0x510b8) != 0) {
      pcVar4 = "MOJOSHADER_PROFILE_ARB1 profile needs GL_ARB_vertex_program";
      if (*(int *)(ctx + 0x510c0) != 0) {
        if (*(int *)(ctx + 0x510c4) != 0) {
          arg3[(int)uVar5] = &DAT_005c9ab8 /* R:"arb1" */;
          ctx = (uint8_t *)uVar1;
          return uVar5 + 1;
        }
        pcVar4 = "MOJOSHADER_PROFILE_ARB1 profile needs GL_ARB_fragment_program";
      }
      snprintf(error_buffer,0x400,"%s",pcVar4);
    }
  }
  ctx = (uint8_t *)uVar1;
  return uVar5;
}

/* ======================================================================
 * MOJOSHADER_glGetError  (Ghidra `MOJOSHADER_glGetError` @ 00537240)
 * Signature: uint8_t MOJOSHADER_glGetError(void)
 * Calls: (none)
 * Called by: (none)
 */
uint8_t * MOJOSHADER_glGetError(void)

{
  return error_buffer;
}

/* ======================================================================
 * MOJOSHADER_glAvailableProfiles  (Ghidra `MOJOSHADER_glAvailableProfiles` @ 00537250)
 * Signature: uint8_t MOJOSHADER_glAvailableProfiles(void)
 * Calls: `load_extensions`, `memset`, `snprintf`, `valid_profile_part_12`
 * Called by: (none)
 */
int MOJOSHADER_glAvailableProfiles
              (uint64_t arg1,uint64_t arg2,uint64_t *arg3,int arg4)

{
  uint64_t uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint8_t auStack_51338 [332560];
  
  uVar1 = ctx;
  ctx = auStack_51338;
  memset(auStack_51338,0,0x51310);
  iVar4 = 0;
  load_extensions(arg1,arg2);
  if (*(int *)(ctx + 0x510b8) != 0) {
    iVar2 = valid_profile_part_12(&DAT_005caad6 /* R:"glsl120" */);
    if (iVar2 != 0) {
      if (0 < arg4) {
        *arg3 = &DAT_005caad6 /* R:"glsl120" */;
      }
      iVar4 = 1;
    }
    if ((*(int *)(ctx + 0x510b8) != 0) && (iVar2 = valid_profile_part_12(&DAT_005caac4 /* R:"glsl" */), iVar2 != 0)
       ) {
      if (iVar4 < arg4) {
        arg3[iVar4] = &DAT_005caac4 /* R:"glsl" */;
      }
      iVar4 = iVar4 + 1;
    }
    if ((*(int *)(ctx + 0x510b8) != 0) && (iVar2 = valid_profile_part_12(&DAT_005cadb1 /* R:4.817930367056943e-39f */), iVar2 != 0)
       ) {
      if (iVar4 < arg4) {
        arg3[iVar4] = &DAT_005cadb1 /* R:4.817930367056943e-39f */;
      }
      iVar4 = iVar4 + 1;
    }
    if ((*(int *)(ctx + 0x510b8) != 0) && (iVar2 = valid_profile_part_12(&DAT_005cadad /* R:4.7260948708989516e-39f */), iVar2 != 0)
       ) {
      if (iVar4 < arg4) {
        arg3[iVar4] = &DAT_005cadad /* R:4.7260948708989516e-39f */;
      }
      iVar4 = iVar4 + 1;
    }
    if ((*(int *)(ctx + 0x510b8) != 0) && (iVar2 = valid_profile_part_12(&DAT_005cada9 /* R:4.6342593747409604e-39f */), iVar2 != 0)
       ) {
      if (iVar4 < arg4) {
        arg3[iVar4] = &DAT_005cada9 /* R:4.6342593747409604e-39f */;
      }
      iVar4 = iVar4 + 1;
    }
    if (*(int *)(ctx + 0x510b8) != 0) {
      pcVar3 = "MOJOSHADER_PROFILE_ARB1 profile needs GL_ARB_vertex_program";
      if (*(int *)(ctx + 0x510c0) != 0) {
        if (*(int *)(ctx + 0x510c4) != 0) {
          if (iVar4 < arg4) {
            arg3[iVar4] = &DAT_005c9ab8 /* R:"arb1" */;
          }
          ctx = (uint8_t *)uVar1;
          return iVar4 + 1;
        }
        pcVar3 = "MOJOSHADER_PROFILE_ARB1 profile needs GL_ARB_fragment_program";
      }
      snprintf(error_buffer,0x400,"%s",pcVar3);
    }
  }
  ctx = (uint8_t *)uVar1;
  return iVar4;
}

/* ======================================================================
 * MOJOSHADER_glBestProfile  (Ghidra `MOJOSHADER_glBestProfile` @ 00537490)
 * Signature: uint8_t MOJOSHADER_glBestProfile(void)
 * Calls: `MOJOSHADER_glAvailableProfiles_constprop_14`, `snprintf`
 * Called by: `OpenGLGraphics__OpenGLGraphics`
 */
uint64_t MOJOSHADER_glBestProfile(uint64_t arg1,uint64_t arg2)

{
  int iVar1;
  uint64_t local_38 [7];
  
  iVar1 = MOJOSHADER_glAvailableProfiles_constprop_14(arg1,arg2,local_38);
  if (iVar1 < 1) {
    snprintf(error_buffer,0x400,"%s","no profiles available");
    local_38[0] = 0;
  }
  return local_38[0];
}

/* ======================================================================
 * MOJOSHADER_glMakeContextCurrent  (Ghidra `MOJOSHADER_glMakeContextCurrent` @ 005374d0)
 * Signature: uint8_t MOJOSHADER_glMakeContextCurrent(void)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`
 */
void MOJOSHADER_glMakeContextCurrent(uint64_t arg1)

{
  ctx = arg1;
  return;
}

/* ======================================================================
 * MOJOSHADER_glMaxUniforms  (Ghidra `MOJOSHADER_glMaxUniforms` @ 005374e0)
 * Signature: uint8_t MOJOSHADER_glMaxUniforms(void)
 * Calls: (none)
 * Called by: (none)
 */
void MOJOSHADER_glMaxUniforms(void)

{
                    /* WARNING: Could not recover jumptable at 0x005374ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(ctx + 0x51298))();
  return;
}

/* ======================================================================
 * MOJOSHADER_glCompileShader  (Ghidra `MOJOSHADER_glCompileShader` @ 005374f0)
 * Signature: uint8_t MOJOSHADER_glCompileShader(void)
 * Calls: `MOJOSHADER_freeParseData`, `MOJOSHADER_parse`, `snprintf`
 * Called by: `CreateOpenGLShader`, `gfxCreatePixelShader`, `gfxCreateVertexShader`
 */
uint64_t *
MOJOSHADER_glCompileShader
          (uint64_t arg1,uint32_t arg2,uint64_t arg3,uint32_t arg4)

{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  char *pcVar4;
  int local_28 [6];
  
  local_28[0] = 0;
  piVar2 = (int *)MOJOSHADER_parse(ctx + 0xa215,arg1,arg2,arg3,arg4,*ctx,ctx[1],ctx[2]);
  if (*piVar2 < 1) {
    puVar3 = (uint64_t *)(*(code *)*ctx)(0x10,ctx[2]);
    if (puVar3 != (uint64_t *)0x0) {
      iVar1 = (*(code *)ctx[0xa254])(piVar2,local_28);
      if (iVar1 != 0) {
        *puVar3 = piVar2;
        *(uint32_t *)((long)puVar3 + 0xc) = 1;
        *(int *)(puVar3 + 1) = local_28[0];
        return puVar3;
      }
      MOJOSHADER_freeParseData(piVar2);
      (*(code *)ctx[1])(puVar3,ctx[2]);
      if (local_28[0] == 0) {
        return (uint64_t *)0x0;
      }
      goto LAB_005375e0;
    }
    pcVar4 = "out of memory";
  }
  else {
    pcVar4 = (char *)**(uint64_t **)(piVar2 + 2);
  }
  snprintf(error_buffer,0x400,"%s",pcVar4);
  MOJOSHADER_freeParseData(piVar2);
  if (local_28[0] == 0) {
    return (uint64_t *)0x0;
  }
LAB_005375e0:
  (*(code *)ctx[0xa255])();
  return (uint64_t *)0x0;
}

/* ======================================================================
 * MOJOSHADER_glGetShaderParseData  (Ghidra `MOJOSHADER_glGetShaderParseData` @ 00537630)
 * Signature: uint8_t MOJOSHADER_glGetShaderParseData(void)
 * Calls: (none)
 * Called by: (none)
 */
uint64_t MOJOSHADER_glGetShaderParseData(uint64_t *arg1)

{
  if (arg1 != (uint64_t *)0x0) {
    return *arg1;
  }
  return 0;
}

/* ======================================================================
 * MOJOSHADER_glLinkProgram  (Ghidra `MOJOSHADER_glLinkProgram` @ 00537650)
 * Signature: uint8_t MOJOSHADER_glLinkProgram(void)
 * Calls: `lookup_samplers`, `lookup_uniforms`, `memset`, `snprintf`
 * Called by: `MOJOSHADER_glBindShaders`
 */
/* WARNING: Type propagation algorithm not settling */

uint64_t * MOJOSHADER_glLinkProgram(long *arg1,long *arg2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint64_t *puVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  uint64_t *puVar11;
  long lVar12;
  bool bVar13;
  byte bVar14;
  int local_48 [6];
  
  bVar14 = 0;
  local_48[0] = 0;
  if ((arg2 == (long *)0x0) && (arg1 == (long *)0x0)) {
    return (uint64_t *)0x0;
  }
  iVar2 = (*(code *)ctx[0xa25a])(arg1,arg2);
  if (iVar2 == 0) goto joined_r0x00537963;
  puVar5 = (uint64_t *)(*(code *)*ctx)(0xd8,ctx[2]);
  if (puVar5 == (uint64_t *)0x0) {
    snprintf(error_buffer,0x400,"%s","out of memory");
  }
  else {
    bVar13 = ((ulong)puVar5 & 1) != 0;
    uVar9 = 0xd8;
    puVar11 = puVar5;
    if (bVar13) {
      *(uint8_t *)puVar5 = 0;
      puVar11 = (uint64_t *)((long)puVar5 + 1);
      uVar9 = 0xd7;
    }
    if (((ulong)puVar11 & 2) != 0) {
      *(uint16_t *)puVar11 = 0;
      uVar9 = (ulong)((int)uVar9 - 2);
      puVar11 = (uint64_t *)((long)puVar11 + 2);
    }
    if (((ulong)puVar11 & 4) != 0) {
      *(uint32_t *)puVar11 = 0;
      uVar9 = (ulong)((int)uVar9 - 4);
      puVar11 = (uint64_t *)((long)puVar11 + 4);
    }
    for (uVar8 = uVar9 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
    }
    if ((uVar9 & 4) != 0) {
      *(uint32_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 4);
    }
    if ((uVar9 & 2) != 0) {
      *(uint16_t *)puVar11 = 0;
      puVar11 = (uint64_t *)((long)puVar11 + 2);
    }
    if (bVar13) {
      *(uint8_t *)puVar11 = 0;
    }
    iVar3 = 0;
    if (arg1 != (long *)0x0) {
      iVar3 = *(int *)(*arg1 + 0x34);
    }
    if (arg2 != (long *)0x0) {
      iVar3 = iVar3 + *(int *)(*arg2 + 0x34);
    }
    if (iVar3 < 1) {
LAB_00537799:
      puVar11 = ctx;
      *(int *)(puVar5 + 2) = iVar2;
      *puVar5 = arg1;
      puVar5[1] = arg2;
      iVar3 = *(int *)(puVar11 + 0xa207);
      *(uint32_t *)(puVar5 + 0x17) = 1;
      *(int *)((long)puVar5 + 0x14) = iVar3 + -1;
      if (arg1 != (long *)0x0) {
        if (0 < *(int *)(*arg1 + 0x60)) {
          uVar9 = (long)*(int *)(*arg1 + 0x60) << 4;
          pvVar6 = (void *)(*(code *)*puVar11)(uVar9 & 0xffffffff);
          if (pvVar6 == (void *)0x0) {
            snprintf(error_buffer,0x400,"%s","out of memory");
            puVar5[6] = 0;
            goto LAB_0053787c;
          }
          puVar5[6] = pvVar6;
          memset(pvVar6,0,uVar9);
          lVar7 = *(long *)*puVar5;
          lVar12 = *(long *)(lVar7 + 0x68);
          if (0 < *(int *)(lVar7 + 0x60)) {
            iVar3 = 0;
            do {
              uVar4 = (*(code *)ctx[0xa257])(puVar5,iVar3);
              if (-1 < (int)uVar4) {
                plVar10 = (long *)((ulong)*(uint *)(puVar5 + 5) * 0x10 + puVar5[6]);
                *plVar10 = lVar12;
                *(uint *)(plVar10 + 1) = uVar4;
                *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
                if (0x20 < uVar4) goto LAB_0053787c;
              }
              iVar3 = iVar3 + 1;
              lVar12 = lVar12 + 0x10;
            } while (iVar3 < *(int *)(lVar7 + 0x60));
          }
        }
        iVar3 = lookup_uniforms(puVar5,arg1,local_48);
        if (iVar3 == 0) goto LAB_0053787c;
        lookup_samplers(puVar5,arg1,local_48);
        iVar3 = *(int *)(*arg2 + 0x70);
        if (0 < iVar3) {
          piVar1 = *(int **)(*arg2 + 0x78);
          if (*piVar1 != 4) {
            lVar7 = 0;
            do {
              if (lVar7 == (ulong)(iVar3 - 1) << 4) goto LAB_00537a7b;
              lVar7 = lVar7 + 0x10;
            } while (*(int *)((long)piVar1 + lVar7) != 4);
          }
          *(uint32_t *)((long)puVar5 + 0xbc) = 1;
        }
LAB_00537a7b:
        *(int *)((long)arg1 + 0xc) = *(int *)((long)arg1 + 0xc) + 1;
      }
      if (arg2 == (long *)0x0) {
LAB_00537aef:
        if (local_48[0] != 0) {
          (*(code *)ctx[0xa25c])(ctx[0xa214]);
        }
        (*(code *)ctx[0xa25b])(puVar5);
        return puVar5;
      }
      iVar3 = lookup_uniforms(puVar5,arg2,local_48);
      if (iVar3 != 0) {
        lookup_samplers(puVar5,arg2,local_48);
        iVar2 = *(int *)(*arg2 + 0x70);
        if (0 < iVar2) {
          piVar1 = *(int **)(*arg2 + 0x78);
          if (*piVar1 != 4) {
            lVar7 = 0;
            do {
              if (lVar7 == (ulong)(iVar2 - 1) << 4) goto LAB_00537aeb;
              lVar7 = lVar7 + 0x10;
            } while (*(int *)((long)piVar1 + lVar7) != 4);
          }
          *(uint32_t *)((long)puVar5 + 0xbc) = 1;
        }
LAB_00537aeb:
        *(int *)((long)arg2 + 0xc) = *(int *)((long)arg2 + 0xc) + 1;
        goto LAB_00537aef;
      }
    }
    else {
      pvVar6 = (void *)(*(code *)*ctx)((long)iVar3 * 0x18 & 0xffffffff);
      if (pvVar6 != (void *)0x0) {
        puVar5[4] = pvVar6;
        memset(pvVar6,0,(long)iVar3 * 0x18);
        goto LAB_00537799;
      }
      snprintf(error_buffer,0x400,"%s","out of memory");
      puVar5[4] = 0;
    }
LAB_0053787c:
    if (puVar5[8] != 0) {
      (*(code *)ctx[1])(puVar5[8],ctx[2]);
    }
    if (puVar5[10] != 0) {
      (*(code *)ctx[1])(puVar5[10],ctx[2]);
    }
    if (puVar5[0xc] != 0) {
      (*(code *)ctx[1])(puVar5[0xc],ctx[2]);
    }
    if (puVar5[0xe] != 0) {
      (*(code *)ctx[1])(puVar5[0xe],ctx[2]);
    }
    if (puVar5[0x10] != 0) {
      (*(code *)ctx[1])(puVar5[0x10],ctx[2]);
    }
    if (puVar5[0x12] != 0) {
      (*(code *)ctx[1])(puVar5[0x12],ctx[2]);
    }
    if (puVar5[4] != 0) {
      (*(code *)ctx[1])(puVar5[4],ctx[2]);
    }
    if (puVar5[6] != 0) {
      (*(code *)ctx[1])(puVar5[6],ctx[2]);
    }
    (*(code *)ctx[1])(puVar5,ctx[2]);
  }
  (*(code *)ctx[0xa256])(iVar2);
joined_r0x00537963:
  if (local_48[0] != 0) {
    (*(code *)ctx[0xa25c])(ctx[0xa214]);
  }
  return (uint64_t *)0x0;
}

/* ======================================================================
 * MOJOSHADER_glBindProgram  (Ghidra `MOJOSHADER_glBindProgram` @ 00537bc0)
 * Signature: uint8_t MOJOSHADER_glBindProgram(void)
 * Calls: `memset`, `program_unref_part_10`
 * Called by: `MOJOSHADER_glBindShaders`, `MOJOSHADER_glCreateContext`, `MOJOSHADER_glDestroyContext`, `TGraphics__UnbindAll`, `gfxUnbindAll`
 */
void MOJOSHADER_glBindProgram(long arg1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint32_t local_3c;
  
  lVar2 = ctx;
  if (*(long *)(ctx + 0x510a0) != arg1) {
    if (arg1 == 0) {
      memset((void *)(ctx + 0x5104c),0,(long)*(int *)(ctx + 0x51048));
      iVar3 = *(int *)(lVar2 + 0x51048);
      local_3c = 0;
      if (0 < iVar3) {
        iVar5 = 0;
        do {
          lVar6 = (long)iVar5;
          cVar1 = *(char *)(lVar2 + 0x5104c + lVar6);
          if (*(char *)(lVar2 + 0x5106c + lVar6) != cVar1) {
            if (cVar1 == '\0') {
              (**(code **)(lVar2 + 0x51150))();
            }
            else {
              (**(code **)(lVar2 + 0x51158))(iVar5);
            }
            lVar2 = ctx;
            *(char *)(ctx + 0x5106c + lVar6) = cVar1;
            iVar3 = *(int *)(lVar2 + 0x51048);
          }
          iVar4 = iVar5 + 1;
          if (cVar1 != '\0') {
            local_3c = iVar4;
          }
          iVar5 = iVar5 + 1;
        } while (iVar4 < iVar3);
      }
      *(int *)(lVar2 + 0x51048) = local_3c;
    }
    else {
      *(int *)(arg1 + 0xb8) = *(int *)(arg1 + 0xb8) + 1;
      memset((void *)(lVar2 + 0x5104c),0,(long)*(int *)(lVar2 + 0x51048));
    }
    (**(code **)(lVar2 + 0x512e0))(arg1);
    lVar6 = ctx;
    lVar2 = *(long *)(ctx + 0x510a0);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0xb8) < 2) {
        program_unref_part_10();
        lVar6 = ctx;
      }
      else {
        *(uint *)(lVar2 + 0xb8) = *(uint *)(lVar2 + 0xb8) - 1;
      }
    }
    *(long *)(lVar6 + 0x510a0) = arg1;
  }
  return;
}

/* ======================================================================
 * MOJOSHADER_glCreateContext  (Ghidra `MOJOSHADER_glCreateContext` @ 00537d40)
 * Signature: uint8_t MOJOSHADER_glCreateContext(void)
 * Calls: `MOJOSHADER_glBindProgram`, `impl_ARB1_CompileShader`, `impl_ARB1_DeleteProgram`, `impl_ARB1_DeleteShader`, `impl_ARB1_FinalInitProgram`, `impl_ARB1_GetAttribLocation`, `impl_ARB1_GetSamplerLocation`, `impl_ARB1_GetUniformLocation`, `impl_ARB1_LinkProgram`, `impl_ARB1_MaxUniforms` (+25 more)
 * Called by: `OpenGLGraphics__OpenGLGraphics`
 */
uint64_t *
MOJOSHADER_glCreateContext
          (char *arg1,uint64_t arg2,uint64_t arg3,code *arg4,code *arg5,
          uint64_t arg6)

{
  uint64_t uVar1;
  int iVar2;
  uint64_t *puVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  bool bVar7;
  uint8_t uVar8;
  byte bVar9;
  
  uVar1 = ctx;
  bVar9 = 0;
  ctx = (uint64_t *)0x0;
  puVar3 = (uint64_t *)(*arg4)(0x51310);
  ctx = puVar3;
  if (puVar3 == (uint64_t *)0x0) {
    pcVar4 = "out of memory";
  }
  else {
    memset(puVar3,0,0x51310);
    *puVar3 = arg4;
    puVar3[1] = arg5;
    puVar3[2] = arg6;
    snprintf((char *)(puVar3 + 0xa215),0x10,"%s",arg1);
    load_extensions(arg2,arg3);
    if (*(int *)(ctx + 0xa217) == 0) goto LAB_00537e57;
    bVar7 = arg1 == (char *)0x0;
    pcVar4 = "NULL profile";
    if (!bVar7) {
      lVar5 = 5;
      pcVar4 = arg1;
      pcVar6 = "arb1";
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar7 = *pcVar4 == *pcVar6;
        pcVar4 = pcVar4 + (ulong)bVar9 * -2 + 1;
        pcVar6 = pcVar6 + (ulong)bVar9 * -2 + 1;
      } while (bVar7);
      if (!bVar7) {
        iVar2 = valid_profile_part_12();
        if (iVar2 != 0) {
LAB_00537e88:
          uVar8 = 1;
          MOJOSHADER_glBindProgram();
          lVar5 = 5;
          pcVar4 = arg1;
          pcVar6 = "glsl";
          do {
            if (lVar5 == 0) break;
            lVar5 = lVar5 + -1;
            uVar8 = *pcVar4 == *pcVar6;
            pcVar4 = pcVar4 + (ulong)bVar9 * -2 + 1;
            pcVar6 = pcVar6 + (ulong)bVar9 * -2 + 1;
          } while ((bool)uVar8);
          if (!(bool)uVar8) {
            lVar5 = 8;
            pcVar4 = arg1;
            pcVar6 = "glsl120";
            do {
              if (lVar5 == 0) break;
              lVar5 = lVar5 + -1;
              uVar8 = *pcVar4 == *pcVar6;
              pcVar4 = pcVar4 + (ulong)bVar9 * -2 + 1;
              pcVar6 = pcVar6 + (ulong)bVar9 * -2 + 1;
            } while ((bool)uVar8);
            if (!(bool)uVar8) {
              lVar5 = 5;
              bVar7 = false;
              pcVar4 = arg1;
              pcVar6 = "arb1";
              do {
                if (lVar5 == 0) break;
                lVar5 = lVar5 + -1;
                bVar7 = *pcVar4 == *pcVar6;
                pcVar4 = pcVar4 + (ulong)bVar9 * -2 + 1;
                pcVar6 = pcVar6 + (ulong)bVar9 * -2 + 1;
              } while (bVar7);
              if (!bVar7) {
                if (*arg1 != 'n') {
                  puVar3 = ctx;
                  ctx = (uint64_t *)uVar1;
                  return puVar3;
                }
                if (arg1[1] != 'v') {
                  puVar3 = ctx;
                  ctx = (uint64_t *)uVar1;
                  return puVar3;
                }
                if (((arg1[2] != '2') || (arg1[3] != '\0')) &&
                   ((arg1[2] != '3' || (arg1[3] != '\0')))) {
                  if (arg1[2] != '4') {
                    puVar3 = ctx;
                    ctx = (uint64_t *)uVar1;
                    return puVar3;
                  }
                  if (arg1[3] != '\0') {
                    puVar3 = ctx;
                    ctx = (uint64_t *)uVar1;
                    return puVar3;
                  }
                }
              }
              ctx[0xa253] = impl_ARB1_MaxUniforms;
              ctx[0xa254] = impl_ARB1_CompileShader;
              ctx[0xa255] = impl_ARB1_DeleteShader;
              ctx[0xa256] = impl_ARB1_DeleteProgram;
              ctx[0xa257] = impl_ARB1_GetAttribLocation;
              ctx[0xa258] = impl_ARB1_GetUniformLocation;
              ctx[0xa259] = impl_ARB1_GetSamplerLocation;
              ctx[0xa25a] = impl_ARB1_LinkProgram;
              ctx[0xa25b] = impl_ARB1_FinalInitProgram;
              ctx[0xa25c] = impl_ARB1_UseProgram;
              ctx[0xa25d] = impl_ARB1_PushConstantArray;
              ctx[0xa25e] = impl_ARB1_PushUniforms;
              ctx[0xa25f] = impl_ARB1_PushSampler;
              ctx[0xa260] = impl_ARB1_MustPushConstantArrays;
              ctx[0xa261] = impl_ARB1_MustPushSamplers;
              puVar3 = ctx;
              ctx = (uint64_t *)uVar1;
              return puVar3;
            }
          }
          ctx[0xa253] = impl_GLSL_MaxUniforms;
          ctx[0xa254] = impl_GLSL_CompileShader;
          ctx[0xa255] = impl_GLSL_DeleteShader;
          ctx[0xa256] = impl_GLSL_DeleteProgram;
          ctx[0xa257] = impl_GLSL_GetAttribLocation;
          ctx[0xa258] = impl_GLSL_GetUniformLocation;
          ctx[0xa259] = impl_GLSL_GetSamplerLocation;
          ctx[0xa25a] = impl_GLSL_LinkProgram;
          ctx[0xa25b] = impl_GLSL_FinalInitProgram;
          ctx[0xa25c] = impl_GLSL_UseProgram;
          ctx[0xa25d] = impl_GLSL_PushConstantArray;
          ctx[0xa25e] = impl_GLSL_PushUniforms;
          ctx[0xa25f] = impl_GLSL_PushSampler;
          ctx[0xa260] = impl_GLSL_MustPushConstantArrays;
          ctx[0xa261] = impl_GLSL_MustPushSamplers;
          puVar3 = ctx;
          ctx = (uint64_t *)uVar1;
          return puVar3;
        }
        goto LAB_00537e57;
      }
      if (*(int *)(ctx + 0xa218) == 0) {
        pcVar4 = "MOJOSHADER_PROFILE_ARB1 profile needs GL_ARB_vertex_program";
      }
      else {
        pcVar4 = "MOJOSHADER_PROFILE_ARB1 profile needs GL_ARB_fragment_program";
        if (*(int *)((long)ctx + 0x510c4) != 0) goto LAB_00537e88;
      }
    }
  }
  snprintf(error_buffer,0x400,"%s",pcVar4);
LAB_00537e57:
  if (ctx != (uint64_t *)0x0) {
    (*arg5)(ctx,arg6);
  }
  ctx = (uint64_t *)uVar1;
  return (uint64_t *)0x0;
}

/* ======================================================================
 * MOJOSHADER_glBindShaders  (Ghidra `MOJOSHADER_glBindShaders` @ 005380d0)
 * Signature: uint8_t MOJOSHADER_glBindShaders(void)
 * Calls: `MOJOSHADER_glBindProgram`, `MOJOSHADER_glLinkProgram`, `hash_create`, `hash_find`, `hash_insert`, `hash_shaders`, `match_shaders`, `nuke_shaders`, `program_unref_part_10`, `snprintf`
 * Called by: `gfxDraw`
 */
void MOJOSHADER_glBindShaders(long arg1,long arg2)

{
  uint64_t *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  uint64_t uVar5;
  long local_38;
  long local_30;
  long local_28 [2];
  
  puVar1 = ctx;
  if ((arg2 == 0) && (arg1 == 0)) {
    MOJOSHADER_glBindProgram(0);
    return;
  }
  if (ctx[0xa208] == 0) {
    uVar5 = hash_create(0,hash_shaders,match_shaders,nuke_shaders,0,*ctx,ctx[1],ctx[2]);
    puVar1[0xa208] = uVar5;
    if (ctx[0xa208] != 0) goto LAB_00538107;
LAB_005381e2:
    snprintf(error_buffer,0x400,"%s","out of memory");
  }
  else {
LAB_00538107:
    local_28[0] = 0;
    local_38 = arg1;
    local_30 = arg2;
    iVar2 = hash_find(ctx[0xa208],&local_38,local_28);
    lVar3 = local_28[0];
    if (iVar2 == 0) {
      lVar3 = MOJOSHADER_glLinkProgram(arg1,arg2);
      if (lVar3 == 0) {
        return;
      }
      plVar4 = (long *)(*(code *)*ctx)(0x10,ctx[2]);
      if (plVar4 == (long *)0x0) {
        snprintf(error_buffer,0x400,"%s","out of memory");
        if (1 < *(uint *)(lVar3 + 0xb8)) {
          *(uint *)(lVar3 + 0xb8) = *(uint *)(lVar3 + 0xb8) - 1;
          return;
        }
        program_unref_part_10(lVar3);
        return;
      }
      *plVar4 = local_38;
      plVar4[1] = local_30;
      iVar2 = hash_insert(ctx[0xa208],plVar4,lVar3);
      if (iVar2 != 1) {
        (*(code *)ctx[1])(plVar4,ctx[2]);
        if (*(uint *)(lVar3 + 0xb8) < 2) {
          program_unref_part_10(lVar3);
        }
        else {
          *(uint *)(lVar3 + 0xb8) = *(uint *)(lVar3 + 0xb8) - 1;
        }
        goto LAB_005381e2;
      }
    }
    MOJOSHADER_glBindProgram(lVar3);
  }
  return;
}

/* ======================================================================
 * MOJOSHADER_glSetVertexShaderUniformF  (Ghidra `MOJOSHADER_glSetVertexShaderUniformF` @ 005382d0)
 * Signature: uint8_t MOJOSHADER_glSetVertexShaderUniformF(void)
 * Calls: `memcpy`
 * Called by: `gfxDraw`, `gfxSetTexCoordMatrix`, `gfxSetVertexShaderConstant`
 */
void MOJOSHADER_glSetVertexShaderUniformF(uint arg1,void *arg2,uint arg3)

{
  long lVar1;
  
  lVar1 = ctx;
  if (0x1fff < arg1) {
    return;
  }
  if (0x2000 - arg1 < arg3) {
    arg3 = 0x2000 - arg1;
  }
  memcpy((void *)(ctx + 0x18 + (ulong)(arg1 * 4) * 4),arg2,(ulong)(arg3 << 4));
  *(int *)(lVar1 + 0x51038) = *(int *)(lVar1 + 0x51038) + 1;
  return;
}

/* ======================================================================
 * MOJOSHADER_glGetVertexShaderUniformF  (Ghidra `MOJOSHADER_glGetVertexShaderUniformF` @ 00538320)
 * Signature: uint8_t MOJOSHADER_glGetVertexShaderUniformF(void)
 * Calls: `memcpy`
 * Called by: (none)
 */
void MOJOSHADER_glGetVertexShaderUniformF(uint arg1,void *arg2,uint arg3)

{
  if (0x1fff < arg1) {
    return;
  }
  if (0x2000 - arg1 < arg3) {
    arg3 = 0x2000 - arg1;
  }
  memcpy(arg2,(void *)(ctx + 0x18 + (ulong)(arg1 << 2) * 4),(ulong)(arg3 << 4));
  return;
}

/* ======================================================================
 * MOJOSHADER_glSetVertexShaderUniformI  (Ghidra `MOJOSHADER_glSetVertexShaderUniformI` @ 00538360)
 * Signature: uint8_t MOJOSHADER_glSetVertexShaderUniformI(void)
 * Calls: `memcpy`
 * Called by: `gfxSetVertexShaderConstant`
 */
void MOJOSHADER_glSetVertexShaderUniformI(uint arg1,void *arg2,uint arg3)

{
  long lVar1;
  
  lVar1 = ctx;
  if (0x7fe < arg1) {
    return;
  }
  if (0x7ff - arg1 < arg3) {
    arg3 = 0x7ff - arg1;
  }
  memcpy((void *)(ctx + 0x20018 + (ulong)(arg1 * 4) * 4),arg2,(ulong)(arg3 << 4));
  *(int *)(lVar1 + 0x51038) = *(int *)(lVar1 + 0x51038) + 1;
  return;
}

/* ======================================================================
 * MOJOSHADER_glGetVertexShaderUniformI  (Ghidra `MOJOSHADER_glGetVertexShaderUniformI` @ 005383b0)
 * Signature: uint8_t MOJOSHADER_glGetVertexShaderUniformI(void)
 * Calls: `memcpy`
 * Called by: (none)
 */
void MOJOSHADER_glGetVertexShaderUniformI(uint arg1,void *arg2,uint arg3)

{
  if (0x7fe < arg1) {
    return;
  }
  if (0x7ff - arg1 < arg3) {
    arg3 = 0x7ff - arg1;
  }
  memcpy(arg2,(void *)(ctx + 0x20018 + (ulong)(arg1 << 2) * 4),(ulong)(arg3 << 4));
  return;
}

/* ======================================================================
 * MOJOSHADER_glSetVertexShaderUniformB  (Ghidra `MOJOSHADER_glSetVertexShaderUniformB` @ 005383f0)
 * Signature: uint8_t MOJOSHADER_glSetVertexShaderUniformB(void)
 * Calls: (none)
 * Called by: `gfxSetVertexShaderConstant`
 */
void MOJOSHADER_glSetVertexShaderUniformB(uint arg1,long arg2,uint arg3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = ctx;
  if (arg1 < 0x2000) {
    lVar1 = ctx + 0x28008 + (ulong)arg1;
    if (0x2000 - arg1 < arg3) {
      arg3 = 0x2000 - arg1;
    }
    if (lVar1 != (ulong)arg3 + lVar1) {
      lVar3 = 0;
      do {
        *(bool *)(lVar1 + lVar3) = *(int *)(arg2 + lVar3 * 4) != 0;
        lVar3 = lVar3 + 1;
      } while (lVar3 != ((ulong)arg3 + lVar1) - lVar1);
    }
    *(int *)(lVar2 + 0x51038) = *(int *)(lVar2 + 0x51038) + 1;
  }
  return;
}

/* ======================================================================
 * MOJOSHADER_glGetVertexShaderUniformB  (Ghidra `MOJOSHADER_glGetVertexShaderUniformB` @ 00538450)
 * Signature: uint8_t MOJOSHADER_glGetVertexShaderUniformB(void)
 * Calls: (none)
 * Called by: (none)
 */
void MOJOSHADER_glGetVertexShaderUniformB(uint arg1,ulong arg2,uint arg3)

{
  ulong uVar1;
  long lVar2;
  uint8_t auVar3 [14];
  uint8_t auVar4 [15];
  uint8_t auVar5 [15];
  uint8_t auVar6 [15];
  uint8_t auVar7 [14];
  uint8_t auVar8 [13];
  uint8_t auVar9 [13];
  uint8_t auVar10 [13];
  uint8_t auVar11 [15];
  uint8_t auVar12 [15];
  uint8_t auVar13 [15];
  uint8_t auVar14 [15];
  uint8_t auVar15 [15];
  unkuint9 Var16;
  uint8_t auVar17 [11];
  uint8_t auVar18 [13];
  uint8_t auVar19 [14];
  uint8_t auVar20 [13];
  uint8_t auVar21 [15];
  uint8_t auVar22 [15];
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  
  if (arg1 < 0x2000) {
    lVar23 = ctx + 0x28000 + (ulong)arg1;
    uVar28 = 0x2000 - arg1;
    if (arg3 <= 0x2000 - arg1) {
      uVar28 = arg3;
    }
    lVar24 = lVar23 + 8;
    lVar27 = (ulong)uVar28 + lVar24;
    if (lVar24 != lVar27) {
      lVar2 = ctx + (ulong)arg1;
      uVar1 = (lVar27 - lVar23) - 8;
      uVar25 = lVar2 + 0x28008;
      uVar26 = uVar1 >> 4;
      if ((uVar26 != 0) &&
         (0xf < uVar1 && (uVar25 + uVar1 < arg2 || arg2 + uVar1 * 4 < uVar25))) {
        lVar23 = 0;
        uVar25 = 0;
        do {
          auVar31 = *(uint8_t (*) [16])(lVar2 + 0x28008 + lVar23);
          uVar25 = uVar25 + 1;
          uVar28 = CONCAT13(0,CONCAT12(auVar31[9],(ushort)auVar31[8]));
          auVar4[0xd] = 0;
          auVar4._0_13_ = auVar31._0_13_;
          auVar4[0xe] = auVar31[7];
          auVar5[0xc] = auVar31[6];
          auVar5._0_12_ = auVar31._0_12_;
          auVar5._13_2_ = auVar4._13_2_;
          auVar6[0xb] = 0;
          auVar6._0_11_ = auVar31._0_11_;
          auVar6._12_3_ = auVar5._12_3_;
          auVar11[10] = auVar31[5];
          auVar11._0_10_ = auVar31._0_10_;
          auVar11._11_4_ = auVar6._11_4_;
          auVar12[9] = 0;
          auVar12._0_9_ = auVar31._0_9_;
          auVar12._10_5_ = auVar11._10_5_;
          auVar13[8] = auVar31[4];
          auVar13._0_8_ = auVar31._0_8_;
          auVar13._9_6_ = auVar12._9_6_;
          auVar15._7_8_ = 0;
          auVar15._0_7_ = auVar13._8_7_;
          Var16 = CONCAT81(SUB158(auVar15 << 0x40,7),auVar31[3]);
          auVar21._9_6_ = 0;
          auVar21._0_9_ = Var16;
          auVar17._1_10_ = SUB1510(auVar21 << 0x30,5);
          auVar17[0] = auVar31[2];
          auVar22._11_4_ = 0;
          auVar22._0_11_ = auVar17;
          auVar18._1_12_ = SUB1512(auVar22 << 0x20,3);
          auVar18[0] = auVar31[1];
          auVar14[1] = 0;
          auVar14[0] = auVar31[0];
          auVar14._2_13_ = auVar18;
          auVar30._2_2_ = 0;
          auVar30._0_2_ = auVar13._8_2_;
          auVar30._4_2_ = auVar11._10_2_;
          auVar30._6_2_ = 0;
          auVar30._8_2_ = auVar5._12_2_;
          auVar30._10_2_ = 0;
          auVar30[0xc] = auVar31[7];
          auVar30._13_3_ = 0;
          auVar3._10_2_ = 0;
          auVar3._0_10_ = auVar14._0_10_;
          auVar3._12_2_ = (short)Var16;
          auVar19._2_4_ = auVar3._10_4_;
          auVar19._0_2_ = auVar17._0_2_;
          auVar19._6_8_ = 0;
          auVar7._4_2_ = auVar18._0_2_;
          auVar7._0_4_ = auVar14._0_4_;
          auVar7._6_8_ = SUB148(auVar19 << 0x40,6);
          auVar32._0_4_ = auVar14._0_4_ & 0xffff;
          auVar32._4_10_ = auVar7._4_10_;
          auVar32._14_2_ = 0;
          *(uint8_t (*) [16])(arg2 + 0x10 + lVar23 * 4) = auVar30;
          auVar29._1_3_ = 0;
          auVar29[0] = auVar31[0xc];
          auVar29[4] = auVar31[0xd];
          auVar29._5_3_ = 0;
          auVar29[8] = auVar31[0xe];
          auVar29._9_3_ = 0;
          auVar29[0xc] = auVar31[0xf];
          auVar29._13_3_ = 0;
          auVar8[0xc] = auVar31[0xb];
          auVar8._0_12_ = ZEXT112(auVar31[0xc]) << 0x40;
          auVar9._10_3_ = auVar8._10_3_;
          auVar9._0_10_ = (unkuint10)auVar31[10] << 0x40;
          auVar20._5_8_ = 0;
          auVar20._0_5_ = auVar9._8_5_;
          auVar10[4] = auVar31[9];
          auVar10._0_4_ = uVar28;
          auVar10[5] = 0;
          auVar10._6_7_ = SUB137(auVar20 << 0x40,6);
          auVar31._0_4_ = uVar28 & 0xffff;
          auVar31._4_9_ = auVar10._4_9_;
          auVar31._13_3_ = 0;
          *(uint8_t (*) [16])(arg2 + lVar23 * 4) = auVar32;
          *(uint8_t (*) [16])(arg2 + 0x20 + lVar23 * 4) = auVar31;
          *(uint8_t (*) [16])(arg2 + 0x30 + lVar23 * 4) = auVar29;
          lVar23 = lVar23 + 0x10;
        } while (uVar25 < uVar26);
        lVar24 = lVar24 + uVar26 * 0x10;
        arg2 = arg2 + uVar26 * 0x40;
        if (uVar1 == uVar26 * 0x10) {
          return;
        }
      }
      lVar23 = 0;
      do {
        *(uint *)(arg2 + lVar23 * 4) = (uint)*(byte *)(lVar24 + lVar23);
        lVar23 = lVar23 + 1;
      } while (lVar23 != lVar27 - lVar24);
    }
  }
  return;
}

/* ======================================================================
 * MOJOSHADER_glSetPixelShaderUniformF  (Ghidra `MOJOSHADER_glSetPixelShaderUniformF` @ 00538570)
 * Signature: uint8_t MOJOSHADER_glSetPixelShaderUniformF(void)
 * Calls: `memcpy`
 * Called by: `gfxSetColorConstant`, `gfxSetFogParams`, `gfxSetPixelShaderConstant`
 */
void MOJOSHADER_glSetPixelShaderUniformF(uint arg1,void *arg2,uint arg3)

{
  long lVar1;
  
  lVar1 = ctx;
  if (0x1fff < arg1) {
    return;
  }
  if (0x2000 - arg1 < arg3) {
    arg3 = 0x2000 - arg1;
  }
  memcpy((void *)(ctx + 0x28808 + (ulong)(arg1 * 4) * 4),arg2,(ulong)(arg3 << 4));
  *(int *)(lVar1 + 0x51038) = *(int *)(lVar1 + 0x51038) + 1;
  return;
}

/* ======================================================================
 * MOJOSHADER_glGetPixelShaderUniformF  (Ghidra `MOJOSHADER_glGetPixelShaderUniformF` @ 005385c0)
 * Signature: uint8_t MOJOSHADER_glGetPixelShaderUniformF(void)
 * Calls: `memcpy`
 * Called by: (none)
 */
void MOJOSHADER_glGetPixelShaderUniformF(uint arg1,void *arg2,uint arg3)

{
  if (0x1fff < arg1) {
    return;
  }
  if (0x2000 - arg1 < arg3) {
    arg3 = 0x2000 - arg1;
  }
  memcpy(arg2,(void *)(ctx + 0x28808 + (ulong)(arg1 << 2) * 4),(ulong)(arg3 << 4));
  return;
}

/* ======================================================================
 * MOJOSHADER_glSetPixelShaderUniformI  (Ghidra `MOJOSHADER_glSetPixelShaderUniformI` @ 00538600)
 * Signature: uint8_t MOJOSHADER_glSetPixelShaderUniformI(void)
 * Calls: `memcpy`
 * Called by: `gfxSetPixelShaderConstant`
 */
void MOJOSHADER_glSetPixelShaderUniformI(uint arg1,void *arg2,uint arg3)

{
  long lVar1;
  
  lVar1 = ctx;
  if (0x7fe < arg1) {
    return;
  }
  if (0x7ff - arg1 < arg3) {
    arg3 = 0x7ff - arg1;
  }
  memcpy((void *)(ctx + 0x48808 + (ulong)(arg1 * 4) * 4),arg2,(ulong)(arg3 << 4));
  *(int *)(lVar1 + 0x51038) = *(int *)(lVar1 + 0x51038) + 1;
  return;
}

/* ======================================================================
 * MOJOSHADER_glGetPixelShaderUniformI  (Ghidra `MOJOSHADER_glGetPixelShaderUniformI` @ 00538650)
 * Signature: uint8_t MOJOSHADER_glGetPixelShaderUniformI(void)
 * Calls: `memcpy`
 * Called by: (none)
 */
void MOJOSHADER_glGetPixelShaderUniformI(uint arg1,void *arg2,uint arg3)

{
  if (0x7fe < arg1) {
    return;
  }
  if (0x7ff - arg1 < arg3) {
    arg3 = 0x7ff - arg1;
  }
  memcpy(arg2,(void *)(ctx + 0x48808 + (ulong)(arg1 << 2) * 4),(ulong)(arg3 << 4));
  return;
}

/* ======================================================================
 * MOJOSHADER_glSetPixelShaderUniformB  (Ghidra `MOJOSHADER_glSetPixelShaderUniformB` @ 00538690)
 * Signature: uint8_t MOJOSHADER_glSetPixelShaderUniformB(void)
 * Calls: (none)
 * Called by: `gfxSetPixelShaderConstant`
 */
void MOJOSHADER_glSetPixelShaderUniformB(uint arg1,long arg2,uint arg3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = ctx;
  if (arg1 < 0x2000) {
    lVar1 = ctx + 0x507f8 + (ulong)arg1;
    if (0x2000 - arg1 < arg3) {
      arg3 = 0x2000 - arg1;
    }
    if (lVar1 != (ulong)arg3 + lVar1) {
      lVar3 = 0;
      do {
        *(bool *)(lVar1 + lVar3) = *(int *)(arg2 + lVar3 * 4) != 0;
        lVar3 = lVar3 + 1;
      } while (lVar3 != ((ulong)arg3 + lVar1) - lVar1);
    }
    *(int *)(lVar2 + 0x51038) = *(int *)(lVar2 + 0x51038) + 1;
  }
  return;
}

/* ======================================================================
 * MOJOSHADER_glGetPixelShaderUniformB  (Ghidra `MOJOSHADER_glGetPixelShaderUniformB` @ 005386f0)
 * Signature: uint8_t MOJOSHADER_glGetPixelShaderUniformB(void)
 * Calls: (none)
 * Called by: (none)
 */
void MOJOSHADER_glGetPixelShaderUniformB(uint arg1,ulong arg2,uint arg3)

{
  ulong uVar1;
  long lVar2;
  uint8_t auVar3 [14];
  uint8_t auVar4 [15];
  uint8_t auVar5 [15];
  uint8_t auVar6 [15];
  uint8_t auVar7 [14];
  uint8_t auVar8 [13];
  uint8_t auVar9 [13];
  uint8_t auVar10 [13];
  uint8_t auVar11 [15];
  uint8_t auVar12 [15];
  uint8_t auVar13 [15];
  uint8_t auVar14 [15];
  uint8_t auVar15 [15];
  unkuint9 Var16;
  uint8_t auVar17 [11];
  uint8_t auVar18 [13];
  uint8_t auVar19 [14];
  uint8_t auVar20 [13];
  uint8_t auVar21 [15];
  uint8_t auVar22 [15];
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  
  if (arg1 < 0x2000) {
    lVar23 = ctx + 0x507f0 + (ulong)arg1;
    uVar28 = 0x2000 - arg1;
    if (arg3 <= 0x2000 - arg1) {
      uVar28 = arg3;
    }
    lVar24 = lVar23 + 8;
    lVar27 = (ulong)uVar28 + lVar24;
    if (lVar24 != lVar27) {
      lVar2 = ctx + (ulong)arg1;
      uVar1 = (lVar27 - lVar23) - 8;
      uVar25 = lVar2 + 0x507f8;
      uVar26 = uVar1 >> 4;
      if ((uVar26 != 0) &&
         (0xf < uVar1 && (uVar25 + uVar1 < arg2 || arg2 + uVar1 * 4 < uVar25))) {
        lVar23 = 0;
        uVar25 = 0;
        do {
          auVar31 = *(uint8_t (*) [16])(lVar2 + 0x507f8 + lVar23);
          uVar25 = uVar25 + 1;
          uVar28 = CONCAT13(0,CONCAT12(auVar31[9],(ushort)auVar31[8]));
          auVar4[0xd] = 0;
          auVar4._0_13_ = auVar31._0_13_;
          auVar4[0xe] = auVar31[7];
          auVar5[0xc] = auVar31[6];
          auVar5._0_12_ = auVar31._0_12_;
          auVar5._13_2_ = auVar4._13_2_;
          auVar6[0xb] = 0;
          auVar6._0_11_ = auVar31._0_11_;
          auVar6._12_3_ = auVar5._12_3_;
          auVar11[10] = auVar31[5];
          auVar11._0_10_ = auVar31._0_10_;
          auVar11._11_4_ = auVar6._11_4_;
          auVar12[9] = 0;
          auVar12._0_9_ = auVar31._0_9_;
          auVar12._10_5_ = auVar11._10_5_;
          auVar13[8] = auVar31[4];
          auVar13._0_8_ = auVar31._0_8_;
          auVar13._9_6_ = auVar12._9_6_;
          auVar15._7_8_ = 0;
          auVar15._0_7_ = auVar13._8_7_;
          Var16 = CONCAT81(SUB158(auVar15 << 0x40,7),auVar31[3]);
          auVar21._9_6_ = 0;
          auVar21._0_9_ = Var16;
          auVar17._1_10_ = SUB1510(auVar21 << 0x30,5);
          auVar17[0] = auVar31[2];
          auVar22._11_4_ = 0;
          auVar22._0_11_ = auVar17;
          auVar18._1_12_ = SUB1512(auVar22 << 0x20,3);
          auVar18[0] = auVar31[1];
          auVar14[1] = 0;
          auVar14[0] = auVar31[0];
          auVar14._2_13_ = auVar18;
          auVar30._2_2_ = 0;
          auVar30._0_2_ = auVar13._8_2_;
          auVar30._4_2_ = auVar11._10_2_;
          auVar30._6_2_ = 0;
          auVar30._8_2_ = auVar5._12_2_;
          auVar30._10_2_ = 0;
          auVar30[0xc] = auVar31[7];
          auVar30._13_3_ = 0;
          auVar3._10_2_ = 0;
          auVar3._0_10_ = auVar14._0_10_;
          auVar3._12_2_ = (short)Var16;
          auVar19._2_4_ = auVar3._10_4_;
          auVar19._0_2_ = auVar17._0_2_;
          auVar19._6_8_ = 0;
          auVar7._4_2_ = auVar18._0_2_;
          auVar7._0_4_ = auVar14._0_4_;
          auVar7._6_8_ = SUB148(auVar19 << 0x40,6);
          auVar32._0_4_ = auVar14._0_4_ & 0xffff;
          auVar32._4_10_ = auVar7._4_10_;
          auVar32._14_2_ = 0;
          *(uint8_t (*) [16])(arg2 + 0x10 + lVar23 * 4) = auVar30;
          auVar29._1_3_ = 0;
          auVar29[0] = auVar31[0xc];
          auVar29[4] = auVar31[0xd];
          auVar29._5_3_ = 0;
          auVar29[8] = auVar31[0xe];
          auVar29._9_3_ = 0;
          auVar29[0xc] = auVar31[0xf];
          auVar29._13_3_ = 0;
          auVar8[0xc] = auVar31[0xb];
          auVar8._0_12_ = ZEXT112(auVar31[0xc]) << 0x40;
          auVar9._10_3_ = auVar8._10_3_;
          auVar9._0_10_ = (unkuint10)auVar31[10] << 0x40;
          auVar20._5_8_ = 0;
          auVar20._0_5_ = auVar9._8_5_;
          auVar10[4] = auVar31[9];
          auVar10._0_4_ = uVar28;
          auVar10[5] = 0;
          auVar10._6_7_ = SUB137(auVar20 << 0x40,6);
          auVar31._0_4_ = uVar28 & 0xffff;
          auVar31._4_9_ = auVar10._4_9_;
          auVar31._13_3_ = 0;
          *(uint8_t (*) [16])(arg2 + lVar23 * 4) = auVar32;
          *(uint8_t (*) [16])(arg2 + 0x20 + lVar23 * 4) = auVar31;
          *(uint8_t (*) [16])(arg2 + 0x30 + lVar23 * 4) = auVar29;
          lVar23 = lVar23 + 0x10;
        } while (uVar25 < uVar26);
        lVar24 = lVar24 + uVar26 * 0x10;
        arg2 = arg2 + uVar26 * 0x40;
        if (uVar1 == uVar26 * 0x10) {
          return;
        }
      }
      lVar23 = 0;
      do {
        *(uint *)(arg2 + lVar23 * 4) = (uint)*(byte *)(lVar24 + lVar23);
        lVar23 = lVar23 + 1;
      } while (lVar23 != lVar27 - lVar24);
    }
  }
  return;
}

/* ======================================================================
 * MOJOSHADER_glSetVertexAttribute  (Ghidra `MOJOSHADER_glSetVertexAttribute` @ 00538810)
 * Signature: uint8_t MOJOSHADER_glSetVertexAttribute(void)
 * Calls: (none)
 * Called by: `gfxDraw`
 */
void MOJOSHADER_glSetVertexAttribute
               (int arg1,int arg2,uint32_t arg3,uint32_t arg4,int arg5,
               uint32_t arg6,uint64_t arg7)

{
  long *plVar1;
  long lVar2;
  uint64_t *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  plVar1 = *(long **)(ctx + 0x510a0);
  if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
    uVar4 = 0;
    switch(arg4) {
    case 0:
      uVar4 = 0x1400;
      break;
    case 1:
      uVar4 = 0x1401;
      break;
    case 2:
      uVar4 = 0x1402;
      break;
    case 3:
      uVar4 = 0x1403;
      break;
    case 4:
      uVar4 = 0x1404;
      break;
    case 5:
      uVar4 = 0x1405;
      break;
    case 6:
      uVar4 = 0x1406;
      break;
    case 7:
      uVar4 = 0x140a;
      break;
    case 8:
      uVar4 = 0x140b;
      if ((*(int *)(ctx + 0x510e8) == 0) && (*(int *)(ctx + 0x510ec) == 0)) {
        uVar4 = ~-(uint)(*(int *)(ctx + 0x510f0) == 0) & 0x8d61;
      }
      break;
    case 0xffffffff:
      uVar4 = 0;
    }
    iVar5 = (int)plVar1[5];
    if (iVar5 < 1) {
      if (iVar5 != 0) {
        iVar5 = 0;
LAB_00538886:
        (**(code **)(ctx + 0x511c0))(iVar5,arg3,uVar4,arg5 != 0,arg6,arg7);
        lVar2 = ctx;
        *(uint8_t *)(ctx + 0x5104c + (long)iVar5) = 1;
        if (*(int *)(lVar2 + 0x51048) <= iVar5) {
          *(int *)(lVar2 + 0x51048) = iVar5 + 1;
        }
      }
    }
    else {
      puVar3 = (uint64_t *)plVar1[6];
      iVar6 = 0;
      do {
        if ((*(int *)*puVar3 == arg1) && (((int *)*puVar3)[1] == arg2)) {
          iVar5 = *(int *)(puVar3 + 1);
          goto LAB_00538886;
        }
        iVar6 = iVar6 + 1;
        puVar3 = puVar3 + 2;
      } while (iVar5 != iVar6);
    }
  }
  return;
}

/* ======================================================================
 * MOJOSHADER_glSetVertexPreshaderUniformF  (Ghidra `MOJOSHADER_glSetVertexPreshaderUniformF` @ 00538980)
 * Signature: uint8_t MOJOSHADER_glSetVertexPreshaderUniformF(void)
 * Calls: `memcpy`
 * Called by: (none)
 */
void MOJOSHADER_glSetVertexPreshaderUniformF(uint arg1,void *arg2,uint arg3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = ctx;
  lVar1 = *(long *)(ctx + 0x510a0);
  if ((lVar1 != 0) && (arg1 < *(uint *)(lVar1 + 0x98))) {
    uVar3 = *(uint *)(lVar1 + 0x98) - arg1;
    if (uVar3 < arg3) {
      arg3 = uVar3;
    }
    memcpy((void *)(*(long *)(lVar1 + 0xa0) + (ulong)(arg1 * 4) * 4),arg2,
           (ulong)(arg3 << 4));
    *(int *)(lVar1 + 0x14) = *(int *)(lVar2 + 0x51038) + -1;
  }
  return;
}

/* ======================================================================
 * MOJOSHADER_glGetVertexPreshaderUniformF  (Ghidra `MOJOSHADER_glGetVertexPreshaderUniformF` @ 005389f0)
 * Signature: uint8_t MOJOSHADER_glGetVertexPreshaderUniformF(void)
 * Calls: `memcpy`
 * Called by: (none)
 */
void MOJOSHADER_glGetVertexPreshaderUniformF(uint arg1,void *arg2,uint arg3)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(ctx + 0x510a0);
  if ((lVar1 != 0) && (arg1 < *(uint *)(lVar1 + 0x98))) {
    uVar2 = *(uint *)(lVar1 + 0x98) - arg1;
    if (uVar2 < arg3) {
      arg3 = uVar2;
    }
    memcpy(arg2,(void *)(*(long *)(lVar1 + 0xa0) + (ulong)(arg1 * 4) * 4),
           (ulong)(arg3 << 4));
    return;
  }
  return;
}

/* ======================================================================
 * MOJOSHADER_glSetPixelPreshaderUniformF  (Ghidra `MOJOSHADER_glSetPixelPreshaderUniformF` @ 00538a40)
 * Signature: uint8_t MOJOSHADER_glSetPixelPreshaderUniformF(void)
 * Calls: `memcpy`
 * Called by: (none)
 */
void MOJOSHADER_glSetPixelPreshaderUniformF(uint arg1,void *arg2,uint arg3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = ctx;
  lVar1 = *(long *)(ctx + 0x510a0);
  if ((lVar1 != 0) && (arg1 < *(uint *)(lVar1 + 0xa8))) {
    uVar3 = *(uint *)(lVar1 + 0xa8) - arg1;
    if (uVar3 < arg3) {
      arg3 = uVar3;
    }
    memcpy((void *)(*(long *)(lVar1 + 0xb0) + (ulong)(arg1 * 4) * 4),arg2,
           (ulong)(arg3 << 4));
    *(int *)(lVar1 + 0x14) = *(int *)(lVar2 + 0x51038) + -1;
  }
  return;
}

/* ======================================================================
 * MOJOSHADER_glGetPixelPreshaderUniformF  (Ghidra `MOJOSHADER_glGetPixelPreshaderUniformF` @ 00538ab0)
 * Signature: uint8_t MOJOSHADER_glGetPixelPreshaderUniformF(void)
 * Calls: `memcpy`
 * Called by: (none)
 */
void MOJOSHADER_glGetPixelPreshaderUniformF(uint arg1,void *arg2,uint arg3)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(ctx + 0x510a0);
  if ((lVar1 != 0) && (arg1 < *(uint *)(lVar1 + 0xa8))) {
    uVar2 = *(uint *)(lVar1 + 0xa8) - arg1;
    if (uVar2 < arg3) {
      arg3 = uVar2;
    }
    memcpy(arg2,(void *)(*(long *)(lVar1 + 0xb0) + (ulong)(arg1 * 4) * 4),
           (ulong)(arg3 << 4));
    return;
  }
  return;
}

/* ======================================================================
 * MOJOSHADER_glProgramReady  (Ghidra `MOJOSHADER_glProgramReady` @ 00538b00)
 * Signature: uint8_t MOJOSHADER_glProgramReady(void)
 * Calls: `memcpy`
 * Called by: `gfxDraw`
 */
void MOJOSHADER_glProgramReady(void)

{
  uint16_t *puVar1;
  ushort *puVar2;
  uint8_t auVar3 [16];
  char cVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  uint8_t auVar8 [14];
  uint8_t auVar9 [12];
  unkuint10 Var10;
  uint8_t auVar11 [13];
  uint8_t auVar12 [11];
  uint8_t auVar13 [14];
  uint8_t auVar14 [13];
  uint8_t auVar15 [15];
  uint8_t auVar16 [13];
  uint8_t auVar17 [15];
  uint8_t auVar18 [15];
  uint8_t auVar19 [13];
  uint8_t auVar20 [15];
  uint8_t auVar21 [15];
  uint8_t auVar22 [15];
  uint8_t auVar23 [13];
  long lVar24;
  int *piVar25;
  ulong uVar26;
  int iVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  ulong uVar31;
  int iVar32;
  ulong uVar33;
  ulong uVar34;
  size_t sVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  int iVar40;
  void *__dest;
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  long local_60;
  void *local_58;
  long local_50;
  long local_48;
  
  lVar6 = *(long *)(ctx + 0x510a0);
  if (lVar6 != 0) {
    iVar27 = *(int *)(ctx + 0x51048);
    iVar40 = 0;
    lVar24 = ctx;
    if (0 < iVar27) {
      iVar29 = 0;
      iVar40 = 0;
      do {
        lVar38 = (long)iVar29;
        cVar4 = *(char *)(lVar24 + 0x5104c + lVar38);
        if (*(char *)(lVar24 + 0x5106c + lVar38) != cVar4) {
          if (cVar4 == '\0') {
            (**(code **)(lVar24 + 0x51150))();
          }
          else {
            (**(code **)(lVar24 + 0x51158))(iVar29);
          }
          lVar24 = ctx;
          *(char *)(ctx + 0x5106c + lVar38) = cVar4;
          iVar27 = *(int *)(lVar24 + 0x51048);
        }
        if (cVar4 != '\0') {
          iVar40 = iVar29 + 1;
        }
        iVar29 = iVar29 + 1;
      } while (iVar29 < iVar27);
    }
    *(int *)(lVar24 + 0x51048) = iVar40;
    if (*(int *)(lVar6 + 0xbc) != *(int *)(lVar24 + 0x5108c)) {
      if (*(int *)(lVar6 + 0xbc) == 0) {
        (**(code **)(lVar24 + 0x51118))();
      }
      else {
        (**(code **)(lVar24 + 0x51110))(0x8642);
      }
      lVar24 = ctx;
      *(uint32_t *)(ctx + 0x5108c) = *(uint32_t *)(lVar6 + 0xbc);
    }
    if ((*(int *)(lVar6 + 0x18) != 0) && (*(int *)(lVar6 + 0x14) != *(int *)(lVar24 + 0x51038))) {
      local_48 = lVar24 + 0x20018;
      local_60 = lVar24 + 0x18;
      __dest = *(void **)(lVar6 + 0x40);
      local_58 = *(void **)(lVar6 + 0x50);
      lVar39 = 0;
      local_50 = lVar24 + 0x28008;
      lVar38 = ((ulong)(*(int *)(lVar6 + 0x18) - 1) * 3 + 3) * 8;
      iVar40 = 2;
      uVar30 = *(ulong *)(lVar6 + 0x60);
      do {
        while( true ) {
          piVar25 = (int *)(lVar39 + *(long *)(lVar6 + 0x20));
          piVar7 = *(int **)(piVar25 + 2);
          iVar27 = *piVar25;
          iVar29 = piVar7[1];
          iVar5 = *piVar7;
          iVar32 = piVar7[2];
          if (piVar7[2] == 0) {
            iVar32 = 1;
          }
          uVar31 = uVar30;
          if ((iVar40 != iVar27) && (iVar40 = iVar27, iVar27 == 1)) {
            local_60 = lVar24 + 0x28808;
            __dest = *(void **)(lVar6 + 0x70);
            uVar31 = *(ulong *)(lVar6 + 0x90);
            local_48 = lVar24 + 0x48808;
            local_50 = lVar24 + 0x507f8;
            local_58 = *(void **)(lVar6 + 0x80);
          }
          uVar30 = uVar31;
          if (iVar5 != 0) break;
          sVar35 = (long)(iVar32 << 2) * 4;
          lVar39 = lVar39 + 0x18;
          memcpy(__dest,(void *)(local_60 + (long)(iVar29 << 2) * 4),sVar35);
          __dest = (void *)((long)__dest + sVar35);
          if (lVar39 == lVar38) goto LAB_00538d16;
        }
        if (iVar5 == 1) {
          sVar35 = (long)(iVar32 << 2) * 4;
          memcpy(local_58,(void *)(local_48 + (long)(iVar29 * 4) * 4),sVar35);
          local_58 = (void *)((long)local_58 + sVar35);
        }
        else if (iVar5 == 2) {
          uVar33 = (ulong)iVar32;
          uVar28 = iVar29 + local_50;
          uVar30 = uVar31 + uVar33 * 4;
          uVar34 = uVar33 >> 4;
          uVar26 = uVar34 << 4;
          if ((uVar34 == 0) || (uVar33 < 0x10 || uVar31 <= uVar28 + uVar33 && uVar28 <= uVar30)) {
            uVar26 = 0;
          }
          else {
            lVar36 = 0;
            uVar37 = 0;
            do {
              auVar3 = *(uint8_t (*) [16])(uVar28 + lVar36);
              uVar37 = uVar37 + 1;
              auVar15[0xd] = 0;
              auVar15._0_13_ = auVar3._0_13_;
              auVar15[0xe] = auVar3[7];
              auVar17[0xc] = auVar3[6];
              auVar17._0_12_ = auVar3._0_12_;
              auVar17._13_2_ = auVar15._13_2_;
              auVar18[0xb] = 0;
              auVar18._0_11_ = auVar3._0_11_;
              auVar18._12_3_ = auVar17._12_3_;
              auVar20[10] = auVar3[5];
              auVar20._0_10_ = auVar3._0_10_;
              auVar20._11_4_ = auVar18._11_4_;
              auVar21[9] = 0;
              auVar21._0_9_ = auVar3._0_9_;
              auVar21._10_5_ = auVar20._10_5_;
              auVar22[8] = auVar3[4];
              auVar22._0_8_ = auVar3._0_8_;
              auVar22._9_6_ = auVar21._9_6_;
              Var10 = CONCAT91((unkuint9)auVar22._8_7_ << 8,auVar3[3]);
              auVar12[10] = 0;
              auVar12._0_10_ = Var10;
              auVar9._1_11_ = auVar12 << 8;
              auVar9[0] = auVar3[2];
              auVar11[0xc] = 0;
              auVar11._0_12_ = auVar9;
              auVar8._1_13_ = auVar11 << 8;
              auVar8[0] = auVar3[1];
              auVar41._0_2_ = CONCAT11(0,auVar3[0]);
              auVar41._2_14_ = auVar8;
              auVar13._10_2_ = 0;
              auVar13._0_10_ = auVar41._0_10_;
              auVar13._12_2_ = (short)Var10;
              auVar43._6_10_ = (unkuint10)CONCAT42(auVar13._10_4_,auVar9._0_2_) << 0x10;
              auVar43._4_2_ = auVar8._0_2_;
              auVar43._2_2_ = 0;
              auVar43._0_2_ = auVar41._0_2_;
              puVar1 = (uint16_t *)(uVar31 + 0x10 + lVar36 * 4);
              *puVar1 = auVar22._8_2_;
              puVar1[1] = 0;
              puVar1[2] = auVar20._10_2_;
              puVar1[3] = 0;
              puVar1[4] = auVar17._12_2_;
              puVar1[5] = 0;
              puVar1[6] = (ushort)auVar3[7];
              puVar1[7] = 0;
              auVar14[0xc] = auVar3[0xb];
              auVar14._0_12_ = ZEXT112(auVar3[0xc]) << 0x40;
              auVar16._10_3_ = auVar14._10_3_;
              auVar16._0_10_ = (unkuint10)auVar3[10] << 0x40;
              auVar23._5_8_ = 0;
              auVar23._0_5_ = auVar16._8_5_;
              auVar19._6_7_ = SUB137(auVar23 << 0x40,6);
              auVar19._0_6_ = (uint6)auVar3[9] << 0x20;
              auVar42._1_3_ = 0;
              auVar42[0] = auVar3[8];
              auVar42._4_9_ = auVar19._4_9_;
              auVar42._13_3_ = 0;
              *(uint8_t (*) [16])(uVar31 + lVar36 * 4) = auVar43;
              *(uint8_t (*) [16])(uVar31 + 0x20 + lVar36 * 4) = auVar42;
              puVar2 = (ushort *)(uVar31 + 0x30 + lVar36 * 4);
              *puVar2 = (ushort)auVar3[0xc];
              puVar2[1] = 0;
              puVar2[2] = (ushort)auVar3[0xd];
              puVar2[3] = 0;
              puVar2[4] = (ushort)auVar3[0xe];
              puVar2[5] = 0;
              puVar2[6] = (ushort)auVar3[0xf];
              puVar2[7] = 0;
              lVar36 = lVar36 + 0x10;
            } while (uVar37 < uVar34);
            if (uVar33 == uVar26) goto LAB_00538c72;
          }
          do {
            *(uint *)(uVar31 + uVar26 * 4) = (uint)*(byte *)(uVar28 + uVar26);
            uVar26 = uVar26 + 1;
          } while (uVar26 < uVar33);
        }
LAB_00538c72:
        lVar39 = lVar39 + 0x18;
      } while (lVar39 != lVar38);
LAB_00538d16:
      *(uint32_t *)(lVar6 + 0x14) = *(uint32_t *)(lVar24 + 0x51038);
                    /* WARNING: Could not recover jumptable at 0x00538d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar24 + 0x512f0))();
      return;
    }
  }
  return;
}

/* ======================================================================
 * MOJOSHADER_glDeleteProgram  (Ghidra `MOJOSHADER_glDeleteProgram` @ 00538ef0)
 * Signature: uint8_t MOJOSHADER_glDeleteProgram(void)
 * Calls: `program_unref_part_10`
 * Called by: (none)
 */
void MOJOSHADER_glDeleteProgram(long arg1)

{
  if (arg1 == 0) {
    return;
  }
  if (1 < *(uint *)(arg1 + 0xb8)) {
    *(uint *)(arg1 + 0xb8) = *(uint *)(arg1 + 0xb8) - 1;
    return;
  }
  program_unref_part_10();
  return;
}

/* ======================================================================
 * MOJOSHADER_glDeleteShader  (Ghidra `MOJOSHADER_glDeleteShader` @ 00538f20)
 * Signature: uint8_t MOJOSHADER_glDeleteShader(void)
 * Calls: `MOJOSHADER_freeParseData`, `hash_iter_keys`, `hash_remove`
 * Called by: `DestroyOpenGLShader`, `gfxDestroyPixelShader`, `gfxDestroyVertexShader`
 */
void MOJOSHADER_glDeleteShader(uint64_t *arg1)

{
  long *plVar1;
  int iVar2;
  long *local_28;
  uint64_t local_20;
  
  if (*(long *)(ctx + 0x51040) != 0) {
    local_28 = (long *)0x0;
    local_20 = 0;
    iVar2 = hash_iter_keys(*(long *)(ctx + 0x51040),&local_28,&local_20);
    while (iVar2 != 0) {
      while ((plVar1 = local_28,
             iVar2 = hash_iter_keys(*(uint64_t *)(ctx + 0x51040),&local_28,&local_20),
             (uint64_t *)*plVar1 == arg1 || ((uint64_t *)plVar1[1] == arg1))) {
        hash_remove(*(uint64_t *)(ctx + 0x51040),plVar1);
        if (iVar2 == 0) goto LAB_00538fb8;
      }
    }
  }
LAB_00538fb8:
  if (arg1 != (uint64_t *)0x0) {
    if (*(uint *)((long)arg1 + 0xc) < 2) {
      (**(code **)(ctx + 0x512a8))(*(uint32_t *)(arg1 + 1));
      MOJOSHADER_freeParseData(*arg1);
      (**(code **)(ctx + 8))(arg1,*(uint64_t *)(ctx + 0x10));
      return;
    }
    *(uint *)((long)arg1 + 0xc) = *(uint *)((long)arg1 + 0xc) - 1;
  }
  return;
}

/* ======================================================================
 * MOJOSHADER_glDestroyContext  (Ghidra `MOJOSHADER_glDestroyContext` @ 00539010)
 * Signature: uint8_t MOJOSHADER_glDestroyContext(void)
 * Calls: `MOJOSHADER_glBindProgram`, `hash_destroy`, `lookup_entry_points`
 * Called by: `OpenGLGraphics__OpenGLGraphics__005608f0`
 */
void MOJOSHADER_glDestroyContext(long arg1)

{
  long lVar1;
  
  lVar1 = ctx;
  ctx = arg1;
  MOJOSHADER_glBindProgram(0);
  if (*(long *)(ctx + 0x51040) != 0) {
    hash_destroy();
  }
  lookup_entry_points(0,0);
  if (ctx != 0) {
    (**(code **)(ctx + 8))(ctx,*(uint64_t *)(ctx + 0x10));
  }
  if (lVar1 == arg1) {
    lVar1 = 0;
  }
  ctx = lVar1;
  return;
}

/* ======================================================================
 * MOJOSHADER_internal_include_close  (Ghidra `MOJOSHADER_internal_include_close` @ 005390d0)
 * Signature: uint8_t MOJOSHADER_internal_include_close(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_assemble`, `MOJOSHADER_preprocess`
 */
void MOJOSHADER_internal_include_close
               (uint64_t arg1,uint64_t arg2,code *UNRECOVERED_JUMPTABLE,uint64_t arg4
               )

{
                    /* WARNING: Could not recover jumptable at 0x005390d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(arg1,arg4);
  return;
}

/* ======================================================================
 * MOJOSHADER_internal_include_open  (Ghidra `MOJOSHADER_internal_include_open` @ 005396d0)
 * Signature: uint8_t MOJOSHADER_internal_include_open(void)
 * Calls: `close`, `open`, `read`
 * Called by: `MOJOSHADER_assemble`, `MOJOSHADER_preprocess`
 */
uint64_t
MOJOSHADER_internal_include_open
          (uint64_t arg1,char *arg2,uint64_t arg3,uint64_t *arg4,
          uint32_t *arg5,code *arg6,code *arg7,uint64_t arg8)

{
  int iVar1;
  void *__buf;
  ssize_t sVar2;
  uint64_t uVar3;
  stat sStack_c8;
  
  uVar3 = 0;
  iVar1 = __xstat(1,arg2,&sStack_c8);
  if (iVar1 != -1) {
    __buf = (void *)(*arg6)((uint32_t)sStack_c8.st_size);
    if (__buf != (void *)0x0) {
      iVar1 = open(arg2,0);
      if (iVar1 == -1) {
        (*arg7)(__buf,arg8);
        uVar3 = 0;
      }
      else {
        sVar2 = read(iVar1,__buf,CONCAT44(sStack_c8.st_size._4_4_,(uint32_t)sStack_c8.st_size));
        if (sVar2 == CONCAT44(sStack_c8.st_size._4_4_,(uint32_t)sStack_c8.st_size)) {
          close(iVar1);
          *arg4 = __buf;
          *arg5 = (uint32_t)sStack_c8.st_size;
          uVar3 = 1;
        }
        else {
          (*arg7)(__buf,arg8);
          close(iVar1);
        }
      }
    }
  }
  return uVar3;
}

/* ======================================================================
 * preprocessor_end  (Ghidra `preprocessor_end` @ 0053b790)
 * Signature: uint8_t preprocessor_end(void)
 * Calls: `free_define`, `stringcache_destroy`
 * Called by: `MOJOSHADER_assemble`, `MOJOSHADER_preprocess`, `preprocessor_start`
 */
void preprocessor_end(long arg1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if (arg1 == 0) {
    return;
  }
  lVar1 = *(long *)(arg1 + 0x120);
  while (lVar1 != 0) {
    if (*(code **)(lVar1 + 0x58) != (code *)0x0) {
      (**(code **)(lVar1 + 0x58))
                (*(uint64_t *)(lVar1 + 8),*(uint64_t *)(arg1 + 0x960),
                 *(uint64_t *)(arg1 + 0x968),*(uint64_t *)(arg1 + 0x970));
    }
    if (*(long *)(lVar1 + 0x50) != 0) {
      lVar2 = *(long *)(lVar1 + 0x50);
      lVar4 = *(long *)(arg1 + 0x118);
      do {
        lVar3 = lVar2;
        lVar2 = *(long *)(lVar3 + 0x10);
        *(long *)(lVar3 + 0x10) = lVar4;
        *(long *)(arg1 + 0x118) = lVar3;
        lVar4 = lVar3;
      } while (lVar2 != 0);
    }
    *(uint64_t *)(arg1 + 0x120) = *(uint64_t *)(lVar1 + 0x60);
    *(uint64_t *)(lVar1 + 0x60) = *(uint64_t *)(arg1 + 0x128);
    *(long *)(arg1 + 0x128) = lVar1;
    lVar1 = *(long *)(arg1 + 0x120);
  }
  plVar5 = (long *)(arg1 + 0x130);
  do {
    lVar1 = *plVar5;
    *plVar5 = 0;
    while (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x28);
      free_define(arg1);
    }
    plVar5 = plVar5 + 1;
  } while (plVar5 != (long *)(arg1 + 0x930));
  if (*(long *)(arg1 + 0x948) != 0) {
    stringcache_destroy();
  }
  free_define(arg1,*(uint64_t *)(arg1 + 0x938));
  free_define(arg1,*(uint64_t *)(arg1 + 0x940));
  lVar1 = *(long *)(arg1 + 0x930);
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x28);
    (**(code **)(arg1 + 0x968))(lVar1,*(uint64_t *)(arg1 + 0x970));
    lVar1 = lVar2;
  }
  lVar1 = *(long *)(arg1 + 0x118);
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    (**(code **)(arg1 + 0x968))(lVar1,*(uint64_t *)(arg1 + 0x970));
    lVar1 = lVar2;
  }
  lVar1 = *(long *)(arg1 + 0x128);
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x60);
    (**(code **)(arg1 + 0x968))(lVar1,*(uint64_t *)(arg1 + 0x970));
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0053b954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(arg1 + 0x968))(arg1,*(uint64_t *)(arg1 + 0x970));
  return;
}

/* ======================================================================
 * preprocessor_start  (Ghidra `preprocessor_start` @ 0053b970)
 * Signature: uint8_t preprocessor_start(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_append_fmt`, `buffer_create`, `buffer_destroy`, `buffer_flatten`, `buffer_size`, `close_define_include`, `preprocessor_end`, `push_source` (+1 more)
 * Called by: `MOJOSHADER_assemble`
 */
uint64_t *
preprocessor_start(uint64_t arg1,uint64_t arg2,uint32_t arg3,uint64_t arg4,
                  uint64_t arg5,long arg6,uint arg7,uint32_t arg8,code *arg9,
                  uint64_t arg10,uint64_t arg11)

{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  long lVar4;
  uint64_t *puVar5;
  long lVar6;
  uint64_t *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  
  bVar13 = 0;
  puVar3 = (uint64_t *)(*arg9)(0x978,arg11);
  if (puVar3 == (uint64_t *)0x0) {
    return (uint64_t *)0x0;
  }
  bVar11 = ((ulong)puVar3 & 1) != 0;
  uVar9 = 0x978;
  puVar7 = puVar3;
  if (bVar11) {
    *(uint8_t *)puVar3 = 0;
    puVar7 = (uint64_t *)((long)puVar3 + 1);
    uVar9 = 0x977;
  }
  if (((ulong)puVar7 & 2) != 0) {
    *(uint16_t *)puVar7 = 0;
    uVar9 = (ulong)((int)uVar9 - 2);
    puVar7 = (uint64_t *)((long)puVar7 + 2);
  }
  if (((ulong)puVar7 & 4) != 0) {
    *(uint32_t *)puVar7 = 0;
    uVar9 = (ulong)((int)uVar9 - 4);
    puVar7 = (uint64_t *)((long)puVar7 + 4);
  }
  for (uVar8 = uVar9 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + (ulong)bVar13 * -2 + 1;
  }
  if ((uVar9 & 4) != 0) {
    *(uint32_t *)puVar7 = 0;
    puVar7 = (uint64_t *)((long)puVar7 + 4);
  }
  if ((uVar9 & 2) != 0) {
    *(uint16_t *)puVar7 = 0;
    puVar7 = (uint64_t *)((long)puVar7 + 2);
  }
  if (bVar11) {
    *(uint8_t *)puVar7 = 0;
  }
  puVar3[0x12a] = arg4;
  puVar3[299] = arg5;
  puVar3[0x12e] = arg11;
  puVar3[300] = arg9;
  puVar3[0x12d] = arg10;
  *(uint32_t *)((long)puVar3 + 0x10c) = arg8;
  lVar4 = stringcache_create(MallocBridge,FreeBridge,puVar3);
  puVar7 = (uint64_t *)puVar3[0x126];
  puVar3[0x129] = lVar4;
  if (puVar7 == (uint64_t *)0x0) {
    puVar7 = (uint64_t *)(*(code *)puVar3[300])(0x30,puVar3[0x12e]);
    if (puVar7 != (uint64_t *)0x0) goto LAB_0053ba67;
    *(uint32_t *)((long)puVar3 + 4) = 1;
LAB_0053bab2:
    puVar3[0x127] = puVar7;
  }
  else {
    puVar3[0x126] = puVar7[5];
LAB_0053ba67:
    bVar11 = ((ulong)puVar7 & 1) != 0;
    uVar9 = 0x30;
    puVar5 = puVar7;
    if (bVar11) {
      *(uint8_t *)puVar7 = 0;
      puVar5 = (uint64_t *)((long)puVar7 + 1);
      uVar9 = 0x2f;
    }
    if (((ulong)puVar5 & 2) != 0) {
      *(uint16_t *)puVar5 = 0;
      uVar9 = (ulong)((int)uVar9 - 2);
      puVar5 = (uint64_t *)((long)puVar5 + 2);
    }
    if (((ulong)puVar5 & 4) != 0) {
      *(uint32_t *)puVar5 = 0;
      uVar9 = (ulong)((int)uVar9 - 4);
      puVar5 = (uint64_t *)((long)puVar5 + 4);
    }
    for (uVar8 = uVar9 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar13 * -2 + 1;
    }
    if ((uVar9 & 4) != 0) {
      *(uint32_t *)puVar5 = 0;
      puVar5 = (uint64_t *)((long)puVar5 + 4);
    }
    if ((uVar9 & 2) != 0) {
      *(uint16_t *)puVar5 = 0;
      puVar5 = (uint64_t *)((long)puVar5 + 2);
    }
    if (!bVar11) goto LAB_0053bab2;
    *(uint8_t *)puVar5 = 0;
    puVar3[0x127] = puVar7;
  }
  bVar11 = false;
  if ((lVar4 != 0) && (bVar11 = false, puVar7 != (uint64_t *)0x0)) {
    puVar5 = (uint64_t *)(*(code *)puVar3[300])(9,puVar3[0x12e]);
    if (puVar5 == (uint64_t *)0x0) {
      *(uint32_t *)((long)puVar3 + 4) = 1;
    }
    else {
      *(uint8_t *)(puVar5 + 1) = 0;
      *puVar5 = 0x5f5f454c49465f5f;
    }
    bVar11 = puVar5 != (uint64_t *)0x0;
    *puVar7 = puVar5;
  }
  puVar7 = (uint64_t *)puVar3[0x126];
  if (puVar7 == (uint64_t *)0x0) {
    puVar7 = (uint64_t *)(*(code *)puVar3[300])(0x30,puVar3[0x12e]);
    if (puVar7 != (uint64_t *)0x0) goto LAB_0053bae1;
    *(uint32_t *)((long)puVar3 + 4) = 1;
LAB_0053bb2c:
    puVar3[0x128] = puVar7;
  }
  else {
    puVar3[0x126] = puVar7[5];
LAB_0053bae1:
    bVar12 = ((ulong)puVar7 & 1) != 0;
    uVar9 = 0x30;
    puVar5 = puVar7;
    if (bVar12) {
      *(uint8_t *)puVar7 = 0;
      puVar5 = (uint64_t *)((long)puVar7 + 1);
      uVar9 = 0x2f;
    }
    if (((ulong)puVar5 & 2) != 0) {
      *(uint16_t *)puVar5 = 0;
      uVar9 = (ulong)((int)uVar9 - 2);
      puVar5 = (uint64_t *)((long)puVar5 + 2);
    }
    if (((ulong)puVar5 & 4) != 0) {
      *(uint32_t *)puVar5 = 0;
      uVar9 = (ulong)((int)uVar9 - 4);
      puVar5 = (uint64_t *)((long)puVar5 + 4);
    }
    for (uVar8 = uVar9 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar13 * -2 + 1;
    }
    if ((uVar9 & 4) != 0) {
      *(uint32_t *)puVar5 = 0;
      puVar5 = (uint64_t *)((long)puVar5 + 4);
    }
    if ((uVar9 & 2) != 0) {
      *(uint16_t *)puVar5 = 0;
      puVar5 = (uint64_t *)((long)puVar5 + 2);
    }
    if (!bVar12) goto LAB_0053bb2c;
    *(uint8_t *)puVar5 = 0;
    puVar3[0x128] = puVar7;
  }
  if ((bVar11) && (puVar7 != (uint64_t *)0x0)) {
    puVar5 = (uint64_t *)(*(code *)puVar3[300])(9,puVar3[0x12e]);
    if (puVar5 == (uint64_t *)0x0) {
      *(uint32_t *)((long)puVar3 + 4) = 1;
      *puVar7 = 0;
    }
    else {
      *(uint8_t *)(puVar5 + 1) = 0;
      *puVar5 = 0x5f5f454e494c5f5f;
      *puVar7 = puVar5;
      if (arg7 == 0) {
        iVar1 = 0;
        lVar4 = 0;
      }
      else {
        lVar6 = buffer_create(0x100,MallocBridge,FreeBridge,puVar3);
        bVar11 = false;
        if (lVar6 != 0) {
          uVar9 = 0;
          do {
            puVar7 = (uint64_t *)(uVar9 * 0x10 + arg6);
            iVar1 = buffer_append_fmt(lVar6,"#define %s %s\n",*puVar7,puVar7[1]);
            bVar11 = iVar1 != 0;
            uVar10 = (int)uVar9 + 1;
            uVar9 = (ulong)uVar10;
            if (arg7 <= uVar10) break;
          } while (bVar11);
        }
        lVar4 = 0;
        iVar1 = buffer_size(lVar6);
        if (iVar1 != 0) {
          lVar4 = buffer_flatten(lVar6);
          bVar11 = (bool)(bVar11 & lVar4 != 0);
        }
        buffer_destroy(lVar6);
        if (!bVar11) goto LAB_0053bf10;
      }
      iVar2 = push_source(puVar3,arg1,arg2,arg3,1,0);
      if (iVar2 != 0) {
        if (iVar1 == 0) {
          return puVar3;
        }
        iVar1 = push_source(puVar3,"<predefined macros>",lVar4,iVar1,1,close_define_include);
        if (iVar1 != 0) {
          return puVar3;
        }
      }
    }
  }
LAB_0053bf10:
  preprocessor_end(puVar3);
  return (uint64_t *)0x0;
}

/* ======================================================================
 * preprocessor_outofmemory  (Ghidra `preprocessor_outofmemory` @ 0053bf30)
 * Signature: uint8_t preprocessor_outofmemory(void)
 * Calls: (none)
 * Called by: `nexttoken`
 */
uint32_t preprocessor_outofmemory(long arg1)

{
  return *(uint32_t *)(arg1 + 4);
}

/* ======================================================================
 * preprocessor_nexttoken  (Ghidra `preprocessor_nexttoken` @ 0053bf40)
 * Signature: uint8_t preprocessor_nexttoken(void)
 * Calls: `FreeBridge`, `MallocBridge`, `buffer_append`, `buffer_create`, `buffer_destroy`, `buffer_flatten`, `buffer_size`, `failf`, `free_define`, `handle_pp_identifier` (+10 more)
 * Called by: `MOJOSHADER_preprocess`, `nexttoken`
 */
int * preprocessor_nexttoken(int *arg1,uint32_t *arg2,int *arg3)

{
  uint32_t *puVar1;
  long lVar2;
  int *piVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  uint64_t uVar20;
  char *pcVar21;
  void *__dest;
  uint64_t *puVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  char *pcVar26;
  size_t sVar27;
  ulong uVar28;
  char cVar29;
  char *pcVar30;
  uint64_t *puVar31;
  uint8_t *__dest_00;
  bool bVar32;
  uint8_t uVar33;
  byte bVar34;
  uint64_t *local_c0;
  uint64_t *local_b8;
  int local_b0;
  
  bVar34 = 0;
  iVar18 = *arg1;
joined_r0x0053bf6a:
  if (iVar18 != 0) {
LAB_0053c140:
    *arg1 = 0;
    *arg3 = 0x11d;
    sVar27 = strlen((char *)(arg1 + 2));
    *arg2 = (int)sVar27;
    return arg1 + 2;
  }
  lVar24 = *(long *)(arg1 + 0x48);
  if (lVar24 == 0) {
    *arg3 = 0x11b;
    *arg2 = 0;
    return (int *)0x0;
  }
  bVar32 = false;
  if (*(long *)(lVar24 + 0x50) != 0) {
    bVar32 = *(int *)(*(long *)(lVar24 + 0x50) + 8) != 0;
  }
  if (*(int *)(lVar24 + 0x28) == 0) {
    iVar18 = preprocessor_lexer(lVar24);
  }
  else {
    iVar18 = *(int *)(lVar24 + 0x24);
    *(uint32_t *)(lVar24 + 0x28) = 0;
  }
  if (iVar18 != 0x101) {
    arg1[0x42] = 0;
    if (iVar18 == 0x11b) {
      if (*(long *)(lVar24 + 0x50) == 0) {
        lVar24 = *(long *)(arg1 + 0x48);
        if (lVar24 == 0) goto LAB_0053c1f0;
        if (*(code **)(lVar24 + 0x58) != (code *)0x0) {
          (**(code **)(lVar24 + 0x58))
                    (*(uint64_t *)(lVar24 + 8),*(uint64_t *)(arg1 + 600),
                     *(uint64_t *)(arg1 + 0x25a));
        }
        if (*(long *)(lVar24 + 0x50) != 0) {
          lVar2 = *(long *)(lVar24 + 0x50);
          lVar23 = *(long *)(arg1 + 0x46);
          do {
            lVar19 = lVar2;
            lVar2 = *(long *)(lVar19 + 0x10);
            *(long *)(lVar19 + 0x10) = lVar23;
            *(long *)(arg1 + 0x46) = lVar19;
            lVar23 = lVar19;
          } while (lVar2 != 0);
        }
        *(uint64_t *)(arg1 + 0x48) = *(uint64_t *)(lVar24 + 0x60);
        *(uint64_t *)(lVar24 + 0x60) = *(uint64_t *)(arg1 + 0x4a);
        *(long *)(arg1 + 0x4a) = lVar24;
        iVar18 = *arg1;
      }
      else {
        lVar24 = *(long *)(arg1 + 0x48);
        puVar1 = *(uint32_t **)(lVar24 + 0x50);
        switch(*puVar1) {
        case 0x122:
          failf(arg1,"%s","Unterminated #if");
          break;
        case 0x123:
          failf(arg1,"%s","Unterminated #ifdef");
          break;
        case 0x124:
          failf(arg1,"%s","Unterminated #ifndef");
          break;
        case 0x125:
          failf(arg1,"%s","Unterminated #else");
          break;
        case 0x126:
          failf(arg1,"%s","Unterminated #elif");
        }
        *(uint64_t *)(lVar24 + 0x50) = *(uint64_t *)(puVar1 + 4);
        *(uint64_t *)(puVar1 + 4) = *(uint64_t *)(arg1 + 0x46);
        iVar18 = *arg1;
        *(uint32_t **)(arg1 + 0x46) = puVar1;
      }
    }
    else {
      if (iVar18 == 0x12a) {
        pcVar30 = "Incomplete multiline comment";
        goto LAB_0053c225;
      }
      if (iVar18 == 0x123) {
        _handle_pp_ifdef(arg1,0x123);
        iVar18 = *arg1;
      }
      else {
        if (iVar18 != 0x124) goto LAB_0053bff6;
        _handle_pp_ifdef(arg1,0x124);
        iVar18 = *arg1;
      }
    }
    goto joined_r0x0053bf6a;
  }
LAB_0053bff6:
  if (iVar18 == 0x122) {
    lVar24 = *(long *)(arg1 + 0x48);
    iVar18 = reduce_pp_expression(arg1);
    if (iVar18 != -1) {
      puVar22 = *(uint64_t **)(arg1 + 0x46);
      if (puVar22 == (uint64_t *)0x0) {
        puVar22 = (uint64_t *)(**(code **)(arg1 + 600))(0x18,*(uint64_t *)(arg1 + 0x25c));
        if (puVar22 == (uint64_t *)0x0) {
LAB_0053cacf:
          arg1[1] = 1;
          iVar18 = *arg1;
          goto joined_r0x0053bf6a;
        }
      }
      else {
        *(uint64_t *)(arg1 + 0x46) = puVar22[2];
      }
      *puVar22 = 0;
      puVar22[1] = 0;
      puVar22[2] = 0;
      lVar2 = *(long *)(lVar24 + 0x50);
      if ((lVar2 == 0) || (uVar17 = 1, *(int *)(lVar2 + 8) == 0)) {
        uVar17 = (uint)(iVar18 == 0);
      }
      *(uint32_t *)puVar22 = 0x122;
      iVar16 = *(int *)(lVar24 + 0x48);
      *(uint *)(puVar22 + 1) = uVar17;
      *(int *)((long)puVar22 + 0xc) = iVar18;
      puVar22[2] = lVar2;
      *(int *)((long)puVar22 + 4) = iVar16 + -1;
      *(uint64_t **)(lVar24 + 0x50) = puVar22;
      iVar18 = *arg1;
      goto joined_r0x0053bf6a;
    }
  }
  else if (iVar18 == 0x126) {
    iVar18 = reduce_pp_expression(arg1);
    if (iVar18 != -1) {
      piVar3 = *(int **)(*(long *)(arg1 + 0x48) + 0x50);
      if (piVar3 == (int *)0x0) {
        pcVar30 = "#elif without #if";
      }
      else {
        if (*piVar3 != 0x125) {
          *piVar3 = 0x126;
          if ((*(long *)(piVar3 + 4) == 0) || (*(int *)(*(long *)(piVar3 + 4) + 8) == 0)) {
            iVar16 = piVar3[3];
            uVar17 = (uint)(iVar18 == 0 || iVar16 != 0);
          }
          else {
            iVar16 = piVar3[3];
            uVar17 = 1;
          }
          piVar3[2] = uVar17;
          if (iVar16 != 0) goto LAB_0053c1f0;
          piVar3[3] = iVar18;
          iVar18 = *arg1;
          goto joined_r0x0053bf6a;
        }
        pcVar30 = "#elif after #else";
      }
LAB_0053c225:
      failf(arg1,"%s",pcVar30);
      iVar18 = *arg1;
      goto joined_r0x0053bf6a;
    }
  }
  else {
    if (iVar18 == 0x127) {
      lVar24 = *(long *)(arg1 + 0x48);
      lVar2 = *(long *)(lVar24 + 0x50);
      if (*(int *)(lVar24 + 0x28) == 0) {
        iVar18 = preprocessor_lexer(lVar24);
      }
      else {
        iVar18 = *(int *)(lVar24 + 0x24);
        *(uint32_t *)(lVar24 + 0x28) = 0;
      }
      *(uint32_t *)(lVar24 + 0x28) = 1;
      if ((((iVar18 != 10) && (iVar18 != 0x12a)) &&
          (pcVar30 = "Invalid #endif directive", iVar18 != 0x11b)) ||
         (pcVar30 = "Unmatched #endif", lVar2 == 0)) goto LAB_0053c225;
      *(uint64_t *)(lVar24 + 0x50) = *(uint64_t *)(lVar2 + 0x10);
      *(uint64_t *)(lVar2 + 0x10) = *(uint64_t *)(arg1 + 0x46);
      *(long *)(arg1 + 0x46) = lVar2;
      iVar18 = *arg1;
      goto joined_r0x0053bf6a;
    }
    if (iVar18 == 0x125) {
      lVar24 = *(long *)(arg1 + 0x48);
      piVar3 = *(int **)(lVar24 + 0x50);
      if (*(int *)(lVar24 + 0x28) == 0) {
        iVar18 = preprocessor_lexer(lVar24);
      }
      else {
        iVar18 = *(int *)(lVar24 + 0x24);
        *(uint32_t *)(lVar24 + 0x28) = 0;
      }
      *(uint32_t *)(lVar24 + 0x28) = 1;
      if ((((iVar18 != 10) && (iVar18 != 0x12a)) &&
          (pcVar30 = "Invalid #else directive", iVar18 != 0x11b)) ||
         ((pcVar30 = "#else without #if", piVar3 == (int *)0x0 ||
          (pcVar30 = "#else after #else", *piVar3 == 0x125)))) goto LAB_0053c225;
      *piVar3 = 0x125;
      if ((*(long *)(piVar3 + 4) == 0) || (*(int *)(*(long *)(piVar3 + 4) + 8) == 0)) {
        iVar18 = piVar3[3];
        uVar17 = (uint)(iVar18 != 0);
      }
      else {
        iVar18 = piVar3[3];
        uVar17 = 1;
      }
      piVar3[2] = uVar17;
      if (iVar18 == 0) {
        piVar3[3] = 1;
        iVar18 = *arg1;
        goto joined_r0x0053bf6a;
      }
    }
    else if (!bVar32) {
      if (iVar18 == 0x11e) {
        handle_pp_include(arg1);
        iVar18 = *arg1;
      }
      else {
        if (iVar18 != 0x11f) {
          if (iVar18 == 0x128) {
            lVar24 = *(long *)(arg1 + 0x48);
            __dest_00 = (uint8_t *)((long)arg1 + 0xe);
            iVar18 = 0xf9;
            arg1[2] = 0x72726523;
            *(uint16_t *)(arg1 + 3) = 0x726f;
            *(uint8_t *)((long)arg1 + 0xe) = 0;
            *(uint32_t *)(lVar24 + 0x38) = 1;
            do {
              if (*(int *)(lVar24 + 0x28) == 0) goto LAB_0053c642;
LAB_0053c601:
              uVar17 = *(uint *)(lVar24 + 0x24);
              *(uint32_t *)(lVar24 + 0x28) = 0;
              bVar32 = uVar17 == 0x20;
              if (!bVar32) {
                do {
                  if (uVar17 < 0x20 || bVar32) {
                    if (uVar17 == 10) {
                      *(int *)(lVar24 + 0x48) = *(int *)(lVar24 + 0x48) + -1;
LAB_0053c680:
                      *(uint32_t *)(lVar24 + 0x28) = 1;
                      *__dest_00 = 0;
                      *(uint32_t *)(lVar24 + 0x38) = 0;
                      *arg1 = 1;
                      goto LAB_0053c140;
                    }
                  }
                  else if ((uVar17 == 0x11b) || (uVar17 == 0x12a)) goto LAB_0053c680;
                  iVar16 = *(int *)(lVar24 + 0x20);
                  if (iVar18 <= *(int *)(lVar24 + 0x20)) {
                    iVar16 = iVar18;
                  }
                  sVar27 = 0;
                  if (iVar16 != 0) {
                    sVar27 = (size_t)iVar16;
                    memcpy(__dest_00,*(void **)(lVar24 + 0x18),sVar27);
                  }
                  __dest_00 = __dest_00 + sVar27;
                  iVar18 = iVar18 - iVar16;
                  if (*(int *)(lVar24 + 0x28) != 0) goto LAB_0053c601;
LAB_0053c642:
                  uVar17 = preprocessor_lexer(lVar24);
                  bVar32 = false;
                  if (uVar17 == 0x20) break;
                } while( true );
              }
              if (iVar18 != 0) {
                *__dest_00 = 0x20;
                iVar18 = iVar18 + -1;
                __dest_00 = __dest_00 + 1;
              }
            } while( true );
          }
          if (iVar18 != 0x120) {
            if (iVar18 != 0x121) {
              if (iVar18 == 0x129) {
                arg1[0x44] = 1;
                goto LAB_0053c0ab;
              }
              if (iVar18 == 0x101) {
                iVar16 = handle_pp_identifier(arg1);
                if (iVar16 == 0) goto LAB_0053c0ab;
              }
              else {
                if (iVar18 != 10) {
LAB_0053c0ab:
                  *arg3 = iVar18;
                  *arg2 = *(uint32_t *)(lVar24 + 0x20);
                  return *(int **)(lVar24 + 0x18);
                }
                if (arg1[0x44] != 0) {
                  arg1[0x44] = 0;
                  goto LAB_0053c0ab;
                }
              }
              goto LAB_0053c1f0;
            }
            handle_pp_undef(arg1);
            iVar18 = *arg1;
            goto joined_r0x0053bf6a;
          }
          puVar22 = *(uint64_t **)(arg1 + 0x48);
          if (*(int *)(puVar22 + 5) == 0) {
            iVar18 = preprocessor_lexer(puVar22);
          }
          else {
            iVar18 = *(int *)((long)puVar22 + 0x24);
            *(uint32_t *)(puVar22 + 5) = 0;
          }
          pcVar30 = "Macro names must be identifiers";
          if (iVar18 != 0x101) goto LAB_0053c225;
          pcVar30 = (char *)(**(code **)(arg1 + 600))
                                      (*(int *)(puVar22 + 4) + 1,*(uint64_t *)(arg1 + 0x25c),
                                       "Macro names must be identifiers");
          uVar33 = pcVar30 == (char *)0x0;
          if ((bool)uVar33) goto LAB_0053cacf;
          memcpy(pcVar30,(void *)puVar22[3],(ulong)*(uint *)(puVar22 + 4));
          lVar24 = 8;
          pcVar30[*(uint *)(puVar22 + 4)] = '\0';
          pcVar21 = pcVar30;
          pcVar26 = "defined";
          do {
            if (lVar24 == 0) break;
            lVar24 = lVar24 + -1;
            uVar33 = *pcVar21 == *pcVar26;
            pcVar21 = pcVar21 + (ulong)bVar34 * -2 + 1;
            pcVar26 = pcVar26 + (ulong)bVar34 * -2 + 1;
          } while ((bool)uVar33);
          if ((bool)uVar33) {
            (**(code **)(arg1 + 0x25a))(pcVar30,*(uint64_t *)(arg1 + 0x25c));
            pcVar30 = "\'defined\' cannot be used as a macro name";
            goto LAB_0053c225;
          }
          lVar24 = 9;
          bVar32 = false;
          pcVar21 = pcVar30;
          pcVar26 = "__FILE__";
          do {
            if (lVar24 == 0) break;
            lVar24 = lVar24 + -1;
            bVar32 = *pcVar21 == *pcVar26;
            pcVar21 = pcVar21 + (ulong)bVar34 * -2 + 1;
            pcVar26 = pcVar26 + (ulong)bVar34 * -2 + 1;
          } while (bVar32);
          if (bVar32) {
            if (*(long *)(arg1 + 0x24e) != 0) {
              failf(arg1,"\'%s\' already defined",pcVar30);
              free_define(arg1,*(uint64_t *)(arg1 + 0x24e));
              arg1[0x24e] = 0;
              arg1[0x24f] = 0;
            }
          }
          else {
            lVar24 = 9;
            pcVar21 = pcVar30;
            pcVar26 = "__LINE__";
            do {
              if (lVar24 == 0) break;
              lVar24 = lVar24 + -1;
              bVar32 = *pcVar21 == *pcVar26;
              pcVar21 = pcVar21 + (ulong)bVar34 * -2 + 1;
              pcVar26 = pcVar26 + (ulong)bVar34 * -2 + 1;
            } while (bVar32);
            if ((bVar32) && (*(long *)(arg1 + 0x250) != 0)) {
              failf(arg1,"\'%s\' already defined",pcVar30);
              free_define(arg1,*(uint64_t *)(arg1 + 0x250));
              arg1[0x250] = 0;
              arg1[0x251] = 0;
            }
          }
          *(uint32_t *)(puVar22 + 7) = 1;
          if (*(int *)(puVar22 + 5) == 0) {
            preprocessor_lexer(puVar22);
          }
          else {
            *(uint32_t *)(puVar22 + 5) = 0;
          }
          *(uint32_t *)(puVar22 + 7) = 0;
          if (*(int *)((long)puVar22 + 0x24) == 0x20) {
            if (*(int *)(puVar22 + 5) == 0) {
              preprocessor_lexer(puVar22);
              local_c0 = (uint64_t *)0x0;
              local_b0 = 0;
            }
            else {
              *(uint32_t *)(puVar22 + 5) = 0;
              local_c0 = (uint64_t *)0x0;
              local_b0 = 0;
            }
LAB_0053c7c2:
            *(uint32_t *)(puVar22 + 5) = 1;
            uVar20 = buffer_create(0x80,MallocBridge,FreeBridge);
            *(uint32_t *)(puVar22 + 7) = 1;
            while (arg1[1] == 0) {
              while( true ) {
                if (*(int *)(puVar22 + 5) == 0) {
                  uVar17 = preprocessor_lexer(puVar22);
                }
                else {
                  uVar17 = *(uint *)((long)puVar22 + 0x24);
                  *(uint32_t *)(puVar22 + 5) = 0;
                }
                if (uVar17 == 0x20) break;
                if (uVar17 < 0x21) {
                  if (uVar17 == 10) goto LAB_0053c840;
                }
                else if ((uVar17 == 0x11b) || (uVar17 == 0x12a)) {
                  *(uint32_t *)(puVar22 + 5) = 1;
                  goto LAB_0053c840;
                }
                buffer_append(uVar20,puVar22[3],*(uint32_t *)(puVar22 + 4));
                if (arg1[1] != 0) goto LAB_0053c840;
              }
              buffer_append(uVar20,&space_5792,1);
            }
LAB_0053c840:
            *(uint32_t *)(puVar22 + 7) = 0;
            pcVar21 = (char *)0x0;
            lVar24 = buffer_size(uVar20);
            if (arg1[1] == 0) {
              pcVar21 = (char *)buffer_flatten(uVar20);
            }
            buffer_destroy(uVar20);
            if (arg1[1] == 0) {
              uVar25 = lVar24 + 1;
              if (2 < uVar25) {
                bVar32 = false;
                if ((*pcVar21 == '#') && (bVar32 = false, pcVar21[1] == '#')) {
                  uVar25 = lVar24 - 1;
                  memmove(pcVar21,pcVar21 + 2,uVar25);
                  if (2 < uVar25) {
                    bVar32 = true;
                    goto LAB_0053c89a;
                  }
                }
                else {
LAB_0053c89a:
                  pcVar26 = pcVar21 + (uVar25 - 2);
                  cVar29 = *pcVar26;
                  if (cVar29 == ' ') {
                    if (uVar25 != 3) {
                      cVar29 = pcVar26[-1];
                      pcVar26 = pcVar26 + -1;
                      goto LAB_0053c8ab;
                    }
                  }
                  else {
LAB_0053c8ab:
                    if ((cVar29 == '#') && (pcVar26[-1] == '#')) {
                      pcVar26[-1] = '\0';
                      goto LAB_0053c8b8;
                    }
                  }
                  if (!bVar32) goto LAB_0053c8cc;
                }
LAB_0053c8b8:
                failf(arg1,"%s","\'##\' cannot appear at either end of a macro expansion");
              }
LAB_0053c8cc:
              cVar29 = *pcVar30;
              uVar17 = 5;
              if (cVar29 != '\0') {
                uVar17 = 0x1505;
                pcVar26 = pcVar30;
                do {
                  pcVar26 = pcVar26 + 1;
                  uVar17 = uVar17 * 0x21 ^ (int)cVar29;
                  cVar29 = *pcVar26;
                } while (cVar29 != '\0');
                uVar17 = uVar17 & 0xff;
              }
              for (puVar22 = *(uint64_t **)(arg1 + (long)(int)uVar17 * 2 + 0x4c);
                  puVar22 != (uint64_t *)0x0; puVar22 = (uint64_t *)puVar22[5]) {
                iVar18 = strcmp((char *)*puVar22,pcVar30);
                if (iVar18 == 0) {
                  failf(arg1,"\'%s\' already defined",pcVar30);
                  goto LAB_0053c94e;
                }
              }
              puVar22 = *(uint64_t **)(arg1 + 0x24c);
              if (puVar22 == (uint64_t *)0x0) {
                puVar22 = (uint64_t *)
                          (**(code **)(arg1 + 600))(0x30,*(uint64_t *)(arg1 + 0x25c));
                if (puVar22 == (uint64_t *)0x0) {
                  arg1[1] = 1;
                  goto LAB_0053c94e;
                }
              }
              else {
                *(uint64_t *)(arg1 + 0x24c) = puVar22[5];
              }
              bVar32 = ((ulong)puVar22 & 1) != 0;
              uVar25 = 0x30;
              puVar31 = puVar22;
              if (bVar32) {
                *(uint8_t *)puVar22 = 0;
                puVar31 = (uint64_t *)((long)puVar22 + 1);
                uVar25 = 0x2f;
              }
              if (((ulong)puVar31 & 2) != 0) {
                *(uint16_t *)puVar31 = 0;
                uVar25 = (ulong)((int)uVar25 - 2);
                puVar31 = (uint64_t *)((long)puVar31 + 2);
              }
              if (((ulong)puVar31 & 4) != 0) {
                *(uint32_t *)puVar31 = 0;
                uVar25 = (ulong)((int)uVar25 - 4);
                puVar31 = (uint64_t *)((long)puVar31 + 4);
              }
              for (uVar28 = uVar25 >> 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                *puVar31 = 0;
                puVar31 = puVar31 + (ulong)bVar34 * -2 + 1;
              }
              if ((uVar25 & 4) != 0) {
                *(uint32_t *)puVar31 = 0;
                puVar31 = (uint64_t *)((long)puVar31 + 4);
              }
              if ((uVar25 & 2) != 0) {
                *(uint16_t *)puVar31 = 0;
                puVar31 = (uint64_t *)((long)puVar31 + 2);
              }
              if (bVar32) {
                *(uint8_t *)puVar31 = 0;
              }
              puVar22[1] = pcVar21;
              puVar22[2] = 0;
              *puVar22 = pcVar30;
              puVar22[3] = local_c0;
              *(int *)(puVar22 + 4) = local_b0;
              lVar24 = (long)(int)uVar17 + 0x26;
              puVar22[5] = *(uint64_t *)(arg1 + lVar24 * 2);
              *(uint64_t **)(arg1 + lVar24 * 2) = puVar22;
              iVar18 = *arg1;
              goto joined_r0x0053bf6a;
            }
LAB_0053c94e:
            (**(code **)(arg1 + 0x25a))(pcVar30,*(uint64_t *)(arg1 + 0x25c));
            (**(code **)(arg1 + 0x25a))(pcVar21,*(uint64_t *)(arg1 + 0x25c));
            if ((local_c0 != (uint64_t *)0x0) && (local_b0 != 0)) {
LAB_0053c980:
              uVar17 = local_b0 - 1;
              puVar22 = local_c0 + (int)uVar17;
              do {
                uVar20 = *puVar22;
                puVar22 = puVar22 + -1;
                (**(code **)(arg1 + 0x25a))(uVar20,*(uint64_t *)(arg1 + 0x25c));
              } while (puVar22 != local_c0 + (long)(int)uVar17 + (-1 - (ulong)uVar17));
            }
          }
          else {
            local_c0 = (uint64_t *)0x0;
            local_b0 = 0;
            if (*(int *)((long)puVar22 + 0x24) != 0x28) goto LAB_0053c7c2;
            uVar20 = *puVar22;
            uVar4 = puVar22[1];
            uVar5 = puVar22[2];
            uVar6 = puVar22[3];
            uVar7 = puVar22[4];
            uVar8 = puVar22[5];
            uVar9 = puVar22[6];
            uVar10 = puVar22[7];
            uVar11 = puVar22[8];
            uVar12 = puVar22[9];
            uVar13 = puVar22[10];
            uVar14 = puVar22[0xb];
            uVar15 = puVar22[0xc];
            do {
              if (*(int *)(puVar22 + 5) == 0) {
                iVar18 = preprocessor_lexer(puVar22);
              }
              else {
                iVar18 = *(int *)((long)puVar22 + 0x24);
                *(uint32_t *)(puVar22 + 5) = 0;
              }
              if (iVar18 != 0x101) break;
              local_b0 = local_b0 + 1;
              if (*(int *)(puVar22 + 5) == 0) {
                iVar18 = preprocessor_lexer(puVar22);
              }
              else {
                iVar18 = *(int *)((long)puVar22 + 0x24);
                *(uint32_t *)(puVar22 + 5) = 0;
              }
            } while (iVar18 == 0x2c);
            if (*(int *)((long)puVar22 + 0x24) == 0x29) {
              if (local_b0 == 0) {
                local_c0 = (uint64_t *)0x0;
                local_b0 = -1;
LAB_0053cfe2:
                if (*(int *)(puVar22 + 5) == 0) {
LAB_0053d03e:
                  preprocessor_lexer(puVar22);
                }
                else {
                  *(uint32_t *)(puVar22 + 5) = 0;
                }
                goto LAB_0053c7c2;
              }
              local_c0 = (uint64_t *)
                         (**(code **)(arg1 + 600))((long)local_b0 << 3 & 0xffffffff);
              if (local_c0 == (uint64_t *)0x0) {
                arg1[1] = 1;
                goto LAB_0053ce87;
              }
              *puVar22 = uVar20;
              puVar22[1] = uVar4;
              puVar22[2] = uVar5;
              puVar22[3] = uVar6;
              puVar22[4] = uVar7;
              puVar22[5] = uVar8;
              puVar22[6] = uVar9;
              puVar22[7] = uVar10;
              puVar22[8] = uVar11;
              puVar22[9] = uVar12;
              puVar22[10] = uVar13;
              puVar22[0xb] = uVar14;
              puVar22[0xc] = uVar15;
              memset(local_c0,0,(long)local_b0 << 3);
              iVar18 = 0;
              local_b8 = local_c0;
              do {
                if (*(int *)(puVar22 + 5) == 0) {
                  preprocessor_lexer(puVar22);
                }
                else {
                  *(uint32_t *)(puVar22 + 5) = 0;
                }
                __dest = (void *)(**(code **)(arg1 + 600))
                                           (*(int *)(puVar22 + 4) + 1,
                                            *(uint64_t *)(arg1 + 0x25c));
                if (__dest == (void *)0x0) {
                  arg1[1] = 1;
                  break;
                }
                memcpy(__dest,(void *)puVar22[3],(ulong)*(uint *)(puVar22 + 4));
                *(uint8_t *)((long)__dest + (ulong)*(uint *)(puVar22 + 4)) = 0;
                *local_b8 = __dest;
                if (iVar18 < local_b0 + -1) {
                  if (*(int *)(puVar22 + 5) == 0) {
                    preprocessor_lexer(puVar22);
                  }
                  else {
                    *(uint32_t *)(puVar22 + 5) = 0;
                  }
                }
                iVar18 = iVar18 + 1;
                local_b8 = local_b8 + 1;
              } while (iVar18 < local_b0);
              if (local_b0 == iVar18) {
                if (*(int *)(puVar22 + 5) == 0) {
                  preprocessor_lexer(puVar22);
                  goto LAB_0053cfe2;
                }
                *(uint32_t *)(puVar22 + 5) = 0;
                goto LAB_0053d03e;
              }
              (**(code **)(arg1 + 0x25a))(pcVar30,*(uint64_t *)(arg1 + 0x25c));
              (**(code **)(arg1 + 0x25a))(0,*(uint64_t *)(arg1 + 0x25c));
              goto LAB_0053c980;
            }
            failf(arg1,"%s","syntax error in macro parameter list");
LAB_0053ce87:
            (**(code **)(arg1 + 0x25a))(pcVar30,*(uint64_t *)(arg1 + 0x25c));
            (**(code **)(arg1 + 0x25a))(0,*(uint64_t *)(arg1 + 0x25c));
            local_c0 = (uint64_t *)0x0;
          }
          (**(code **)(arg1 + 0x25a))(local_c0,*(uint64_t *)(arg1 + 0x25c));
          iVar18 = *arg1;
          goto joined_r0x0053bf6a;
        }
        handle_pp_line(arg1);
        iVar18 = *arg1;
      }
      goto joined_r0x0053bf6a;
    }
  }
LAB_0053c1f0:
  iVar18 = *arg1;
  goto joined_r0x0053bf6a;
}

/* ======================================================================
 * preprocessor_sourcepos  (Ghidra `preprocessor_sourcepos` @ 0053d070)
 * Signature: uint8_t preprocessor_sourcepos(void)
 * Calls: (none)
 * Called by: `MOJOSHADER_assemble`, `nexttoken`, `output_comment_bytes_part_12`, `parse_instruction_token`
 */
uint64_t preprocessor_sourcepos(long arg1,uint32_t *arg2)

{
  if (*(long *)(arg1 + 0x120) != 0) {
    *arg2 = *(uint32_t *)(*(long *)(arg1 + 0x120) + 0x48);
    return **(uint64_t **)(arg1 + 0x120);
  }
  *arg2 = 0;
  return 0;
}

/* ======================================================================
 * MOJOSHADER_preprocess  (Ghidra `MOJOSHADER_preprocess` @ 0053d0a0)
 * Signature: uint8_t MOJOSHADER_preprocess(void)
 * Calls: `FreeBridge`, `MOJOSHADER_internal_include_close`, `MOJOSHADER_internal_include_open`, `MallocBridge`, `buffer_append`, `buffer_append_fmt`, `buffer_create`, `buffer_destroy`, `buffer_flatten`, `buffer_size` (+10 more)
 * Called by: (none)
 */
int * MOJOSHADER_preprocess
                (uint64_t arg1,uint64_t arg2,uint32_t arg3,long arg4,uint arg5,
                code *arg6,code *arg7,code *arg8,code *arg9,uint64_t arg10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  long lVar5;
  uint64_t *puVar6;
  long lVar7;
  uint64_t *puVar8;
  int *piVar9;
  ulong uVar10;
  uint32_t uVar11;
  ulong uVar12;
  uint64_t uVar13;
  int *piVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  long local_70;
  int local_58 [4];
  uint32_t local_48 [6];
  
  bVar18 = 0;
  if (arg6 == (code *)0x0) {
    arg6 = MOJOSHADER_internal_include_open;
  }
  local_58[0] = 0x100;
  if (arg7 == (code *)0x0) {
    arg7 = MOJOSHADER_internal_include_close;
  }
  local_48[0] = 0;
  puVar4 = (uint64_t *)(*arg8)(0x978,arg10);
  if (puVar4 == (uint64_t *)0x0) {
LAB_0053da20:
    puVar4 = (uint64_t *)0x0;
    lVar7 = 0;
    lVar5 = 0;
    local_70 = 0;
  }
  else {
    bVar16 = ((ulong)puVar4 & 1) != 0;
    uVar12 = 0x978;
    puVar8 = puVar4;
    if (bVar16) {
      *(uint8_t *)puVar4 = 0;
      puVar8 = (uint64_t *)((long)puVar4 + 1);
      uVar12 = 0x977;
    }
    if (((ulong)puVar8 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      uVar12 = (ulong)((int)uVar12 - 2);
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (((ulong)puVar8 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      uVar12 = (ulong)((int)uVar12 - 4);
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    for (uVar10 = uVar12 >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + (ulong)bVar18 * -2 + 1;
    }
    if ((uVar12 & 4) != 0) {
      *(uint32_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 4);
    }
    if ((uVar12 & 2) != 0) {
      *(uint16_t *)puVar8 = 0;
      puVar8 = (uint64_t *)((long)puVar8 + 2);
    }
    if (bVar16) {
      *(uint8_t *)puVar8 = 0;
    }
    puVar4[0x12a] = arg6;
    puVar4[299] = arg7;
    puVar4[0x12d] = arg9;
    puVar4[0x12e] = arg10;
    *(uint32_t *)((long)puVar4 + 0x10c) = 0;
    puVar4[300] = arg8;
    lVar5 = stringcache_create(MallocBridge,FreeBridge,puVar4);
    puVar8 = (uint64_t *)puVar4[0x126];
    puVar4[0x129] = lVar5;
    if (puVar8 == (uint64_t *)0x0) {
      puVar8 = (uint64_t *)(*(code *)puVar4[300])(0x30,puVar4[0x12e]);
      if (puVar8 != (uint64_t *)0x0) goto LAB_0053d1d7;
      *(uint32_t *)((long)puVar4 + 4) = 1;
LAB_0053d222:
      puVar4[0x127] = puVar8;
    }
    else {
      puVar4[0x126] = puVar8[5];
LAB_0053d1d7:
      bVar16 = ((ulong)puVar8 & 1) != 0;
      uVar12 = 0x30;
      puVar6 = puVar8;
      if (bVar16) {
        *(uint8_t *)puVar8 = 0;
        puVar6 = (uint64_t *)((long)puVar8 + 1);
        uVar12 = 0x2f;
      }
      if (((ulong)puVar6 & 2) != 0) {
        *(uint16_t *)puVar6 = 0;
        uVar12 = (ulong)((int)uVar12 - 2);
        puVar6 = (uint64_t *)((long)puVar6 + 2);
      }
      if (((ulong)puVar6 & 4) != 0) {
        *(uint32_t *)puVar6 = 0;
        uVar12 = (ulong)((int)uVar12 - 4);
        puVar6 = (uint64_t *)((long)puVar6 + 4);
      }
      for (uVar10 = uVar12 >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + (ulong)bVar18 * -2 + 1;
      }
      if ((uVar12 & 4) != 0) {
        *(uint32_t *)puVar6 = 0;
        puVar6 = (uint64_t *)((long)puVar6 + 4);
      }
      if ((uVar12 & 2) != 0) {
        *(uint16_t *)puVar6 = 0;
        puVar6 = (uint64_t *)((long)puVar6 + 2);
      }
      if (!bVar16) goto LAB_0053d222;
      *(uint8_t *)puVar6 = 0;
      puVar4[0x127] = puVar8;
    }
    bVar16 = false;
    if ((lVar5 != 0) && (bVar16 = false, puVar8 != (uint64_t *)0x0)) {
      puVar6 = (uint64_t *)(*(code *)puVar4[300])(9,puVar4[0x12e]);
      if (puVar6 == (uint64_t *)0x0) {
        *(uint32_t *)((long)puVar4 + 4) = 1;
      }
      else {
        *(uint8_t *)(puVar6 + 1) = 0;
        *puVar6 = 0x5f5f454c49465f5f;
      }
      bVar16 = puVar6 != (uint64_t *)0x0;
      *puVar8 = puVar6;
    }
    puVar8 = (uint64_t *)puVar4[0x126];
    if (puVar8 != (uint64_t *)0x0) {
      puVar4[0x126] = puVar8[5];
LAB_0053d24f:
      bVar17 = ((ulong)puVar8 & 1) != 0;
      uVar12 = 0x30;
      puVar6 = puVar8;
      if (bVar17) {
        *(uint8_t *)puVar8 = 0;
        puVar6 = (uint64_t *)((long)puVar8 + 1);
        uVar12 = 0x2f;
      }
      if (((ulong)puVar6 & 2) != 0) {
        *(uint16_t *)puVar6 = 0;
        uVar12 = (ulong)((int)uVar12 - 2);
        puVar6 = (uint64_t *)((long)puVar6 + 2);
      }
      if (((ulong)puVar6 & 4) != 0) {
        *(uint32_t *)puVar6 = 0;
        uVar12 = (ulong)((int)uVar12 - 4);
        puVar6 = (uint64_t *)((long)puVar6 + 4);
      }
      for (uVar10 = uVar12 >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + (ulong)bVar18 * -2 + 1;
      }
      if ((uVar12 & 4) != 0) {
        *(uint32_t *)puVar6 = 0;
        puVar6 = (uint64_t *)((long)puVar6 + 4);
      }
      if ((uVar12 & 2) != 0) {
        *(uint16_t *)puVar6 = 0;
        puVar6 = (uint64_t *)((long)puVar6 + 2);
      }
      if (!bVar17) goto LAB_0053d29c;
      *(uint8_t *)puVar6 = 0;
      puVar4[0x128] = puVar8;
      if (bVar16) goto LAB_0053d2ab;
LAB_0053da18:
      preprocessor_end(puVar4);
      goto LAB_0053da20;
    }
    puVar8 = (uint64_t *)(*(code *)puVar4[300])(0x30,puVar4[0x12e]);
    if (puVar8 != (uint64_t *)0x0) goto LAB_0053d24f;
    *(uint32_t *)((long)puVar4 + 4) = 1;
LAB_0053d29c:
    puVar4[0x128] = puVar8;
    if (!bVar16) goto LAB_0053da18;
LAB_0053d2ab:
    if (puVar8 == (uint64_t *)0x0) goto LAB_0053da18;
    puVar6 = (uint64_t *)(*(code *)puVar4[300])(9,puVar4[0x12e]);
    if (puVar6 == (uint64_t *)0x0) {
      *(uint32_t *)((long)puVar4 + 4) = 1;
      *puVar8 = 0;
      goto LAB_0053da18;
    }
    *(uint8_t *)(puVar6 + 1) = 0;
    *puVar6 = 0x5f5f454e494c5f5f;
    *puVar8 = puVar6;
    if (arg5 == 0) {
      iVar1 = 0;
      lVar5 = 0;
    }
    else {
      lVar7 = buffer_create(0x100,MallocBridge,FreeBridge,puVar4);
      bVar16 = false;
      if (lVar7 != 0) {
        uVar12 = 0;
        do {
          puVar8 = (uint64_t *)(uVar12 * 0x10 + arg4);
          iVar1 = buffer_append_fmt(lVar7,"#define %s %s\n",*puVar8,puVar8[1]);
          bVar16 = iVar1 != 0;
          uVar15 = (int)uVar12 + 1;
          uVar12 = (ulong)uVar15;
          if (arg5 <= uVar15) break;
        } while (bVar16);
      }
      lVar5 = 0;
      iVar1 = buffer_size(lVar7);
      if (iVar1 != 0) {
        lVar5 = buffer_flatten(lVar7);
        bVar16 = (bool)(bVar16 & lVar5 != 0);
      }
      buffer_destroy(lVar7);
      if (!bVar16) goto LAB_0053da18;
    }
    iVar2 = push_source(puVar4,arg1,arg2,arg3,1,0);
    if ((iVar2 == 0) ||
       ((iVar1 != 0 &&
        (iVar1 = push_source(puVar4,"<predefined macros>",lVar5,iVar1,1,close_define_include),
        iVar1 == 0)))) goto LAB_0053da18;
    local_70 = errorlist_create(MallocBridge,FreeBridge,puVar4);
    if (local_70 == 0) {
      lVar7 = 0;
LAB_0053d8c9:
      lVar5 = 0;
    }
    else {
      iVar1 = 0;
      bVar16 = true;
      lVar5 = buffer_create(0x1000,MallocBridge,FreeBridge,puVar4);
      if (lVar5 != 0) {
        while (lVar7 = preprocessor_nexttoken(puVar4,local_48,local_58), lVar7 != 0) {
          if (*(int *)((long)puVar4 + 4) != 0) goto LAB_0053d6f0;
          if ((local_58[0] == 0x3b) || (local_58[0] == 0x7d)) {
            if (0 < iVar1) {
              iVar1 = iVar1 + -1 + (uint)(local_58[0] != 0x7d);
            }
            iVar2 = iVar1;
            if (bVar16) {
              do {
                if (iVar2 == 0) break;
                iVar3 = buffer_append(lVar5,&spaces_6087,4);
                iVar2 = iVar2 + -1;
              } while (iVar3 != 0);
            }
            else {
              buffer_append(lVar5,&spaces_6087,1);
            }
            buffer_append(lVar5,lVar7,local_48[0]);
LAB_0053d4b8:
            buffer_append(lVar5,&endline_6116,1);
            bVar16 = true;
          }
          else {
            if (local_58[0] == 10) goto LAB_0053d4b8;
            if (local_58[0] == 0x7b) {
              buffer_append(lVar5,&endline_6116,1);
              iVar2 = iVar1;
              do {
                if (iVar2 == 0) break;
                iVar3 = buffer_append(lVar5,&spaces_6087,4);
                iVar2 = iVar2 + -1;
              } while (iVar3 != 0);
              buffer_append(lVar5,"{",1);
              buffer_append(lVar5,&endline_6116,1);
              iVar1 = iVar1 + 1;
              bVar16 = true;
            }
            else if (local_58[0] == 0x11d) {
              puVar8 = (uint64_t *)puVar4[0x24];
              uVar11 = 0;
              uVar13 = 0;
              if (puVar8 != (uint64_t *)0x0) {
                uVar13 = *puVar8;
                uVar11 = *(uint32_t *)(puVar8 + 9);
              }
              bVar16 = false;
              errorlist_add(local_70,uVar13,uVar11,lVar7);
            }
            else {
              iVar2 = iVar1;
              if (bVar16) {
                do {
                  if (iVar2 == 0) break;
                  iVar3 = buffer_append(lVar5,&spaces_6087,4);
                  iVar2 = iVar2 + -1;
                } while (iVar3 != 0);
              }
              else {
                buffer_append(lVar5,&spaces_6087,1);
              }
              bVar16 = false;
              buffer_append(lVar5,lVar7,local_48[0]);
            }
          }
        }
        iVar1 = buffer_size(lVar5);
        lVar7 = buffer_flatten(lVar5);
        buffer_destroy(lVar5);
        if ((lVar7 != 0) && (piVar9 = (int *)(*arg8)(0x38,arg10), piVar9 != (int *)0x0)) {
          bVar16 = ((ulong)piVar9 & 1) != 0;
          uVar12 = 0x38;
          piVar14 = piVar9;
          if (bVar16) {
            *(uint8_t *)piVar9 = 0;
            piVar14 = (int *)((long)piVar9 + 1);
            uVar12 = 0x37;
          }
          if (((ulong)piVar14 & 2) != 0) {
            *(uint16_t *)piVar14 = 0;
            uVar12 = (ulong)((int)uVar12 - 2);
            piVar14 = (int *)((long)piVar14 + 2);
          }
          if (((ulong)piVar14 & 4) != 0) {
            *piVar14 = 0;
            uVar12 = (ulong)((int)uVar12 - 4);
            piVar14 = piVar14 + 1;
          }
          for (uVar10 = uVar12 >> 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            piVar14[0] = 0;
            piVar14[1] = 0;
            piVar14 = piVar14 + (ulong)bVar18 * -4 + 2;
          }
          if ((uVar12 & 4) != 0) {
            *piVar14 = 0;
            piVar14 = piVar14 + 1;
          }
          if ((uVar12 & 2) != 0) {
            *(uint16_t *)piVar14 = 0;
            piVar14 = (int *)((long)piVar14 + 2);
          }
          if (bVar16) {
            *(uint8_t *)piVar14 = 0;
          }
          iVar2 = errorlist_count(local_70);
          if (iVar2 < 1) {
LAB_0053d88f:
            *(long *)(piVar9 + 4) = lVar7;
            *(code **)(piVar9 + 10) = arg9;
            *(uint64_t *)(piVar9 + 0xc) = arg10;
            piVar9[6] = iVar1;
            *(code **)(piVar9 + 8) = arg8;
            errorlist_destroy(local_70);
            preprocessor_end(puVar4);
            return piVar9;
          }
          *piVar9 = iVar2;
          lVar5 = errorlist_flatten(local_70);
          *(long *)(piVar9 + 2) = lVar5;
          if (lVar5 != 0) goto LAB_0053d88f;
          lVar5 = 0;
          (*arg9)(0,arg10);
          goto LAB_0053d6f6;
        }
        goto LAB_0053d8c9;
      }
LAB_0053d6f0:
      lVar7 = 0;
    }
  }
  piVar9 = (int *)0x0;
LAB_0053d6f6:
  (*arg9)(piVar9,arg10);
  (*arg9)(lVar7,arg10);
  buffer_destroy(lVar5);
  errorlist_destroy(local_70);
  preprocessor_end(puVar4);
  return (int *)out_of_mem_data_preprocessor;
}

/* ======================================================================
 * MOJOSHADER_freePreprocessData  (Ghidra `MOJOSHADER_freePreprocessData` @ 0053da90)
 * Signature: uint8_t MOJOSHADER_freePreprocessData(void)
 * Calls: (none)
 * Called by: (none)
 */
void MOJOSHADER_freePreprocessData(int *arg1)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  int iVar4;
  
  if ((arg1 != (int *)0x0) && (arg1 != (int *)out_of_mem_data_preprocessor)) {
    uVar2 = *(uint64_t *)(arg1 + 0xc);
    UNRECOVERED_JUMPTABLE = *(code **)(arg1 + 10);
    (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(arg1 + 4),uVar2);
    if (0 < *arg1) {
      lVar3 = 0;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(*(long *)(arg1 + 2) + lVar3),uVar2);
        puVar1 = (uint64_t *)(*(long *)(arg1 + 2) + 8 + lVar3);
        lVar3 = lVar3 + 0x18;
        (*UNRECOVERED_JUMPTABLE)(*puVar1,uVar2);
      } while (iVar4 < *arg1);
    }
    (*UNRECOVERED_JUMPTABLE)(*(uint64_t *)(arg1 + 2),uVar2);
                    /* WARNING: Could not recover jumptable at 0x0053db16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(arg1,uVar2);
    return;
  }
  return;
}

/* ======================================================================
 * gfxCreatePixelShader  (Ghidra `gfxCreatePixelShader` @ 0055d080)
 * Signature: uint8_t __stdcall gfxCreatePixelShader(tagShaderCreation * arg1)
 * Calls: `CreateOpenGLShader`, `MOJOSHADER_glCompileShader`, `crc32`, `fclose`, `fopen`, `fread`, `fwrite`, `snprintf`, `strlen`
 * Called by: `CreateShader`, `Create__00595df0`, `Create__005a67f0`
 */
long gfxCreatePixelShader(tagShaderCreation *arg1)

{
  uchar *__s;
  uint uVar1;
  size_t sVar2;
  FILE *__s_00;
  void *__ptr;
  long lVar3;
  char acStack_a8 [136];
  
  __s = *(uchar **)(arg1 + 8);
  sVar2 = strlen((char *)__s);
  uVar1 = crc32(__s,(uint)sVar2);
  snprintf(acStack_a8,0x80,"resources/Shaders/%X.bin",(ulong)uVar1);
  __s_00 = fopen(acStack_a8,"rb");
  if (__s_00 == (FILE *)0x0) {
    uVar1 = crc32(*(uchar **)(arg1 + 8),(uint)sVar2);
    snprintf(acStack_a8,0x80,"%X.src",(ulong)uVar1);
    __s_00 = fopen(acStack_a8,"wb");
    if (__s_00 != (FILE *)0x0) {
      fwrite(*(void **)(arg1 + 8),sVar2,1,__s_00);
      fclose(__s_00);
    }
    Error__ThrowFatalError("Missing required shader!");
  }
  __ptr = operator_new__(0x800);
  sVar2 = fread(__ptr,1,0x800,__s_00);
  fclose(__s_00);
  if ((long)sVar2 < 1) {
    Error__ThrowFatalError("Couldn\'t read required shader!");
  }
  if ((*(int *)(arg1 + 0x20) == 2) || (*(int *)(arg1 + 0x20) == 0)) {
    lVar3 = MOJOSHADER_glCompileShader
                      (__ptr,sVar2 & 0xffffffff,
                       CreateOpenGLShader(tagShaderCreation_const*)::swizzle_bgra,4);
  }
  else {
    lVar3 = MOJOSHADER_glCompileShader(__ptr,sVar2 & 0xffffffff,0,0);
  }
  if (__ptr != (void *)0x0) {
    operator_delete__(__ptr);
  }
  if (lVar3 == 0) {
    Error__ThrowFatalError("MojoShader compile failed!");
  }
  return lVar3;
}

/* ======================================================================
 * gfxDestroyPixelShader  (Ghidra `gfxDestroyPixelShader` @ 0055d090)
 * Signature: uint8_t __stdcall gfxDestroyPixelShader(void * * arg1)
 * Calls: `MOJOSHADER_glDeleteShader`
 * Called by: `PixelShader__PixelShader__00595d50`, `PixelShader__PixelShader__00595da0`
 */
void gfxDestroyPixelShader(void **arg1)

{
  MOJOSHADER_glDeleteShader(*arg1);
  *arg1 = (void *)0x0;
  return;
}

/* ======================================================================
 * gfxCreateVertexShader  (Ghidra `gfxCreateVertexShader` @ 0055db10)
 * Signature: uint8_t __stdcall gfxCreateVertexShader(tagShaderCreation * arg1)
 * Calls: `CreateOpenGLShader`, `MOJOSHADER_glCompileShader`, `crc32`, `fclose`, `fopen`, `fread`, `fwrite`, `snprintf`, `strlen`
 * Called by: `CreateShader`, `Create__00595df0`, `Create__005a67f0`
 */
long gfxCreateVertexShader(tagShaderCreation *arg1)

{
  uchar *__s;
  uint uVar1;
  size_t sVar2;
  FILE *__s_00;
  void *__ptr;
  long lVar3;
  char acStack_a8 [136];
  
  __s = *(uchar **)(arg1 + 8);
  sVar2 = strlen((char *)__s);
  uVar1 = crc32(__s,(uint)sVar2);
  snprintf(acStack_a8,0x80,"resources/Shaders/%X.bin",(ulong)uVar1);
  __s_00 = fopen(acStack_a8,"rb");
  if (__s_00 == (FILE *)0x0) {
    uVar1 = crc32(*(uchar **)(arg1 + 8),(uint)sVar2);
    snprintf(acStack_a8,0x80,"%X.src",(ulong)uVar1);
    __s_00 = fopen(acStack_a8,"wb");
    if (__s_00 != (FILE *)0x0) {
      fwrite(*(void **)(arg1 + 8),sVar2,1,__s_00);
      fclose(__s_00);
    }
    Error__ThrowFatalError("Missing required shader!");
  }
  __ptr = operator_new__(0x800);
  sVar2 = fread(__ptr,1,0x800,__s_00);
  fclose(__s_00);
  if ((long)sVar2 < 1) {
    Error__ThrowFatalError("Couldn\'t read required shader!");
  }
  if ((*(int *)(arg1 + 0x20) == 2) || (*(int *)(arg1 + 0x20) == 0)) {
    lVar3 = MOJOSHADER_glCompileShader
                      (__ptr,sVar2 & 0xffffffff,
                       CreateOpenGLShader(tagShaderCreation_const*)::swizzle_bgra,4);
  }
  else {
    lVar3 = MOJOSHADER_glCompileShader(__ptr,sVar2 & 0xffffffff,0,0);
  }
  if (__ptr != (void *)0x0) {
    operator_delete__(__ptr);
  }
  if (lVar3 == 0) {
    Error__ThrowFatalError("MojoShader compile failed!");
  }
  return lVar3;
}

/* ======================================================================
 * gfxDestroyVertexShader  (Ghidra `gfxDestroyVertexShader` @ 0055db20)
 * Signature: uint8_t __stdcall gfxDestroyVertexShader(void * * arg1)
 * Calls: `MOJOSHADER_glDeleteShader`
 * Called by: `VertexShader__VertexShader__005a6750`, `VertexShader__VertexShader__005a67a0`
 */
void gfxDestroyVertexShader(void **arg1)

{
  MOJOSHADER_glDeleteShader(*arg1);
  *arg1 = (void *)0x0;
  return;
}

/* ======================================================================
 * MojoShaderGetProcAddr  (Ghidra `MojoShaderGetProcAddr` @ 0055dc90)
 * Signature: uint8_t __stdcall MojoShaderGetProcAddr(char * arg1, void * arg2)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`
 */
/* MojoShaderGetProcAddr(char const*, void*) */

void MojoShaderGetProcAddr(char *arg1,void *arg2)

{
  (*(code *)PTR_SDL_GL_GetProcAddress_00815c88)();
  return;
}

/* ======================================================================
 * MojoShaderFree  (Ghidra `MojoShaderFree` @ 0055dca0)
 * Signature: uint8_t __stdcall MojoShaderFree(void * arg1, void * arg2)
 * Calls: (none)
 * Called by: `OpenGLGraphics__OpenGLGraphics`
 */
/* MojoShaderFree(void*, void*) */

void MojoShaderFree(void *arg1,void *arg2)

{
  (*(code *)PTR_free_00815b18)();
  return;
}

/* ======================================================================
 * MojoShaderMalloc  (Ghidra `MojoShaderMalloc` @ 0055dcb0)
 * Signature: uint8_t __stdcall MojoShaderMalloc(int arg1, void * arg2)
 * Calls: `malloc`
 * Called by: `OpenGLGraphics__OpenGLGraphics`
 */
/* MojoShaderMalloc(int, void*) */

void MojoShaderMalloc(int arg1,void *arg2)

{
  malloc((long)arg1);
  return;
}

/* ======================================================================
 * CreateEngineShaders  (Ghidra `CreateEngineShaders` @ 0055dcc0)
 * Signature: uint8_t CreateEngineShaders(void)
 * Calls: `FragmentLinker__FragmentLinker__00587530`, `FragmentLinker__ResetCache`, `operator_new`
 * Called by: `OpenGLGraphics__OpenGLGraphics`
 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CreateEngineShaders() */

void CreateEngineShaders(void)

{
  FragmentLinker *pFVar1;
  char *local_18;
  uint32_t local_10;
  
  if (pPixelLinker == (FragmentLinker *)0x0) {
    local_18 = "psshaders.frags";
    local_10 = 0;
    pFVar1 = operator_new(0xa10);
                    /* try { // try from 0055dd56 to 0055dd5a has its CatchHandler @ 0055dd67 */
    FragmentLinker__FragmentLinker__00587530(pFVar1,(FragmentLinkerCreation *)&local_18);
    pPixelLinker = pFVar1;
  }
  else {
    FragmentLinker__ResetCache(pPixelLinker);
  }
  if (pVertexLinker != (FragmentLinker *)0x0) {
    FragmentLinker__ResetCache(pVertexLinker);
    return;
  }
  local_18 = "vsshaders.frags";
  local_10 = 1;
  pFVar1 = operator_new(0xa10);
                    /* try { // try from 0055dd16 to 0055dd1a has its CatchHandler @ 0055dd81 */
  FragmentLinker__FragmentLinker__00587530(pFVar1,(FragmentLinkerCreation *)&local_18);
  pVertexLinker = pFVar1;
  return;
}

/* ======================================================================
 * glBindBufferARB  (Ghidra `glBindBufferARB` @ 0055e0e0)
 * Signature: uint8_t glBindBufferARB(void)
 * Calls: (none)
 * Called by: `gfxCreateIndexBuffer`, `gfxCreateVertexBuffer`, `gfxReallocIndexBuffer`
 */
void glBindBufferARB(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e0e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glBindBufferARB)();
  return;
}

/* ======================================================================
 * glDeleteBuffersARB  (Ghidra `glDeleteBuffersARB` @ 0055e0f0)
 * Signature: uint8_t glDeleteBuffersARB(void)
 * Calls: (none)
 * Called by: (none)
 */
void glDeleteBuffersARB(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e0f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glDeleteBuffersARB)();
  return;
}

/* ======================================================================
 * glGenBuffersARB  (Ghidra `glGenBuffersARB` @ 0055e100)
 * Signature: uint8_t glGenBuffersARB(void)
 * Calls: (none)
 * Called by: `gfxCreateIndexBuffer`, `gfxCreateVertexBuffer`, `gfxReallocIndexBuffer`
 */
void glGenBuffersARB(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glGenBuffersARB)();
  return;
}

/* ======================================================================
 * glBufferDataARB  (Ghidra `glBufferDataARB` @ 0055e110)
 * Signature: uint8_t glBufferDataARB(void)
 * Calls: (none)
 * Called by: `gfxCreateIndexBuffer`, `gfxCreateVertexBuffer`, `gfxReallocIndexBuffer`
 */
void glBufferDataARB(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glBufferDataARB)();
  return;
}

/* ======================================================================
 * glBufferSubDataARB  (Ghidra `glBufferSubDataARB` @ 0055e120)
 * Signature: uint8_t glBufferSubDataARB(void)
 * Calls: (none)
 * Called by: (none)
 */
void glBufferSubDataARB(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glBufferSubDataARB)();
  return;
}

/* ======================================================================
 * glMapBufferARB  (Ghidra `glMapBufferARB` @ 0055e130)
 * Signature: uint8_t glMapBufferARB(void)
 * Calls: (none)
 * Called by: (none)
 */
void glMapBufferARB(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glMapBufferARB)();
  return;
}

/* ======================================================================
 * glUnmapBufferARB  (Ghidra `glUnmapBufferARB` @ 0055e140)
 * Signature: uint8_t glUnmapBufferARB(void)
 * Calls: (none)
 * Called by: (none)
 */
void glUnmapBufferARB(void)

{
                    /* WARNING: Could not recover jumptable at 0x0055e147. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pglfn_glUnmapBufferARB)();
  return;
}

/* ======================================================================
 * CreateOpenGLShader  (Ghidra `CreateOpenGLShader` @ 0055e200)
 * Signature: uint8_t __stdcall CreateOpenGLShader(tagShaderCreation * arg1)
 * Calls: `MOJOSHADER_glCompileShader`, `crc32`, `fclose`, `fopen`, `fread`, `fwrite`, `snprintf`, `strlen`
 * Called by: `gfxCreatePixelShader`, `gfxCreateVertexShader`
 */
/* CreateOpenGLShader(tagShaderCreation const*) */

long CreateOpenGLShader(tagShaderCreation *arg1)

{
  uchar *__s;
  uint uVar1;
  size_t sVar2;
  FILE *__s_00;
  void *__ptr;
  long lVar3;
  char acStack_a8 [136];
  
  __s = *(uchar **)(arg1 + 8);
  sVar2 = strlen((char *)__s);
  uVar1 = crc32(__s,(uint)sVar2);
  snprintf(acStack_a8,0x80,"resources/Shaders/%X.bin",(ulong)uVar1);
  __s_00 = fopen(acStack_a8,"rb");
  if (__s_00 == (FILE *)0x0) {
    uVar1 = crc32(*(uchar **)(arg1 + 8),(uint)sVar2);
    snprintf(acStack_a8,0x80,"%X.src",(ulong)uVar1);
    __s_00 = fopen(acStack_a8,"wb");
    if (__s_00 != (FILE *)0x0) {
      fwrite(*(void **)(arg1 + 8),sVar2,1,__s_00);
      fclose(__s_00);
    }
    Error__ThrowFatalError("Missing required shader!");
  }
  __ptr = operator_new__(0x800);
  sVar2 = fread(__ptr,1,0x800,__s_00);
  fclose(__s_00);
  if ((long)sVar2 < 1) {
    Error__ThrowFatalError("Couldn\'t read required shader!");
  }
  if ((*(int *)(arg1 + 0x20) == 2) || (*(int *)(arg1 + 0x20) == 0)) {
    lVar3 = MOJOSHADER_glCompileShader
                      (__ptr,sVar2 & 0xffffffff,
                       CreateOpenGLShader(tagShaderCreation_const*)::swizzle_bgra,4);
  }
  else {
    lVar3 = MOJOSHADER_glCompileShader(__ptr,sVar2 & 0xffffffff,0,0);
  }
  if (__ptr != (void *)0x0) {
    operator_delete__(__ptr);
  }
  if (lVar3 == 0) {
    Error__ThrowFatalError("MojoShader compile failed!");
  }
  return lVar3;
}

/* ======================================================================
 * DestroyOpenGLShader  (Ghidra `DestroyOpenGLShader` @ 0055e3b0)
 * Signature: uint8_t __stdcall DestroyOpenGLShader(void * * arg1)
 * Calls: `MOJOSHADER_glDeleteShader`
 * Called by: (none)
 */
/* DestroyOpenGLShader(void**) */

void DestroyOpenGLShader(void **arg1)

{
  MOJOSHADER_glDeleteShader(*arg1);
  *arg1 = (void *)0x0;
  return;
}

/* ======================================================================
 * gfxSetVertexShaderConstant  (Ghidra `gfxSetVertexShaderConstant` @ 00560fd0)
 * Signature: uint8_t gfxSetVertexShaderConstant(void)
 * Calls: `MOJOSHADER_glSetVertexShaderUniformB`, `MOJOSHADER_glSetVertexShaderUniformF`, `MOJOSHADER_glSetVertexShaderUniformI`
 * Called by: `TGraphics__SetVertexShaderConstant`
 */
void gfxSetVertexShaderConstant
               (uint8_t arg1,uint64_t arg2,uint8_t arg3,int arg4)

{
  if (arg4 == 1) {
    MOJOSHADER_glSetVertexShaderUniformI(arg1,arg2,arg3);
    return;
  }
  if (arg4 != 2) {
    if (arg4 == 0) {
      MOJOSHADER_glSetVertexShaderUniformF(arg1,arg2,arg3);
      return;
    }
    return;
  }
  MOJOSHADER_glSetVertexShaderUniformB(arg1,arg2,arg3);
  return;
}

/* ======================================================================
 * gfxSetPixelShaderConstant  (Ghidra `gfxSetPixelShaderConstant` @ 00561020)
 * Signature: uint8_t gfxSetPixelShaderConstant(void)
 * Calls: `MOJOSHADER_glSetPixelShaderUniformB`, `MOJOSHADER_glSetPixelShaderUniformF`, `MOJOSHADER_glSetPixelShaderUniformI`
 * Called by: `TGraphics__SetPixelShaderConstant`
 */
void gfxSetPixelShaderConstant(uint8_t arg1,uint64_t arg2,uint8_t arg3,int arg4)

{
  if (arg4 == 1) {
    MOJOSHADER_glSetPixelShaderUniformI(arg1,arg2,arg3);
    return;
  }
  if (arg4 != 2) {
    if (arg4 == 0) {
      MOJOSHADER_glSetPixelShaderUniformF(arg1,arg2,arg3);
      return;
    }
    return;
  }
  MOJOSHADER_glSetPixelShaderUniformB(arg1,arg2,arg3);
  return;
}

/* ======================================================================
 * ShaderFragment__ShaderFragment  (Ghidra `~ShaderFragment` @ 00562130)
 * Signature: uint8_t __thiscall ~ShaderFragment(ShaderFragment * this)
 * Class: ShaderFragment
 * Calls: (none)
 * Called by: `GLOBAL_sub_I_GMojoShaderProfile`
 */
/* ShaderFragment__ShaderFragment() */

void __thiscall ShaderFragment__ShaderFragment(ShaderFragment *this)

{
  return;
}

/* ======================================================================
 * FragmentLinker__GetShader  (Ghidra `GetShader` @ 00586d40)
 * Signature: uint8_t __thiscall GetShader(FragmentLinker * this)
 * Class: FragmentLinker
 * Calls: `FragmentLinker__GetShader__00587180`, `free`, `malloc`, `memcpy`
 * Called by: (none)
 */
/* FragmentLinker__GetShader__00587180() [clone .part.28] */

uint64_t __thiscall FragmentLinker__GetShader__00587180(FragmentLinker *this)

{
  uint32_t uVar1;
  void *pvVar2;
  uint64_t uVar3;
  void *pvVar4;
  uint32_t *puVar5;
  void *pvVar6;
  ushort *puVar7;
  ulong uVar8;
  ushort uVar9;
  short sVar10;
  ulong uVar11;
  uint64_t *puVar12;
  ushort uVar13;
  bool bVar14;
  byte bVar15;
  uint64_t local_78;
  long local_70;
  uint64_t local_68;
  char *local_60;
  uint local_58;
  uint32_t local_54;
  uint32_t local_50;
  uint32_t local_4c;
  uint32_t local_48;
  
  bVar15 = 0;
  CompileFragments(this);
  local_78 = 0;
  local_50 = 1;
  local_4c = 0;
  local_60 = "_fragMain";
  local_48 = 0;
  local_58 = (uint)(*(int *)(this + 0x9e0) == 0);
  local_70 = *(long *)(this + 0x9d8);
  local_68 = *(uint64_t *)(local_70 + -0x18);
  local_54 = 2;
  uVar3 = Shader__CreateShader((tagShaderCreation *)&local_78);
  uVar1 = *(uint32_t *)(this + 0x9c8);
  if (*(int *)(this + 0x9c0) == -0x5eef3582) {
    uVar13 = *(ushort *)(this + 0x9a0);
    if (*(ushort *)(this + 0x9a2) <= uVar13) {
      uVar13 = *(ushort *)(this + 0x9a2) + *(short *)(this + 0x9ac);
      uVar11 = (ulong)(byte)this[0x9a4];
      pvVar4 = (void *)0x0;
      pvVar2 = *(void **)(this + 0x9b0);
      *(ushort *)(this + 0x9a2) = uVar13;
      uVar8 = (ulong)uVar13 * 0x10;
      pvVar6 = malloc(uVar11 + 0x10 + uVar8);
      if (pvVar6 != (void *)0x0) {
        pvVar4 = (void *)((long)pvVar6 + 0x10U + (uVar11 - ((long)pvVar6 + 0x10U) % uVar11) % uVar11
                         );
        *(ulong *)((long)pvVar4 + -0x10) = uVar8;
        *(void **)((long)pvVar4 + -8) = pvVar6;
        if (pvVar2 != (void *)0x0) {
          uVar11 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar8 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar11 = uVar8;
          }
          memcpy(pvVar4,pvVar2,uVar11);
          free(*(void **)((long)pvVar2 + -8));
        }
      }
      pvVar2 = *(void **)(this + 0x9b8);
      *(void **)(this + 0x9b0) = pvVar4;
      if (pvVar2 != (void *)0x0) {
        uVar9 = *(ushort *)(this + 0x9a2);
        uVar8 = (ulong)(byte)this[0x9a4];
        pvVar4 = (void *)0x0;
        uVar11 = (ulong)uVar9 * 2;
        pvVar6 = malloc(uVar8 + 0x10 + uVar11);
        if (pvVar6 != (void *)0x0) {
          pvVar4 = (void *)((long)pvVar6 + 0x10U + (uVar8 - ((long)pvVar6 + 0x10U) % uVar8) % uVar8)
          ;
          *(ulong *)((long)pvVar4 + -0x10) = uVar11;
          *(void **)((long)pvVar4 + -8) = pvVar6;
          uVar8 = *(ulong *)((long)pvVar2 + -0x10);
          if (uVar11 <= *(ulong *)((long)pvVar2 + -0x10)) {
            uVar8 = uVar11;
          }
          memcpy(pvVar4,pvVar2,uVar8);
          free(*(void **)((long)pvVar2 + -8));
          uVar9 = *(ushort *)(this + 0x9a2);
        }
        uVar13 = *(ushort *)(this + 0x9a0);
        *(void **)(this + 0x9b8) = pvVar4;
        if (uVar9 <= uVar13) goto LAB_00586ec0;
        while( true ) {
          uVar11 = (ulong)uVar13;
          uVar13 = uVar13 + 1;
          *(uint16_t *)((long)pvVar4 + uVar11 * 2) = 0xffff;
          if (uVar9 <= uVar13) break;
          pvVar4 = *(void **)(this + 0x9b8);
        }
      }
      uVar13 = *(ushort *)(this + 0x9a0);
    }
  }
  else {
    uVar11 = (ulong)(byte)this[0x9a4];
    *(uint32_t *)(this + 0x9a8) = 0;
    pvVar4 = malloc(uVar11 + 0x60);
    puVar12 = (uint64_t *)0x0;
    if (pvVar4 != (void *)0x0) {
      puVar12 = (uint64_t *)
                ((long)pvVar4 + 0x10U + (uVar11 - ((long)pvVar4 + 0x10U) % uVar11) % uVar11);
      puVar12[-2] = 0x50;
      puVar12[-1] = pvVar4;
    }
    bVar14 = ((ulong)puVar12 & 1) != 0;
    *(uint64_t **)(this + 0x9b0) = puVar12;
    uVar11 = 0x50;
    if (bVar14) {
      *(uint8_t *)puVar12 = 0;
      uVar11 = 0x4f;
      puVar12 = (uint64_t *)((long)puVar12 + 1);
    }
    if (((ulong)puVar12 & 2) != 0) {
      *(uint16_t *)puVar12 = 0;
      uVar11 = (ulong)((int)uVar11 - 2);
      puVar12 = (uint64_t *)((long)puVar12 + 2);
    }
    if (((ulong)puVar12 & 4) != 0) {
      *(uint32_t *)puVar12 = 0;
      uVar11 = (ulong)((int)uVar11 - 4);
      puVar12 = (uint64_t *)((long)puVar12 + 4);
    }
    for (uVar8 = uVar11 >> 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar12 = 0;
      puVar12 = puVar12 + (ulong)bVar15 * -2 + 1;
    }
    if ((uVar11 & 4) != 0) {
      *(uint32_t *)puVar12 = 0;
      puVar12 = (uint64_t *)((long)puVar12 + 4);
    }
    if ((uVar11 & 2) != 0) {
      *(uint16_t *)puVar12 = 0;
      puVar12 = (uint64_t *)((long)puVar12 + 2);
    }
    if (bVar14) {
      *(uint8_t *)puVar12 = 0;
    }
    *(uint16_t *)(this + 0x9a0) = 0;
    *(uint16_t *)(this + 0x9a2) = 5;
    uVar13 = 0;
    *(uint32_t *)(this + 0x9c0) = 0xa110ca7e;
    *(uint16_t *)(this + 0x9ac) = 5;
  }
LAB_00586ec0:
  if ((*(int *)(this + 0x9a8) == 1) && (*(short *)(this + 0x9a2) != 0)) {
    puVar7 = *(ushort **)(this + 0x9b8);
    sVar10 = 0;
    uVar9 = *puVar7;
    while (uVar9 != 0xffff) {
      puVar7 = puVar7 + 1;
      sVar10 = sVar10 + 1;
      if (sVar10 == *(short *)(this + 0x9a2)) goto LAB_00586ecd;
      uVar9 = *puVar7;
    }
    *puVar7 = uVar13;
    uVar13 = *(ushort *)(this + 0x9a0);
  }
LAB_00586ecd:
  puVar5 = (uint32_t *)((ulong)uVar13 * 0x10 + *(long *)(this + 0x9b0));
  *puVar5 = uVar1;
  *(uint64_t *)(puVar5 + 2) = uVar3;
  *(short *)(this + 0x9a0) = *(short *)(this + 0x9a0) + 1;
  return uVar3;
}

/* ======================================================================
 * FragmentLinker__GetShader__00587180  (Ghidra `GetShader` @ 00587180)
 * Signature: uint8_t __thiscall GetShader(FragmentLinker * this)
 * Class: FragmentLinker
 * Calls: (none)
 * Called by: `FragmentLinker__GetShader`
 */
/* FragmentLinker__GetShader__00587180() */

uint64_t __thiscall FragmentLinker__GetShader__00587180(FragmentLinker *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint64_t uVar4;
  int *piVar5;
  
  if (*(ushort *)(this + 0x9a0) != 0) {
    piVar2 = *(int **)(this + 0x9b0);
    iVar3 = 0;
    iVar1 = *piVar2;
    piVar5 = piVar2;
    while( true ) {
      if (iVar1 == *(int *)(this + 0x9c8)) {
        return *(uint64_t *)(piVar5 + 2);
      }
      iVar3 = iVar3 + 1;
      if ((int)(uint)*(ushort *)(this + 0x9a0) <= iVar3) break;
      piVar5 = piVar2 + (ulong)(ushort)iVar3 * 4;
      iVar1 = *piVar5;
    }
  }
  uVar4 = GetShader(this);
  return uVar4;
}

/* ======================================================================
 * FragmentLinker__GetVertexShader  (Ghidra `GetVertexShader` @ 00587b20)
 * Signature: uint8_t __thiscall GetVertexShader(FragmentLinker * this)
 * Class: FragmentLinker
 * Calls: (none)
 * Called by: `gfxDraw`
 */
/* FragmentLinker__GetVertexShader() */

uint64_t __thiscall FragmentLinker__GetVertexShader(FragmentLinker *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint64_t uVar4;
  int *piVar5;
  
  if (*(ushort *)(this + 0x9a0) != 0) {
    piVar2 = *(int **)(this + 0x9b0);
    iVar3 = 0;
    iVar1 = *piVar2;
    piVar5 = piVar2;
    while( true ) {
      if (iVar1 == *(int *)(this + 0x9c8)) {
        return *(uint64_t *)(piVar5 + 2);
      }
      iVar3 = iVar3 + 1;
      if ((int)(uint)*(ushort *)(this + 0x9a0) <= iVar3) break;
      piVar5 = piVar2 + (ulong)(ushort)iVar3 * 4;
      iVar1 = *piVar5;
    }
  }
  uVar4 = GetShader(this);
  return uVar4;
}

/* ======================================================================
 * FragmentLinker__GetPixelShader  (Ghidra `GetPixelShader` @ 00587b80)
 * Signature: uint8_t __thiscall GetPixelShader(FragmentLinker * this)
 * Class: FragmentLinker
 * Calls: (none)
 * Called by: `gfxDraw`
 */
/* FragmentLinker__GetPixelShader() */

uint64_t __thiscall FragmentLinker__GetPixelShader(FragmentLinker *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint64_t uVar4;
  int *piVar5;
  
  if (*(ushort *)(this + 0x9a0) != 0) {
    piVar2 = *(int **)(this + 0x9b0);
    iVar3 = 0;
    iVar1 = *piVar2;
    piVar5 = piVar2;
    while( true ) {
      if (iVar1 == *(int *)(this + 0x9c8)) {
        return *(uint64_t *)(piVar5 + 2);
      }
      iVar3 = iVar3 + 1;
      if ((int)(uint)*(ushort *)(this + 0x9a0) <= iVar3) break;
      piVar5 = piVar2 + (ulong)(ushort)iVar3 * 4;
      iVar1 = *piVar5;
    }
  }
  uVar4 = GetShader(this);
  return uVar4;
}

/* ======================================================================
 * TGraphics__SetPixelShader  (Ghidra `SetPixelShader` @ 005890b0)
 * Signature: uint8_t __thiscall SetPixelShader(TGraphics * this, PixelShader * arg1)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `gfxDraw`
 */
/* TGraphics__SetPixelShader(PixelShader const*) */

void __thiscall TGraphics__SetPixelShader(TGraphics *this,PixelShader *arg1)

{
  *(PixelShader **)(*(long *)(this + 0xaa0) + 0x90) = arg1;
  return;
}

/* ======================================================================
 * TGraphics__SetVertexShader  (Ghidra `SetVertexShader` @ 005890c0)
 * Signature: uint8_t __thiscall SetVertexShader(TGraphics * this, VertexShader * arg1)
 * Class: TGraphics
 * Calls: (none)
 * Called by: `gfxDraw`
 */
/* TGraphics__SetVertexShader(VertexShader const*) */

void __thiscall TGraphics__SetVertexShader(TGraphics *this,VertexShader *arg1)

{
  *(VertexShader **)(*(long *)(this + 0xaa0) + 0x88) = arg1;
  return;
}

/* ======================================================================
 * TGraphics__SetPixelShaderConstant  (Ghidra `SetPixelShaderConstant` @ 00589160)
 * Signature: uint8_t __thiscall SetPixelShaderConstant(TGraphics * this, uchar arg1, void * arg2, uchar arg3, tagShaderConstantDataType arg4)
 * Class: TGraphics
 * Calls: `gfxSetPixelShaderConstant`
 * Called by: `gfxDraw`
 */
/* TGraphics__SetPixelShaderConstant(unsigned char, void const*, unsigned char,
   tagShaderConstantDataType) */

void __thiscall
TGraphics__SetPixelShaderConstant
          (uint64_t param_1_00,uint8_t arg1,uint64_t arg2,uint8_t arg3,
          uint32_t arg5)

{
  gfxSetPixelShaderConstant(arg1,arg2,arg3,arg5);
  return;
}

/* ======================================================================
 * TGraphics__SetVertexShaderConstant  (Ghidra `SetVertexShaderConstant` @ 00589180)
 * Signature: uint8_t __thiscall SetVertexShaderConstant(TGraphics * this, uchar arg1, void * arg2, uchar arg3, tagShaderConstantDataType arg4)
 * Class: TGraphics
 * Calls: `gfxSetVertexShaderConstant`
 * Called by: (none)
 */
/* TGraphics__SetVertexShaderConstant(unsigned char, void const*, unsigned char,
   tagShaderConstantDataType) */

void __thiscall
TGraphics__SetVertexShaderConstant
          (uint64_t param_1_00,uint8_t arg1,uint64_t arg2,uint8_t arg3,
          uint32_t arg5)

{
  gfxSetVertexShaderConstant(arg1,arg2,arg3,arg5);
  return;
}

/* ======================================================================
 * PixelShader__PixelShader__00595d50  (Ghidra `~PixelShader` @ 00595d50)
 * Signature: uint8_t __thiscall ~PixelShader(PixelShader * this)
 * Class: PixelShader
 * Calls: `PixelShader__PixelShader__00595da0`, `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `gfxDestroyPixelShader`
 * Called by: (none)
 */
/* PixelShader__PixelShader__00595da0() */

void __thiscall PixelShader__PixelShader__00595da0(PixelShader *this)

{
  *(uint8_t ***)this = &PTR__PixelShader_005dd170;
                    /* try { // try from 00595d62 to 00595d7b has its CatchHandler @ 00595d85 */
  TGraphics__AcquireDevice();
  gfxDestroyPixelShader((void **)(this + 0x10));
  TGraphics__ReleaseDevice();
  *(uint8_t ***)this = &PTR__BaseResource_005dbe30;
  return;
}

/* ======================================================================
 * PixelShader__PixelShader__00595da0  (Ghidra `~PixelShader` @ 00595da0)
 * Signature: uint8_t __thiscall ~PixelShader(PixelShader * this)
 * Class: PixelShader
 * Calls: `BaseResource__operator_delete`, `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `gfxDestroyPixelShader`
 * Called by: `PixelShader__PixelShader`, `PixelShader__PixelShader__00595d50`
 */
/* PixelShader__PixelShader__00595da0() */

void __thiscall PixelShader__PixelShader__00595da0(PixelShader *this)

{
  void *in_RSI;
  
  *(uint8_t ***)this = &PTR__PixelShader_005dd170;
                    /* try { // try from 00595db2 to 00595dcb has its CatchHandler @ 00595ddc */
  TGraphics__AcquireDevice();
  gfxDestroyPixelShader((void **)(this + 0x10));
  TGraphics__ReleaseDevice();
  *(uint8_t ***)this = &PTR__BaseResource_005dbe30;
  BaseResource__operator_delete((BaseResource *)this,in_RSI);
  return;
}

/* ======================================================================
 * Shader__Shader  (Ghidra `~Shader` @ 00595e00)
 * Signature: uint8_t __thiscall ~Shader(Shader * this)
 * Class: Shader
 * Calls: `Shader__Shader__00595e10`
 * Called by: (none)
 */
/* Shader__Shader__00595e10() */

void __thiscall Shader__Shader__00595e10(Shader *this)

{
  *(uint8_t ***)this = &PTR__BaseResource_005dbe30;
  return;
}

/* ======================================================================
 * Shader__Shader__00595e10  (Ghidra `~Shader` @ 00595e10)
 * Signature: uint8_t __thiscall ~Shader(Shader * this)
 * Class: Shader
 * Calls: `BaseResource__operator_delete`
 * Called by: `Shader__Shader`
 */
/* Shader__Shader__00595e10() */

void __thiscall Shader__Shader__00595e10(Shader *this)

{
  void *in_RSI;
  
  *(uint8_t ***)this = &PTR__BaseResource_005dbe30;
  BaseResource__operator_delete((BaseResource *)this,in_RSI);
  return;
}

/* ======================================================================
 * CreateShader  (Ghidra `CreateShader` @ 0059f100)
 * Signature: uint8_t __stdcall CreateShader(tagShaderCreation * arg1)
 * Calls: `ResourcePool__FindResource`, `ResourcePool__SetCacheName`, `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `gfxCreatePixelShader`, `gfxCreateVertexShader`
 * Called by: (none)
 */
/* Shader__CreateShader(tagShaderCreation*) */

BaseResource * Shader__CreateShader(tagShaderCreation *arg1)

{
  int iVar1;
  BaseResource *pBVar2;
  uint64_t uVar3;
  char *pcVar4;
  
  if ((*(long *)(arg1 + 8) == 0) && (*(long *)arg1 == 0)) {
    Error__ThrowFatalError("There was no shader name specified. strFileName was NULL");
  }
  if ((*(int *)(arg1 + 0x30) == 1) &&
     ((pcVar4 = *(char **)(arg1 + 0x18), pcVar4 != (char *)0x0 || (*(long *)arg1 != 0)))) {
    if (*(int *)(arg1 + 0x28) != 0) {
      pcVar4 = *(char **)arg1;
    }
    pBVar2 = (BaseResource *)ResourcePool__FindResource(Resources,pcVar4);
    if (pBVar2 != (BaseResource *)0x0) {
      return pBVar2;
    }
  }
  TGraphics__AcquireDevice();
  iVar1 = *(int *)(arg1 + 0x20);
  if ((iVar1 == 2) || (iVar1 == 0)) {
    pBVar2 = BaseResource__operator_new(0x18,1);
    *(uint32_t *)(pBVar2 + 8) = 1;
    *(uint8_t ***)pBVar2 = &PTR__VertexShader_005dde70;
    uVar3 = gfxCreateVertexShader(arg1);
    *(uint64_t *)(pBVar2 + 0x10) = uVar3;
  }
  else if ((iVar1 == 3) || (pBVar2 = (BaseResource *)0x0, iVar1 == 1)) {
    pBVar2 = BaseResource__operator_new(0x18,1);
    *(uint32_t *)(pBVar2 + 8) = 1;
    *(uint8_t ***)pBVar2 = &PTR__PixelShader_005dd170;
    uVar3 = gfxCreatePixelShader(arg1);
    *(uint64_t *)(pBVar2 + 0x10) = uVar3;
  }
  TGraphics__ReleaseDevice();
  if ((*(int *)(arg1 + 0x30) == 1) &&
     ((pcVar4 = *(char **)(arg1 + 0x18), pcVar4 != (char *)0x0 || (*(long *)arg1 != 0)))) {
    if (*(int *)(arg1 + 0x28) != 0) {
      pcVar4 = *(char **)arg1;
    }
    ResourcePool__SetCacheName(Resources,pBVar2,pcVar4);
  }
  *(uint32_t *)(arg1 + 0x2c) = 1;
  return pBVar2;
}

/* ======================================================================
 * VertexShader__VertexShader__005a6750  (Ghidra `~VertexShader` @ 005a6750)
 * Signature: uint8_t __thiscall ~VertexShader(VertexShader * this)
 * Class: VertexShader
 * Calls: `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `VertexShader__VertexShader__005a67a0`, `gfxDestroyVertexShader`
 * Called by: (none)
 */
/* VertexShader__VertexShader__005a67a0() */

void __thiscall VertexShader__VertexShader__005a67a0(VertexShader *this)

{
  *(uint8_t ***)this = &PTR__VertexShader_005dde70;
                    /* try { // try from 005a6762 to 005a677b has its CatchHandler @ 005a6785 */
  TGraphics__AcquireDevice();
  gfxDestroyVertexShader((void **)(this + 0x10));
  TGraphics__ReleaseDevice();
  *(uint8_t ***)this = &PTR__BaseResource_005dbe30;
  return;
}

/* ======================================================================
 * VertexShader__VertexShader__005a67a0  (Ghidra `~VertexShader` @ 005a67a0)
 * Signature: uint8_t __thiscall ~VertexShader(VertexShader * this)
 * Class: VertexShader
 * Calls: `BaseResource__operator_delete`, `TGraphics__AcquireDevice`, `TGraphics__ReleaseDevice`, `gfxDestroyVertexShader`
 * Called by: `VertexShader__VertexShader`, `VertexShader__VertexShader__005a6750`
 */
/* VertexShader__VertexShader__005a67a0() */

void __thiscall VertexShader__VertexShader__005a67a0(VertexShader *this)

{
  void *in_RSI;
  
  *(uint8_t ***)this = &PTR__VertexShader_005dde70;
                    /* try { // try from 005a67b2 to 005a67cb has its CatchHandler @ 005a67dc */
  TGraphics__AcquireDevice();
  gfxDestroyVertexShader((void **)(this + 0x10));
  TGraphics__ReleaseDevice();
  *(uint8_t ***)this = &PTR__BaseResource_005dbe30;
  BaseResource__operator_delete((BaseResource *)this,in_RSI);
  return;
}
