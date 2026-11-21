/* FUN_1800fe8f0 @ 1800fe8f0 */

ulonglong *
FUN_1800fe8f0(ulonglong *param_1,char *param_2,char *param_3,ulonglong param_4,byte *param_5,
             ulonglong param_6,char param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_100 [96];
  undefined *puStack_a0;
  byte *local_78;
  ulonglong local_70;
  ulonglong local_68;
  char *local_60;
  ulonglong local_58;
  ulonglong local_50;
  char *local_48;
  
  local_78 = param_5;
  local_70 = param_6;
  local_60 = param_3;
  if (*param_2 == '\0') {
    uVar6 = 0;
    uVar5 = 0;
    uVar15 = param_6;
    goto LAB_1800feb0d;
  }
  bVar8 = param_2[1];
  *param_2 = '\0';
  if (param_4 == 0) {
    if (param_7 == '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    else {
      *(undefined2 *)(param_1 + 1) = 0x102;
      *(undefined1 *)((longlong)param_1 + 10) = 0;
    }
  }
  else {
    if (2 < param_6) {
      cVar3 = *param_3;
      if (bVar8 == 1 && (byte)(cVar3 + 0x61U) < 0x53) {
        uVar4 = (byte)(cVar3 + 0x61U) + 0x3041;
        *param_5 = 0xe3;
        param_5[1] = (byte)(uVar4 >> 6) & 0x83;
LAB_1800fea15:
        param_5[2] = (byte)uVar4 & 0x3f | 0x80;
      }
      else {
        bVar11 = cVar3 - 0x40;
        if (0x3e < bVar11) {
          if (cVar3 < -3) {
            bVar11 = cVar3 + 0xbf;
            goto LAB_1800fe9e2;
          }
LAB_1800fe9c5:
          *(undefined1 *)(param_1 + 1) = 2;
          if (cVar3 < '\0') {
            *(undefined2 *)((longlong)param_1 + 9) = 2;
            *param_1 = 1;
            goto LAB_1800fe9a8;
          }
          *(undefined2 *)((longlong)param_1 + 9) = 1;
          goto LAB_1800fe9a0;
        }
LAB_1800fe9e2:
        uVar4 = (uint)CONCAT71((int7)((ulonglong)param_2 >> 8),bVar8 == 2);
        if (bVar8 == 2 && bVar11 < 0x56) {
          uVar4 = bVar11 + 0x30a1;
          *param_5 = 0xe3;
          param_5[1] = (byte)(uVar4 >> 6) & 0x87;
          local_68 = 2;
          goto LAB_1800fea15;
        }
        lVar14 = (ulonglong)bVar8 * 0xbc + (ulonglong)bVar11;
        if (((ulonglong)bVar8 * 0xbc + (ulonglong)bVar11) - 0x582 < 0xb95) {
          uVar4 = (uint)*(ushort *)(&DAT_18022f1b2 + lVar14 * 2);
LAB_1800feac9:
          *param_5 = (byte)(uVar4 >> 0xc) | 0xe0;
          param_5[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
          param_5[2] = (byte)uVar4 & 0x3f | 0x80;
        }
        else {
          if (lVar14 - 0x1142U < 0xd3e) {
            uVar4 = (uint)*(ushort *)(&DAT_18023494a + lVar14 * 2);
            goto LAB_1800feac9;
          }
          if (lVar14 - 0x29f8U < 0x168) {
            uVar4 = (uint)*(ushort *)(&DAT_18023325a + lVar14 * 2);
            goto LAB_1800feac9;
          }
          if (lVar14 - 0x2050U < 0x168) {
            uVar4 = (uint)*(ushort *)(&DAT_1802345aa + lVar14 * 2);
            goto LAB_1800feac9;
          }
          iVar13 = (int)lVar14;
          if (lVar14 - 0x2284U < 0x758) {
            uVar4 = iVar13 - 0x4284;
            *param_5 = (byte)((uVar4 & 0xffff) >> 0xc) | 0xe0;
            param_5[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
            param_5[2] = (byte)uVar4 & 0x3f | 0x80;
          }
          else {
            puStack_a0 = (undefined *)0x1800ff3ee;
            uVar5 = FUN_1800f9770(lVar14);
            param_3 = local_60;
            if ((uVar5 & 1) == 0) {
              uVar5 = lVar14 - 0xcb;
              lVar7 = 2;
              if (9 < uVar5) {
                uVar5 = lVar14 - 0xdc;
                lVar7 = 5;
                if (0x19 < uVar5) {
                  uVar5 = lVar14 - 0xfc;
                  lVar7 = 8;
                  if (0x19 < uVar5) {
                    uVar5 = lVar14 - 0x1d6;
                    lVar7 = 0xb;
                    if (0x10 < uVar5) {
                      uVar5 = lVar14 - 0x1e7;
                      lVar7 = 0xe;
                      if (6 < uVar5) {
                        uVar5 = lVar14 - 0x1f6;
                        lVar7 = 0x11;
                        if (0x10 < uVar5) {
                          uVar5 = lVar14 - 0x207;
                          lVar7 = 0x14;
                          if (6 < uVar5) {
                            uVar5 = lVar14 - 0x234;
                            lVar7 = 0x17;
                            if (5 < uVar5) {
                              if (iVar13 == 0x23a) {
                                lVar7 = 0x1a;
LAB_1800ff500:
                                uVar5 = 0;
                              }
                              else {
                                uVar5 = lVar14 - 0x23b;
                                lVar7 = 0x1d;
                                if (0x19 < uVar5) {
                                  uVar5 = lVar14 - 0x264;
                                  lVar7 = 0x20;
                                  if (5 < uVar5) {
                                    if (iVar13 == 0x26a) {
                                      lVar7 = 0x23;
                                      goto LAB_1800ff500;
                                    }
                                    uVar5 = lVar14 - 0x26b;
                                    lVar7 = 0x26;
                                    if (0x19 < uVar5) {
                                      uVar5 = lVar14 - 0x468;
                                      lVar7 = 0x29;
                                      if (0x13 < uVar5) {
                                        uVar5 = lVar14 - 0x47c;
                                        lVar7 = 0x2c;
                                        if (9 < uVar5) {
                                          uVar5 = lVar14 - 0x21ba;
                                          lVar7 = 0x2f;
                                          if (9 < uVar5) {
                                            uVar5 = lVar14 - 0x29dc;
                                            lVar7 = 0x32;
                                            if (9 < uVar5) {
                                              uVar5 = lVar14 - 0x29e6;
                                              lVar7 = 0x35;
                                              if (9 < uVar5) goto LAB_1800fe9c5;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar16 = (short)uVar5 + *(short *)(&DAT_1802315da + lVar7 * 2);
              if (uVar16 < 0x800) {
                *param_5 = (byte)(uVar16 >> 6) | 0xc0;
                param_5[1] = (byte)uVar16 & 0x3f | 0x80;
                goto LAB_1800ff5ba;
              }
              *param_5 = (byte)(uVar16 >> 0xc) | 0xe0;
              param_5[1] = (byte)(uVar16 >> 6) & 0x3f | 0x80;
              param_5[2] = (byte)uVar16 & 0x3f | 0x80;
            }
            else {
              if ((uVar4 & 0xffff) < 0x800) {
                *param_5 = (byte)(uVar4 >> 6) | 0xc0;
                param_5[1] = (byte)uVar4 & 0x3f | 0x80;
LAB_1800ff5ba:
                local_68 = 2;
                uVar5 = 1;
                uVar6 = 2;
                uVar15 = param_6;
                goto LAB_1800feb0d;
              }
              *param_5 = (byte)((uVar4 & 0xffff) >> 0xc) | 0xe0;
              param_5[1] = (byte)((uVar4 & 0xffff) >> 6) & 0x3f | 0x80;
              param_5[2] = (byte)uVar4 & 0x3f | 0x80;
            }
          }
        }
        local_68 = 3;
      }
      uVar5 = 1;
      uVar6 = 3;
      uVar15 = param_6;
      local_60 = param_3;
LAB_1800feb0d:
      do {
        uVar12 = uVar15 - uVar6;
        local_50 = param_4;
        local_48 = param_2;
        if (uVar15 < uVar6) {
                    /* WARNING: Subroutine does not return */
          puStack_a0 = (undefined *)0x1800ff51c;
          FUN_180201a30(uVar6,uVar15,uVar15,&PTR_s_C__Users_burne__cargo_registry_s_180239048);
        }
        pbVar1 = (byte *)(local_60 + uVar5);
        uVar10 = param_4 - uVar5;
        uVar19 = uVar10;
        if (uVar12 < uVar10) {
          uVar19 = uVar12;
        }
        pbVar2 = param_5 + uVar6;
        if ((((uint)pbVar1 ^ (uint)pbVar2) & 7) == 0) {
          uVar4 = -(uint)pbVar1 & 7;
          if (uVar19 < (ulonglong)uVar4 + 0x10) goto LAB_1800feb57;
          if ((ulonglong)uVar4 == 0) {
            uVar17 = 0;
            goto LAB_1800ff1af;
          }
          bVar8 = *pbVar1;
          if ((char)bVar8 < '\0') {
            uVar17 = 0;
          }
          else {
            *pbVar2 = bVar8;
            uVar17 = 1;
            if (uVar4 == 1) goto LAB_1800ff1af;
            bVar8 = pbVar1[1];
            if (-1 < (char)bVar8) {
              pbVar2[1] = bVar8;
              uVar17 = 2;
              if (uVar4 == 2) goto LAB_1800ff1af;
              bVar8 = pbVar1[2];
              if (-1 < (char)bVar8) {
                pbVar2[2] = bVar8;
                uVar17 = 3;
                if (uVar4 == 3) goto LAB_1800ff1af;
                bVar8 = pbVar1[3];
                if (-1 < (char)bVar8) {
                  pbVar2[3] = bVar8;
                  uVar17 = 4;
                  if (uVar4 == 4) goto LAB_1800ff1af;
                  bVar8 = pbVar1[4];
                  if (-1 < (char)bVar8) {
                    pbVar2[4] = bVar8;
                    uVar17 = 5;
                    if (uVar4 == 5) goto LAB_1800ff1af;
                    bVar8 = pbVar1[5];
                    if (-1 < (char)bVar8) {
                      pbVar2[5] = bVar8;
                      uVar17 = 6;
                      if (uVar4 == 6) {
LAB_1800ff1af:
LAB_1800ff1d0:
                        uVar9 = *(ulonglong *)(pbVar1 + uVar17);
                        uVar18 = *(ulonglong *)(pbVar1 + uVar17 + 8);
                        *(ulonglong *)(param_5 + uVar17 + uVar6) = uVar9;
                        *(ulonglong *)(param_5 + uVar17 + uVar6 + 8) = uVar18;
                        uVar9 = uVar9 & 0x8080808080808080;
                        uVar18 = uVar18 & 0x8080808080808080;
                        if (uVar18 == 0 && uVar9 == 0) goto code_r0x0001800ff1fb;
                        if (uVar9 == 0) {
                          uVar4 = 0;
                          for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                            uVar4 = uVar4 + 1;
                          }
                          uVar12 = (ulonglong)(uVar4 >> 3) + 8;
                        }
                        else {
                          uVar4 = 0;
                          for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
                            uVar4 = uVar4 + 1;
                          }
                          uVar12 = (ulonglong)(uVar4 >> 3);
                        }
                        uVar17 = uVar17 + uVar12;
                        bVar8 = pbVar1[uVar17];
                        goto LAB_1800feba5;
                      }
                      bVar8 = pbVar1[6];
                      if (-1 < (char)bVar8) {
                        pbVar2[6] = bVar8;
                        uVar17 = 7;
                        goto LAB_1800ff1af;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
LAB_1800feb57:
          uVar17 = 0;
LAB_1800feb60:
          if (uVar19 <= uVar17) {
LAB_1800ff2e1:
            uVar15 = (ulonglong)(uVar12 < uVar10);
            local_68 = uVar6 + uVar19;
            uVar17 = uVar19;
            goto LAB_1800ff2f4;
          }
          while (bVar8 = pbVar1[uVar17], -1 < (char)bVar8) {
            pbVar2[uVar17] = bVar8;
            uVar17 = uVar17 + 1;
            if (uVar19 == uVar17) goto LAB_1800ff2e1;
          }
        }
LAB_1800feba5:
        local_68 = uVar17 + uVar6;
        if (uVar15 <= uVar6 + uVar17 + 2) {
          uVar15 = 1;
LAB_1800ff2f4:
          *param_1 = uVar5 + uVar17;
          param_1[1] = (ulonglong)auStack_100 | uVar15;
          param_1[2] = local_68;
          return param_1;
        }
        uVar6 = uVar17 + uVar5;
        do {
          uVar12 = uVar6;
          uVar6 = uVar12 + 2;
          uVar5 = uVar12 + 1;
          bVar11 = bVar8 + 0x7f;
          local_58 = uVar15;
          if (0x1e < bVar11) {
            if (0xe2 < (byte)(bVar8 + 3)) {
              bVar11 = bVar8 + 0x3f;
              goto LAB_1800febf1;
            }
            if ((byte)(bVar8 + 0x5f) < 0x3f) {
              uVar4 = (byte)(bVar8 + 0x5f) - 0x9f;
              param_5[local_68] = 0xef;
              local_78[local_68 + 1] = (byte)(uVar4 >> 6) & 0xbf;
              local_68 = local_68 + 2;
              bVar8 = (byte)uVar4 & 0x3f | 0x80;
              param_5 = local_78;
            }
            else {
              if (!SBORROW1('\0',bVar8)) {
                *(undefined2 *)(param_1 + 1) = 0x102;
                *(undefined1 *)((longlong)param_1 + 10) = 0;
                uVar6 = uVar12 + 1;
LAB_1800ff33b:
                *param_1 = uVar6;
LAB_1800ff36c:
                param_1[2] = local_68;
                return param_1;
              }
              param_5[local_68] = 0xc2;
              local_68 = local_68 + 1;
              bVar8 = 0x80;
              param_5 = local_78;
            }
            goto LAB_1800ff28a;
          }
LAB_1800febf1:
          if (param_4 <= uVar5) {
            if (param_7 == '\0') {
              *param_2 = '\x01';
              param_2[1] = bVar11;
              *(undefined1 *)(param_1 + 1) = 0;
            }
            else {
              *(undefined2 *)(param_1 + 1) = 0x102;
              *(undefined1 *)((longlong)param_1 + 10) = 0;
            }
LAB_1800ff368:
            *param_1 = uVar5;
            goto LAB_1800ff36c;
          }
          cVar3 = local_60[uVar12 + 1];
          if ((bVar11 == 1) && ((byte)(cVar3 + 0x61U) < 0x53)) {
            uVar4 = (byte)(cVar3 + 0x61U) + 0x3041;
            param_5[local_68] = 0xe3;
            bVar8 = (byte)(uVar4 >> 6) & 0x83;
            param_5 = local_78;
LAB_1800fed5a:
            param_5[local_68 + 1] = bVar8;
            param_5[local_68 + 2] = (byte)uVar4 & 0x3f | 0x80;
LAB_1800fed68:
            local_68 = local_68 + 3;
          }
          else {
            bVar8 = cVar3 - 0x40;
            if (0x3e < bVar8) {
              if (cVar3 < -3) {
                bVar8 = cVar3 + 0xbf;
                goto LAB_1800fec56;
              }
LAB_1800ff355:
              *(undefined1 *)(param_1 + 1) = 2;
              if (cVar3 < '\0') {
                *(undefined2 *)((longlong)param_1 + 9) = 2;
                goto LAB_1800ff33b;
              }
              *(undefined2 *)((longlong)param_1 + 9) = 1;
              goto LAB_1800ff368;
            }
LAB_1800fec56:
            if ((bVar11 == 2) && (bVar8 < 0x56)) {
              uVar4 = bVar8 + 0x30a1;
              param_5[local_68] = 0xe3;
              bVar8 = (byte)(uVar4 >> 6) & 0x87;
              param_5 = local_78;
              goto LAB_1800fed5a;
            }
            uVar19 = (ulonglong)bVar11 * 0xbc + (ulonglong)bVar8;
            if (((ulonglong)bVar11 * 0xbc + (ulonglong)bVar8) - 0x582 < 0xb95) {
              uVar4 = (uint)*(ushort *)(&DAT_18022f1b2 + uVar19 * 2);
LAB_1800fed30:
              param_5[local_68] = (byte)(uVar4 >> 0xc) | 0xe0;
              param_5 = local_78;
LAB_1800fed4f:
              bVar8 = (byte)(uVar4 >> 6) & 0x3f | 0x80;
              goto LAB_1800fed5a;
            }
            if (uVar19 - 0x1142 < 0xd3e) {
              uVar4 = (uint)*(ushort *)(&DAT_18023494a + uVar19 * 2);
              goto LAB_1800fed30;
            }
            if (uVar19 - 0x29f8 < 0x168) {
              uVar4 = (uint)*(ushort *)(&DAT_18023325a + uVar19 * 2);
              goto LAB_1800fed30;
            }
            if (uVar19 - 0x2050 < 0x168) {
              uVar4 = (uint)*(ushort *)(&DAT_1802345aa + uVar19 * 2);
              goto LAB_1800fed30;
            }
            uVar4 = (uint)uVar19;
            if (uVar19 - 0x2284 < 0x758) {
              uVar4 = uVar4 - 0x4284;
              param_5[local_68] = (byte)((uVar4 & 0xffff) >> 0xc) | 0xe0;
              local_78[local_68 + 1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
              local_78[local_68 + 2] = (byte)uVar4 & 0x3f | 0x80;
              param_5 = local_78;
              goto LAB_1800fed68;
            }
            lVar14 = 2;
            if (uVar4 < 0x6c) {
              uVar10 = uVar19;
LAB_1800feec0:
              uVar10 = *(ushort *)(&DAT_180231864 + lVar14 * 2) + uVar10;
              if (0xef < uVar10) {
                    /* WARNING: Subroutine does not return */
                puStack_a0 = &UNK_1800ff6b0;
                FUN_180201d02(uVar10,0xf0,&PTR_s_C__Users_burne__cargo_registry_s_1802316b0);
              }
              uVar16 = *(ushort *)(&DAT_18022dbd0 + uVar10 * 2);
              if (uVar16 < 0x800) {
                param_5[local_68] = (byte)(uVar16 >> 6) | 0xc0;
                param_5[local_68 + 1] = (byte)uVar16 & 0x3f | 0x80;
                local_68 = local_68 + 2;
                goto LAB_1800fed6c;
              }
              uVar4 = (uint)uVar16;
LAB_1800fef0d:
              param_5[local_68] = (byte)(uVar4 >> 0xc) | 0xe0;
              goto LAB_1800fed4f;
            }
            uVar10 = uVar19 - 0x77;
            lVar14 = 5;
            if (uVar10 < 8) goto LAB_1800feec0;
            uVar10 = uVar19 - 0x87;
            lVar14 = 8;
            if (uVar10 < 7) goto LAB_1800feec0;
            uVar10 = uVar19 - 0x99;
            lVar14 = 0xb;
            if (uVar10 < 0xf) goto LAB_1800feec0;
            uVar10 = uVar19 - 0xaf;
            lVar14 = 0xe;
            if (uVar10 < 8) goto LAB_1800feec0;
            if (uVar4 == 0xbb) {
              lVar14 = 0x11;
              uVar10 = 0;
              goto LAB_1800feec0;
            }
            uVar10 = uVar19 - 0x292;
            lVar14 = 0x14;
            if (uVar10 < 0x20) goto LAB_1800feec0;
            uVar10 = uVar19 - 0x487;
            lVar14 = 0x17;
            if (uVar10 < 0x17) goto LAB_1800feec0;
            uVar10 = uVar19 - 0x4a6;
            lVar14 = 0x1a;
            if (uVar10 < 0x1e) goto LAB_1800feec0;
            uVar10 = uVar19 - 0x29f0;
            lVar14 = 0x1d;
            if (uVar10 < 8) goto LAB_1800feec0;
            uVar10 = uVar19 - 0x21c4;
            lVar14 = 0x20;
            if (uVar10 < 4) goto LAB_1800feec0;
            uVar10 = uVar19 - 0xcb;
            lVar14 = 2;
            if (9 < uVar10) {
              uVar10 = uVar19 - 0xdc;
              lVar14 = 5;
              if (0x19 < uVar10) {
                uVar10 = uVar19 - 0xfc;
                lVar14 = 8;
                if (0x19 < uVar10) {
                  uVar10 = uVar19 - 0x1d6;
                  lVar14 = 0xb;
                  if (0x10 < uVar10) {
                    uVar10 = uVar19 - 0x1e7;
                    lVar14 = 0xe;
                    if (6 < uVar10) {
                      uVar10 = uVar19 - 0x1f6;
                      lVar14 = 0x11;
                      if (0x10 < uVar10) {
                        uVar10 = uVar19 - 0x207;
                        lVar14 = 0x14;
                        if (6 < uVar10) {
                          uVar10 = uVar19 - 0x234;
                          lVar14 = 0x17;
                          if (5 < uVar10) {
                            if (uVar4 == 0x23a) {
                              lVar14 = 0x1a;
LAB_1800fefc7:
                              uVar10 = 0;
                            }
                            else {
                              uVar10 = uVar19 - 0x23b;
                              lVar14 = 0x1d;
                              if (0x19 < uVar10) {
                                uVar10 = uVar19 - 0x264;
                                lVar14 = 0x20;
                                if (5 < uVar10) {
                                  if (uVar4 == 0x26a) {
                                    lVar14 = 0x23;
                                    goto LAB_1800fefc7;
                                  }
                                  uVar10 = uVar19 - 0x26b;
                                  lVar14 = 0x26;
                                  if (0x19 < uVar10) {
                                    uVar10 = uVar19 - 0x468;
                                    lVar14 = 0x29;
                                    if (0x13 < uVar10) {
                                      uVar10 = uVar19 - 0x47c;
                                      lVar14 = 0x2c;
                                      if (9 < uVar10) {
                                        uVar10 = uVar19 - 0x21ba;
                                        lVar14 = 0x2f;
                                        if (9 < uVar10) {
                                          uVar10 = uVar19 - 0x29dc;
                                          lVar14 = 0x32;
                                          if (9 < uVar10) {
                                            uVar10 = uVar19 - 0x29e6;
                                            lVar14 = 0x35;
                                            if (9 < uVar10) goto LAB_1800ff355;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar16 = (short)uVar10 + *(short *)(&DAT_1802315da + lVar14 * 2);
            uVar4 = (uint)uVar16;
            if (0x7ff < uVar4) goto LAB_1800fef0d;
            param_5[local_68] = (byte)(uVar16 >> 6) | 0xc0;
            param_5[local_68 + 1] = (byte)uVar16 & 0x3f | 0x80;
            local_68 = local_68 + 2;
          }
LAB_1800fed6c:
          if (param_4 <= uVar6) {
            *(undefined1 *)(param_1 + 1) = 0;
            goto LAB_1800ff33b;
          }
          if (local_70 <= local_68 + 2) {
            *(undefined1 *)(param_1 + 1) = 1;
            goto LAB_1800ff33b;
          }
          bVar8 = local_60[uVar6];
        } while ((char)bVar8 < '\0');
        uVar5 = uVar12 + 3;
LAB_1800ff28a:
        param_5[local_68] = bVar8;
        uVar6 = local_68 + 1;
        uVar15 = local_70;
        local_68 = uVar6;
        if (param_4 < uVar5) {
                    /* WARNING: Subroutine does not return */
          puStack_a0 = (undefined *)0x1800ff55f;
          FUN_180201a30(uVar5,param_4,param_4,&PTR_s_C__Users_burne__cargo_registry_s_180239060);
        }
      } while( true );
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
LAB_1800fe9a0:
  *param_1 = 0;
LAB_1800fe9a8:
  param_1[2] = 0;
  return param_1;
code_r0x0001800ff1fb:
  uVar17 = uVar17 + 0x10;
  if (uVar19 - 0x10 < uVar17) goto LAB_1800feb60;
  goto LAB_1800ff1d0;
}


