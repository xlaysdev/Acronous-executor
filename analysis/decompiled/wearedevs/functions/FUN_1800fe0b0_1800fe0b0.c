/* FUN_1800fe0b0 @ 1800fe0b0 */

longlong *
FUN_1800fe0b0(longlong *param_1,byte *param_2,longlong param_3,longlong param_4,byte *param_5,
             ulonglong param_6,char param_7)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  byte bVar11;
  ushort uVar12;
  
  if (param_2[1] == 0) {
LAB_1800fe10f:
    uVar4 = 0;
  }
  else {
    if (param_6 < 3) {
      *(undefined1 *)(param_1 + 1) = 1;
      uVar4 = 0;
      lVar7 = 0;
      goto LAB_1800fe7ec;
    }
    param_2[0] = 0;
    param_2[1] = 0;
    bVar8 = param_2[2];
    if (bVar8 < 2) {
      *param_5 = param_2[4];
      param_2[4] = 0;
      uVar4 = 1;
    }
    else {
      if (bVar8 != 2) {
        if (bVar8 != 3) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("internal error: entered unreachable code",0x28,
                        &PTR_s_C__Users_burne__cargo_registry_s_180238fa8);
        }
        param_2[2] = 4;
        goto LAB_1800fe10f;
      }
      bVar8 = param_2[4];
      uVar6 = bVar8 - 0xc0;
      *param_5 = (byte)((uVar6 & 0xffff) >> 0xc) | 0xe0;
      param_5[1] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
      param_5[2] = bVar8 & 0x3f | 0x80;
      param_2[4] = 0;
      uVar4 = 3;
    }
  }
  if (param_4 != 0) {
    bVar8 = *param_2;
    bVar11 = param_2[2];
    bVar9 = param_2[4];
    lVar7 = 0;
    do {
      if (param_6 <= uVar4 + 2) {
        *(undefined1 *)(param_1 + 1) = 1;
        goto LAB_1800fe7ec;
      }
      bVar2 = *(byte *)(param_3 + lVar7);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar11) {
      case 0:
        if (bVar2 == 0x1b) {
LAB_1800fe140:
          param_2[2] = 5;
          bVar11 = 5;
        }
        else {
          *param_2 = 0;
          if (((char)bVar2 < '\0') || ((bVar2 & 0xfe) == 0xe)) goto LAB_1800fe849;
          param_5[uVar4] = bVar2;
          uVar4 = uVar4 + 1;
          bVar11 = 0;
LAB_1800fe27a:
          bVar8 = 0;
        }
        break;
      case 1:
        if (bVar2 == 0x1b) goto LAB_1800fe140;
        *param_2 = 0;
        if (bVar2 != 0x5c) {
          if (bVar2 == 0x7e) {
            (param_5 + uVar4)[0] = 0xe2;
            (param_5 + uVar4)[1] = 0x80;
            param_5[uVar4 + 2] = 0xbe;
            uVar4 = uVar4 + 3;
          }
          else {
            if (((char)bVar2 < '\0') || ((bVar2 & 0xfe) == 0xe)) goto LAB_1800fe849;
            param_5[uVar4] = bVar2;
            uVar4 = uVar4 + 1;
          }
          bVar11 = 1;
LAB_1800fe439:
          bVar8 = 0;
          break;
        }
        (param_5 + uVar4)[0] = 0xc2;
        (param_5 + uVar4)[1] = 0xa5;
        bVar11 = 1;
        bVar8 = 0;
LAB_1800fe40f:
        uVar4 = uVar4 + 2;
        break;
      case 2:
        if (bVar2 == 0x1b) goto LAB_1800fe140;
        *param_2 = 0;
        if ((byte)(bVar2 - 0x21) < 0x3f) {
          param_5[uVar4] = 0xef;
          param_5[uVar4 + 1] = (byte)(bVar2 + 0x3f40 >> 6) & 0xbf;
          param_5[uVar4 + 2] = bVar2 & 0x3f | 0x80;
          uVar4 = uVar4 + 3;
          bVar11 = 2;
          goto LAB_1800fe439;
        }
        goto LAB_1800fe849;
      case 3:
        if (bVar2 == 0x1b) goto LAB_1800fe140;
        *param_2 = 0;
        if ((byte)(bVar2 - 0x21) < 0x5e) {
          param_2[4] = bVar2;
          param_2[2] = 4;
          bVar11 = 4;
          bVar9 = bVar2;
          goto LAB_1800fe27a;
        }
LAB_1800fe849:
        *(undefined2 *)(param_1 + 1) = 0x102;
LAB_1800fe87c:
        *(undefined1 *)((longlong)param_1 + 10) = 0;
        lVar7 = lVar7 + 1;
        goto LAB_1800fe7ec;
      case 4:
        if (bVar2 != 0x1b) {
          param_2[2] = 3;
          bVar2 = bVar2 - 0x21;
          if (bVar9 == 0x24) {
            if (0x52 < bVar2) goto LAB_1800fe39a;
            param_5[uVar4] = 0xe3;
            param_5[uVar4 + 1] = (byte)(bVar2 + 0x3041 >> 6) & 0x83;
            param_5[uVar4 + 2] = (byte)(bVar2 + 0x3041) & 0x3f | 0x80;
            uVar4 = uVar4 + 3;
            bVar11 = 3;
            bVar9 = 0x24;
            break;
          }
          if ((bVar9 == 0x25) && (bVar2 < 0x56)) {
            param_5[uVar4] = 0xe3;
            param_5[uVar4 + 1] = (byte)(bVar2 + 0x30a1 >> 6) & 0x87;
            param_5[uVar4 + 2] = (byte)(bVar2 + 0x30a1) & 0x3f | 0x80;
            uVar4 = uVar4 + 3;
            bVar11 = 3;
            bVar9 = 0x25;
            break;
          }
LAB_1800fe39a:
          if (bVar2 < 0x5e) {
            lVar10 = (ulonglong)(byte)(bVar9 - 0x21) * 0x5e;
            uVar1 = lVar10 + (ulonglong)bVar2;
            if ((lVar10 + (ulonglong)bVar2) - 0x582 < 0xb95) {
              uVar6 = (uint)*(ushort *)(&DAT_18022f1b2 + uVar1 * 2);
            }
            else if (uVar1 - 0x1142 < 0xd3e) {
              uVar6 = (uint)*(ushort *)(&DAT_18023494a + uVar1 * 2);
            }
            else {
              if (0x167 < uVar1 - 0x2050) {
                lVar10 = 2;
                uVar6 = (uint)uVar1;
                if (uVar6 < 0x6c) {
                  uVar3 = uVar1;
LAB_1800fe543:
                  uVar3 = *(ushort *)(&DAT_180231864 + lVar10 * 2) + uVar3;
                  if (0xef < uVar3) {
                    /* WARNING: Subroutine does not return */
                    FUN_180201d02(uVar3,0xf0,&PTR_s_C__Users_burne__cargo_registry_s_1802316b0);
                  }
                  uVar12 = *(ushort *)(&DAT_18022dbd0 + uVar3 * 2);
                  if (0x7ff < uVar12) {
                    uVar6 = (uint)uVar12;
                    goto LAB_1800fe593;
                  }
                  param_5[uVar4] = (byte)(uVar12 >> 6) | 0xc0;
                  param_5[uVar4 + 1] = (byte)uVar12 & 0x3f | 0x80;
                }
                else {
                  uVar3 = uVar1 - 0x77;
                  lVar10 = 5;
                  if (uVar3 < 8) goto LAB_1800fe543;
                  uVar3 = uVar1 - 0x87;
                  lVar10 = 8;
                  if (uVar3 < 7) goto LAB_1800fe543;
                  uVar3 = uVar1 - 0x99;
                  lVar10 = 0xb;
                  if (uVar3 < 0xf) goto LAB_1800fe543;
                  uVar3 = uVar1 - 0xaf;
                  lVar10 = 0xe;
                  if (uVar3 < 8) goto LAB_1800fe543;
                  if (uVar6 == 0xbb) {
                    lVar10 = 0x11;
                    uVar3 = 0;
                    goto LAB_1800fe543;
                  }
                  uVar3 = uVar1 - 0x292;
                  lVar10 = 0x14;
                  if (uVar3 < 0x20) goto LAB_1800fe543;
                  uVar3 = uVar1 - 0x487;
                  lVar10 = 0x17;
                  if (uVar3 < 0x17) goto LAB_1800fe543;
                  uVar3 = uVar1 - 0x4a6;
                  lVar10 = 0x1a;
                  if (uVar3 < 0x1e) goto LAB_1800fe543;
                  uVar3 = uVar1 - 0x29f0;
                  lVar10 = 0x1d;
                  if (uVar3 < 8) goto LAB_1800fe543;
                  uVar3 = uVar1 - 0x21c4;
                  lVar10 = 0x20;
                  if (uVar3 < 4) goto LAB_1800fe543;
                  uVar3 = uVar1 - 0xcb;
                  lVar10 = 2;
                  if (9 < uVar3) {
                    uVar3 = uVar1 - 0xdc;
                    lVar10 = 5;
                    if (0x19 < uVar3) {
                      uVar3 = uVar1 - 0xfc;
                      lVar10 = 8;
                      if (0x19 < uVar3) {
                        uVar3 = uVar1 - 0x1d6;
                        lVar10 = 0xb;
                        if (0x10 < uVar3) {
                          uVar3 = uVar1 - 0x1e7;
                          lVar10 = 0xe;
                          if (6 < uVar3) {
                            uVar3 = uVar1 - 0x1f6;
                            lVar10 = 0x11;
                            if (0x10 < uVar3) {
                              uVar3 = uVar1 - 0x207;
                              lVar10 = 0x14;
                              if (6 < uVar3) {
                                uVar3 = uVar1 - 0x234;
                                lVar10 = 0x17;
                                if (5 < uVar3) {
                                  if (uVar6 == 0x23a) {
                                    lVar10 = 0x1a;
LAB_1800fe68f:
                                    uVar3 = 0;
                                  }
                                  else {
                                    uVar3 = uVar1 - 0x23b;
                                    lVar10 = 0x1d;
                                    if (0x19 < uVar3) {
                                      uVar3 = uVar1 - 0x264;
                                      lVar10 = 0x20;
                                      if (5 < uVar3) {
                                        if (uVar6 == 0x26a) {
                                          lVar10 = 0x23;
                                          goto LAB_1800fe68f;
                                        }
                                        uVar3 = uVar1 - 0x26b;
                                        lVar10 = 0x26;
                                        if (0x19 < uVar3) {
                                          uVar3 = uVar1 - 0x468;
                                          lVar10 = 0x29;
                                          if (0x13 < uVar3) {
                                            uVar3 = uVar1 - 0x47c;
                                            lVar10 = 0x2c;
                                            if (9 < uVar3) {
                                              uVar3 = uVar1 - 0x21ba;
                                              lVar10 = 0x2f;
                                              if (9 < uVar3) {
                                                uVar3 = uVar1 - 0x29dc;
                                                lVar10 = 0x32;
                                                if (9 < uVar3) {
                                                  uVar3 = uVar1 - 0x29e6;
                                                  lVar10 = 0x35;
                                                  if (9 < uVar3) goto LAB_1800fe876;
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
                  uVar12 = (short)uVar3 + *(short *)(&DAT_1802315da + lVar10 * 2);
                  uVar6 = (uint)uVar12;
                  if (0x7ff < uVar6) goto LAB_1800fe593;
                  param_5[uVar4] = (byte)(uVar12 >> 6) | 0xc0;
                  param_5[uVar4 + 1] = (byte)uVar12 & 0x3f | 0x80;
                }
                bVar11 = 3;
                goto LAB_1800fe40f;
              }
              uVar6 = (uint)*(ushort *)(&DAT_1802345aa + uVar1 * 2);
            }
LAB_1800fe593:
            param_5[uVar4] = (byte)(uVar6 >> 0xc) | 0xe0;
            param_5[uVar4 + 1] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
            param_5[uVar4 + 2] = (byte)uVar6 & 0x3f | 0x80;
            bVar11 = 3;
            uVar4 = uVar4 + 3;
            break;
          }
LAB_1800fe876:
          *(undefined2 *)(param_1 + 1) = 0x202;
          goto LAB_1800fe87c;
        }
        param_2[2] = 5;
        *(undefined2 *)(param_1 + 1) = 0x102;
        *(undefined1 *)((longlong)param_1 + 10) = 1;
        lVar7 = lVar7 + 1;
        goto LAB_1800fe7ec;
      case 5:
        if ((bVar2 != 0x24) && (bVar2 != 0x28)) {
          *param_2 = 0;
          param_2[2] = param_2[3];
          *(undefined2 *)(param_1 + 1) = 0x102;
          *(undefined1 *)((longlong)param_1 + 10) = 0;
          goto LAB_1800fe7ec;
        }
        param_2[4] = bVar2;
        param_2[2] = 6;
        bVar11 = 6;
        bVar9 = bVar2;
        break;
      case 6:
        bVar5 = bVar9 ^ 0x28;
        if (bVar2 == 0x42 && bVar5 == 0) {
          bVar11 = 0;
        }
        else {
          bVar11 = 1;
          if (((bVar2 != 0x4a || bVar5 != 0) && (bVar11 = 2, bVar5 != 0 || bVar2 != 0x49)) &&
             ((bVar9 != 0x24 || (bVar11 = 3, (bVar2 | 2) != 0x42)))) {
            param_2[0] = 0;
            param_2[1] = 1;
            param_2[2] = param_2[3];
            *(undefined2 *)(param_1 + 1) = 0x102;
            *(undefined1 *)((longlong)param_1 + 10) = 1;
            goto LAB_1800fe7ec;
          }
        }
        param_2[4] = 0;
        param_2[2] = bVar11;
        param_2[3] = bVar11;
        *param_2 = 1;
        if ((bVar8 & 1) != 0) {
          *(undefined2 *)(param_1 + 1) = 0x302;
          *(undefined1 *)((longlong)param_1 + 10) = 3;
          lVar7 = lVar7 + 1;
          goto LAB_1800fe7ec;
        }
        bVar8 = 1;
        bVar9 = 0;
      }
      lVar7 = lVar7 + 1;
    } while (param_4 != lVar7);
  }
  if (param_7 == '\0') {
LAB_1800fe7e5:
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else if (param_2[2] - 4 < 2) {
    param_2[2] = param_2[3];
    *(undefined2 *)(param_1 + 1) = 0x102;
    *(undefined1 *)((longlong)param_1 + 10) = 0;
  }
  else {
    if (param_2[2] != 6) goto LAB_1800fe7e5;
    param_2[1] = 1;
    param_2[2] = param_2[3];
    *(undefined2 *)(param_1 + 1) = 0x102;
    *(undefined1 *)((longlong)param_1 + 10) = 1;
  }
  lVar7 = param_4;
LAB_1800fe7ec:
  *param_1 = lVar7;
  param_1[2] = uVar4;
  return param_1;
}


