/* FUN_1801a97f0 @ 1801a97f0 */

void FUN_1801a97f0(uint *param_1,ulonglong param_2,uint *param_3,ulonglong param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) goto LAB_1801a9c72;
  uVar12 = param_2 >> 1;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      *param_3 = *param_1;
      param_3[uVar12] = param_1[uVar12];
      uVar7 = 1;
      uVar9 = param_2 - uVar12;
      if (1 < uVar12) goto LAB_1801a9a8b;
    }
    else {
      bVar23 = *(byte *)((longlong)param_1 + 7) < *(byte *)((longlong)param_1 + 3);
      bVar24 = !bVar23;
      uVar7 = (ulonglong)bVar23;
      bVar23 = *(byte *)((longlong)param_1 + 0xf) < *(byte *)((longlong)param_1 + 0xb);
      uVar17 = bVar23 + 2;
      uVar21 = bVar23 ^ 3;
      uVar14 = param_1[uVar17] >> 0x18;
      uVar22 = param_1[uVar7] >> 0x18;
      uVar15 = (uint)bVar24;
      uVar19 = uVar17;
      if (uVar14 < uVar22) {
        uVar19 = uVar15;
      }
      bVar23 = param_1[uVar21] >> 0x18 < param_1[bVar24] >> 0x18;
      if (bVar23) {
        uVar19 = uVar21;
        uVar15 = uVar17;
      }
      uVar21 = param_1[uVar21];
      if (bVar23) {
        uVar21 = param_1[bVar24];
      }
      uVar19 = param_1[uVar19];
      uVar9 = (ulonglong)uVar15;
      if (uVar14 < uVar22) {
        uVar9 = uVar7;
      }
      uVar15 = param_1[uVar9];
      uVar6 = param_1[uVar7];
      if (uVar14 < uVar22) {
        uVar6 = param_1[uVar17];
      }
      uVar22 = uVar19;
      if (uVar19 >> 0x18 < uVar15 >> 0x18) {
        uVar22 = uVar15;
        uVar15 = uVar19;
      }
      bVar24 = *(byte *)((longlong)param_1 + uVar12 * 4 + 7) <
               *(byte *)((longlong)param_1 + uVar12 * 4 + 3);
      uVar19 = (uint)!bVar24;
      uVar9 = (ulonglong)bVar24;
      uVar14 = (uint)(*(byte *)((longlong)param_1 + uVar12 * 4 + 0xf) <
                     *(byte *)((longlong)param_1 + uVar12 * 4 + 0xb));
      uVar17 = uVar14 + 2;
      uVar7 = (ulonglong)(uVar14 ^ 3);
      uVar20 = param_1[uVar12 + uVar17] >> 0x18;
      uVar11 = param_1[uVar12 + uVar9] >> 0x18;
      uVar14 = uVar17;
      if (uVar20 < uVar11) {
        uVar14 = uVar19;
      }
      bVar24 = param_1[uVar12 + uVar7] >> 0x18 < param_1[uVar12 + uVar19] >> 0x18;
      uVar3 = uVar19;
      if (bVar24) {
        uVar3 = uVar17;
      }
      uVar1 = param_1[uVar12 + uVar7];
      uVar18 = (ulonglong)uVar14;
      if (bVar24) {
        uVar1 = param_1[uVar12 + uVar19];
        uVar18 = uVar7;
      }
      uVar7 = (ulonglong)uVar3;
      if (uVar20 < uVar11) {
        uVar7 = uVar9;
      }
      uVar19 = param_1[uVar12 + uVar18];
      uVar14 = param_1[uVar12 + uVar9];
      if (uVar20 < uVar11) {
        uVar14 = param_1[uVar12 + uVar17];
      }
      uVar17 = param_1[uVar12 + uVar7];
      *param_3 = uVar6;
      param_3[1] = uVar15;
      param_3[2] = uVar22;
      param_3[3] = uVar21;
      param_3[uVar12] = uVar14;
      uVar15 = uVar19;
      if (uVar19 >> 0x18 < uVar17 >> 0x18) {
        uVar15 = uVar17;
        uVar17 = uVar19;
      }
      param_3[uVar12 + 1] = uVar17;
      param_3[uVar12 + 2] = uVar15;
      param_3[uVar12 + 3] = uVar1;
      uVar7 = 4;
      uVar9 = param_2 - uVar12;
      if (4 < uVar12) {
LAB_1801a9a8b:
        uVar4 = (ulonglong)(uint)((int)uVar7 * 4);
        uVar18 = uVar7;
        uVar16 = uVar7 + 1;
        do {
          uVar19 = param_1[uVar18];
          param_3[uVar18] = uVar19;
          uVar15 = param_3[uVar18 - 1];
          if (uVar19 >> 0x18 < uVar15 >> 0x18) {
            uVar18 = uVar4;
            do {
              *(uint *)((longlong)param_3 + uVar18) = uVar15;
              if (uVar18 == 4) {
                puVar5 = param_3;
                goto LAB_1801a9aa3;
              }
              uVar15 = *(uint *)((longlong)param_3 + (uVar18 - 8));
              uVar18 = uVar18 - 4;
            } while (uVar19 >> 0x18 < uVar15 >> 0x18);
            puVar5 = (uint *)(uVar18 + (longlong)param_3);
LAB_1801a9aa3:
            *puVar5 = uVar19;
          }
          uVar4 = uVar4 + 4;
          bVar24 = uVar16 < uVar12;
          uVar18 = uVar16;
          uVar16 = uVar16 + (uVar16 < uVar12);
        } while (bVar24);
      }
    }
  }
  else {
    FUN_1801a9460(param_1,param_3,param_3 + param_2);
    FUN_1801a9460(param_1 + uVar12,param_3 + uVar12,param_3 + param_2 + 8);
    uVar7 = 8;
    uVar9 = param_2 - uVar12;
    if (8 < uVar12) goto LAB_1801a9a8b;
  }
  puVar5 = param_3 + uVar12;
  if (uVar7 < uVar9) {
    uVar16 = (ulonglong)(uint)((int)uVar7 * 4);
    uVar18 = uVar7 + 1;
    do {
      uVar19 = param_1[uVar12 + uVar7];
      puVar5[uVar7] = uVar19;
      uVar15 = puVar5[uVar7 - 1];
      if (uVar19 >> 0x18 < uVar15 >> 0x18) {
        uVar7 = uVar16;
        do {
          *(uint *)((longlong)puVar5 + uVar7) = uVar15;
          if (uVar7 == 4) {
            puVar10 = puVar5;
            goto LAB_1801a9b23;
          }
          uVar15 = *(uint *)((longlong)puVar5 + (uVar7 - 8));
          uVar7 = uVar7 - 4;
        } while (uVar19 >> 0x18 < uVar15 >> 0x18);
        puVar10 = (uint *)(uVar7 + (longlong)puVar5);
LAB_1801a9b23:
        *puVar10 = uVar19;
      }
      uVar16 = uVar16 + 4;
      bVar24 = uVar18 < uVar9;
      uVar7 = uVar18;
      uVar18 = uVar18 + (uVar18 < uVar9);
    } while (bVar24);
  }
  puVar8 = param_3 + (param_2 - 1);
  puVar10 = puVar5 + -1;
  uVar9 = 0;
  uVar7 = param_2;
  do {
    uVar7 = uVar7 - 1;
    bVar24 = *puVar5 >> 0x18 < *param_3 >> 0x18;
    uVar19 = *param_3;
    if (bVar24) {
      uVar19 = *puVar5;
    }
    uVar22 = *puVar8 >> 0x18;
    uVar21 = *puVar10 >> 0x18;
    uVar15 = *puVar8;
    if (uVar22 < uVar21) {
      uVar15 = *puVar10;
    }
    param_1[uVar9] = uVar19;
    puVar5 = puVar5 + bVar24;
    param_3 = param_3 + !bVar24;
    param_1[uVar7] = uVar15;
    puVar8 = puVar8 + ((ulonglong)(uVar22 < uVar21) - 1);
    puVar10 = puVar10 + -(ulonglong)(uVar22 < uVar21);
    uVar9 = uVar9 + 1;
  } while (uVar12 != uVar9);
  if ((param_2 & 1) != 0) {
    bVar24 = param_3 < puVar10 + 1;
    puVar13 = puVar5;
    if (bVar24) {
      puVar13 = param_3;
    }
    param_1[uVar9] = *puVar13;
    param_3 = param_3 + bVar24;
    puVar5 = puVar5 + !bVar24;
  }
  if ((param_3 == puVar10 + 1) && (puVar5 == puVar8 + 1)) {
    return;
  }
  FUN_180201a00();
LAB_1801a9c72:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


