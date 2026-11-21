/* FUN_1801eb443 @ 1801eb443 */

undefined4 FUN_1801eb443(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  byte *pbVar10;
  ulonglong uVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  uint uVar15;
  ulonglong unaff_RSI;
  uint uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulonglong uVar21;
  byte *pbVar22;
  longlong lVar23;
  byte bVar24;
  byte *pbVar25;
  byte *pbVar26;
  bool bVar27;
  undefined **ppuVar28;
  uint local_6c;
  byte *local_68;
  undefined1 local_59;
  byte *local_58;
  longlong local_50;
  undefined4 local_44;
  
  pbVar2 = (byte *)param_1[2];
  pbVar14 = (byte *)param_1[1];
  pbVar19 = (byte *)0x0;
  pbVar26 = (byte *)*param_1;
  local_50 = param_2;
LAB_1801eb46d:
  pbVar1 = pbVar19 + 1;
  local_44 = (undefined4)CONCAT71((int7)(unaff_RSI >> 8),pbVar19 < pbVar2);
  if (pbVar19 >= pbVar2) {
    return local_44;
  }
  local_68 = pbVar1;
  if (pbVar14 == (byte *)0x0) {
LAB_1801ebe4e:
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s__rust_deps_rustc_demangle_0_1_26_1802928f8);
  }
  bVar24 = *pbVar26;
  lVar23 = 0;
  pbVar25 = (byte *)0x0;
  pbVar22 = pbVar14;
  while( true ) {
    if ((char)bVar24 < '\0') {
      bVar7 = bVar24 & 0x1f;
      if (bVar24 < 0xe0) {
        uVar16 = (uint)bVar7 << 6 | (pbVar26 + 1)[(longlong)pbVar25] & 0x3f;
      }
      else {
        uVar16 = (pbVar26 + 2)[(longlong)pbVar25] & 0x3f |
                 ((pbVar26 + 1)[(longlong)pbVar25] & 0x3f) << 6;
        if (bVar24 < 0xf0) {
          uVar16 = uVar16 | (uint)bVar7 << 0xc;
        }
        else {
          uVar16 = (pbVar26 + 3)[(longlong)pbVar25] & 0x3f | uVar16 << 6 | (bVar7 & 7) << 0x12;
          if (uVar16 == 0x110000) goto LAB_1801ebe4e;
        }
      }
    }
    else {
      uVar16 = (uint)bVar24;
    }
    if (9 < uVar16 - 0x30) break;
    if (pbVar14 + -1 == pbVar25) goto LAB_1801ebe4e;
    bVar24 = (pbVar26 + 1)[(longlong)pbVar25];
    if ((char)bVar24 < -0x40) {
      pbVar14 = pbVar14 + -(longlong)pbVar25;
      pbVar26 = pbVar26 + (longlong)pbVar25;
      ppuVar28 = &PTR_s__rust_deps_rustc_demangle_0_1_26_180292a70;
      uVar18 = 1;
      pbVar19 = pbVar14;
      goto LAB_1801ebe3f;
    }
    pbVar22 = pbVar22 + -1;
    pbVar25 = pbVar25 + 1;
    lVar23 = lVar23 + -1;
  }
  if (pbVar25 == (byte *)0x0) {
    local_59 = 0;
    goto LAB_1801ebe7c;
  }
  if ((char)pbVar26[(longlong)pbVar25] < -0x40) {
    ppuVar28 = &PTR_s__rust_deps_rustc_demangle_0_1_26_180292910;
    pbVar19 = (byte *)0x0;
LAB_1801ebf89:
                    /* WARNING: Subroutine does not return */
    FUN_1802018d0(pbVar26,pbVar14,pbVar19,pbVar25,ppuVar28);
  }
  bVar7 = *pbVar26;
  if ((pbVar25 == (byte *)0x1) && ((local_59 = 1, bVar7 == 0x2b || (bVar7 == 0x2d))))
  goto LAB_1801ebe7c;
  pbVar20 = pbVar14 + -(longlong)pbVar25;
  local_58 = pbVar26 + (longlong)pbVar25;
  pbVar10 = (byte *)(ulonglong)(bVar7 == 0x2b);
  unaff_RSI = -(longlong)pbVar10;
  if ((ulonglong)((longlong)pbVar25 - (longlong)pbVar10) < 0x11) {
    if (pbVar25 != pbVar10) {
      lVar9 = 0;
      pbVar6 = (byte *)0x0;
      do {
        uVar16 = (pbVar10 + (longlong)pbVar26)[lVar9] - 0x30;
        if (9 < uVar16) goto LAB_1801ebe7a;
        pbVar6 = (byte *)((ulonglong)uVar16 + (longlong)pbVar6 * 10);
        lVar9 = lVar9 + 1;
      } while (unaff_RSI + (longlong)pbVar25 != lVar9);
      goto LAB_1801eb641;
    }
    pbVar17 = (byte *)0x0;
    pbVar22 = local_58;
  }
  else {
    lVar9 = 0;
    pbVar6 = (byte *)0x0;
    while (unaff_RSI + (longlong)pbVar25 != lVar9) {
      uVar16 = (pbVar10 + (longlong)pbVar26)[lVar9] - 0x30;
      if (9 < uVar16) goto LAB_1801ebe7a;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = pbVar6;
      uVar11 = SUB168(auVar3 * ZEXT816(10),0);
      pbVar6 = (byte *)(uVar16 + uVar11);
      local_59 = 2;
      if ((SUB168(auVar3 * ZEXT816(10),8) != 0) ||
         (lVar9 = lVar9 + 1, CARRY8((ulonglong)uVar16,uVar11))) goto LAB_1801ebe7c;
    }
LAB_1801eb641:
    unaff_RSI = unaff_RSI + (longlong)pbVar25;
    pbVar10 = pbVar14 + -(longlong)pbVar6;
    if (pbVar6 == (byte *)0x0) {
      pbVar20 = pbVar10 + -(longlong)pbVar25;
      pbVar17 = (byte *)0x0;
      pbVar22 = pbVar26 + (longlong)pbVar25;
    }
    else {
      if (pbVar6 < pbVar20) {
        if ((char)pbVar25[(longlong)(pbVar26 + (longlong)pbVar6)] < -0x40) {
LAB_1801ebec5:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(pbVar26 + (longlong)pbVar25,(longlong)pbVar14 - (longlong)pbVar25,pbVar6,
                        (longlong)pbVar14 - (longlong)pbVar25,
                        &PTR_s__rust_deps_rustc_demangle_0_1_26_180292940);
        }
      }
      else if (pbVar10 != pbVar25) goto LAB_1801ebec5;
      if (pbVar6 < pbVar20) {
        if ((char)(pbVar26 + (longlong)pbVar6)[(longlong)pbVar25] < -0x40) {
LAB_1801ebee5:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(pbVar26 + (longlong)pbVar25,(longlong)pbVar14 - (longlong)pbVar25,0,pbVar6,
                        &PTR_s__rust_deps_rustc_demangle_0_1_26_180292958);
        }
        pbVar10 = pbVar10 + -(longlong)pbVar25;
        pbVar17 = pbVar6;
      }
      else {
        if (pbVar10 != pbVar25) goto LAB_1801ebee5;
        pbVar10 = (byte *)0x0;
        pbVar17 = pbVar20;
      }
      if (((pbVar1 == pbVar2) && ((*(uint *)(local_50 + 0x10) & 0x800000) != 0)) && (bVar24 == 0x68)
         ) {
        if ((pbVar17 != (byte *)0x1) && ((char)(pbVar26 + 1)[(longlong)pbVar25] < -0x40)) {
          pbVar20 = pbVar26 + (longlong)pbVar25;
          ppuVar28 = &PTR_s__rust_deps_rustc_demangle_0_1_26_180292520;
LAB_1801ebf69:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(pbVar20,pbVar17,1,pbVar17,ppuVar28);
        }
        pbVar14 = pbVar26 + (longlong)pbVar25 + 1;
        if (pbVar6 < pbVar22) {
          pbVar22 = pbVar6;
        }
        do {
          if (pbVar22 + (longlong)pbVar26 + -lVar23 == pbVar14) {
            return 0;
          }
          bVar24 = *pbVar14;
          uVar16 = (uint)bVar24;
          if ((char)bVar24 < '\0') {
            uVar8 = bVar24 & 0x1f;
            pbVar20 = pbVar14 + 1;
            unaff_RSI = 0;
            if (bVar24 < 0xe0) {
              pbVar14 = pbVar14 + 2;
              uVar16 = uVar8 << 6 | *pbVar20 & 0x3f;
            }
            else {
              uVar16 = (*pbVar20 & 0x3f) << 6;
              unaff_RSI = (ulonglong)uVar16;
              uVar16 = pbVar14[2] & 0x3f | uVar16;
              if (bVar24 < 0xf0) {
                pbVar14 = pbVar14 + 3;
                uVar16 = uVar16 | uVar8 << 0xc;
              }
              else {
                uVar16 = pbVar14[3] & 0x3f | uVar16 << 6 | (bVar24 & 7) << 0x12;
                if (uVar16 == 0x110000) {
                  return 0;
                }
                pbVar14 = pbVar14 + 4;
              }
            }
          }
          else {
            pbVar14 = pbVar14 + 1;
          }
          uVar8 = uVar16 - 0x30;
          if (0x39 < uVar16) {
            uVar8 = (uVar16 - 0x41 & 0xffffffde) + 10;
          }
        } while (uVar8 < 0x10);
      }
      pbVar20 = pbVar10;
      pbVar22 = pbVar26 + (longlong)pbVar6 + (longlong)pbVar25;
    }
  }
  if ((pbVar19 != (byte *)0x0) && (cVar5 = FUN_1801f0c50(local_50,"::",2), cVar5 != '\0')) {
    return local_44;
  }
  local_68 = pbVar20;
  if ((pbVar17 < (byte *)0x2) || (*(short *)local_58 != 0x245f)) {
    pbVar14 = pbVar17;
    pbVar26 = local_58;
  }
  else {
    if ((char)(pbVar26 + 1)[(longlong)pbVar25] < -0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_1802018d0(pbVar26 + (longlong)pbVar25,pbVar17,1,pbVar17,
                    &PTR_s__rust_deps_rustc_demangle_0_1_26_180292970);
    }
    pbVar26 = pbVar26 + (longlong)pbVar25 + 1;
    pbVar14 = pbVar17 + -1;
  }
