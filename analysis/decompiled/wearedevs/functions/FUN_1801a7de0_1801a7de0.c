/* FUN_1801a7de0 @ 1801a7de0 */

void FUN_1801a7de0(ulonglong *param_1,ulonglong param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong *puVar29;
  ulonglong *puVar30;
  ulonglong uVar31;
  bool bVar32;
  ulonglong *puVar33;
  ulonglong uVar34;
  undefined8 uVar35;
  
  uVar35 = 0xfffffffffffffffe;
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) goto LAB_1801a82ae;
  uVar31 = param_2 >> 1;
  puVar33 = param_1;
  uVar34 = param_2;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      uVar19 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = uVar19;
      uVar19 = (param_1 + uVar31 * 2)[1];
      param_3[uVar31 * 2] = param_1[uVar31 * 2];
      (param_3 + uVar31 * 2)[1] = uVar19;
      uVar19 = 1;
      uVar25 = param_2 - uVar31;
      if (1 < uVar31) goto LAB_1801a806d;
    }
    else {
      uVar25 = (ulonglong)(param_1[2] < *param_1);
      uVar27 = (ulonglong)(param_1[2] >= *param_1);
      puVar18 = param_1 + uVar27 * 2;
      uVar28 = (ulonglong)(param_1[6] < param_1[4]);
      puVar22 = param_1 + uVar28 * 2 + 4;
      uVar17 = (ulonglong)((param_1[6] < param_1[4] ^ 3) << 4);
      uVar19 = *(ulonglong *)((longlong)param_1 + uVar17);
      puVar21 = puVar18;
      if (uVar19 < param_1[uVar27 * 2]) {
        puVar21 = puVar22;
      }
      puVar20 = param_1 + uVar25 * 2;
      if (param_1[uVar28 * 2 + 4] < param_1[uVar25 * 2]) {
        puVar20 = puVar22;
        puVar21 = param_1 + uVar25 * 2;
      }
      puVar26 = (ulonglong *)((longlong)param_1 + uVar17);
      if (param_1[uVar28 * 2 + 4] < param_1[uVar25 * 2]) {
        puVar22 = puVar18;
      }
      if (uVar19 < param_1[uVar27 * 2]) {
        puVar22 = puVar26;
      }
      else {
        puVar18 = puVar26;
      }
      puVar26 = puVar22;
      if (*puVar22 < *puVar21) {
        puVar26 = puVar21;
        puVar21 = puVar22;
      }
      uVar25 = (ulonglong)(param_1[uVar31 * 2 + 2] < param_1[uVar31 * 2]);
      uVar27 = (ulonglong)(param_1[uVar31 * 2 + 2] >= param_1[uVar31 * 2]);
      puVar22 = param_1 + uVar31 * 2 + uVar27 * 2;
      uVar28 = (ulonglong)(param_1[uVar31 * 2 + 6] < param_1[uVar31 * 2 + 4]);
      puVar29 = param_1 + uVar31 * 2 + uVar28 * 2 + 4;
      uVar17 = (ulonglong)((param_1[uVar31 * 2 + 6] < param_1[uVar31 * 2 + 4] ^ 3) << 4);
      uVar19 = *(ulonglong *)((longlong)param_1 + uVar17 + uVar31 * 0x10);
      puVar24 = puVar22;
      if (uVar19 < param_1[uVar31 * 2 + uVar27 * 2]) {
        puVar24 = puVar29;
      }
      puVar30 = puVar29;
      puVar15 = param_1 + uVar31 * 2 + uVar25 * 2;
      if (param_1[uVar31 * 2 + uVar28 * 2 + 4] < param_1[uVar31 * 2 + uVar25 * 2]) {
        puVar30 = puVar22;
        puVar15 = puVar29;
        puVar24 = param_1 + uVar31 * 2 + uVar25 * 2;
      }
      uVar25 = puVar20[1];
      puVar29 = (ulonglong *)((longlong)param_1 + uVar17 + uVar31 * 0x10);
      if (uVar19 < param_1[uVar31 * 2 + uVar27 * 2]) {
        puVar30 = puVar29;
      }
      else {
        puVar22 = puVar29;
      }
      uVar19 = *puVar21;
      uVar27 = puVar21[1];
      uVar28 = *puVar26;
      uVar17 = puVar26[1];
      puVar21 = puVar24;
      if (*puVar30 < *puVar24) {
        puVar21 = puVar30;
      }
      uVar23 = *puVar18;
      uVar1 = puVar18[1];
      if (*puVar30 < *puVar24) {
        puVar30 = puVar24;
      }
      uVar6 = *puVar15;
      uVar7 = puVar15[1];
      uVar8 = *puVar21;
      uVar9 = puVar21[1];
      uVar10 = *puVar30;
      uVar11 = puVar30[1];
      uVar12 = *puVar22;
      uVar13 = puVar22[1];
      *param_3 = *puVar20;
      param_3[1] = uVar25;
      param_3[2] = uVar19;
      param_3[3] = uVar27;
      param_3[4] = uVar28;
      param_3[5] = uVar17;
      param_3[6] = uVar23;
      param_3[7] = uVar1;
      param_3[uVar31 * 2] = uVar6;
      (param_3 + uVar31 * 2)[1] = uVar7;
      param_3[uVar31 * 2 + 2] = uVar8;
      (param_3 + uVar31 * 2 + 2)[1] = uVar9;
      param_3[uVar31 * 2 + 4] = uVar10;
      (param_3 + uVar31 * 2 + 4)[1] = uVar11;
      param_3[uVar31 * 2 + 6] = uVar12;
      (param_3 + uVar31 * 2 + 6)[1] = uVar13;
      uVar19 = 4;
      uVar25 = param_2 - uVar31;
      if (4 < uVar31) {
LAB_1801a806d:
        uVar17 = (ulonglong)(uint)((int)uVar19 << 4);
        uVar27 = uVar19;
        uVar28 = uVar19 + 1;
        do {
          uVar34 = (param_1 + uVar27 * 2)[1];
          param_3[uVar27 * 2] = param_1[uVar27 * 2];
          (param_3 + uVar27 * 2)[1] = uVar34;
          uVar34 = param_3[uVar27 * 2];
          if (uVar34 < param_3[uVar27 * 2 + -2]) {
            uVar27 = param_3[uVar27 * 2 + 1];
            uVar23 = uVar17;
            do {
              puVar2 = (undefined8 *)((longlong)param_3 + (uVar23 - 0x10));
              uVar14 = puVar2[1];
              *(undefined8 *)((longlong)param_3 + uVar23) = *puVar2;
              ((undefined8 *)((longlong)param_3 + uVar23))[1] = uVar14;
              if (uVar23 == 0x10) {
                puVar18 = param_3;
                goto LAB_1801a8083;
              }
              uVar1 = uVar23 - 0x10;
              lVar16 = uVar23 - 0x20;
              uVar23 = uVar1;
            } while (uVar34 < *(ulonglong *)((longlong)param_3 + lVar16));
            puVar18 = (ulonglong *)(uVar1 + (longlong)param_3);
LAB_1801a8083:
            *puVar18 = uVar34;
            *(int *)(puVar18 + 1) = (int)uVar27;
          }
          uVar17 = uVar17 + 0x10;
          bVar32 = uVar28 < uVar31;
          uVar27 = uVar28;
          uVar28 = uVar28 + (uVar28 < uVar31);
          uVar34 = param_2;
        } while (bVar32);
      }
    }
  }
  else {
    FUN_1801a79d0(param_1,param_3,param_3 + param_2 * 2);
    FUN_1801a79d0(param_1 + uVar31 * 2,param_3 + uVar31 * 2,param_3 + param_2 * 2 + 0x10);
    uVar19 = 8;
    uVar25 = uVar34 - uVar31;
    param_2 = uVar34;
    if (8 < uVar31) goto LAB_1801a806d;
  }
  puVar18 = param_3 + uVar31 * 2;
  if (uVar19 < uVar25) {
    uVar28 = (ulonglong)(uint)((int)uVar19 << 4);
    uVar27 = uVar19 + 1;
    do {
      uVar17 = (param_1 + uVar31 * 2 + uVar19 * 2)[1];
      puVar18[uVar19 * 2] = param_1[uVar31 * 2 + uVar19 * 2];
      (puVar18 + uVar19 * 2)[1] = uVar17;
      uVar17 = puVar18[uVar19 * 2];
      if (uVar17 < puVar18[uVar19 * 2 + -2]) {
        uVar19 = puVar18[uVar19 * 2 + 1];
        uVar23 = uVar28;
        do {
          puVar2 = (undefined8 *)((longlong)puVar18 + (uVar23 - 0x10));
          uVar14 = puVar2[1];
          *(undefined8 *)((longlong)puVar18 + uVar23) = *puVar2;
          ((undefined8 *)((longlong)puVar18 + uVar23))[1] = uVar14;
          if (uVar23 == 0x10) {
            puVar21 = puVar18;
            goto LAB_1801a8123;
          }
          uVar1 = uVar23 - 0x10;
          lVar16 = uVar23 - 0x20;
          uVar23 = uVar1;
        } while (uVar17 < *(ulonglong *)((longlong)puVar18 + lVar16));
        puVar21 = (ulonglong *)(uVar1 + (longlong)puVar18);
LAB_1801a8123:
        *puVar21 = uVar17;
        *(int *)(puVar21 + 1) = (int)uVar19;
      }
      uVar28 = uVar28 + 0x10;
      bVar32 = uVar27 < uVar25;
      uVar19 = uVar27;
      uVar27 = uVar27 + (uVar27 < uVar25);
    } while (bVar32);
  }
  puVar22 = param_3 + uVar34 * 2 + -2;
  puVar21 = puVar18 + -2;
  puVar26 = param_3;
  puVar20 = param_1 + uVar34 * 2;
  do {
    uVar25 = uVar31;
    puVar29 = param_1;
    bVar32 = *puVar18 < *puVar26;
    uVar19 = (ulonglong)!bVar32;
    puVar24 = puVar18;
    if (!bVar32) {
      puVar24 = puVar26;
    }
    uVar31 = puVar24[1];
    *puVar29 = *puVar24;
    puVar29[1] = uVar31;
    uVar31 = *puVar22;
    uVar27 = *puVar21;
    puVar24 = puVar21;
    if (uVar31 >= uVar27) {
      puVar24 = puVar22;
    }
    puVar18 = puVar18 + (ulonglong)bVar32 * 2;
    puVar26 = puVar26 + (ulonglong)!bVar32 * 2;
    uVar4 = *(undefined4 *)((longlong)puVar24 + 4);
    uVar28 = puVar24[1];
    uVar5 = *(undefined4 *)((longlong)puVar24 + 0xc);
    *(int *)(puVar20 + -2) = (int)*puVar24;
    *(undefined4 *)((longlong)puVar20 + -0xc) = uVar4;
    *(int *)(puVar20 + -1) = (int)uVar28;
    *(undefined4 *)((longlong)puVar20 + -4) = uVar5;
    puVar22 = puVar22 + ((ulonglong)(uVar31 < uVar27) - 1) * 2;
    puVar21 = puVar21 + (ulonglong)(uVar31 < uVar27) * -2;
    uVar31 = uVar25 - 1;
    param_1 = puVar29 + 2;
    puVar20 = puVar20 + -2;
  } while (uVar31 != 0);
  puVar21 = puVar21 + 2;
  if ((uVar34 & 1) != 0) {
    bVar32 = puVar26 < puVar21;
    puVar20 = puVar18;
    if (bVar32) {
      puVar20 = puVar26;
    }
    uVar4 = *(undefined4 *)((longlong)puVar20 + 4);
    uVar31 = puVar20[1];
    uVar5 = *(undefined4 *)((longlong)puVar20 + 0xc);
    *(int *)(puVar29 + 2) = (int)*puVar20;
    *(undefined4 *)((longlong)puVar29 + 0x14) = uVar4;
    *(int *)(puVar29 + 3) = (int)uVar31;
    *(undefined4 *)((longlong)puVar29 + 0x1c) = uVar5;
    puVar26 = puVar26 + (ulonglong)bVar32 * 2;
    uVar19 = (ulonglong)!bVar32 * 0x10;
    puVar18 = puVar18 + (ulonglong)!bVar32 * 2;
  }
  if ((puVar26 == puVar21) && (puVar22 = puVar22 + 2, puVar18 == puVar22)) {
    return;
  }
  FUN_180201a00(puVar22,uVar19,puVar21,puVar26,uVar34 * 0x10,puVar33,uVar25,param_3,uVar34,uVar35);
LAB_1801a82ae:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


