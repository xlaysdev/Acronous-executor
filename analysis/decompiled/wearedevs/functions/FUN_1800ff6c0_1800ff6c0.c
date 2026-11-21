/* FUN_1800ff6c0 @ 1800ff6c0 */

ulonglong *
FUN_1800ff6c0(ulonglong *param_1,byte *param_2,longlong param_3,ulonglong param_4,byte *param_5,
             ulonglong param_6,char param_7)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ushort uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte *pbVar21;
  short sVar22;
  longlong lVar23;
  
  if (param_2[5] == 0) {
    uVar9 = (uint)*(ushort *)(param_2 + 2);
    uVar6 = 0;
  }
  else {
    if (param_6 < 3) {
LAB_1800ff6ef:
      *(undefined1 *)(param_1 + 1) = 1;
      uVar20 = 0;
      uVar6 = 0;
LAB_1800fffee:
      *param_1 = uVar20;
      param_1[2] = uVar6;
      return param_1;
    }
    uVar4 = *(ushort *)(param_2 + 2);
    bVar5 = (byte)uVar4;
    if (uVar4 < 0x80) {
      *param_5 = bVar5;
      uVar6 = 1;
    }
    else if (uVar4 < 0x800) {
      *param_5 = (byte)(uVar4 >> 6) | 0xc0;
      param_5[1] = bVar5 & 0x3f | 0x80;
      uVar6 = 2;
    }
    else {
      *param_5 = (byte)(uVar4 >> 0xc) | 0xe0;
      param_5[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
      param_5[2] = bVar5 & 0x3f | 0x80;
      uVar6 = 3;
    }
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar9 = 0;
  }
  bVar5 = *param_2;
  bVar2 = param_2[4];
  uVar20 = 0;
  bVar7 = param_2[1];
  do {
LAB_1800ff7d3:
    sVar22 = (short)uVar9;
    if (((bVar5 & 1) != 0) || (sVar22 != 0)) {
joined_r0x0001800ffd83:
      if (uVar20 < param_4) goto LAB_1800ffd89;
LAB_1800fff5e:
      if ((param_7 == '\0') || (!(sVar22 != 0 || (bVar5 & 1) != 0))) {
        *(undefined1 *)(param_1 + 1) = 0;
        goto LAB_1800fffee;
      }
      if (uVar6 + 2 < param_6) {
        if (sVar22 != 0) {
          param_2[2] = 0;
          param_2[3] = 0;
          if ((bVar5 & 1) != 0) {
            *param_2 = 0;
            *(undefined2 *)(param_1 + 1) = 0x302;
            goto LAB_1800fffd1;
          }
          goto LAB_1800fffc6;
        }
        *param_2 = 0;
        *(undefined2 *)(param_1 + 1) = 0x102;
        goto LAB_1800fffd1;
      }
      goto LAB_1800ff6ef;
    }
    if (bVar2 != 0) {
      if (param_4 < uVar20) goto LAB_180100023;
      uVar13 = param_6 - uVar6;
      if (param_6 < uVar6) goto LAB_18010003b;
      if (param_4 - uVar20 < 2) goto LAB_1800ff85e;
      lVar1 = param_3 + uVar20;
      uVar18 = param_4 - uVar20 >> 1;
      uVar8 = uVar18 - 1;
      if ((*(ushort *)(lVar1 + -2 + uVar18 * 2) & 0xfc) != 0xd8) {
        uVar8 = uVar18;
      }
      if (uVar13 < 4) {
        uVar18 = 0;
        uVar19 = 0;
      }
      else {
        uVar18 = uVar8;
        if (uVar13 < uVar8) {
          uVar18 = uVar13;
        }
        if (uVar8 == 0) {
          lVar23 = 0;
          uVar19 = 0;
        }
        else {
          pbVar21 = param_5 + uVar6;
          uVar19 = 0;
          lVar23 = 0;
          pbVar12 = pbVar21;
          lVar17 = lVar1;
          do {
            lVar16 = 0;
            lVar10 = 0;
            while( true ) {
              uVar4 = *(ushort *)(lVar17 + lVar10 * 2);
              uVar14 = uVar4 << 8 | uVar4 >> 8;
              if (0x7f < uVar14) break;
              pbVar12[lVar10] = (byte)(uVar4 >> 8);
              lVar10 = lVar10 + 1;
              lVar16 = lVar16 + -1;
              if (uVar18 + lVar16 == 0) goto LAB_1800ffd44;
            }
            uVar18 = lVar23 - lVar16;
            if (uVar13 - 3 <= uVar18) {
              uVar18 = lVar23 - lVar16;
              uVar19 = uVar19 - lVar16;
              goto LAB_1800ffd72;
            }
            uVar19 = (uVar19 - lVar16) + 1;
            do {
              uVar15 = (uint)uVar14;
              if ((ushort)(uVar14 + 0x2800) < 0x800) {
                lVar23 = uVar19 * 2;
                if (((0x3ff < (ushort)(uVar14 + 0x2800)) || (uVar8 <= uVar19)) ||
                   (uVar4 = *(ushort *)(lVar1 + lVar23) << 8,
                   uVar14 = uVar4 | *(ushort *)(lVar1 + lVar23) >> 8, (uVar4 & 0xfc00) != 0xdc00))
                goto LAB_1800fffc0;
                if (uVar13 <= uVar18) goto LAB_180100068;
                uVar15 = (uint)uVar14 + uVar15 * 0x400 + 0xfca02400;
                pbVar21[uVar18] = (byte)(uVar15 >> 0x12) | 0xf0;
                uVar11 = uVar18 + 1;
                if (uVar13 <= uVar11) goto LAB_18010007a;
                pbVar21[uVar18 + 1] = (byte)(uVar15 >> 0xc) & 0x3f | 0x80;
                uVar11 = uVar18 + 2;
                if (uVar13 <= uVar11) goto LAB_18010008c;
                pbVar21[uVar18 + 2] = (byte)(uVar15 >> 6) & 0x3f | 0x80;
                uVar11 = uVar18 + 3;
                if (uVar13 <= uVar11) goto LAB_18010009e;
                uVar19 = uVar19 + 1;
                lVar23 = 4;
              }
              else if (uVar15 < 0x800) {
                if (uVar13 <= uVar18) goto LAB_1801000b0;
                pbVar21[uVar18] = (byte)(uVar14 >> 6) | 0xc0;
                uVar11 = uVar18 + 1;
                lVar23 = 2;
                if (uVar13 <= uVar11) goto LAB_1801000c2;
              }
              else {
                if (uVar13 <= uVar18) goto LAB_1801000d4;
                pbVar21[uVar18] = (byte)(uVar14 >> 0xc) | 0xe0;
                uVar11 = uVar18 + 1;
                if (uVar13 <= uVar11) goto LAB_1801000e6;
                pbVar21[uVar18 + 1] = (byte)(uVar14 >> 6) & 0x3f | 0x80;
                uVar11 = uVar18 + 2;
                lVar23 = 3;
                if (uVar13 <= uVar11) goto LAB_1801000f8;
              }
              pbVar21[uVar11] = (byte)uVar14 & 0x3f | 0x80;
              uVar18 = uVar18 + lVar23;
              if ((uVar13 - 3 <= uVar18) || (uVar19 == uVar8)) goto LAB_1800ffd72;
              if (uVar8 <= uVar19) goto LAB_180100050;
              uVar4 = *(ushort *)(lVar1 + uVar19 * 2);
              uVar14 = uVar4 << 8 | uVar4 >> 8;
              uVar19 = uVar19 + 1;
            } while (0x7f < uVar14);
            if (uVar13 <= uVar18) goto LAB_18010010a;
            pbVar21[uVar18] = (byte)(uVar4 >> 8);
            lVar23 = uVar18 + 1;
            lVar17 = lVar1 + uVar19 * 2;
            pbVar12 = pbVar21 + uVar18 + 1;
            uVar18 = uVar13 - lVar23;
            if (uVar8 - uVar19 <= uVar13 - lVar23) {
              uVar18 = uVar8 - uVar19;
            }
          } while (uVar18 != 0);
        }
LAB_1800ffd44:
        uVar19 = uVar19 + uVar18;
        uVar18 = lVar23 + uVar18;
      }
LAB_1800ffd72:
      uVar20 = uVar20 + uVar19 * 2;
      uVar6 = uVar6 + uVar18;
      goto joined_r0x0001800ffd83;
    }
    if (param_4 < uVar20) {
LAB_180100023:
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(uVar20,param_4,param_4,&PTR_s_C__Users_burne__cargo_registry_s_180239130);
    }
    uVar13 = param_6 - uVar6;
    if (param_6 < uVar6) {
LAB_18010003b:
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(uVar6,param_6,param_6,&PTR_s_C__Users_burne__cargo_registry_s_180239118);
    }
    if (1 < param_4 - uVar20) {
      lVar1 = param_3 + uVar20;
      uVar18 = param_4 - uVar20 >> 1;
      uVar8 = uVar18 - 1;
      if ((*(ushort *)(lVar1 + -2 + uVar18 * 2) & 0xfc00) != 0xd800) {
        uVar8 = uVar18;
      }
      if (uVar13 < 4) {
        uVar18 = 0;
        uVar19 = 0;
      }
      else {
        uVar18 = uVar8;
        if (uVar13 < uVar8) {
          uVar18 = uVar13;
        }
        if (uVar8 == 0) {
          lVar23 = 0;
          uVar19 = 0;
        }
        else {
          pbVar21 = param_5 + uVar6;
          uVar19 = 0;
          lVar23 = 0;
          pbVar12 = pbVar21;
          lVar17 = lVar1;
          do {
            lVar10 = 0;
            lVar16 = 0;
            while (uVar4 = *(ushort *)(lVar17 + lVar16 * 2), uVar4 < 0x80) {
              pbVar12[lVar16] = (byte)uVar4;
              lVar16 = lVar16 + 1;
              lVar10 = lVar10 + -1;
              if (uVar18 + lVar10 == 0) goto LAB_1800ffed5;
            }
            uVar18 = lVar23 - lVar10;
            if (uVar13 - 3 <= uVar18) {
              uVar18 = lVar23 - lVar10;
              uVar19 = uVar19 - lVar10;
              goto LAB_1800ffefd;
            }
            uVar19 = (uVar19 - lVar10) + 1;
            do {
              if ((ushort)(uVar4 + 0x2800) < 0x800) {
                lVar23 = uVar19 * 2;
                if (((0x3ff < (ushort)(uVar4 + 0x2800)) || (uVar8 <= uVar19)) ||
                   (uVar14 = *(ushort *)(lVar1 + lVar23), (uVar14 & 0xfc00) != 0xdc00))
                goto LAB_1800fffc0;
                if (uVar13 <= uVar18) {
LAB_180100068:
                    /* WARNING: Subroutine does not return */
                  FUN_180201d02(uVar18,uVar13,&PTR_s_C__Users_burne__cargo_registry_s_180239148);
                }
                uVar15 = (uint)uVar14 + (uint)uVar4 * 0x400 + 0xfca02400;
                pbVar21[uVar18] = (byte)(uVar15 >> 0x12) | 0xf0;
                uVar11 = uVar18 + 1;
                if (uVar13 <= uVar11) {
LAB_18010007a:
                    /* WARNING: Subroutine does not return */
                  FUN_180201d02(uVar11,uVar13,&PTR_s_C__Users_burne__cargo_registry_s_180239160);
                }
                pbVar21[uVar18 + 1] = (byte)(uVar15 >> 0xc) & 0x3f | 0x80;
                uVar11 = uVar18 + 2;
                if (uVar13 <= uVar11) {
LAB_18010008c:
                    /* WARNING: Subroutine does not return */
                  FUN_180201d02(uVar11,uVar13,&PTR_s_C__Users_burne__cargo_registry_s_180239178);
                }
                pbVar21[uVar18 + 2] = (byte)(uVar15 >> 6) & 0x3f | 0x80;
                uVar11 = uVar18 + 3;
                if (uVar13 <= uVar11) {
LAB_18010009e:
                    /* WARNING: Subroutine does not return */
                  FUN_180201d02(uVar11,uVar13,&PTR_s_C__Users_burne__cargo_registry_s_180239190);
                }
                uVar19 = uVar19 + 1;
                lVar23 = 4;
              }
              else {
                if (uVar4 < 0x800) {
                  if (uVar13 <= uVar18) {
LAB_1801000b0:
                    /* WARNING: Subroutine does not return */
                    FUN_180201d02(uVar18,uVar13,&PTR_s_C__Users_burne__cargo_registry_s_1802391f0);
                  }
                  pbVar21[uVar18] = (byte)(uVar4 >> 6) | 0xc0;
                  uVar11 = uVar18 + 1;
                  lVar23 = 2;
                  if (uVar13 <= uVar11) {
LAB_1801000c2:
                    /* WARNING: Subroutine does not return */
                    FUN_180201d02(uVar11,uVar13,&PTR_s_C__Users_burne__cargo_registry_s_180239208);
                  }
                }
                else {
                  if (uVar13 <= uVar18) {
LAB_1801000d4:
                    /* WARNING: Subroutine does not return */
                    FUN_180201d02(uVar18,uVar13,&PTR_s_C__Users_burne__cargo_registry_s_1802391a8);
                  }
                  pbVar21[uVar18] = (byte)(uVar4 >> 0xc) | 0xe0;
                  uVar11 = uVar18 + 1;
                  if (uVar13 <= uVar11) {
LAB_1801000e6:
                    /* WARNING: Subroutine does not return */
                    FUN_180201d02(uVar11,uVar13,&PTR_s_C__Users_burne__cargo_registry_s_1802391c0);
                  }
                  pbVar21[uVar18 + 1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
                  uVar11 = uVar18 + 2;
                  lVar23 = 3;
                  if (uVar13 <= uVar11) {
LAB_1801000f8:
                    /* WARNING: Subroutine does not return */
                    FUN_180201d02(uVar11,uVar13,&PTR_s_C__Users_burne__cargo_registry_s_1802391d8);
                  }
                }
                uVar14 = uVar4;
              }
              pbVar21[uVar11] = (byte)uVar14 & 0x3f | 0x80;
              uVar18 = uVar18 + lVar23;
              if ((uVar13 - 3 <= uVar18) || (uVar19 == uVar8)) goto LAB_1800ffefd;
              if (uVar8 <= uVar19) {
LAB_180100050:
                    /* WARNING: Subroutine does not return */
                FUN_180201ec0("assertion failed: i < self.len",0x1e,
                              &PTR_s_C__Users_burne__cargo_registry_s_180239100);
              }
              uVar4 = *(ushort *)(lVar1 + uVar19 * 2);
              uVar19 = uVar19 + 1;
            } while (0x7f < uVar4);
            if (uVar13 <= uVar18) {
LAB_18010010a:
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(uVar18,uVar13,&PTR_s_C__Users_burne__cargo_registry_s_180239220);
            }
            pbVar21[uVar18] = (byte)uVar4;
            lVar23 = uVar18 + 1;
            lVar17 = lVar1 + uVar19 * 2;
            pbVar12 = pbVar21 + uVar18 + 1;
            uVar18 = uVar13 - lVar23;
            if (uVar8 - uVar19 <= uVar13 - lVar23) {
              uVar18 = uVar8 - uVar19;
            }
          } while (uVar18 != 0);
        }
LAB_1800ffed5:
        uVar19 = uVar19 + uVar18;
        uVar18 = lVar23 + uVar18;
      }
LAB_1800ffefd:
      uVar20 = uVar20 + uVar19 * 2;
      uVar6 = uVar6 + uVar18;
      goto joined_r0x0001800ffd83;
    }
LAB_1800ff85e:
    if (param_4 <= uVar20) goto LAB_1800fff5e;
LAB_1800ffd89:
    if (param_6 <= uVar6 + 3) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_1800fffee;
    }
    bVar3 = *(byte *)(param_3 + uVar20);
    uVar20 = uVar20 + 1;
    if ((bVar5 & 1) != 0) {
      uVar4 = CONCAT11(bVar7,bVar3) << 8 | (ushort)bVar7;
      if (bVar2 != 0) {
        uVar4 = CONCAT11(bVar7,bVar3);
      }
      uVar15 = (uint)uVar4;
      *param_2 = 0;
      if ((uVar15 & 0xfc00) == 0xd800) goto LAB_1800ff7c0;
      bVar5 = (byte)uVar4;
      if ((uVar15 & 0xfc00) == 0xdc00) {
        if (sVar22 == 0) goto LAB_1800fffc6;
        uVar9 = uVar9 * 0x400 + uVar15 + 0xfca02400;
        param_5[uVar6] = (byte)(uVar9 >> 0x12) | 0xf0;
        param_5[uVar6 + 1] = (byte)(uVar9 >> 0xc) & 0x3f | 0x80;
        param_5[uVar6 + 2] = (byte)(uVar9 >> 6) & 0x3f | 0x80;
        param_5[uVar6 + 3] = bVar5 & 0x3f | 0x80;
        uVar6 = uVar6 + 4;
        param_2[2] = 0;
        param_2[3] = 0;
      }
      else {
        if (sVar22 != 0) {
          *(ushort *)(param_2 + 2) = uVar4;
          param_2[5] = 1;
          goto LAB_1800fffdf;
        }
        if (uVar15 < 0x80) {
          param_5[uVar6] = bVar5;
          uVar6 = uVar6 + 1;
          goto LAB_1800ffe90;
        }
        if (0x7ff < uVar15) {
          param_5[uVar6] = (byte)(uVar4 >> 0xc) | 0xe0;
          param_5[uVar6 + 1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
          param_5[uVar6 + 2] = bVar5 & 0x3f | 0x80;
          bVar5 = 0;
          uVar6 = uVar6 + 3;
          uVar9 = 0;
          goto LAB_1800ff7d3;
        }
        param_5[uVar6] = (byte)(uVar4 >> 6) | 0xc0;
        param_5[uVar6 + 1] = bVar5 & 0x3f | 0x80;
        uVar6 = uVar6 + 2;
      }
LAB_1800ffe90:
      bVar5 = 0;
      uVar9 = 0;
      goto LAB_1800ff7d3;
    }
    *param_2 = 1;
    param_2[1] = bVar3;
    bVar5 = 1;
    bVar7 = bVar3;
  } while( true );
LAB_1800fffc0:
  uVar20 = uVar20 + lVar23;
  uVar6 = uVar6 + uVar18;
LAB_1800fffc6:
  *(undefined2 *)(param_1 + 1) = 0x202;
LAB_1800fffd1:
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  goto LAB_1800fffee;
LAB_1800ff7c0:
  bVar5 = 0;
  *(ushort *)(param_2 + 2) = uVar4;
  uVar9 = uVar15;
  if (sVar22 != 0) {
LAB_1800fffdf:
    *(undefined2 *)(param_1 + 1) = 0x202;
    *(undefined1 *)((longlong)param_1 + 10) = 2;
    goto LAB_1800fffee;
  }
  goto LAB_1800ff7d3;
}