LAB_1801eb7ef:
  for (; pbVar25 = pbVar14, pbVar14 == (byte *)0x0; pbVar14 = pbVar14 + -(longlong)pbVar25) {
LAB_1801eb836:
    pbVar20 = pbVar26;
    pbVar10 = (byte *)0x0;
    do {
      pbVar19 = pbVar10;
      if (pbVar20 == pbVar26 + (longlong)pbVar14) goto LAB_1801ebdd0;
      bVar24 = *pbVar20;
      uVar16 = (uint)bVar24;
      if ((char)bVar24 < '\0') {
        uVar8 = bVar24 & 0x1f;
        if (bVar24 < 0xe0) {
          pbVar10 = pbVar20 + 2;
          uVar16 = uVar8 << 6 | pbVar20[1] & 0x3f;
        }
        else {
          uVar16 = pbVar20[2] & 0x3f | (pbVar20[1] & 0x3f) << 6;
          if (bVar24 < 0xf0) {
            pbVar10 = pbVar20 + 3;
            uVar16 = uVar16 | uVar8 << 0xc;
          }
          else {
            pbVar10 = pbVar20 + 4;
            uVar16 = pbVar20[3] & 0x3f | uVar16 << 6 | (bVar24 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar10 = pbVar20 + 1;
      }
    } while ((uVar16 != 0x24) &&
            (lVar23 = (longlong)pbVar19 - (longlong)pbVar20, pbVar20 = pbVar10,
            pbVar10 = pbVar10 + lVar23, uVar16 != 0x2e));
    if (pbVar19 == (byte *)0x0) {
      uVar18 = FUN_1801f0c50(local_50,pbVar26,0);
      if ((char)uVar18 != '\0') goto LAB_1801ebe47;
      pbVar25 = (byte *)0x0;
      goto LAB_1801eba42;
    }
    if (pbVar19 < pbVar14) {
      if ((char)pbVar26[(longlong)pbVar19] < -0x40) {
LAB_1801ebe2a:
        ppuVar28 = &PTR_s__rust_deps_rustc_demangle_0_1_26_180292988;
        uVar18 = 0;
LAB_1801ebe3f:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(pbVar26,pbVar14,uVar18,pbVar19,ppuVar28);
      }
    }
    else if (pbVar19 != pbVar14) goto LAB_1801ebe2a;
    uVar18 = FUN_1801f0c50(local_50,pbVar26,pbVar19);
    if ((char)uVar18 != '\0') goto LAB_1801ebe47;
    if (pbVar19 < pbVar14) {
      if ((char)pbVar26[(longlong)pbVar19] < -0x40) {
LAB_1801ebf05:
        ppuVar28 = &PTR_s__rust_deps_rustc_demangle_0_1_26_1802929a0;
        goto LAB_1801ebf89;
      }
      pbVar25 = pbVar19;
    }
    else if (pbVar19 != pbVar14) goto LAB_1801ebf05;
LAB_1801eba42:
    pbVar26 = pbVar26 + (longlong)pbVar25;
  }
  if (*pbVar26 == 0x24) {
    if ((pbVar14 == (byte *)0x1) || (-0x41 < (char)pbVar26[1])) {
      pbVar19 = pbVar14 + -1;
      pbVar20 = pbVar26 + 1;
      pbVar10 = (byte *)0x0;
      do {
        pbVar17 = pbVar19 + -(longlong)pbVar10;
        pbVar6 = pbVar20 + (longlong)pbVar10;
        if (pbVar17 < (byte *)0x10) {
          pbVar12 = (byte *)0x0;
          if (pbVar17 != (byte *)0x0) {
            do {
              if (pbVar6[(longlong)pbVar12] == 0x24) {
                uVar11 = 1;
                pbVar6 = pbVar12;
                goto LAB_1801eb959;
              }
              pbVar12 = pbVar12 + 1;
            } while (pbVar17 != pbVar12);
            pbVar12 = pbVar17;
          }
          uVar11 = 0;
          pbVar6 = pbVar12;
        }
        else {
          uVar11 = FUN_1801f2f70(0x24);
        }
LAB_1801eb959:
        if ((uVar11 & 1) == 0) goto LAB_1801ebdd0;
        pbVar17 = pbVar6 + (longlong)pbVar10;
        if ((pbVar17 < pbVar19) && (pbVar20[(longlong)pbVar17] == 0x24)) goto LAB_1801eba50;
        pbVar10 = pbVar10 + (longlong)pbVar6 + 1;
        if (pbVar19 < pbVar10) goto LAB_1801ebdd0;
      } while( true );
    }
    ppuVar28 = &PTR_s__rust_deps_rustc_demangle_0_1_26_1802929b8;
    goto LAB_1801ebf78;
  }
  if (*pbVar26 != 0x2e) goto LAB_1801eb836;
  if (pbVar14 == (byte *)0x1) {
    uVar18 = FUN_1801f0c50(local_50,&DAT_180292a50,1);
    if ((char)uVar18 != '\0') goto LAB_1801ebe47;
LAB_1801ebbcc:
    pbVar14 = pbVar14 + -1;
    pbVar26 = pbVar26 + 1;
    goto LAB_1801eb7ef;
  }
  if ((char)pbVar26[1] < -0x40) {
    ppuVar28 = &PTR_s__rust_deps_rustc_demangle_0_1_26_180292a20;
LAB_1801ebf78:
    pbVar19 = (byte *)0x1;
    goto LAB_1801ebf83;
  }
  bVar24 = pbVar26[1];
  uVar16 = (uint)bVar24;
  if ((char)bVar24 < '\0') {
    uVar8 = bVar24 & 0x1f;
    if (bVar24 < 0xe0) {
      uVar16 = uVar8 << 6 | pbVar26[2] & 0x3f;
    }
    else {
      uVar16 = pbVar26[3] & 0x3f | (pbVar26[2] & 0x3f) << 6;
      if (bVar24 < 0xf0) {
        uVar16 = uVar16 | uVar8 << 0xc;
      }
      else {
        uVar16 = pbVar26[4] & 0x3f | uVar16 << 6 | (bVar24 & 7) << 0x12;
      }
    }
  }
  if (uVar16 != 0x2e) {
    uVar18 = FUN_1801f0c50(local_50,&DAT_180292a50,1);
    if ((char)uVar18 != '\0') goto LAB_1801ebe47;
    if (-0x41 < (char)pbVar26[1]) goto LAB_1801ebbcc;
    ppuVar28 = &PTR_s__rust_deps_rustc_demangle_0_1_26_180292a58;
    goto LAB_1801ebf78;
  }
  uVar18 = FUN_1801f0c50(local_50,"::",2);
  if ((char)uVar18 != '\0') goto LAB_1801ebe47;
  if ((pbVar14 < (byte *)0x3) || (-0x41 < (char)pbVar26[2])) {
    pbVar14 = pbVar14 + -2;
    pbVar26 = pbVar26 + 2;
    goto LAB_1801eb7ef;
  }
  ppuVar28 = &PTR_s__rust_deps_rustc_demangle_0_1_26_180292a38;
  pbVar19 = (byte *)0x2;
  goto LAB_1801ebf83;
LAB_1801eba50:
  bVar24 = *pbVar20;
  if ((char)bVar24 < -0x40) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018d0(pbVar26,pbVar14,1,pbVar17 + 1,&PTR_s__rust_deps_rustc_demangle_0_1_26_1802929d0);
  }
  pbVar19 = pbVar17 + 2;
  pbVar10 = pbVar14 + -(longlong)pbVar19;
  if (pbVar14 < pbVar19 || pbVar10 == (byte *)0x0) {
    if (pbVar10 != (byte *)0x0) goto LAB_1801ebfb1;
  }
  else if ((char)pbVar26[(longlong)pbVar19] < -0x40) {
LAB_1801ebfb1:
    ppuVar28 = &PTR_s__rust_deps_rustc_demangle_0_1_26_1802929e8;
LAB_1801ebf83:
    goto LAB_1801ebf89;
  }
  local_58 = pbVar19 + (longlong)pbVar26;
  if (pbVar17 == (byte *)0x1) {
    pcVar13 = ",";
    if (*pbVar20 == 0x43) {
LAB_1801ebb46:
      uVar18 = FUN_1801f0c50(local_50,pcVar13,1);
      goto LAB_1801ebdc2;
    }
    if (bVar24 != 0x75) goto LAB_1801ebdd0;
  }
  else {
    if (pbVar17 == (byte *)0x2) {
      pcVar13 = "@";
      if (((((*(short *)pbVar20 == 0x5053) || (pcVar13 = "*", *(short *)pbVar20 == 0x5042)) ||
           (pcVar13 = "&", *(short *)pbVar20 == 0x4652)) ||
          ((pcVar13 = "<", *(short *)pbVar20 == 0x544c ||
           (pcVar13 = ">", *(short *)pbVar20 == 0x5447)))) ||
         ((pcVar13 = "(", *(short *)pbVar20 == 0x504c ||
          (pcVar13 = ")", *(short *)pbVar20 == 0x5052)))) goto LAB_1801ebb46;
      if (bVar24 != 0x75) goto LAB_1801ebdd0;
    }
    else {
      if ((pbVar17 == (byte *)0x0) || (bVar24 != 0x75)) goto LAB_1801ebdd0;
      if (pbVar17 < (byte *)0x2) goto LAB_1801ebbe2;
    }
    if ((char)pbVar26[2] < -0x40) {
      ppuVar28 = &PTR_s__rust_deps_rustc_demangle_0_1_26_180292a08;
      goto LAB_1801ebf69;
    }
  }
LAB_1801ebbe2:
  pbVar19 = pbVar26 + 2;
  pbVar25 = pbVar19;
  do {
    uVar16 = 0;
    if (pbVar25 == pbVar20 + (longlong)pbVar17) {
LAB_1801ebca8:
      bVar4 = false;
      goto LAB_1801ebcab;
    }
    bVar24 = *pbVar25;
    uVar8 = (uint)bVar24;
    if ((char)bVar24 < '\0') {
      uVar15 = bVar24 & 0x1f;
      pbVar6 = pbVar25 + 1;
      if (bVar24 < 0xe0) {
        pbVar25 = pbVar25 + 2;
        uVar8 = uVar15 << 6 | *pbVar6 & 0x3f;
      }
      else {
        uVar8 = pbVar25[2] & 0x3f | (*pbVar6 & 0x3f) << 6;
        if (bVar24 < 0xf0) {
          pbVar25 = pbVar25 + 3;
          uVar8 = uVar8 | uVar15 << 0xc;
          unaff_RSI = (ulonglong)uVar8;
        }
        else {
          uVar8 = uVar8 << 6;
          unaff_RSI = (ulonglong)uVar8;
          uVar8 = pbVar25[3] & 0x3f | uVar8 | (bVar24 & 7) << 0x12;
          if (uVar8 == 0x110000) goto LAB_1801ebca8;
          pbVar25 = pbVar25 + 4;
        }
      }
    }
    else {
      pbVar25 = pbVar25 + 1;
    }
  } while (0xfffffff9 < uVar8 - 0x67 || 0xfffffff5 < uVar8 - 0x3a);
  bVar4 = true;
LAB_1801ebcab:
  bVar27 = true;
  if (pbVar17 != (byte *)0x1) {
    if (pbVar17 == (byte *)0x2) {
      bVar24 = *pbVar19;
      if ((bVar24 == 0x2b) || (bVar24 == 0x2d)) goto LAB_1801ebd75;
    }
    else {
      bVar24 = *pbVar19;
    }
    pbVar25 = (byte *)(ulonglong)(bVar24 == 0x2b);
    uVar11 = (longlong)(pbVar17 + -1) - (longlong)pbVar25;
    if (uVar11 < 9) {
      if (pbVar17 + -1 == pbVar25) {
        bVar27 = false;
LAB_1801ebd73:
        uVar16 = 0;
      }
      else {
        uVar21 = 0;
        uVar16 = 0;
        do {
          bVar24 = (pbVar19 + (longlong)pbVar25)[uVar21];
          uVar15 = (bVar24 - 0x41 & 0xffffffdf) + 10;
          unaff_RSI = (ulonglong)uVar15;
          uVar8 = bVar24 - 0x30;
          if (0x39 < bVar24) {
            uVar8 = uVar15;
          }
          bVar27 = 0xf < uVar8;
          if (bVar27) goto LAB_1801ebd73;
          uVar16 = uVar16 << 4 | uVar8;
          uVar21 = uVar21 + 1;
        } while (uVar11 != uVar21);
      }
    }
    else {
      uVar21 = 0;
      uVar16 = 0;
      do {
        if (0xfffffff < uVar16) goto LAB_1801ebd73;
        bVar24 = (pbVar19 + (longlong)pbVar25)[uVar21];
        unaff_RSI = 0;
        uVar8 = bVar24 - 0x30;
        if (0x39 < bVar24) {
          uVar8 = (bVar24 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar8) goto LAB_1801ebd73;
        uVar16 = uVar8 | uVar16 << 4;
        uVar21 = uVar21 + 1;
      } while (uVar11 != uVar21);
      bVar27 = false;
    }
  }
LAB_1801ebd75:
  if ((uVar16 ^ 0xd800) - 0x110000 < 0xffef0800) {
    uVar16 = 0x110000;
  }
  if (bVar27) {
    uVar16 = 0x110000;
  }
  if (((bVar4 || uVar16 == 0x110000) || (local_6c = uVar16, uVar16 < 0x20)) ||
     (uVar16 - 0x7f < 0x21)) goto LAB_1801ebdd0;
  uVar18 = FUN_1801edd10(&local_6c);
LAB_1801ebdc2:
  pbVar14 = pbVar10;
  pbVar26 = local_58;
  if ((char)uVar18 != '\0') {
LAB_1801ebe47:
    return (int)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
  }
  goto LAB_1801eb7ef;
LAB_1801ebdd0:
  cVar5 = FUN_1801f0c50(local_50,pbVar26,pbVar14);
  pbVar14 = local_68;
  pbVar19 = pbVar1;
  pbVar26 = pbVar22;
  if (cVar5 != '\0') {
    return local_44;
  }
  goto LAB_1801eb46d;
LAB_1801ebe7a:
  local_59 = 1;
LAB_1801ebe7c:
                    /* WARNING: Subroutine does not return */
  FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_59,&DAT_180292760,
                &PTR_s__rust_deps_rustc_demangle_0_1_26_180292928);
}


