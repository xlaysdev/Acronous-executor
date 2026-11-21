/* FUN_1800f9890 @ 1800f9890 */

void FUN_1800f9890(ulonglong *param_1,longlong *param_2,longlong param_3,ulonglong param_4,
                  longlong param_5,ulonglong param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_100 [80];
  undefined *puStack_b0;
  longlong local_88;
  ulonglong *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = param_6;
  local_78 = *param_2;
  local_70 = param_5 + 8;
  local_60 = param_3 + 1;
  local_68 = -param_4;
  uVar7 = 0;
  uVar15 = 0;
LAB_1800f98ec:
  uVar14 = param_6 - uVar7;
  local_88 = param_3;
  local_80 = param_1;
  if (param_6 < uVar7) {
                    /* WARNING: Subroutine does not return */
    puStack_b0 = (undefined *)0x1800f9d12;
    FUN_180201a30(uVar7,param_6,param_6,&PTR_s_C__Users_burne__cargo_registry_s_180238a00);
  }
  pbVar1 = (byte *)(param_3 + uVar15);
  uVar10 = param_4 - uVar15;
  uVar6 = uVar10;
  if (uVar14 < uVar10) {
    uVar6 = uVar14;
  }
  pbVar2 = (byte *)(param_5 + uVar7);
  if ((((uint)pbVar1 ^ (uint)pbVar2) & 7) == 0) {
    uVar11 = -(uint)pbVar1 & 7;
    if (uVar6 < (ulonglong)uVar11 + 0x10) goto LAB_1800f993d;
    if ((ulonglong)uVar11 == 0) {
      uVar13 = 0;
      goto LAB_1800f9bcb;
    }
    bVar4 = *pbVar1;
    if ((char)bVar4 < '\0') {
      uVar13 = 0;
    }
    else {
      *pbVar2 = bVar4;
      uVar13 = 1;
      if (uVar11 == 1) goto LAB_1800f9bcb;
      bVar4 = pbVar1[1];
      if (-1 < (char)bVar4) {
        pbVar2[1] = bVar4;
        uVar13 = 2;
        if (uVar11 == 2) goto LAB_1800f9bcb;
        bVar4 = pbVar1[2];
        if (-1 < (char)bVar4) {
          pbVar2[2] = bVar4;
          uVar13 = 3;
          if (uVar11 == 3) goto LAB_1800f9bcb;
          bVar4 = pbVar1[3];
          if (-1 < (char)bVar4) {
            pbVar2[3] = bVar4;
            uVar13 = 4;
            if (uVar11 == 4) goto LAB_1800f9bcb;
            bVar4 = pbVar1[4];
            if (-1 < (char)bVar4) {
              pbVar2[4] = bVar4;
              uVar13 = 5;
              if (uVar11 == 5) goto LAB_1800f9bcb;
              bVar4 = pbVar1[5];
              if (-1 < (char)bVar4) {
                pbVar2[5] = bVar4;
                uVar13 = 6;
                if (uVar11 == 6) {
LAB_1800f9bcb:
LAB_1800f9be0:
                  uVar8 = *(ulonglong *)(pbVar1 + uVar13);
                  uVar5 = *(ulonglong *)(pbVar1 + uVar13 + 8);
                  *(ulonglong *)(local_70 + uVar7 + -8 + uVar13) = uVar8;
                  *(ulonglong *)(local_70 + uVar7 + uVar13) = uVar5;
                  uVar8 = uVar8 & 0x8080808080808080;
                  uVar5 = uVar5 & 0x8080808080808080;
                  if (uVar5 == 0 && uVar8 == 0) goto code_r0x0001800f9c0a;
                  if (uVar8 == 0) {
                    uVar11 = 0;
                    for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
                      uVar11 = uVar11 + 1;
                    }
                    uVar14 = (ulonglong)(uVar11 >> 3) + 8;
                  }
                  else {
                    uVar11 = 0;
                    for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
                      uVar11 = uVar11 + 1;
                    }
                    uVar14 = (ulonglong)(uVar11 >> 3);
                  }
                  uVar13 = uVar13 + uVar14;
                  bVar4 = pbVar1[uVar13];
                  goto LAB_1800f9a65;
                }
                bVar4 = pbVar1[6];
                if (-1 < (char)bVar4) {
                  pbVar2[6] = bVar4;
                  uVar13 = 7;
                  goto LAB_1800f9bcb;
                }
              }
            }
          }
        }
      }
    }
