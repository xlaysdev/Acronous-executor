/* FUN_1800f9d30 @ 1800f9d30 */

ulonglong *
FUN_1800f9d30(ulonglong *param_1,byte *param_2,longlong param_3,ulonglong param_4,longlong param_5,
             ulonglong param_6,char param_7)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  byte bVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_100 [96];
  undefined *puStack_a0;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  byte *local_48;
  
  local_70 = param_5;
  local_68 = param_6;
  bVar11 = *param_2;
  if (bVar11 == 0) {
    uVar18 = 0;
    uVar10 = 0;
    while( true ) {
      pcVar1 = (char *)(uVar18 + param_3);
      uVar6 = param_4 - uVar18;
      uVar9 = param_6 - uVar10;
      local_60 = uVar6;
      if (uVar9 < uVar6) {
        local_60 = uVar9;
      }
      pcVar2 = (char *)(param_5 + uVar10);
      if ((((uint)pcVar2 ^ (uint)pcVar1) & 7) != 0) break;
      uVar16 = -(uint)pcVar1 & 7;
      if (local_60 < (ulonglong)uVar16 + 0x10) break;
      if ((ulonglong)uVar16 == 0) {
        uVar14 = 0;
        goto LAB_1800f9f4d;
      }
      cVar7 = *pcVar1;
      if (cVar7 < '\0') {
        uVar14 = 0;
      }
      else {
        *pcVar2 = cVar7;
        uVar14 = 1;
        if (uVar16 == 1) goto LAB_1800f9f4d;
        cVar7 = pcVar1[1];
        if (-1 < cVar7) {
          pcVar2[1] = cVar7;
          uVar14 = 2;
          if (uVar16 == 2) goto LAB_1800f9f4d;
          cVar7 = pcVar1[2];
          if (-1 < cVar7) {
            pcVar2[2] = cVar7;
            uVar14 = 3;
            if (uVar16 == 3) goto LAB_1800f9f4d;
            cVar7 = pcVar1[3];
            if (-1 < cVar7) {
              pcVar2[3] = cVar7;
              uVar14 = 4;
              if (uVar16 == 4) goto LAB_1800f9f4d;
              cVar7 = pcVar1[4];
              if (-1 < cVar7) {
                pcVar2[4] = cVar7;
                uVar14 = 5;
                if (uVar16 == 5) goto LAB_1800f9f4d;
                cVar7 = pcVar1[5];
                if (-1 < cVar7) {
                  pcVar2[5] = cVar7;
                  uVar14 = 6;
                  if (uVar16 == 6) {
LAB_1800f9f4d:
LAB_1800f9f60:
                    uVar17 = *(ulonglong *)(pcVar1 + uVar14);
                    uVar8 = *(ulonglong *)(pcVar1 + uVar14 + 8);
                    *(ulonglong *)(param_5 + uVar10 + uVar14) = uVar17;
                    *(ulonglong *)(param_5 + uVar10 + 8 + uVar14) = uVar8;
                    uVar17 = uVar17 & 0x8080808080808080;
                    uVar8 = uVar8 & 0x8080808080808080;
                    if (uVar8 == 0 && uVar17 == 0) goto code_r0x0001800f9f8a;
                    if (uVar17 == 0) {
                      uVar16 = 0;
                      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
                        uVar16 = uVar16 + 1;
                      }
                      uVar6 = (ulonglong)(uVar16 >> 3) + 8;
                    }
                    else {
                      uVar16 = 0;
                      for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
                        uVar16 = uVar16 + 1;
                      }
                      uVar6 = (ulonglong)(uVar16 >> 3);
                    }
                    uVar14 = uVar14 + uVar6;
                    cVar7 = pcVar1[uVar14];
                    goto LAB_1800f9fca;
                  }
                  cVar7 = pcVar1[6];
                  if (-1 < cVar7) {
                    pcVar2[6] = cVar7;
                    uVar14 = 7;
                    goto LAB_1800f9f4d;
                  }
                }
              }
            }
          }
        }
      }
