/* FUN_1801a79d0 @ 1801a79d0 */

void FUN_1801a79d0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  
  uVar2 = (ulonglong)(param_1[2] < *param_1);
  uVar3 = (ulonglong)(param_1[2] >= *param_1);
  puVar14 = param_1 + uVar3 * 2;
  uVar4 = (ulonglong)(param_1[6] < param_1[4]);
  puVar11 = param_1 + uVar4 * 2 + 4;
  uVar13 = (ulonglong)((param_1[6] < param_1[4] ^ 3) << 4);
  uVar1 = *(ulonglong *)((longlong)param_1 + uVar13);
  puVar9 = puVar14;
  if (uVar1 < param_1[uVar3 * 2]) {
    puVar9 = puVar11;
  }
  puVar8 = param_1 + uVar2 * 2;
  if (param_1[uVar4 * 2 + 4] < param_1[uVar2 * 2]) {
    puVar8 = puVar11;
    puVar9 = param_1 + uVar2 * 2;
  }
  puVar12 = (ulonglong *)((longlong)param_1 + uVar13);
  if (param_1[uVar4 * 2 + 4] < param_1[uVar2 * 2]) {
    puVar11 = puVar14;
  }
  if (uVar1 < param_1[uVar3 * 2]) {
    puVar11 = puVar12;
  }
  else {
    puVar14 = puVar12;
  }
  puVar12 = puVar11;
  if (*puVar11 < *puVar9) {
    puVar12 = puVar9;
    puVar9 = puVar11;
  }
  uVar1 = puVar8[1];
  *param_3 = *puVar8;
  param_3[1] = uVar1;
  uVar1 = puVar9[1];
  param_3[2] = *puVar9;
  param_3[3] = uVar1;
  uVar1 = puVar12[1];
  param_3[4] = *puVar12;
  param_3[5] = uVar1;
  uVar1 = puVar14[1];
  param_3[6] = *puVar14;
  param_3[7] = uVar1;
  uVar2 = (ulonglong)(param_1[10] < param_1[8]);
  uVar3 = (ulonglong)(param_1[10] >= param_1[8]);
  puVar9 = param_1 + uVar3 * 2 + 8;
  uVar4 = (ulonglong)(param_1[0xe] < param_1[0xc]);
  puVar11 = param_1 + uVar4 * 2 + 0xc;
  uVar13 = (ulonglong)((param_1[0xe] < param_1[0xc] ^ 3) << 4);
  uVar1 = *(ulonglong *)((longlong)param_1 + uVar13 + 0x40);
  puVar14 = puVar9;
  if (uVar1 < param_1[uVar3 * 2 + 8]) {
    puVar14 = puVar11;
  }
  puVar12 = puVar11;
  puVar8 = param_1 + uVar2 * 2 + 8;
  if (param_1[uVar4 * 2 + 0xc] < param_1[uVar2 * 2 + 8]) {
    puVar12 = puVar9;
    puVar8 = puVar11;
    puVar14 = param_1 + uVar2 * 2 + 8;
  }
  puVar11 = (ulonglong *)((longlong)param_1 + uVar13 + 0x40);
  if (uVar1 < param_1[uVar3 * 2 + 8]) {
    puVar12 = puVar11;
  }
  else {
    puVar9 = puVar11;
  }
  puVar11 = puVar12;
  if (*puVar12 < *puVar14) {
    puVar11 = puVar14;
    puVar14 = puVar12;
  }
  uVar1 = puVar8[1];
  param_3[8] = *puVar8;
  param_3[9] = uVar1;
  uVar1 = puVar14[1];
  param_3[10] = *puVar14;
  param_3[0xb] = uVar1;
  uVar1 = puVar11[1];
  param_3[0xc] = *puVar11;
  param_3[0xd] = uVar1;
  uVar1 = puVar9[1];
  param_3[0xe] = *puVar9;
  param_3[0xf] = uVar1;
  bVar16 = param_3[8] < *param_3;
  puVar14 = param_3 + 8;
  if (!bVar16) {
    puVar14 = param_3;
  }
  uVar1 = puVar14[1];
  *param_2 = *puVar14;
  param_2[1] = uVar1;
  uVar1 = param_3[0xe];
  uVar2 = param_3[6];
  lVar15 = (ulonglong)(uVar1 < uVar2) - 1;
  puVar14 = param_3 + 0xe;
  if (uVar1 < uVar2) {
    puVar14 = param_3 + 6;
  }
  puVar11 = param_3 + (ulonglong)bVar16 * 2 + 8;
  uVar3 = puVar14[1];
  param_2[0xe] = *puVar14;
  param_2[0xf] = uVar3;
  bVar17 = param_3[(ulonglong)bVar16 * 2 + 8] < param_3[(ulonglong)!bVar16 * 2];
  puVar14 = param_3 + (ulonglong)!bVar16 * 2;
  puVar9 = puVar14;
  if (bVar17) {
    puVar9 = puVar11;
  }
  uVar3 = puVar9[1];
  param_2[2] = *puVar9;
  param_2[3] = uVar3;
  uVar3 = param_3[lVar15 * 2 + 0xe];
  uVar4 = param_3[(ulonglong)(uVar1 < uVar2) * -2 + 6];
  lVar10 = (ulonglong)(uVar3 < uVar4) - 1;
  puVar9 = param_3 + lVar15 * 2 + 0xe;
  param_3 = param_3 + (ulonglong)(uVar1 < uVar2) * -2 + 6;
  puVar8 = puVar9;
  if (uVar3 < uVar4) {
    puVar8 = param_3;
  }
  uVar1 = (ulonglong)(uVar3 < uVar4);
  puVar12 = puVar11 + (ulonglong)bVar17 * 2;
  uVar2 = puVar8[1];
  param_2[0xc] = *puVar8;
  param_2[0xd] = uVar2;
  bVar16 = puVar11[(ulonglong)bVar17 * 2] < puVar14[(ulonglong)!bVar17 * 2];
  puVar14 = puVar14 + (ulonglong)!bVar17 * 2;
  puVar11 = puVar14;
  if (bVar16) {
    puVar11 = puVar12;
  }
  uVar2 = puVar11[1];
  param_2[4] = *puVar11;
  param_2[5] = uVar2;
  uVar2 = puVar9[lVar10 * 2];
  uVar3 = param_3[uVar1 * -2];
  lVar15 = (ulonglong)(uVar2 < uVar3) - 1;
  puVar9 = puVar9 + lVar10 * 2;
  param_3 = param_3 + uVar1 * -2;
  puVar11 = puVar9;
  if (uVar2 < uVar3) {
    puVar11 = param_3;
  }
  uVar1 = puVar11[1];
  param_2[10] = *puVar11;
  param_2[0xb] = uVar1;
  bVar17 = puVar12[(ulonglong)bVar16 * 2] < puVar14[(ulonglong)!bVar16 * 2];
  puVar11 = puVar14 + (ulonglong)!bVar16 * 2;
  if (bVar17) {
    puVar11 = puVar12 + (ulonglong)bVar16 * 2;
  }
  uVar1 = puVar11[1];
  param_2[6] = *puVar11;
  param_2[7] = uVar1;
  uVar1 = puVar9[lVar15 * 2];
  uVar4 = param_3[(ulonglong)(uVar2 < uVar3) * -2];
  puVar11 = puVar9 + lVar15 * 2;
  if (uVar1 < uVar4) {
    puVar11 = param_3 + (ulonglong)(uVar2 < uVar3) * -2;
  }
  uVar6 = *(undefined4 *)((longlong)puVar11 + 4);
  uVar13 = puVar11[1];
  uVar7 = *(undefined4 *)((longlong)puVar11 + 0xc);
  *(int *)(param_2 + 8) = (int)*puVar11;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar6;
  *(int *)(param_2 + 9) = (int)uVar13;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar7;
  if ((puVar14 + (ulonglong)!bVar16 * 2 + (ulonglong)!bVar17 * 2 ==
       param_3 + (ulonglong)(uVar2 < uVar3) * -2 + (ulonglong)(uVar1 < uVar4) * -2 + 2) &&
     (puVar12 + (ulonglong)bVar16 * 2 + (ulonglong)bVar17 * 2 ==
      puVar9 + lVar15 * 2 + ((ulonglong)(uVar1 < uVar4) - 1) * 2 + 2)) {
    return;
  }
  FUN_180201a00();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


