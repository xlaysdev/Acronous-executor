/* FUN_1801e9f48 @ 1801e9f48 */

void FUN_1801e9f48(undefined8 *param_1,int *param_2,char *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  char cVar6;
  short *psVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar10;
  byte *pbVar11;
  byte bVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  byte *pbVar16;
  char *pcVar17;
  byte *pbVar18;
  byte bVar19;
  uint uVar20;
  char *unaff_R12;
  longlong lVar21;
  short *psVar22;
  undefined8 uVar23;
  undefined **ppuVar24;
  longlong local_f0;
  char *local_e8;
  short *local_d8;
  char *local_d0;
  char *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  char *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  char *local_a0;
  longlong local_90;
  char *local_88;
  longlong local_80;
  char *local_78;
  undefined8 *local_70;
  char *local_60;
  char *local_58;
  int *local_50;
  char *local_48;
  
  uVar23 = 6;
  local_70 = param_1;
  FUN_1801f2540(&local_d8);
  if ((char)local_d8 == '\0') {
    do {
      FUN_1801ebfed(&local_f0,&local_d8);
    } while (local_f0 == 1);
    if (local_f0 == 0) goto LAB_1801ea191;
  }
  else {
    pcVar15 = local_78 + -1;
    if (local_a0 == (char *)0xffffffffffffffff) {
      pcVar10 = (char *)CONCAT44(uStack_ac,local_b0) + (longlong)pcVar15;
      if (pcVar10 < local_88) {
        local_60 = local_b8;
        local_58 = local_d0 + local_80;
        unaff_R12 = local_d0 + local_90;
        local_e8 = (char *)CONCAT44(uStack_ac,local_b0);
LAB_1801ea0e9:
        pcVar14 = local_78;
        if (((ulonglong)local_b8 >> ((ulonglong)(byte)pcVar10[local_90] & 0x3f) & 1) == 0)
        goto LAB_1801ea169;
        lVar21 = 0;
        pcVar10 = local_e8;
        pcVar17 = local_58;
        do {
          if (local_78 <= local_d0 + lVar21) {
            pcVar14 = local_e8 + local_90;
            pcVar10 = local_d0 + -1;
            goto LAB_1801ea13b;
          }
          if (local_88 <= local_d0 + (longlong)pcVar10) {
            pcVar15 = local_e8 + (longlong)local_d0;
            if (local_e8 + (longlong)local_d0 < local_88) {
              pcVar15 = local_88;
            }
            local_50 = param_2;
            local_48 = param_3;
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(pcVar15,local_88,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_1802926f8,pcVar10
                          ,uVar23);
          }
          cVar6 = *pcVar17;
          pcVar14 = pcVar10 + 1;
          pcVar17 = pcVar17 + 1;
          lVar21 = lVar21 + 1;
          pcVar1 = unaff_R12 + (longlong)pcVar10;
          pcVar10 = pcVar14;
        } while (cVar6 == *pcVar1);
        goto LAB_1801ea16c;
      }
    }
    else {
      local_e8 = (char *)CONCAT44(uStack_ac,local_b0);
      pcVar10 = local_e8 + (longlong)pcVar15;
      if (pcVar10 < local_88) {
        local_60 = (char *)CONCAT44(uStack_bc,local_c0);
        local_58 = local_78 + -(longlong)local_60;
LAB_1801e9fe8:
        unaff_R12 = local_b8;
        if (((ulonglong)local_b8 >> ((ulonglong)(byte)pcVar10[local_90] & 0x3f) & 1) == 0) {
          local_e8 = local_e8 + (longlong)local_78;
        }
        else {
          pcVar10 = local_d0;
          if (local_d0 < local_a0) {
            pcVar10 = local_a0;
          }
          pcVar14 = local_e8 + local_90;
          pcVar17 = pcVar10;
          do {
            if (local_78 <= pcVar17) {
              pcVar10 = local_d0;
              goto LAB_1801ea046;
            }
            if (local_88 <= local_e8 + (longlong)pcVar17) {
              pcVar15 = pcVar10 + (longlong)local_e8;
              if (pcVar10 + (longlong)local_e8 < local_88) {
                pcVar15 = local_88;
              }
              local_50 = param_2;
              local_48 = param_3;
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(pcVar15,local_88,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_1802926f8,
                            pcVar14,uVar23);
            }
            pcVar1 = pcVar17 + 1;
            pcVar3 = pcVar17 + local_80;
            pcVar4 = pcVar14 + (longlong)pcVar17;
            pcVar17 = pcVar1;
          } while (*pcVar3 == *pcVar4);
          local_e8 = pcVar1 + ((longlong)local_e8 - (longlong)local_d0);
        }
        local_a0 = (char *)0x0;
        goto LAB_1801ea035;
      }
    }
  }
LAB_1801ea17c:
  local_50 = param_2;
  local_48 = param_3;
  goto LAB_1801ea289;
  while( true ) {
    if (local_78 <= local_d0 + -1) goto LAB_1801ea94a;
    pcVar17 = local_e8 + (longlong)pcVar10;
    if (local_88 <= pcVar17) goto LAB_1801ea93b;
    pcVar17 = pcVar10 + local_80;
    pcVar1 = pcVar14 + (longlong)pcVar10;
    pcVar10 = pcVar10 + -1;
    if (*pcVar17 != *pcVar1) break;
LAB_1801ea13b:
    if (pcVar10 == (char *)0xffffffffffffffff) goto LAB_1801ea189;
  }
  pcVar14 = (char *)CONCAT44(uStack_bc,local_c0);
LAB_1801ea169:
  pcVar14 = local_e8 + (longlong)pcVar14;
LAB_1801ea16c:
  pcVar10 = pcVar14 + (longlong)pcVar15;
  local_e8 = pcVar14;
  if (local_88 <= pcVar10) goto LAB_1801ea17c;
  goto LAB_1801ea0e9;
LAB_1801ea046:
  do {
    if (pcVar10 <= local_a0) goto LAB_1801ea189;
    pcVar10 = pcVar10 + -1;
    if (local_78 <= pcVar10) {
LAB_1801ea94a:
      local_50 = param_2;
      local_48 = param_3;
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(pcVar10,local_78,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_1802926c8,pcVar14,
                    uVar23);
    }
    pcVar17 = pcVar10 + (longlong)local_e8;
    if (local_88 <= pcVar17) {
LAB_1801ea93b:
      local_50 = param_2;
      local_48 = param_3;
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(pcVar17,local_88,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_1802926e0,pcVar14,
                    uVar23);
    }
    pcVar14 = (char *)CONCAT71((int7)((ulonglong)pcVar14 >> 8),pcVar10[local_80]);
  } while (pcVar10[local_80] == pcVar17[local_90]);
  local_e8 = local_e8 + (longlong)local_60;
  local_a0 = local_58;
LAB_1801ea035:
  pcVar10 = local_e8 + (longlong)pcVar15;
  if (local_88 <= pcVar10) goto LAB_1801ea17c;
  goto LAB_1801e9fe8;
  while( true ) {
    uVar9 = 0;
    while (uVar20 = uVar13 - 0x30, uVar20 < 10) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar9;
      uVar8 = SUB168(auVar5 * ZEXT816(10),0);
      uVar9 = uVar20 + uVar8;
      if (((SUB168(auVar5 * ZEXT816(10),8) != 0) || (CARRY8((ulonglong)uVar20,uVar8))) ||
         (pbVar11 == pbVar18)) goto LAB_1801ea40e;
      bVar19 = *pbVar11;
      uVar13 = (uint)bVar19;
      if ((char)bVar19 < '\0') {
        uVar20 = bVar19 & 0x1f;
        pbVar2 = pbVar11 + 1;
        if (bVar19 < 0xe0) {
          pbVar11 = pbVar11 + 2;
          uVar13 = uVar20 << 6 | *pbVar2 & 0x3f;
        }
        else {
          uVar13 = pbVar11[2] & 0x3f | (*pbVar2 & 0x3f) << 6;
          if (bVar19 < 0xf0) {
            pbVar11 = pbVar11 + 3;
            uVar13 = uVar13 | uVar20 << 0xc;
          }
          else {
            pbVar2 = pbVar11 + 3;
            pbVar11 = pbVar11 + 4;
            uVar13 = *pbVar2 & 0x3f | uVar13 << 6 | (bVar19 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar11 = pbVar11 + 1;
      }
      if (uVar13 == 0x110000) goto LAB_1801ea40e;
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      if (pbVar11 == pbVar18) goto LAB_1801ea40e;
      bVar19 = *pbVar11;
      uVar13 = (uint)bVar19;
      if ((char)bVar19 < '\0') {
        uVar20 = bVar19 & 0x1f;
        pbVar2 = pbVar11 + 1;
        if (bVar19 < 0xe0) {
          pbVar11 = pbVar11 + 2;
          uVar13 = uVar20 << 6 | *pbVar2 & 0x3f;
        }
        else {
          uVar13 = pbVar11[2] & 0x3f | (*pbVar2 & 0x3f) << 6;
          if (bVar19 < 0xf0) {
            pbVar11 = pbVar11 + 3;
            uVar13 = uVar13 | uVar20 << 0xc;
          }
          else {
            uVar13 = pbVar11[3] & 0x3f | uVar13 << 6 | (bVar19 & 7) << 0x12;
            if (uVar13 == 0x110000) goto LAB_1801ea40e;
            pbVar11 = pbVar11 + 4;
          }
        }
      }
      else {
        pbVar11 = pbVar11 + 1;
      }
    }
    unaff_R12 = unaff_R12 + 1;
    if (uVar13 == 0x45) break;
LAB_1801ea621:
    if (9 < uVar13 - 0x30) goto LAB_1801ea40e;
  }
LAB_1801ea610:
  lVar21 = (longlong)pbVar18 - (longlong)pbVar11;
LAB_1801ea7c2:
  if (lVar21 != 0) {
    if (*pbVar11 == 0x2e) {
      bVar19 = 0x2e;
      pbVar18 = pbVar11;
      while( true ) {
        if ((char)bVar19 < '\0') {
          bVar12 = bVar19 & 0x1f;
          pbVar2 = pbVar18 + 1;
          if (bVar19 < 0xe0) {
            pbVar18 = pbVar18 + 2;
            uVar13 = (uint)bVar12 << 6 | *pbVar2 & 0x3f;
          }
          else {
            uVar13 = pbVar18[2] & 0x3f | (*pbVar2 & 0x3f) << 6;
            if (bVar19 < 0xf0) {
              pbVar18 = pbVar18 + 3;
              uVar13 = uVar13 | (uint)bVar12 << 0xc;
            }
            else {
              uVar13 = pbVar18[3] & 0x3f | uVar13 << 6 | (bVar12 & 7) << 0x12;
              if (uVar13 == 0x110000) {
                uVar23 = 1;
                goto LAB_1801ea5b6;
              }
              pbVar18 = pbVar18 + 4;
            }
          }
        }
        else {
          pbVar18 = pbVar18 + 1;
          uVar13 = (uint)bVar19;
        }
        if ((((0xe < uVar13 - 0x21 && 9 < uVar13 - 0x30) && 0x19 < (uVar13 & 0x1fffdf) - 0x41) &&
            ((0x26 < uVar13 - 0x3a ||
             ((0x7e0000007fU >> ((ulonglong)(uVar13 - 0x3a) & 0x3f) & 1) == 0)))) &&
           (uVar13 - 0x7f < 0xfffffffc)) goto LAB_1801ea8d8;
        if (pbVar18 == pbVar11 + lVar21) break;
        bVar19 = *pbVar18;
      }
      uVar23 = 1;
    }
    else {
LAB_1801ea8d8:
      uVar23 = 0;
      lVar21 = 0;
      pbVar11 = (byte *)0x1;
    }
    goto LAB_1801ea5b6;
  }
  uVar23 = 1;
  goto LAB_1801ea5b3;
LAB_1801ea189:
  local_50 = param_2;
  local_48 = param_3;
LAB_1801ea191:
  pcVar15 = local_e8 + 6;
  if (pcVar15 != (char *)0x0) {
    if (pcVar15 < param_3) {
      if (-0x41 < *(char *)((longlong)param_2 + (longlong)pcVar15)) goto LAB_1801ea1b4;
    }
    else if (pcVar15 == param_3) goto LAB_1801ea1b4;
    ppuVar24 = (undefined **)&DAT_1802925b8;
    goto LAB_1801ea9e0;
  }
LAB_1801ea1b4:
  pbVar18 = (byte *)(pcVar15 + (longlong)param_2);
  do {
    if (pbVar18 == (byte *)((longlong)param_2 + (longlong)param_3)) {
LAB_1801ea259:
      if (local_e8 == (char *)0x0) {
        pcVar15 = (char *)0x0;
        goto LAB_1801ea5b1;
      }
      if (local_e8 < param_3) {
        if (-0x41 < *(char *)((longlong)param_2 + (longlong)local_e8)) {
          param_3 = local_e8;
          break;
        }
      }
      else if (local_e8 == param_3) break;
                    /* WARNING: Subroutine does not return */
      FUN_1802018d0(param_2,param_3,0,local_e8,&DAT_1802925d0);
    }
    bVar19 = *pbVar18;
    uVar13 = (uint)bVar19;
    if ((char)bVar19 < '\0') {
      pbVar16 = pbVar18 + 1;
      if (bVar19 < 0xe0) {
        pbVar18 = pbVar18 + 2;
        uVar13 = (uVar13 & 0x1f) << 6 | *pbVar16 & 0x3f;
      }
      else {
        uVar20 = pbVar18[2] & 0x3f | (*pbVar16 & 0x3f) << 6;
        if (bVar19 < 0xf0) {
          pbVar18 = pbVar18 + 3;
          uVar13 = uVar20 | (uVar13 & 0x1f) << 0xc;
        }
        else {
          uVar13 = pbVar18[3] & 0x3f | uVar20 << 6 | (uVar13 & 7) << 0x12;
          if (uVar13 == 0x110000) goto LAB_1801ea259;
          pbVar18 = pbVar18 + 4;
        }
      }
    }
    else {
      pbVar18 = pbVar18 + 1;
    }
  } while (0xfffffff8 < uVar13 - 0x47 || 0xfffffff5 < uVar13 - 0x3a);
LAB_1801ea289:
  if (param_3 < (char *)0x3) {
    pcVar15 = param_3;
    if (param_3 == (char *)0x2) {
      if ((short)*param_2 == 0x4e5a) {
        lVar21 = -2;
        param_3 = (char *)0x2;
        pcVar15 = (char *)0x2;
        goto LAB_1801ea359;
      }
LAB_1801ea42a:
      pcVar15 = (char *)0x2;
      if ((char)*param_2 == 'R') goto LAB_1801ea435;
    }
  }
  else {
    if (*(char *)((longlong)param_2 + 2) == 'N' && (short)*param_2 == 0x5a5f) {
      lVar21 = -3;
      pcVar15 = (char *)0x3;
      if (param_3 == (char *)0x3) {
        param_3 = (char *)0x3;
      }
      else if (*(char *)((longlong)param_2 + 3) < -0x40) {
        ppuVar24 = &PTR_s__rust_deps_rustc_demangle_0_1_26_180292568;
        goto LAB_1801ea9e0;
      }
LAB_1801ea359:
      psVar22 = (short *)(param_3 + lVar21);
      pbVar16 = (byte *)(pcVar15 + (longlong)param_2);
      pbVar18 = pbVar16 + (longlong)psVar22;
      psVar7 = (short *)0x0;
      do {
        if (psVar22 == psVar7) {
          if (psVar22 != (short *)0x0) {
            bVar19 = *pbVar16;
            uVar13 = (uint)bVar19;
            if ((char)bVar19 < '\0') {
              uVar20 = bVar19 & 0x1f;
              if (bVar19 < 0xe0) {
                pbVar11 = pbVar16 + 2;
                uVar13 = uVar20 << 6 | pbVar16[1] & 0x3f;
              }
              else {
                uVar13 = pbVar16[2] & 0x3f | (pbVar16[1] & 0x3f) << 6;
                if (bVar19 < 0xf0) {
                  pbVar11 = pbVar16 + 3;
                  uVar13 = uVar13 | uVar20 << 0xc;
                }
                else {
                  pbVar11 = pbVar16 + 4;
                  uVar13 = pbVar16[3] & 0x3f | uVar13 << 6 | (bVar19 & 7) << 0x12;
                }
              }
            }
            else {
              pbVar11 = pbVar16 + 1;
            }
            if (uVar13 == 0x45) {
              unaff_R12 = (char *)0x0;
              goto LAB_1801ea610;
            }
            if (uVar13 != 0x110000) {
              unaff_R12 = (char *)0x0;
              goto LAB_1801ea621;
            }
          }
          break;
        }
        pbVar11 = pbVar16 + (longlong)psVar7;
        psVar7 = (short *)((longlong)psVar7 + 1);
      } while (-1 < (char)*pbVar11);
LAB_1801ea40e:
      pcVar15 = param_3;
      if (param_3 < (char *)0x3) {
        if (param_3 == (char *)0x2) goto LAB_1801ea42a;
        goto LAB_1801ea5b1;
      }
    }
    else {
      if ((short)*param_2 == 0x4e5a) {
        if (*(char *)((longlong)param_2 + 2) < -0x40) {
          ppuVar24 = &PTR_s__rust_deps_rustc_demangle_0_1_26_180292550;
          pcVar15 = (char *)0x2;
          goto LAB_1801ea9e0;
        }
        pcVar15 = (char *)0x2;
        lVar21 = -2;
        goto LAB_1801ea359;
      }
      pcVar15 = (char *)0x3;
      if ((param_3 != (char *)0x3) && (pcVar15 = param_3, *param_2 == 0x4e5a5f5f)) {
        lVar21 = -4;
        pcVar15 = &DAT_00000004;
        if (param_3 < (char *)0x5) {
          param_3 = &DAT_00000004;
        }
        else if ((char)param_2[1] < -0x40) {
          ppuVar24 = &PTR_s__rust_deps_rustc_demangle_0_1_26_180292538;
          goto LAB_1801ea9e0;
        }
        goto LAB_1801ea359;
      }
    }
    if ((short)*param_2 == 0x525f) {
      cVar6 = *(char *)((longlong)param_2 + 2);
      if (cVar6 < -0x40) {
        ppuVar24 = &PTR_s__rust_deps_rustc_demangle_0_1_26_1802924a8;
        uVar23 = 2;
LAB_1801ea9b5:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(param_2,pcVar15,uVar23,pcVar15,ppuVar24);
      }
      psVar22 = (short *)((longlong)param_2 + 2);
      unaff_R12 = (char *)0xfffffffffffffffe;
LAB_1801ea46e:
      param_3 = pcVar15;
    }
    else {
      if ((char)*param_2 != 'R') {
        if (pcVar15 == (char *)0x3) {
          pcVar15 = (char *)0x3;
        }
        else if (*(char *)((longlong)param_2 + 2) == 'R' && (short)*param_2 == 0x5f5f) {
          cVar6 = *(char *)((longlong)param_2 + 3);
          if (cVar6 < -0x40) {
            ppuVar24 = &PTR_s__rust_deps_rustc_demangle_0_1_26_180292478;
            uVar23 = 3;
            goto LAB_1801ea9b5;
          }
          psVar22 = (short *)((longlong)param_2 + 3);
          unaff_R12 = (char *)0xfffffffffffffffd;
          goto LAB_1801ea46e;
        }
        goto LAB_1801ea5b1;
      }
LAB_1801ea435:
      cVar6 = *(char *)((longlong)param_2 + 1);
      param_3 = pcVar15;
      if (cVar6 < -0x40) {
        ppuVar24 = &PTR_s__rust_deps_rustc_demangle_0_1_26_180292490;
        pcVar15 = (char *)0x1;
LAB_1801ea9e0:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(param_2,param_3,pcVar15,param_3,ppuVar24);
      }
      psVar22 = (short *)((longlong)param_2 + 1);
      unaff_R12 = (char *)0xffffffffffffffff;
    }
    pcVar15 = param_3;
    if ((byte)(cVar6 + 0xbfU) < 0x1a) {
      unaff_R12 = unaff_R12 + (longlong)param_3;
      pcVar10 = (char *)0x0;
      do {
        if (unaff_R12 == pcVar10) {
          local_c8 = (char *)0x0;
          local_c0 = 0;
          local_b8 = (char *)0x0;
          local_b0 = 0;
          local_d8 = psVar22;
          local_d0 = unaff_R12;
          cVar6 = FUN_1801e7288(&local_d8,0);
          if (cVar6 != '\0') {
LAB_1801ea8fd:
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("`fmt::Error`s should be impossible without a `fmt::Formatter`",0x3d,
                          &local_f0,"",&PTR_s__rust_deps_rustc_demangle_0_1_26_1802924c0);
          }
          if (local_d8 == (short *)0x0) break;
          if ((local_c8 < local_d0) &&
             ((byte)(*(char *)((longlong)local_d8 + (longlong)local_c8) + 0xbfU) < 0x1a)) {
            local_b8 = (char *)0x0;
            local_b0 = 0;
            cVar6 = FUN_1801e7288(&local_d8,0);
            if (cVar6 != '\0') goto LAB_1801ea8fd;
            if (local_d8 == (short *)0x0) break;
          }
          if (local_c8 != (char *)0x0) {
            if (local_c8 < local_d0) {
              if (*(char *)((longlong)local_d8 + (longlong)local_c8) < -0x40) goto LAB_1801ea597;
            }
            else if (local_d0 != local_c8) {
LAB_1801ea597:
                    /* WARNING: Subroutine does not return */
              FUN_1802018d0(local_d8,local_d0,local_c8,local_d0,
                            &PTR_s__rust_deps_rustc_demangle_0_1_26_1802924d8);
            }
          }
          pbVar11 = (byte *)((longlong)local_d8 + (longlong)local_c8);
          lVar21 = (longlong)local_d0 - (longlong)local_c8;
          pbVar16 = (byte *)0x0;
          goto LAB_1801ea7c2;
        }
        pcVar14 = (char *)((longlong)psVar22 + (longlong)pcVar10);
        pcVar10 = pcVar10 + 1;
      } while (-1 < *pcVar14);
    }
  }
LAB_1801ea5b1:
  psVar22 = (short *)0x0;
  pbVar11 = (byte *)0x1;
  pbVar16 = (byte *)0x0;
  uVar23 = 0;
  param_3 = pcVar15;
LAB_1801ea5b3:
  lVar21 = 0;
LAB_1801ea5b6:
  *local_70 = uVar23;
  local_70[1] = pbVar16;
  local_70[2] = psVar22;
  local_70[3] = unaff_R12;
  local_70[4] = param_2;
  local_70[5] = param_3;
  local_70[6] = pbVar11;
  local_70[7] = lVar21;
  return;
}


