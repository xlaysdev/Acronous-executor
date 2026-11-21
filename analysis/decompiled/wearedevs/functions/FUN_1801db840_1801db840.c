/* FUN_1801db840 @ 1801db840 */

undefined1 * FUN_1801db840(undefined1 *param_1,byte *param_2,ulonglong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  if (param_3 == 0) {
    uVar8 = 0;
    uVar4 = 0;
    uVar13 = 0;
    uVar2 = 0;
    uVar15 = 0;
    uVar11 = 0;
    uVar5 = 0;
    bVar10 = 0;
  }
  else {
    bVar10 = *param_2;
    if (bVar10 == 0x2f) {
      bVar10 = 0x5c;
    }
    if (param_3 == 1) {
      uVar8 = 0;
      uVar4 = 0;
      uVar13 = 0;
      uVar2 = 0;
      uVar15 = 0;
      uVar11 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = 0x5c;
      if (param_2[1] != 0x2f) {
        uVar5 = (uint)param_2[1];
      }
      if (param_3 == 2) {
        uVar8 = 0;
        uVar4 = 0;
        uVar13 = 0;
        uVar2 = 0;
        uVar15 = 0;
        uVar11 = 0;
      }
      else {
        uVar11 = (uint)param_2[2];
        if (param_2[2] == 0x2f) {
          uVar11 = 0x5c;
        }
        if (param_3 == 3) {
          uVar8 = 0;
          uVar4 = 0;
          uVar13 = 0;
          uVar2 = 0;
          uVar15 = 0;
        }
        else {
          uVar15 = 0x5c;
          if (param_2[3] != 0x2f) {
            uVar15 = (uint)param_2[3];
          }
          if (param_3 == 4) {
            uVar8 = 0;
            uVar4 = 0;
            uVar13 = 0;
            uVar2 = 0;
          }
          else {
            uVar2 = (uint)param_2[4];
            if (param_2[4] == 0x2f) {
              uVar2 = 0x5c;
            }
            if (param_3 == 5) {
              uVar8 = 0;
              uVar4 = 0;
              uVar13 = 0;
            }
            else {
              uVar13 = 0x5c;
              if (param_2[5] != 0x2f) {
                uVar13 = (uint)param_2[5];
              }
              if (param_3 == 6) {
                uVar8 = 0;
                uVar4 = 0;
              }
              else {
                uVar4 = (uint)param_2[6];
                if (param_2[6] == 0x2f) {
                  uVar4 = 0x5c;
                }
                if (param_3 == 7) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = 0x5c;
                  if (param_2[7] != 0x2f) {
                    uVar8 = (ulonglong)param_2[7];
                  }
                  uVar8 = uVar8 << 0x38;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = 8;
  if (param_3 < 8) {
    uVar3 = param_3;
  }
  if ((param_3 < 2) || (((uint)bVar10 | uVar5 << 8) != 0x5c5c)) {
    if ((1 < param_3) &&
       ((param_2[1] == 0x3a && (bVar10 = *param_2, (byte)((bVar10 & 0xdf) + 0xbf) < 0x1a)))) {
      *param_1 = 5;
      param_1[1] = (0x60 < bVar10) << 5 ^ bVar10;
      return param_1;
    }
    goto LAB_1801dbb66;
  }
  if (((uint)uVar3 & 0xe) == 2) {
LAB_1801dbad8:
    if (param_3 == 2) goto LAB_1801dbb66;
  }
  else {
    uVar11 = uVar11 | uVar15 << 8;
    if (uVar11 == 0x5c2e) {
      if (param_3 < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(4,param_3,param_3,&PTR_s_library_std_src_sys_path_windows_18028fb20);
      }
      lVar14 = 0;
      lVar7 = param_3 - 4;
      if (lVar7 != 0) {
        do {
          bVar10 = (param_2 + 4)[lVar14];
          if ((bVar10 == 0x2f) || (bVar10 == 0x5c)) goto LAB_1801dbbac;
          lVar14 = lVar14 + 1;
        } while (lVar7 != lVar14);
        lVar14 = lVar7;
      }
LAB_1801dbbac:
      *param_1 = 3;
      *(byte **)(param_1 + 8) = param_2 + 4;
      *(longlong *)(param_1 + 0x10) = lVar14;
      return param_1;
    }
    if (uVar11 != 0x5c3f) goto LAB_1801dbad8;
    if (param_3 < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,4,param_3,&PTR_s_library_std_src_sys_path_windows_18028fb08);
    }
    if ((((*param_2 != 0x2f) && (param_2[1] != 0x2f)) && (param_2[2] != 0x2f)) &&
       (param_2[3] != 0x2f)) {
      if ((((uint)uVar3 & 0xc) != 4) &&
         (((ulonglong)uVar2 << 0x20 | (ulonglong)uVar13 << 0x28 | (ulonglong)uVar4 << 0x30 | uVar8)
          == 0x5c434e5500000000)) {
        if (param_3 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(8,param_3,param_3,&PTR_s_library_std_src_sys_path_windows_18028fb20);
        }
        pbVar9 = (byte *)0x1;
        lVar14 = param_3 - 8;
        if (lVar14 == 0) {
          lVar14 = 0;
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          lVar6 = 0;
          do {
            if (param_2[lVar6 + 8] == 0x5c) {
              pbVar9 = param_2 + lVar6 + 9;
              lVar7 = (param_3 - 9) - lVar6;
              lVar14 = lVar6;
              if (lVar7 != 0) {
                lVar12 = 0;
                goto LAB_1801dbc7e;
              }
              lVar12 = 0;
              goto LAB_1801dbc70;
            }
            lVar12 = lVar6 - param_3;
            lVar6 = lVar6 + 1;
          } while (lVar12 != -9);
        }
        goto LAB_1801dbc9d;
      }
      pbVar9 = param_2 + 4;
      uVar8 = param_3 - 4;
      if (uVar8 < 3) {
        if (param_3 == 4) goto LAB_1801dbc4c;
        if (param_3 == 6) goto LAB_1801dbbfb;
      }
      else if ((param_2[6] == 0x2f) || (param_2[6] == 0x5c)) {
LAB_1801dbbfb:
        if ((param_2[5] == 0x3a) && (bVar10 = *pbVar9, (byte)((bVar10 & 0xdf) + 0xbf) < 0x1a)) {
          *param_1 = 2;
          param_1[1] = (0x60 < bVar10) << 5 ^ bVar10;
          return param_1;
        }
      }
      uVar3 = 0;
      do {
        if (pbVar9[uVar3] == 0x5c) {
          uVar8 = uVar3;
          break;
        }
        uVar3 = uVar3 + 1;
      } while (param_3 - 4 != uVar3);
LAB_1801dbc4c:
      *param_1 = 0;
      *(byte **)(param_1 + 8) = pbVar9;
      *(ulonglong *)(param_1 + 0x10) = uVar8;
      return param_1;
    }
  }
  lVar14 = 0;
  do {
    if ((param_2[lVar14 + 2] == 0x2f) || (param_2[lVar14 + 2] == 0x5c)) {
      lVar7 = (param_3 - 3) - lVar14;
      if (lVar7 != 0) {
        lVar6 = 0;
        goto LAB_1801dbb30;
      }
      break;
    }
    lVar7 = lVar14 - param_3;
    lVar14 = lVar14 + 1;
  } while (lVar7 != -3);
LAB_1801dbb66:
  *param_1 = 6;
  return param_1;
LAB_1801dbc70:
  lVar7 = lVar12;
  goto LAB_1801dbc9d;
  while (lVar12 = (lVar14 - param_3) + lVar6, lVar6 = lVar6 + 1, lVar12 != -4) {
LAB_1801dbb30:
    if ((param_2[lVar14 + 3 + lVar6] == 0x2f) || (param_2[lVar14 + 3 + lVar6] == 0x5c))
    goto LAB_1801dbb54;
  }
  lVar6 = lVar7;
LAB_1801dbb54:
  if (lVar14 != 0 && lVar6 != 0) {
    *param_1 = 4;
    *(byte **)(param_1 + 8) = param_2 + 2;
    *(longlong *)(param_1 + 0x10) = lVar14;
    *(byte **)(param_1 + 0x18) = param_2 + lVar14 + 3;
    *(longlong *)(param_1 + 0x20) = lVar6;
    return param_1;
  }
  goto LAB_1801dbb66;
  while (lVar1 = (lVar6 - param_3) + lVar12, lVar12 = lVar12 + 1, lVar1 != -10) {
LAB_1801dbc7e:
    if (param_2[lVar6 + 9 + lVar12] == 0x5c) goto LAB_1801dbc70;
  }
LAB_1801dbc9d:
  *param_1 = 1;
  *(byte **)(param_1 + 8) = param_2 + 8;
  *(longlong *)(param_1 + 0x10) = lVar14;
  *(byte **)(param_1 + 0x18) = pbVar9;
  *(longlong *)(param_1 + 0x20) = lVar7;
  return param_1;
}


