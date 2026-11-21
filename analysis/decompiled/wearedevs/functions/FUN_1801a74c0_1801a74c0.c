/* FUN_1801a74c0 @ 1801a74c0 */

undefined8 * FUN_1801a74c0(undefined8 *param_1,longlong param_2,char *param_3,longlong param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  char *pcVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  char *pcVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  char *pcVar20;
  char *pcVar21;
  uint uVar22;
  int iVar23;
  bool bVar24;
  undefined1 local_65;
  uint local_64;
  ulonglong *local_60;
  undefined1 *local_58;
  longlong local_50;
  ulonglong *local_48;
  
  uVar18 = *(ulonglong *)(param_2 + 0x3b8);
  puVar5 = (ulonglong *)(param_2 + 0x3b8);
  if (0x3b < uVar18) {
    puVar5 = (ulonglong *)(param_2 + 8);
    uVar18 = *(ulonglong *)(param_2 + 8);
  }
  if (uVar18 != 0) {
    *puVar5 = 0;
  }
  pcVar16 = param_3 + param_4;
  lVar13 = 0;
  lVar14 = 0;
  pcVar7 = param_3;
  do {
    lVar17 = lVar14;
    pcVar20 = param_3;
    if (param_4 == lVar17) goto joined_r0x0001801a753f;
    pcVar21 = pcVar7 + -1;
    pcVar1 = pcVar7 + param_4 + -1;
    lVar14 = lVar17 + 1;
    pcVar7 = pcVar21;
  } while (*pcVar1 != '-');
  lVar13 = param_4 - (lVar17 + 1);
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar14 = param_4 + 1;
    param_4 = lVar17;
    pcVar20 = pcVar21 + lVar14;
joined_r0x0001801a753f:
    if (param_4 == 0) goto LAB_1801a78e5;
    pcVar16 = pcVar20 + param_4;
  }
  pcVar7 = pcVar20 + 1;
  local_60 = (ulonglong *)(param_2 + 8);
  uVar19 = 0x80;
  uVar12 = 0x48;
  local_64 = (uint)lVar13;
  uVar4 = 0;
  local_50 = lVar13;
  local_48 = (ulonglong *)(param_2 + 0x3b8);
  do {
    uVar18 = 1;
    uVar22 = 0x24;
    pcVar21 = pcVar20;
    uVar15 = uVar4;
    while( true ) {
      pcVar20 = pcVar7;
      cVar2 = *pcVar21;
      if ((byte)(cVar2 - 0x30U) < 10) {
        bVar8 = cVar2 - 0x16;
      }
      else {
        bVar8 = cVar2 + 0xbf;
        if ((0x19 < bVar8) && (bVar8 = cVar2 + 0x9f, 0x19 < bVar8)) goto LAB_1801a78d4;
      }
      uVar3 = (uint)(bVar8 * uVar18);
      if (((int)(bVar8 * uVar18 >> 0x20) != 0) ||
         (bVar24 = CARRY4(uVar15,uVar3), uVar15 = uVar15 + uVar3, bVar24)) goto LAB_1801a78d4;
      uVar3 = uVar22 - uVar12;
      if (uVar12 + 0x1a <= uVar22) {
        uVar3 = 0x1a;
      }
      if (uVar22 <= uVar12) {
        uVar3 = 1;
      }
      if (bVar8 <= uVar3 && uVar3 != bVar8) break;
      uVar18 = uVar18 * (0x24 - uVar3);
      if ((int)(uVar18 >> 0x20) != 0) goto LAB_1801a78d4;
      uVar18 = uVar18 & 0xffffffff;
      uVar22 = uVar22 + 0x24;
      pcVar7 = pcVar20 + 1;
      pcVar21 = pcVar20;
      if (pcVar20 == pcVar16) goto LAB_1801a78d4;
    }
    uVar12 = local_64 + 1;
    if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201c20(&PTR_s_C__Users_burne__cargo_registry_s_180282368);
    }
    uVar22 = 2;
    if (uVar4 == 0) {
      uVar22 = 700;
    }
    iVar23 = 0;
    uVar18 = (ulonglong)(uVar15 - uVar4) / (ulonglong)uVar22;
    uVar4 = (int)(uVar18 / uVar12) + (int)uVar18;
    if (0x1c7 < uVar4) {
      iVar23 = 0;
      uVar22 = uVar4;
      do {
        uVar4 = uVar22 / 0x23;
        iVar23 = iVar23 + 0x24;
        bVar24 = 0x3e57 < uVar22;
        uVar22 = uVar4;
      } while (bVar24);
    }
    uVar18 = (ulonglong)uVar15 % (ulonglong)uVar12;
    bVar24 = CARRY4(uVar19,uVar15 / uVar12);
    uVar19 = uVar19 + uVar15 / uVar12;
    if ((bVar24) || ((uVar19 ^ 0xd800) - 0x110000 < 0xffef0800)) {
LAB_1801a78d4:
      *param_1 = 0;
      return param_1;
    }
    uVar9 = *local_48;
    puVar5 = local_60;
    uVar6 = uVar9;
    if (0x3b < uVar9) {
      uVar6 = *(ulonglong *)(param_2 + 8);
      puVar5 = *(ulonglong **)(param_2 + 0x10);
    }
    if (uVar6 != 0) {
      uVar9 = uVar6 * 0x10 - 0x10;
      puVar11 = puVar5;
      if ((~(uint)uVar9 & 0x30) != 0) {
        lVar13 = -(ulonglong)(((uint)(uVar9 >> 4) & 0xfffffff) + 1 & 3);
        do {
          if (uVar18 <= *puVar11) {
            *puVar11 = *puVar11 + 1;
          }
          puVar11 = puVar11 + 2;
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0);
      }
      if (0x2f < uVar9) {
        do {
          if (*puVar11 < uVar18) {
            uVar9 = puVar11[2];
            if (uVar9 < uVar18) goto LAB_1801a783e;
LAB_1801a786f:
            puVar11[2] = uVar9 + 1;
            uVar9 = puVar11[4];
            if (uVar18 <= uVar9) goto LAB_1801a787f;
LAB_1801a7847:
            uVar9 = puVar11[6];
          }
          else {
            *puVar11 = *puVar11 + 1;
            uVar9 = puVar11[2];
            if (uVar18 <= uVar9) goto LAB_1801a786f;
LAB_1801a783e:
            uVar9 = puVar11[4];
            if (uVar9 < uVar18) goto LAB_1801a7847;
LAB_1801a787f:
            puVar11[4] = uVar9 + 1;
            uVar9 = puVar11[6];
          }
          if (uVar18 <= uVar9) {
            puVar11[6] = uVar9 + 1;
          }
          puVar11 = puVar11 + 8;
        } while (puVar11 != puVar5 + uVar6 * 2);
      }
      uVar9 = *local_48;
    }
    if (uVar9 < 0x3c) {
      uVar10 = 0x3b;
      uVar6 = uVar9;
      puVar5 = local_60;
      puVar11 = local_48;
    }
    else {
      uVar6 = *(ulonglong *)(param_2 + 8);
      uVar10 = uVar9;
      puVar5 = *(ulonglong **)(param_2 + 0x10);
      puVar11 = local_60;
    }
    local_64 = uVar12;
    if (uVar6 == uVar10) {
      FUN_1801fbb00(param_2);
      uVar6 = *(ulonglong *)(param_2 + 8);
      puVar5 = *(ulonglong **)(param_2 + 0x10);
      puVar11 = local_60;
    }
    puVar5[uVar6 * 2] = uVar18;
    *(uint *)(puVar5 + uVar6 * 2 + 1) = uVar19;
    *puVar11 = *puVar11 + 1;
    uVar12 = iVar23 + (uVar4 * 0x24 & 0xffff) / (uVar4 + 0x26 & 0xffff);
    uVar4 = (int)uVar18 + 1;
    pcVar7 = pcVar20 + (pcVar20 != pcVar16);
  } while (pcVar20 != pcVar16);
  lVar13 = local_50;
LAB_1801a78e5:
  uVar18 = *(ulonglong *)(param_2 + 0x3b8);
  lVar14 = param_2 + 8;
  lVar17 = lVar14;
  if (0x3b < uVar18) {
    uVar18 = *(ulonglong *)(param_2 + 8);
    lVar17 = *(longlong *)(param_2 + 0x10);
  }
  if (uVar18 < 2) {
    uVar18 = *(ulonglong *)(param_2 + 0x3b8);
  }
  else {
    local_58 = &local_65;
    if (uVar18 < 0x15) {
      FUN_1801a7d50(lVar17,uVar18,1,&local_58);
    }
    else {
      FUN_18019e0d0(lVar17,uVar18,&local_58);
    }
    uVar18 = *(ulonglong *)(param_2 + 0x3b8);
  }
  if (0x3b < uVar18) {
    lVar14 = *(longlong *)(param_2 + 0x10);
    uVar18 = *(ulonglong *)(param_2 + 8);
  }
  *param_1 = param_3;
  param_1[1] = param_3 + lVar13;
  param_1[2] = lVar14;
  param_1[3] = uVar18;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = lVar13 + uVar18;
  return param_1;
}