LAB_1800f9a65:
    uVar15 = uVar15 + uVar13;
    uVar6 = uVar13 + uVar7;
    if (param_6 <= uVar13 + uVar7 + 2) {
      uVar14 = 1;
      goto LAB_1800f9c69;
    }
    uVar3 = *(ushort *)(local_78 + -0x100 + (ulonglong)bVar4 * 2);
    uVar14 = uVar15 + 1;
    while( true ) {
      if (uVar3 == 0) {
        *(undefined2 *)(param_1 + 1) = 0x102;
        *(undefined1 *)((longlong)param_1 + 10) = 0;
        *param_1 = uVar14;
        goto LAB_1800f9c84;
      }
      if (uVar3 < 0x800) {
        lVar12 = uVar6 + 1;
        bVar4 = (byte)(uVar3 >> 6) | 0xc0;
        lVar9 = 2;
      }
      else {
        bVar4 = (byte)(uVar3 >> 0xc) | 0xe0;
        *(byte *)(param_5 + 1 + uVar6) = (byte)(uVar3 >> 6) & 0x3f | 0x80;
        lVar12 = uVar6 + 2;
        lVar9 = 3;
      }
      *(byte *)(param_5 + uVar6) = bVar4;
      *(byte *)(param_5 + lVar12) = (byte)uVar3 & 0x3f | 0x80;
      uVar7 = lVar9 + uVar6;
      if (param_4 <= uVar14) break;
      if (param_6 <= uVar7 + 2) {
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = uVar14;
        goto LAB_1800f9cb4;
      }
      bVar4 = *(byte *)(param_3 + uVar14);
      uVar15 = uVar14 + 1;
      if (-1 < (char)bVar4) {
        lVar12 = 0;
        do {
          *(byte *)(param_5 + uVar7 + lVar12) = bVar4;
          if (0x3b < bVar4) {
            uVar15 = uVar14 + lVar12 + 1;
            uVar7 = lVar12 + lVar9 + uVar6 + 1;
            if (param_4 < uVar15) {
                    /* WARNING: Subroutine does not return */
              puStack_b0 = &UNK_1800f9d2e;
              FUN_180201a30(uVar14 + lVar12 + 1,param_4,param_4,
                            &PTR_s_C__Users_burne__cargo_registry_s_180238a18);
            }
            goto LAB_1800f98ec;
          }
          if (local_68 + uVar15 + lVar12 == 0) {
            *(undefined1 *)(param_1 + 1) = 0;
            *param_1 = param_4;
LAB_1800f9caa:
            uVar7 = lVar12 + lVar9 + uVar6 + 1;
            goto LAB_1800f9cb4;
          }
          if (param_6 <= uVar7 + lVar12 + 3) {
            *(undefined1 *)(param_1 + 1) = 1;
            *param_1 = uVar14 + lVar12 + 1;
            goto LAB_1800f9caa;
          }
          bVar4 = *(byte *)(local_60 + uVar14 + lVar12);
          lVar12 = lVar12 + 1;
        } while (-1 < (char)bVar4);
        uVar7 = uVar7 + lVar12;
        uVar15 = uVar15 + lVar12;
      }
      uVar3 = *(ushort *)(local_78 + -0x100 + (ulonglong)bVar4 * 2);
      uVar6 = uVar7;
      uVar14 = uVar15;
    }
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = uVar14;
  }
  else {
LAB_1800f993d:
    uVar13 = 0;
LAB_1800f9943:
    if (uVar13 < uVar6) {
      while (bVar4 = pbVar1[uVar13], -1 < (char)bVar4) {
        pbVar2[uVar13] = bVar4;
        uVar13 = uVar13 + 1;
        if (uVar6 == uVar13) goto LAB_1800f9c58;
      }
      goto LAB_1800f9a65;
    }
LAB_1800f9c58:
    uVar14 = (ulonglong)(uVar14 < uVar10);
    uVar15 = uVar15 + uVar6;
    uVar6 = uVar7 + uVar6;
LAB_1800f9c69:
    *param_1 = uVar15;
    param_1[1] = (ulonglong)auStack_100 | uVar14;
LAB_1800f9c84:
    uVar7 = uVar6;
  }
LAB_1800f9cb4:
  param_1[2] = uVar7;
  return;
code_r0x0001800f9c0a:
  uVar13 = uVar13 + 0x10;
  if (uVar6 - 0x10 < uVar13) goto LAB_1800f9943;
  goto LAB_1800f9be0;
}


