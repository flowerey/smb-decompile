#include "ghidra_types.h"

ulong adler32_ghidra(ulong param_1, byte *param_2, uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;

  uVar4 = param_1 & 0xffff;
  uVar22 = (ulong)((uint)(param_1 >> 0x10) & 0xffff);
  if (param_3 == 1) {
    uVar4 = uVar4 + *param_2;
    if (0xfff0 < uVar4) {
      uVar4 = uVar4 - 0xfff1;
    }
    uVar22 = uVar22 + uVar4;
    uVar21 = uVar22 - 0xfff1;
    if (uVar22 < 0xfff1) {
      uVar21 = uVar22;
    }
    return uVar21 << 0x10 | uVar4;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      pbVar3 = param_2 + 1;
      pbVar20 = param_2;
      while (true) {
        pbVar2 = pbVar3;
        uVar4 = uVar4 + *pbVar20;
        uVar22 = uVar22 + uVar4;
        if (pbVar2 == param_2 + 1 + (param_3 - 1))
          break;
        pbVar3 = pbVar2 + 1;
        pbVar20 = pbVar2;
      }
    }
    uVar21 = uVar4 - 0xfff1;
    if (uVar4 < 0xfff1) {
      uVar21 = uVar4;
    }
    return uVar21 | (uVar22 % 0xfff1) * 0x10000;
  }
  if (param_3 < 0x15b0) {
  LAB_00562378:
    uVar21 = (ulong)(param_3 - 0x10 >> 4);
    pbVar3 = param_2;
    do {
      lVar5 = uVar4 + *pbVar3;
      lVar6 = (ulong)pbVar3[1] + lVar5;
      lVar7 = lVar6 + (ulong)pbVar3[2];
      lVar8 = lVar7 + (ulong)pbVar3[3];
      lVar9 = lVar8 + (ulong)pbVar3[4];
      lVar10 = lVar9 + (ulong)pbVar3[5];
      lVar11 = lVar10 + (ulong)pbVar3[6];
      lVar12 = lVar11 + (ulong)pbVar3[7];
      lVar13 = lVar12 + (ulong)pbVar3[8];
      lVar14 = lVar13 + (ulong)pbVar3[9];
      lVar15 = lVar14 + (ulong)pbVar3[10];
      lVar16 = lVar15 + (ulong)pbVar3[0xb];
      lVar17 = lVar16 + (ulong)pbVar3[0xc];
      lVar18 = lVar17 + (ulong)pbVar3[0xd];
      lVar19 = lVar18 + (ulong)pbVar3[0xe];
      pbVar20 = pbVar3 + 0xf;
      pbVar3 = pbVar3 + 0x10;
      uVar4 = (ulong)*pbVar20 + lVar19;
      uVar22 = uVar22 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 + lVar11 + lVar12 + lVar13 +
               lVar14 + lVar15 + lVar16 + lVar17 + lVar18 + lVar19 + uVar4;
    } while (pbVar3 != param_2 + uVar21 * 0x10 + 0x10);
    param_2 = param_2 + (uVar21 + 1) * 0x10;
    param_3 = param_3 & 0xf;
    if (param_3 == 0)
      goto LAB_00562467;
  } else {
    do {
      pbVar3 = param_2 + 0x15b0;
      param_3 = param_3 - 0x15b0;
      do {
        lVar5 = uVar4 + *param_2;
        lVar6 = lVar5 + (ulong)param_2[1];
        lVar7 = lVar6 + (ulong)param_2[2];
        lVar8 = lVar7 + (ulong)param_2[3];
        lVar9 = lVar8 + (ulong)param_2[4];
        lVar10 = lVar9 + (ulong)param_2[5];
        lVar11 = lVar10 + (ulong)param_2[6];
        lVar12 = lVar11 + (ulong)param_2[7];
        lVar13 = lVar12 + (ulong)param_2[8];
        lVar14 = lVar13 + (ulong)param_2[9];
        lVar15 = lVar14 + (ulong)param_2[10];
        lVar16 = lVar15 + (ulong)param_2[0xb];
        lVar17 = lVar16 + (ulong)param_2[0xc];
        lVar18 = lVar17 + (ulong)param_2[0xd];
        lVar19 = lVar18 + (ulong)param_2[0xe];
        pbVar20 = param_2 + 0xf;
        param_2 = param_2 + 0x10;
        uVar4 = lVar19 + (ulong)*pbVar20;
        uVar22 = uVar22 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 + lVar11 + lVar12 +
                 lVar13 + lVar14 + lVar15 + lVar16 + lVar17 + lVar18 + lVar19 + uVar4;
      } while (param_2 != pbVar3);
      uVar4 = uVar4 % 0xfff1;
      uVar22 = uVar22 % 0xfff1;
    } while (0x15af < param_3);
    if (param_3 == 0) {
      return uVar22 * 0x10000 | uVar4;
    }
    if (0xf < param_3)
      goto LAB_00562378;
  }
  pbVar3 = param_2 + (ulong)(param_3 - 1) + 1;
  do {
    bVar1 = *param_2;
    param_2 = param_2 + 1;
    uVar4 = uVar4 + bVar1;
    uVar22 = uVar22 + uVar4;
  } while (param_2 != pbVar3);
LAB_00562467:
  return (uVar22 % 0xfff1) * 0x10000 | uVar4 % 0xfff1;
}