LAB_1800f9fca:
      uVar18 = uVar18 + uVar14;
      local_60 = uVar14 + uVar10;
      if (param_6 <= uVar14 + uVar10 + 2) {
        uVar6 = 1;
        goto LAB_1800fa8f7;
      }
      uVar18 = uVar18 + 1;
      do {
        uVar10 = local_60;
        bVar11 = cVar7 + 0x5f;
        local_58 = param_3;
        local_50 = param_6;
        local_48 = param_2;
        if (0x5d < bVar11) {
          if (cVar7 == -0x72) {
            if (uVar18 < param_4) {
              cVar7 = *(char *)(param_3 + uVar18);
              uVar6 = uVar18 + 1;
              if ((byte)(cVar7 + 0x5fU) < 0x3f) {
                uVar16 = (byte)(cVar7 + 0x5fU) - 0x9f;
                *(undefined1 *)(param_5 + local_60) = 0xef;
                *(byte *)(param_5 + 1 + local_60) = (byte)(uVar16 >> 6) & 0xbf;
                *(byte *)(param_5 + local_60 + 2) = (byte)uVar16 & 0x3f | 0x80;
                local_60 = local_60 + 3;
                goto LAB_1800fa45f;
              }
LAB_1800faa01:
              *(undefined1 *)(param_1 + 1) = 2;
              if (-1 < cVar7) {
LAB_1800faa1b:
                *(undefined2 *)((longlong)param_1 + 9) = 1;
                goto LAB_1800faafe;
              }
LAB_1800face2:
              *(undefined2 *)((longlong)param_1 + 9) = 2;
LAB_1800fad5a:
              *param_1 = uVar18 + 1;
              goto LAB_1800fab02;
            }
            if (param_7 == '\0') {
              *param_2 = 4;
              *(undefined1 *)(param_1 + 1) = 0;
              goto LAB_1800faafe;
            }
LAB_1800faaf4:
            *(undefined2 *)(param_1 + 1) = 0x102;
            uVar6 = uVar18;
          }
          else {
            if (cVar7 != -0x71) goto LAB_1800faaf4;
            if (param_4 <= uVar18) {
              if (param_7 == '\0') {
                *param_2 = 2;
                *(undefined1 *)(param_1 + 1) = 0;
                goto LAB_1800faafe;
              }
              goto LAB_1800faaf4;
            }
            cVar7 = *(char *)(param_3 + uVar18);
            bVar11 = cVar7 + 0x5f;
            if (0x5d < bVar11) goto LAB_1800faa01;
            if (param_4 <= uVar18 + 1) {
              if (param_7 == '\0') {
                *param_2 = 3;
                param_2[1] = bVar11;
                *(undefined1 *)(param_1 + 1) = 0;
              }
              else {
                *(undefined2 *)(param_1 + 1) = 0x202;
                *(undefined1 *)((longlong)param_1 + 10) = 0;
              }
              goto LAB_1800fad5a;
            }
            cVar7 = *(char *)(param_3 + 1 + uVar18);
            uVar6 = uVar18 + 2;
            bVar12 = cVar7 + 0x5f;
            if (0x5d < bVar12) {
              *(undefined1 *)(param_1 + 1) = 2;
              if (cVar7 < '\0') {
                *(undefined2 *)((longlong)param_1 + 9) = 3;
                uVar18 = uVar6;
                goto LAB_1800faafe;
              }
              goto LAB_1800face2;
            }
            lVar15 = (ulonglong)bVar11 * 0x5e + (ulonglong)bVar12;
            if (((ulonglong)bVar11 * 0x5e + (ulonglong)bVar12) - 0x582 < 0x16a9) {
              uVar13 = *(ushort *)(&DAT_1802260fe + lVar15 * 2);
              *(byte *)(param_5 + local_60) = (byte)(uVar13 >> 0xc) | 0xe0;
              *(byte *)(param_5 + 1 + local_60) = (byte)(uVar13 >> 6) & 0x3f | 0x80;
              *(byte *)(param_5 + local_60 + 2) = (byte)uVar13 & 0x3f | 0x80;
              local_60 = local_60 + 2;
LAB_1800fa152:
              local_60 = local_60 + 1;
              goto LAB_1800fa45f;
            }
            uVar18 = lVar15 - 0x6c;
            lVar5 = 2;
            if (uVar18 < 0xb) {
LAB_1800fa36c:
              uVar18 = *(ushort *)(&DAT_1802321ce + lVar5 * 2) + uVar18;
              if (0xfe < uVar18) {
                    /* WARNING: Subroutine does not return */
                puStack_a0 = (undefined *)0x1800fb0d7;
                FUN_180201d02(uVar18,0xff,&PTR_s_C__Users_burne__cargo_registry_s_180231948);
              }
              uVar13 = *(ushort *)(&DAT_18022defa + uVar18 * 2);
              if (uVar13 != 0) {
                if (uVar13 < 0x800) {
                  *(byte *)(param_5 + local_60) = (byte)(uVar13 >> 6) | 0xc0;
                  *(byte *)(param_5 + 1 + local_60) = (byte)uVar13 & 0x3f | 0x80;
                  local_60 = local_60 + 2;
                }
                else {
                  *(byte *)(param_5 + local_60) = (byte)(uVar13 >> 0xc) | 0xe0;
                  *(byte *)(param_5 + 1 + local_60) = (byte)(uVar13 >> 6) & 0x3f | 0x80;
                  *(byte *)(param_5 + 2 + local_60) = (byte)uVar13 & 0x3f | 0x80;
                  local_60 = local_60 + 3;
                }
                goto LAB_1800fa45f;
              }
            }
            else {
              uVar18 = lVar15 - 0x7f;
              lVar5 = 5;
              if (uVar18 < 3) goto LAB_1800fa36c;
              uVar18 = lVar15 - 0xa8;
              lVar5 = 8;
              if (uVar18 < 7) goto LAB_1800fa36c;
              uVar18 = lVar15 - 0x216;
              lVar5 = 0xb;
              if (uVar18 < 0xc) goto LAB_1800fa36c;
              uVar18 = lVar15 - 0x226;
              lVar5 = 0xe;
              if (uVar18 < 0xc) goto LAB_1800fa36c;
              uVar18 = lVar15 - 0x260;
              lVar5 = 0x11;
              if (uVar18 < 2) goto LAB_1800fa36c;
              uVar18 = lVar15 - 0x290;
              lVar5 = 0x14;
              if (uVar18 < 2) goto LAB_1800fa36c;
              uVar18 = lVar15 - 0x2f0;
              lVar5 = 0x17;
              if (uVar18 < 0x10) goto LAB_1800fa36c;
              uVar18 = lVar15 - 0x310;
              lVar5 = 0x1a;
              if (uVar18 < 0x10) goto LAB_1800fa36c;
              uVar18 = lVar15 - 0x34e;
              lVar5 = 0x1d;
              if (uVar18 < 0x57) goto LAB_1800fa36c;
              uVar18 = lVar15 - 0x3ac;
              lVar5 = 0x20;
              if (uVar18 < 0x57) goto LAB_1800fa36c;
            }
            if (lVar15 - 0x255U < 0xb) {
              *(undefined1 *)(param_5 + local_60) = 0xd0;
              *(char *)(param_5 + 1 + local_60) = (char)(lVar15 - 0x255U) + -0x7e;
              local_60 = local_60 + 1;
              goto LAB_1800fa152;
            }
            if (lVar15 - 0x285U < 0xb) {
              *(undefined1 *)(param_5 + local_60) = 0xd1;
              *(char *)(param_5 + 1 + local_60) = (char)(lVar15 - 0x285U) + -0x6e;
              local_60 = local_60 + 1;
              goto LAB_1800fa152;
            }
            *(undefined2 *)(param_1 + 1) = 0x302;
          }
          *(undefined1 *)((longlong)param_1 + 10) = 0;
          uVar18 = uVar6;
LAB_1800faafe:
          *param_1 = uVar18;
          goto LAB_1800fab02;
        }
        if (param_4 <= uVar18) {
          if (param_7 != '\0') goto LAB_1800faaf4;
          *param_2 = 1;
          param_2[1] = bVar11;
          *(undefined1 *)(param_1 + 1) = 0;
          goto LAB_1800faafe;
        }
        cVar3 = *(char *)(param_3 + uVar18);
        uVar6 = uVar18 + 1;
        bVar12 = cVar3 + 0x5f;
        if (cVar7 == -0x5b) {
          if (0x55 < bVar12) goto LAB_1800fa230;
          uVar16 = bVar12 + 0x30a1;
          *(undefined1 *)(param_5 + local_60) = 0xe3;
          bVar11 = (byte)(uVar16 >> 6) & 0x87;
        }
        else if ((cVar7 == -0x5c) && (bVar12 < 0x53)) {
          uVar16 = bVar12 + 0x3041;
          *(undefined1 *)(param_5 + local_60) = 0xe3;
          bVar11 = (byte)(uVar16 >> 6) & 0x83;
        }
        else {
LAB_1800fa230:
          if (0x5d < bVar12) {
            *(undefined1 *)(param_1 + 1) = 2;
            if (-1 < cVar3) goto LAB_1800faa1b;
            *(undefined2 *)((longlong)param_1 + 9) = 2;
            *param_1 = uVar6;
            goto LAB_1800fab02;
          }
          uVar18 = (ulonglong)bVar11 * 0x5e + (ulonglong)bVar12;
          if (((ulonglong)bVar11 * 0x5e + (ulonglong)bVar12) - 0x582 < 0xb95) {
            uVar16 = (uint)*(ushort *)(&DAT_18022f1b2 + uVar18 * 2);
          }
          else if (uVar18 - 0x1142 < 0xd3e) {
            uVar16 = (uint)*(ushort *)(&DAT_18023494a + uVar18 * 2);
          }
          else {
            if (0x167 < uVar18 - 0x2050) {
              lVar15 = 2;
              uVar16 = (uint)uVar18;
              if (uVar16 < 0x6c) {
                uVar10 = uVar18;
              }
              else {
                uVar10 = uVar18 - 0x77;
                lVar15 = 5;
                if (7 < uVar10) {
                  uVar10 = uVar18 - 0x87;
                  lVar15 = 8;
                  if (6 < uVar10) {
                    uVar10 = uVar18 - 0x99;
                    lVar15 = 0xb;
                    if (0xe < uVar10) {
                      uVar10 = uVar18 - 0xaf;
                      lVar15 = 0xe;
                      if (7 < uVar10) {
                        if (uVar16 == 0xbb) {
                          lVar15 = 0x11;
                          uVar10 = 0;
                        }
                        else {
                          uVar10 = uVar18 - 0x292;
                          lVar15 = 0x14;
                          if (0x1f < uVar10) {
                            uVar10 = uVar18 - 0x487;
                            lVar15 = 0x17;
                            if (0x16 < uVar10) {
                              uVar10 = uVar18 - 0x4a6;
                              lVar15 = 0x1a;
                              if (0x1d < uVar10) {
                                uVar10 = uVar18 - 0x21c4;
                                lVar15 = 0x20;
                                if (3 < uVar10) {
                                  uVar10 = uVar18 - 0xcb;
                                  lVar15 = 2;
                                  if (9 < uVar10) {
                                    uVar10 = uVar18 - 0xdc;
                                    lVar15 = 5;
                                    if (0x19 < uVar10) {
                                      uVar10 = uVar18 - 0xfc;
                                      lVar15 = 8;
                                      if (0x19 < uVar10) {
                                        uVar10 = uVar18 - 0x1d6;
                                        lVar15 = 0xb;
                                        if (0x10 < uVar10) {
                                          uVar10 = uVar18 - 0x1e7;
                                          lVar15 = 0xe;
                                          if (6 < uVar10) {
                                            uVar10 = uVar18 - 0x1f6;
                                            lVar15 = 0x11;
                                            if (0x10 < uVar10) {
                                              uVar10 = uVar18 - 0x207;
                                              lVar15 = 0x14;
                                              if (6 < uVar10) {
                                                uVar10 = uVar18 - 0x234;
                                                lVar15 = 0x17;
                                                if (5 < uVar10) {
                                                  if (uVar16 == 0x23a) {
                                                    lVar15 = 0x1a;
LAB_1800fa756:
                                                    uVar10 = 0;
                                                  }
                                                  else {
                                                    uVar10 = uVar18 - 0x23b;
                                                    lVar15 = 0x1d;
                                                    if (0x19 < uVar10) {
                                                      uVar10 = uVar18 - 0x264;
                                                      lVar15 = 0x20;
                                                      if (5 < uVar10) {
                                                        if (uVar16 == 0x26a) {
                                                          lVar15 = 0x23;
                                                          goto LAB_1800fa756;
                                                        }
                                                        uVar10 = uVar18 - 0x26b;
                                                        lVar15 = 0x26;
                                                        if (0x19 < uVar10) {
                                                          uVar10 = uVar18 - 0x468;
                                                          lVar15 = 0x29;
                                                          if (0x13 < uVar10) {
                                                            uVar10 = uVar18 - 0x47c;
                                                            lVar15 = 0x2c;
                                                            if (9 < uVar10) {
                                                              uVar10 = uVar18 - 0x21ba;
                                                              lVar15 = 0x2f;
                                                              if (9 < uVar10) {
                                                                *(undefined2 *)(param_1 + 1) = 0x202
                                                                ;
                                                                *(undefined1 *)
                                                                 ((longlong)param_1 + 10) = 0;
                                                                *param_1 = uVar6;
                                                                param_1[2] = local_60;
                                                                return param_1;
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
                                  uVar13 = (short)uVar10 + *(short *)(&DAT_1802315da + lVar15 * 2);
                                  if (uVar13 < 0x800) {
                                    *(byte *)(param_5 + local_60) = (byte)(uVar13 >> 6) | 0xc0;
                                    *(byte *)(param_5 + 1 + local_60) = (byte)uVar13 & 0x3f | 0x80;
                                    local_60 = local_60 + 2;
                                  }
                                  else {
                                    *(byte *)(param_5 + local_60) = (byte)(uVar13 >> 0xc) | 0xe0;
                                    *(byte *)(param_5 + 1 + local_60) =
                                         (byte)(uVar13 >> 6) & 0x3f | 0x80;
                                    *(byte *)(param_5 + 2 + local_60) = (byte)uVar13 & 0x3f | 0x80;
                                    local_60 = local_60 + 3;
                                  }
                                  goto LAB_1800fa45f;
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
              uVar10 = *(ushort *)(&DAT_180231864 + lVar15 * 2) + uVar10;
              if (0xef < uVar10) {
                    /* WARNING: Subroutine does not return */
                puStack_a0 = &UNK_1800fb0eb;
                FUN_180201d02(uVar10,0xf0,&PTR_s_C__Users_burne__cargo_registry_s_1802316b0);
              }
              uVar13 = *(ushort *)(&DAT_18022dbd0 + uVar10 * 2);
              if (uVar13 < 0x800) {
                *(byte *)(param_5 + local_60) = (byte)(uVar13 >> 6) | 0xc0;
                *(byte *)(param_5 + 1 + local_60) = (byte)uVar13 & 0x3f | 0x80;
                local_60 = local_60 + 2;
              }
              else {
                *(byte *)(param_5 + local_60) = (byte)(uVar13 >> 0xc) | 0xe0;
                *(byte *)(param_5 + 1 + local_60) = (byte)(uVar13 >> 6) & 0x3f | 0x80;
                *(byte *)(param_5 + 2 + local_60) = (byte)uVar13 & 0x3f | 0x80;
                local_60 = local_60 + 3;
              }
              goto LAB_1800fa45f;
            }
            uVar16 = (uint)*(ushort *)(&DAT_1802345aa + uVar18 * 2);
          }
          *(byte *)(param_5 + local_60) = (byte)(uVar16 >> 0xc) | 0xe0;
          bVar11 = (byte)(uVar16 >> 6) & 0x3f | 0x80;
        }
        local_60 = local_60 + 2;
        *(byte *)(param_5 + 1 + uVar10) = bVar11;
        *(byte *)(param_5 + local_60) = (byte)uVar16 & 0x3f | 0x80;
        local_60 = uVar10 + 3;
LAB_1800fa45f:
        uVar18 = uVar6;
        if (param_4 <= uVar6) {
          *(undefined1 *)(param_1 + 1) = 0;
          goto LAB_1800faafe;
        }
        if (param_6 <= local_60 + 2) {
          *(undefined1 *)(param_1 + 1) = 1;
          goto LAB_1800faafe;
        }
        cVar7 = *(char *)(param_3 + uVar6);
        uVar18 = uVar6 + 1;
      } while (cVar7 < '\0');
      *(char *)(param_5 + local_60) = cVar7;
      uVar10 = local_60 + 1;
      if (param_6 < uVar10) {
                    /* WARNING: Subroutine does not return */
        puStack_a0 = &UNK_1800faf9d;
        local_60 = uVar10;
        FUN_180201a30(uVar10,param_6,param_6,&PTR_s_C__Users_burne__cargo_registry_s_180238aa8);
      }
    }
    uVar14 = 0;
LAB_1800f9e3a:
    if (uVar14 < local_60) {
      while (cVar7 = pcVar1[uVar14], -1 < cVar7) {
        pcVar2[uVar14] = cVar7;
        uVar14 = uVar14 + 1;
        if (local_60 == uVar14) goto LAB_1800fa8e6;
      }
      goto LAB_1800f9fca;
    }
LAB_1800fa8e6:
    uVar6 = (ulonglong)(uVar9 < uVar6);
    uVar18 = uVar18 + local_60;
    local_60 = uVar10 + local_60;
LAB_1800fa8f7:
    *param_1 = uVar18;
    param_1[1] = (ulonglong)auStack_100 | uVar6;
LAB_1800fab02:
    param_1[2] = local_60;
  }
  else {
    if (param_4 == 0) {
      if (param_7 == '\0') {
        *(undefined1 *)(param_1 + 1) = 0;
      }
      else {
        *param_2 = 0;
        *(undefined1 *)(param_1 + 1) = 2;
        *(char *)((longlong)param_1 + 9) = (bVar11 == 3) + '\x01';
        *(undefined1 *)((longlong)param_1 + 10) = 0;
      }
      *param_1 = 0;
    }
    else {
      if (2 < param_6) {
                    /* WARNING: Could not emulate address calculation at 0x0001800f9d90 */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (ulonglong *)
                 (*(code *)(&DAT_180238ac0 + *(int *)(&DAT_180238ac0 + (ulonglong)(bVar11 - 1) * 4))
                 )();
        return puVar4;
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 0;
    }
    param_1[2] = 0;
  }
  return param_1;
code_r0x0001800f9f8a:
  uVar14 = uVar14 + 0x10;
  if (local_60 - 0x10 < uVar14) goto LAB_1800f9e3a;
  goto LAB_1800f9f60;
}


