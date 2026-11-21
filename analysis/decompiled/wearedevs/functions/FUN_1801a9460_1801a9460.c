/* FUN_1801a9460 @ 1801a9460 */

void FUN_1801a9460(longlong param_1,uint *param_2,uint *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  
  bVar24 = *(byte *)(param_1 + 7) < *(byte *)(param_1 + 3);
  bVar25 = !bVar24;
  uVar5 = (ulonglong)bVar25;
  uVar7 = (ulonglong)bVar24;
  bVar24 = *(byte *)(param_1 + 0xf) < *(byte *)(param_1 + 0xb);
  uVar13 = bVar24 + 2;
  uVar17 = bVar24 ^ 3;
  uVar11 = *(uint *)(param_1 + (ulonglong)uVar13 * 4);
  uVar20 = *(uint *)(param_1 + uVar7 * 4);
  uVar10 = uVar11 >> 0x18;
  uVar21 = uVar20 >> 0x18;
  uVar15 = (uint)bVar25;
  uVar23 = uVar13;
  if (uVar10 < uVar21) {
    uVar23 = uVar15;
  }
  bVar25 = *(byte *)(param_1 + 3 + (ulonglong)uVar17 * 4) < *(byte *)(param_1 + 3 + uVar5 * 4);
  if (bVar25) {
    uVar23 = uVar17;
    uVar15 = uVar13;
  }
  uVar14 = (ulonglong)uVar17;
  if (bVar25) {
    uVar14 = uVar5;
  }
  puVar18 = (uint *)(param_1 + (ulonglong)uVar23 * 4);
  uVar5 = (ulonglong)uVar15;
  if (uVar10 < uVar21) {
    uVar5 = uVar7;
  }
  puVar16 = (uint *)(param_1 + uVar5 * 4);
  if (uVar10 < uVar21) {
    uVar20 = uVar11;
  }
  bVar25 = *(byte *)(param_1 + 3 + (ulonglong)uVar23 * 4) < *(byte *)(param_1 + 3 + uVar5 * 4);
  *param_3 = uVar20;
  puVar6 = puVar16;
  if (bVar25) {
    puVar6 = puVar18;
  }
  param_3[1] = *puVar6;
  if (bVar25) {
    puVar18 = puVar16;
  }
  param_3[2] = *puVar18;
  uVar11 = *(uint *)(param_1 + uVar14 * 4);
  param_3[3] = uVar11;
  bVar25 = *(byte *)(param_1 + 0x17) < *(byte *)(param_1 + 0x13);
  uVar10 = (uint)!bVar25;
  uVar14 = (ulonglong)bVar25;
  bVar25 = *(byte *)(param_1 + 0x1f) < *(byte *)(param_1 + 0x1b);
  uVar21 = bVar25 + 2;
  uVar5 = (ulonglong)uVar21;
  uVar17 = (uint)bVar25;
  uVar7 = (ulonglong)(uVar17 ^ 3);
  uVar23 = *(uint *)(param_1 + 0x10 + uVar5 * 4);
  uVar15 = *(uint *)(param_1 + 0x10 + uVar14 * 4);
  uVar13 = uVar23 >> 0x18;
  uVar22 = uVar15 >> 0x18;
  if (uVar13 < uVar22) {
    uVar5 = (ulonglong)uVar10;
  }
  bVar25 = *(byte *)(param_1 + 0x13 + uVar7 * 4) < *(byte *)(param_1 + 0x13 + (ulonglong)uVar10 * 4)
  ;
  uVar4 = uVar10;
  if (bVar25) {
    uVar4 = uVar21;
  }
  puVar18 = (uint *)(param_1 + 0x10 + uVar7 * 4);
  if (bVar25) {
    uVar5 = (ulonglong)uVar17 ^ 3;
    puVar18 = (uint *)(param_1 + 0x10 + (ulonglong)uVar10 * 4);
  }
  puVar16 = (uint *)(param_1 + 0x10 + uVar5 * 4);
  uVar7 = (ulonglong)uVar4;
  if (uVar13 < uVar22) {
    uVar7 = uVar14;
  }
  puVar6 = (uint *)(param_1 + 0x10 + uVar7 * 4);
  if (uVar13 < uVar22) {
    uVar15 = uVar23;
  }
  bVar25 = *(byte *)(param_1 + 0x13 + uVar5 * 4) < *(byte *)(param_1 + 0x13 + uVar7 * 4);
  param_3[4] = uVar15;
  puVar8 = puVar6;
  if (bVar25) {
    puVar8 = puVar16;
  }
  param_3[5] = *puVar8;
  if (bVar25) {
    puVar16 = puVar6;
  }
  param_3[6] = *puVar16;
  uVar23 = *puVar18;
  uVar10 = uVar23 >> 0x18;
  uVar13 = uVar11 >> 0x18;
  lVar19 = (ulonglong)(uVar10 < uVar13) - 1;
  param_3[7] = uVar23;
  if (uVar10 < uVar13) {
    uVar23 = uVar11;
  }
  uVar5 = (ulonglong)(uVar10 < uVar13);
  bVar25 = uVar15 >> 0x18 < uVar20 >> 0x18;
  uVar7 = (ulonglong)!bVar25;
  if (!bVar25) {
    uVar15 = uVar20;
  }
  *param_2 = uVar15;
  param_2[7] = uVar23;
  bVar24 = param_3[(ulonglong)bVar25 + 4] >> 0x18 < param_3[uVar7] >> 0x18;
  uVar14 = (ulonglong)!bVar24;
  uVar11 = param_3[uVar7];
  if (bVar24) {
    uVar11 = param_3[(ulonglong)bVar25 + 4];
  }
  uVar9 = (ulonglong)bVar24;
  param_2[1] = uVar11;
  uVar23 = param_3[(ulonglong)(uVar10 < uVar13) + 6] >> 0x18;
  uVar20 = param_3[3 - uVar5] >> 0x18;
  lVar12 = (ulonglong)(uVar23 < uVar20) - 1;
  uVar11 = param_3[(ulonglong)(uVar10 < uVar13) + 6];
  if (uVar23 < uVar20) {
    uVar11 = param_3[3 - uVar5];
  }
  param_2[6] = uVar11;
  uVar1 = (ulonglong)(uVar23 < uVar20);
  bVar24 = param_3[(ulonglong)bVar25 + uVar9 + 4] >> 0x18 < param_3[uVar7 + uVar14] >> 0x18;
  uVar11 = param_3[uVar7 + uVar14];
  if (bVar24) {
    uVar11 = param_3[(ulonglong)bVar25 + uVar9 + 4];
  }
  param_2[2] = uVar11;
  uVar15 = param_3[lVar19 + (ulonglong)(uVar23 < uVar20) + 6] >> 0x18;
  uVar10 = param_3[(3 - uVar1) - uVar5] >> 0x18;
  uVar11 = param_3[lVar19 + (ulonglong)(uVar23 < uVar20) + 6];
  if (uVar15 < uVar10) {
    uVar11 = param_3[(3 - uVar1) - uVar5];
  }
  param_2[5] = uVar11;
  uVar2 = (ulonglong)(uVar15 < uVar10);
  bVar26 = param_3[(ulonglong)bVar25 + uVar9 + (ulonglong)bVar24 + 4] >> 0x18 <
           param_3[uVar7 + uVar14 + !bVar24] >> 0x18;
  uVar11 = param_3[uVar7 + uVar14 + !bVar24];
  if (bVar26) {
    uVar11 = param_3[(ulonglong)bVar25 + uVar9 + (ulonglong)bVar24 + 4];
  }
  param_2[3] = uVar11;
  uVar20 = param_3[lVar19 + lVar12 + (ulonglong)(uVar15 < uVar10) + 6] >> 0x18;
  uVar23 = param_3[((3 - uVar2) - uVar1) - uVar5] >> 0x18;
  uVar11 = param_3[lVar19 + lVar12 + (ulonglong)(uVar15 < uVar10) + 6];
  if (uVar20 < uVar23) {
    uVar11 = param_3[((3 - uVar2) - uVar1) - uVar5];
  }
  param_2[4] = uVar11;
  if ((param_3 + uVar7 + uVar14 + (ulonglong)!bVar24 + (ulonglong)!bVar26 ==
       param_3 + ((((4 - (ulonglong)(uVar20 < uVar23)) - uVar2) - uVar1) - uVar5)) &&
     (param_3 + (ulonglong)bVar25 + uVar9 + (ulonglong)bVar24 + (ulonglong)bVar26 + 4 ==
      param_3 + lVar19 + lVar12 + (ulonglong)(uVar15 < uVar10) + (ulonglong)(uVar20 < uVar23) + 6))
  {
    return;
  }
  FUN_180201a00();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


