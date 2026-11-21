/* FUN_1800fca50 @ 1800fca50 */

ulonglong *
FUN_1800fca50(ulonglong *param_1,char *param_2,char *param_3,ulonglong param_4,byte *param_5,
             ulonglong param_6,char param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  ulonglong uVar15;
  undefined1 auStack_100 [80];
  undefined8 uStack_b0;
  ulonglong *local_80;
  char *local_78;
  char *local_70;
  byte *local_68;
  ulonglong local_60;
  byte *local_58;
  ulonglong local_50;
  
  local_58 = param_5;
  local_50 = param_6;
  if (*param_2 == '\0') {
    lVar9 = 0;
    uVar13 = 0;
    goto LAB_1800fcae4;
  }
  *param_2 = '\0';
  if (param_4 == 0) {
    if (param_7 == '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    else {
      *(undefined2 *)(param_1 + 1) = 0x102;
      *(undefined1 *)((longlong)param_1 + 10) = 0;
    }
    goto LAB_1800fcf57;
  }
  if (param_6 < 4) {
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_1800fcf57;
  }
  cVar3 = *param_3;
  bVar14 = cVar3 - 0x40;
  if (0x3e < bVar14) {
    if (0xa1 < (byte)(cVar3 + 1U)) {
      bVar14 = cVar3 + 0x9e;
      goto LAB_1800fcfc2;
    }
switchD_1800fd069_caseD_46e:
    *(undefined1 *)(param_1 + 1) = 2;
    if (cVar3 < '\0') {
      *(undefined2 *)((longlong)param_1 + 9) = 2;
      *param_1 = 1;
      param_1[2] = 0;
      return param_1;
    }
    *(undefined2 *)((longlong)param_1 + 9) = 1;
LAB_1800fcf57:
    *param_1 = 0;
    param_1[2] = 0;
    return param_1;
  }
LAB_1800fcfc2:
  lVar9 = (ulonglong)(byte)param_2[1] * 0x9d + (ulonglong)bVar14;
  uVar13 = ((ulonglong)(byte)param_2[1] * 0x9d + (ulonglong)bVar14) - 0x3ae;
  if ((uVar13 < 0x4998) && (uVar4 = *(ushort *)(&DAT_18021d136 + lVar9 * 2), uVar4 != 0)) {
    bVar10 = (byte)uVar4;
    bVar14 = (byte)(uVar4 >> 8);
    if ((*(uint *)(&DAT_18022d29c + (uVar13 >> 5) * 4) >> ((uint)uVar13 & 0x1f) & 1) == 0) {
      if (uVar4 < 0x800) {
        *param_5 = (byte)(uVar4 >> 6) | 0xc0;
        param_5[1] = bVar10 & 0x3f | 0x80;
        uVar13 = 2;
        lVar9 = 1;
      }
      else {
        *param_5 = bVar14 >> 4 | 0xe0;
        param_5[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
        param_5[2] = bVar10 & 0x3f | 0x80;
        uVar13 = 3;
        lVar9 = 1;
      }
      goto LAB_1800fcae4;
    }
    *param_5 = 0xf0;
    param_5[1] = bVar14 >> 4 | 0xa0;
    param_5[2] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
    param_5[3] = bVar10 & 0x3f | 0x80;
  }
  else {
    switch(lVar9) {
    case 0x46d:
      param_5[0] = 0xc3;
      param_5[1] = 0x8a;
      param_5[2] = 0xcc;
      param_5[3] = 0x84;
      break;
    default:
      goto switchD_1800fd069_caseD_46e;
    case 0x46f:
      param_5[0] = 0xc3;
      param_5[1] = 0x8a;
      param_5[2] = 0xcc;
      param_5[3] = 0x8c;
      break;
    case 0x48c:
      param_5[0] = 0xc3;
      param_5[1] = 0xaa;
      param_5[2] = 0xcc;
      param_5[3] = 0x84;
      break;
    case 0x48e:
      param_5[0] = 0xc3;
      param_5[1] = 0xaa;
      param_5[2] = 0xcc;
      param_5[3] = 0x8c;
    }
  }
  uVar13 = 4;
  lVar9 = 1;
LAB_1800fcae4:
  if (uVar13 <= param_6) {
    local_68 = param_5 + 8;
    local_60 = param_6;
    do {
      pbVar1 = (byte *)(param_3 + lVar9);
      uVar11 = param_4 - lVar9;
      uVar12 = param_6 - uVar13;
      uVar5 = uVar11;
      if (uVar12 < uVar11) {
        uVar5 = uVar12;
      }
      pbVar2 = param_5 + uVar13;
      if ((((uint)pbVar2 ^ (uint)pbVar1) & 7) == 0) {
        uVar8 = -(uint)pbVar1 & 7;
        if (uVar5 < (ulonglong)uVar8 + 0x10) goto LAB_1800fcb45;
        if ((ulonglong)uVar8 == 0) {
          uVar7 = 0;
          goto LAB_1800fcc57;
        }
        bVar14 = *pbVar1;
        if ((char)bVar14 < '\0') {
          uVar7 = 0;
        }
        else {
          *pbVar2 = bVar14;
          uVar7 = 1;
          if (uVar8 == 1) goto LAB_1800fcc57;
          bVar14 = pbVar1[1];
          if (-1 < (char)bVar14) {
            pbVar2[1] = bVar14;
            uVar7 = 2;
            if (uVar8 == 2) goto LAB_1800fcc57;
            bVar14 = pbVar1[2];
            if (-1 < (char)bVar14) {
              pbVar2[2] = bVar14;
              uVar7 = 3;
              if (uVar8 == 3) goto LAB_1800fcc57;
              bVar14 = pbVar1[3];
              if (-1 < (char)bVar14) {
                pbVar2[3] = bVar14;
                uVar7 = 4;
                if (uVar8 == 4) goto LAB_1800fcc57;
                bVar14 = pbVar1[4];
                if (-1 < (char)bVar14) {
                  pbVar2[4] = bVar14;
                  uVar7 = 5;
                  if (uVar8 == 5) goto LAB_1800fcc57;
                  bVar14 = pbVar1[5];
                  if (-1 < (char)bVar14) {
                    pbVar2[5] = bVar14;
                    uVar7 = 6;
                    if (uVar8 == 6) {
LAB_1800fcc57:
LAB_1800fcc70:
                      uVar6 = *(ulonglong *)(pbVar1 + uVar7);
                      uVar15 = *(ulonglong *)(pbVar1 + uVar7 + 8);
                      *(ulonglong *)(local_68 + uVar7 + (uVar13 - 8)) = uVar6;
                      *(ulonglong *)(local_68 + uVar7 + uVar13) = uVar15;
                      uVar6 = uVar6 & 0x8080808080808080;
                      uVar15 = uVar15 & 0x8080808080808080;
                      if (uVar15 == 0 && uVar6 == 0) goto code_r0x0001800fcc9a;
                      if (uVar6 == 0) {
                        uVar8 = 0;
                        for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x8000000000000000) {
                          uVar8 = uVar8 + 1;
                        }
                        uVar5 = (ulonglong)(uVar8 >> 3) + 8;
                      }
                      else {
                        uVar8 = 0;
                        for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
                          uVar8 = uVar8 + 1;
                        }
                        uVar5 = (ulonglong)(uVar8 >> 3);
                      }
                      uVar7 = uVar7 + uVar5;
                      bVar14 = pbVar1[uVar7];
                      goto LAB_1800fcd0f;
                    }
                    bVar14 = pbVar1[6];
                    if (-1 < (char)bVar14) {
                      pbVar2[6] = bVar14;
                      uVar7 = 7;
                      goto LAB_1800fcc57;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
LAB_1800fcb45:
        uVar7 = 0;
LAB_1800fcb4a:
        if (uVar5 <= uVar7) {
LAB_1800fcf04:
          uVar12 = (ulonglong)(uVar12 < uVar11);
          uVar11 = uVar13 + uVar5;
          uVar7 = uVar5;
          goto LAB_1800fcf15;
        }
        while (bVar14 = pbVar1[uVar7], -1 < (char)bVar14) {
          pbVar2[uVar7] = bVar14;
          uVar7 = uVar7 + 1;
          if (uVar5 == uVar7) goto LAB_1800fcf04;
        }
      }
LAB_1800fcd0f:
      uVar11 = uVar13 + uVar7;
      if (param_6 <= uVar13 + uVar7 + 3) {
        uVar12 = 1;
LAB_1800fcf15:
        *param_1 = lVar9 + uVar7;
        param_1[1] = (ulonglong)auStack_100 | uVar12;
        param_1[2] = uVar11;
        return param_1;
      }
      uVar13 = lVar9 + uVar7;
      do {
        uVar5 = uVar13;
        uVar13 = uVar5 + 2;
        bVar14 = bVar14 + 0x7f;
        if (0x7d < bVar14) {
LAB_1800fcf79:
          *(undefined2 *)(param_1 + 1) = 0x102;
          *(undefined1 *)((longlong)param_1 + 10) = 0;
LAB_1800fd089:
          *param_1 = uVar5 + 1;
LAB_1800fd08c:
          param_1[2] = uVar11;
          return param_1;
        }
        if (param_4 <= uVar5 + 1) {
          if (param_7 != '\0') goto LAB_1800fcf79;
          *param_2 = '\x01';
          param_2[1] = bVar14;
          *(undefined1 *)(param_1 + 1) = 0;
          goto LAB_1800fd089;
        }
        cVar3 = param_3[uVar5 + 1];
        bVar10 = cVar3 - 0x40;
        if (0x3e < bVar10) {
          if (0xa1 < (byte)(cVar3 + 1U)) {
            bVar10 = cVar3 + 0x9e;
            goto LAB_1800fcd7c;
          }
switchD_1800fce1f_caseD_46e:
          *(undefined1 *)(param_1 + 1) = 2;
          if (cVar3 < '\0') {
            *(undefined2 *)((longlong)param_1 + 9) = 2;
            *param_1 = uVar13;
            goto LAB_1800fd08c;
          }
          *(undefined2 *)((longlong)param_1 + 9) = 1;
          goto LAB_1800fd089;
        }
LAB_1800fcd7c:
        lVar9 = (ulonglong)bVar14 * 0x9d + (ulonglong)bVar10;
        uVar12 = ((ulonglong)bVar14 * 0x9d + (ulonglong)bVar10) - 0x3ae;
        if ((uVar12 < 0x4998) && (uVar4 = *(ushort *)(&DAT_18021d136 + lVar9 * 2), uVar4 != 0)) {
          bVar10 = (byte)uVar4;
          bVar14 = (byte)(uVar4 >> 8);
          if ((*(uint *)(&DAT_18022d29c + (uVar12 >> 5) * 4) >> ((uint)uVar12 & 0x1f) & 1) != 0) {
            param_5[uVar11] = 0xf0;
            param_5[uVar11 + 1] = bVar14 >> 4 | 0xa0;
            param_5[uVar11 + 2] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
            param_5[uVar11 + 3] = bVar10 & 0x3f | 0x80;
            goto LAB_1800fce50;
          }
          if (uVar4 < 0x800) {
            param_5[uVar11] = (byte)(uVar4 >> 6) | 0xc0;
            param_5[uVar11 + 1] = bVar10 & 0x3f | 0x80;
            lVar9 = 2;
          }
          else {
            param_5[uVar11] = bVar14 >> 4 | 0xe0;
            param_5[uVar11 + 1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
            param_5[uVar11 + 2] = bVar10 & 0x3f | 0x80;
            lVar9 = 3;
          }
        }
        else {
          switch((int)lVar9) {
          case 0x46d:
            pbVar1 = param_5 + uVar11;
            pbVar1[0] = 0xc3;
            pbVar1[1] = 0x8a;
            pbVar1[2] = 0xcc;
            pbVar1[3] = 0x84;
            break;
          default:
            goto switchD_1800fce1f_caseD_46e;
          case 0x46f:
            pbVar1 = param_5 + uVar11;
            pbVar1[0] = 0xc3;
            pbVar1[1] = 0x8a;
            pbVar1[2] = 0xcc;
            pbVar1[3] = 0x8c;
            break;
          case 0x48c:
            pbVar1 = param_5 + uVar11;
            pbVar1[0] = 0xc3;
            pbVar1[1] = 0xaa;
            pbVar1[2] = 0xcc;
            pbVar1[3] = 0x84;
            break;
          case 0x48e:
            pbVar1 = param_5 + uVar11;
            pbVar1[0] = 0xc3;
            pbVar1[1] = 0xaa;
            pbVar1[2] = 0xcc;
            pbVar1[3] = 0x8c;
          }
LAB_1800fce50:
          lVar9 = 4;
        }
        uVar11 = uVar11 + lVar9;
        if (param_4 <= uVar13) {
          *(undefined1 *)(param_1 + 1) = 0;
          *param_1 = uVar13;
          goto LAB_1800fd08c;
        }
        if (param_6 <= uVar11 + 3) {
          *(undefined1 *)(param_1 + 1) = 1;
          *param_1 = uVar13;
          goto LAB_1800fd08c;
        }
        bVar14 = param_3[uVar13];
      } while ((char)bVar14 < '\0');
      param_5[uVar11] = bVar14;
      uVar13 = uVar11 + 1;
      lVar9 = uVar5 + 3;
      local_80 = param_1;
      local_78 = param_3;
    } while (uVar13 <= param_6);
  }
                    /* WARNING: Subroutine does not return */
  uStack_b0 = 0x1800fcf04;
  local_70 = param_2;
  FUN_180201a30(uVar13,param_6,param_6,&PTR_s_C__Users_burne__cargo_registry_s_180238cd0);
code_r0x0001800fcc9a:
  uVar7 = uVar7 + 0x10;
  if (uVar5 - 0x10 < uVar7) goto LAB_1800fcb4a;
  goto LAB_1800fcc70;
}


