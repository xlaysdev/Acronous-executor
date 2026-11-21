/* FUN_1801a6fd0 @ 1801a6fd0 */

undefined8 * FUN_1801a6fd0(undefined8 *param_1,longlong param_2,int *param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  int *piVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 local_71;
  int *local_70;
  uint local_68;
  uint local_64;
  ulonglong *local_60;
  undefined1 *local_58;
  longlong local_50;
  ulonglong *local_48;
  
  uVar15 = *(ulonglong *)(param_2 + 0x3b8);
  puVar5 = (ulonglong *)(param_2 + 0x3b8);
  if (0x3b < uVar15) {
    puVar5 = (ulonglong *)(param_2 + 8);
    uVar15 = *(ulonglong *)(param_2 + 8);
  }
  if (uVar15 != 0) {
    *puVar5 = 0;
  }
  lVar19 = 0;
  lVar18 = 0;
  piVar4 = param_3;
  lVar14 = 0;
  do {
    lVar13 = lVar14;
    piVar20 = param_3;
    local_70 = param_3;
    if (param_4 * 4 == lVar18) goto joined_r0x0001801a7068;
    piVar21 = piVar4 + -1;
    lVar18 = lVar18 + 4;
    lVar14 = lVar13 + 1;
    piVar1 = piVar4 + param_4 + -1;
    piVar4 = piVar21;
  } while (*piVar1 != 0x2d);
  if (param_4 * 4 == lVar18) {
    param_3 = param_3 + param_4;
    lVar19 = 0;
  }
  else {
    lVar19 = param_4 - lVar14;
    piVar20 = piVar21 + param_4 + 1;
    param_4 = lVar13;
joined_r0x0001801a7068:
    if (param_4 == 0) goto LAB_1801a73f6;
    param_3 = piVar20 + param_4;
  }
  piVar4 = piVar20 + 1;
  local_60 = (ulonglong *)(param_2 + 8);
  uVar17 = 0x80;
  uVar11 = 0x48;
  local_64 = (uint)lVar19;
  uVar3 = 0;
  local_50 = lVar19;
  local_48 = (ulonglong *)(param_2 + 0x3b8);
  do {
    uVar15 = 1;
    uVar10 = 0x24;
    piVar21 = piVar20;
    uVar12 = uVar3;
    while( true ) {
      piVar20 = piVar4;
      iVar9 = *piVar21;
      bVar23 = 9 < iVar9 - 0x30U;
      uVar16 = iVar9 - 0x61U;
      if (!bVar23) {
        uVar16 = iVar9 - 0x16;
      }
      if (((bVar23 && 0x19 < iVar9 - 0x61U) ||
          (uVar2 = (uint)(uVar16 * uVar15), (int)(uVar16 * uVar15 >> 0x20) != 0)) ||
         (bVar23 = CARRY4(uVar12,uVar2), uVar12 = uVar12 + uVar2, bVar23)) goto LAB_1801a73e8;
      uVar2 = uVar10 - uVar11;
      if (uVar11 + 0x1a <= uVar10) {
        uVar2 = 0x1a;
      }
      if (uVar10 <= uVar11) {
        uVar2 = 1;
      }
      if (uVar16 < uVar2) break;
      uVar15 = uVar15 * (0x24 - uVar2);
      if ((int)(uVar15 >> 0x20) != 0) goto LAB_1801a73e8;
      uVar15 = uVar15 & 0xffffffff;
      uVar10 = uVar10 + 0x24;
      piVar4 = piVar20 + 1;
      piVar21 = piVar20;
      if (piVar20 == param_3) goto LAB_1801a73e8;
    }
    uVar11 = local_64 + 1;
    if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201c20(&PTR_s_C__Users_burne__cargo_registry_s_180282368);
    }
    uVar10 = 2;
    if (uVar3 == 0) {
      uVar10 = 700;
    }
    iVar9 = 0;
    uVar15 = (ulonglong)(uVar12 - uVar3) / (ulonglong)uVar10;
    uVar3 = (int)(uVar15 / uVar11) + (int)uVar15;
    if (0x1c7 < uVar3) {
      iVar9 = 0;
      uVar10 = uVar3;
      do {
        uVar3 = uVar10 / 0x23;
        iVar9 = iVar9 + 0x24;
        bVar23 = 0x3e57 < uVar10;
        uVar10 = uVar3;
      } while (bVar23);
    }
    local_68 = uVar12 % uVar11;
    bVar23 = CARRY4(uVar17,uVar12 / uVar11);
    uVar17 = uVar17 + uVar12 / uVar11;
    if ((bVar23) || ((uVar17 ^ 0xd800) - 0x110000 < 0xffef0800)) {
LAB_1801a73e8:
      *param_1 = 0;
      return param_1;
    }
    uVar15 = *local_48;
    puVar5 = local_60;
    uVar6 = uVar15;
    if (0x3b < uVar15) {
      uVar6 = *(ulonglong *)(param_2 + 8);
      puVar5 = *(ulonglong **)(param_2 + 0x10);
    }
    uVar22 = (ulonglong)local_68;
    if (uVar6 != 0) {
      uVar15 = uVar6 * 0x10 - 0x10;
      puVar8 = puVar5;
      if ((~(uint)uVar15 & 0x30) != 0) {
        lVar19 = -(ulonglong)(((uint)(uVar15 >> 4) & 0xfffffff) + 1 & 3);
        do {
          if (uVar22 <= *puVar8) {
            *puVar8 = *puVar8 + 1;
          }
          puVar8 = puVar8 + 2;
          lVar19 = lVar19 + 1;
        } while (lVar19 != 0);
      }
      if (0x2f < uVar15) {
        do {
          if (*puVar8 < uVar22) {
            uVar15 = puVar8[2];
            if (uVar15 < uVar22) goto LAB_1801a735e;
LAB_1801a738f:
            puVar8[2] = uVar15 + 1;
            uVar15 = puVar8[4];
            if (uVar22 <= uVar15) goto LAB_1801a739f;
LAB_1801a7367:
            uVar15 = puVar8[6];
          }
          else {
            *puVar8 = *puVar8 + 1;
            uVar15 = puVar8[2];
            if (uVar22 <= uVar15) goto LAB_1801a738f;
LAB_1801a735e:
            uVar15 = puVar8[4];
            if (uVar15 < uVar22) goto LAB_1801a7367;
LAB_1801a739f:
            puVar8[4] = uVar15 + 1;
            uVar15 = puVar8[6];
          }
          if (uVar22 <= uVar15) {
            puVar8[6] = uVar15 + 1;
          }
          puVar8 = puVar8 + 8;
        } while (puVar8 != puVar5 + uVar6 * 2);
      }
      uVar15 = *local_48;
    }
    if (uVar15 < 0x3c) {
      uVar7 = 0x3b;
      uVar6 = uVar15;
      puVar5 = local_60;
      puVar8 = local_48;
    }
    else {
      uVar6 = *(ulonglong *)(param_2 + 8);
      uVar7 = uVar15;
      puVar5 = *(ulonglong **)(param_2 + 0x10);
      puVar8 = local_60;
    }
    local_64 = uVar11;
    if (uVar6 == uVar7) {
      FUN_1801fbb00(param_2);
      uVar6 = *(ulonglong *)(param_2 + 8);
      puVar5 = *(ulonglong **)(param_2 + 0x10);
      puVar8 = local_60;
    }
    uVar11 = iVar9 + (uVar3 * 0x24 & 0xffff) / (uVar3 + 0x26 & 0xffff);
    puVar5[uVar6 * 2] = uVar22;
    *(uint *)(puVar5 + uVar6 * 2 + 1) = uVar17;
    *puVar8 = *puVar8 + 1;
    uVar3 = local_68 + 1;
    piVar4 = piVar20 + (piVar20 != param_3);
  } while (piVar20 != param_3);
  lVar19 = local_50;
LAB_1801a73f6:
  uVar15 = *(ulonglong *)(param_2 + 0x3b8);
  lVar14 = param_2 + 8;
  lVar18 = lVar14;
  if (0x3b < uVar15) {
    uVar15 = *(ulonglong *)(param_2 + 8);
    lVar18 = *(longlong *)(param_2 + 0x10);
  }
  local_58 = &local_71;
  if (1 < uVar15) {
    if (uVar15 < 0x15) {
      FUN_1801a7d50(lVar18,uVar15,1,&local_58);
    }
    else {
      FUN_18019e0d0(lVar18,uVar15,&local_58);
    }
  }
  uVar15 = *(ulonglong *)(param_2 + 0x3b8);
  if (0x3b < uVar15) {
    lVar14 = *(longlong *)(param_2 + 0x10);
    uVar15 = *(ulonglong *)(param_2 + 8);
  }
  *param_1 = local_70;
  param_1[1] = local_70 + lVar19;
  param_1[2] = lVar14;
  param_1[3] = uVar15;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = lVar19 + uVar15;
  return param_1;
}


