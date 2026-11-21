/* FUN_1800fd170 @ 1800fd170 */

ulonglong *
FUN_1800fd170(ulonglong *param_1,char *param_2,char *param_3,ulonglong param_4,byte *param_5,
             ulonglong param_6,char param_7)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  byte bVar12;
  ushort uVar13;
  ulonglong uVar14;
  short sVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte *pbVar19;
  uint uVar20;
  undefined1 auStack_100 [96];
  undefined *puStack_a0;
  byte *local_78;
  byte *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  char *local_50;
  char *local_48;
  
  local_70 = param_5;
  local_68 = param_6;
  local_50 = param_2;
  if (*param_2 == '\0') {
    uVar6 = 0;
    uVar16 = 0;
LAB_1800fd248:
    uVar17 = param_6 - uVar6;
    local_48 = param_3;
    if (param_6 < uVar6) {
                    /* WARNING: Subroutine does not return */
      puStack_a0 = (undefined *)0x1800fe05b;
      FUN_180201a30(uVar6,param_6,param_6,&PTR_s_C__Users_burne__cargo_registry_s_180238ee0);
    }
    pbVar1 = (byte *)(param_3 + uVar16);
    uVar14 = param_4 - uVar16;
    uVar5 = uVar14;
    if (uVar17 < uVar14) {
      uVar5 = uVar17;
    }
    pbVar19 = param_5 + uVar6;
    if ((((uint)pbVar1 ^ (uint)pbVar19) & 7) == 0) {
      uVar20 = -(uint)pbVar1 & 7;
      if (uVar5 < (ulonglong)uVar20 + 0x10) goto LAB_1800fd297;
      if ((ulonglong)uVar20 == 0) {
        uVar11 = 0;
        goto LAB_1800fd3ac;
      }
      bVar10 = *pbVar1;
      if ((char)bVar10 < '\0') {
        uVar11 = 0;
      }
      else {
        *pbVar19 = bVar10;
        uVar11 = 1;
        if (uVar20 == 1) goto LAB_1800fd3ac;
        bVar10 = pbVar1[1];
        if (-1 < (char)bVar10) {
          pbVar19[1] = bVar10;
          uVar11 = 2;
          if (uVar20 == 2) goto LAB_1800fd3ac;
          bVar10 = pbVar1[2];
          if (-1 < (char)bVar10) {
            pbVar19[2] = bVar10;
            uVar11 = 3;
            if (uVar20 == 3) goto LAB_1800fd3ac;
            bVar10 = pbVar1[3];
            if (-1 < (char)bVar10) {
              pbVar19[3] = bVar10;
              uVar11 = 4;
              if (uVar20 == 4) goto LAB_1800fd3ac;
              bVar10 = pbVar1[4];
              if (-1 < (char)bVar10) {
                pbVar19[4] = bVar10;
                uVar11 = 5;
                if (uVar20 == 5) goto LAB_1800fd3ac;
                bVar10 = pbVar1[5];
                if (-1 < (char)bVar10) {
                  pbVar19[5] = bVar10;
                  uVar11 = 6;
                  if (uVar20 == 6) {
LAB_1800fd3ac:
LAB_1800fd3c0:
                    uVar18 = *(ulonglong *)(pbVar1 + uVar11);
                    uVar8 = *(ulonglong *)(pbVar1 + uVar11 + 8);
                    *(ulonglong *)(param_5 + uVar11 + uVar6) = uVar18;
                    *(ulonglong *)(param_5 + uVar11 + uVar6 + 8) = uVar8;
                    uVar18 = uVar18 & 0x8080808080808080;
                    uVar8 = uVar8 & 0x8080808080808080;
                    if (uVar8 == 0 && uVar18 == 0) goto code_r0x0001800fd3ea;
                    if (uVar18 == 0) {
                      uVar20 = 0;
                      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
                        uVar20 = uVar20 + 1;
                      }
                      uVar17 = (ulonglong)(uVar20 >> 3) + 8;
                    }
                    else {
                      uVar20 = 0;
                      for (; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x8000000000000000) {
                        uVar20 = uVar20 + 1;
                      }
                      uVar17 = (ulonglong)(uVar20 >> 3);
                    }
                    uVar11 = uVar11 + uVar17;
                    bVar10 = pbVar1[uVar11];
                    goto LAB_1800fd448;
                  }
                  bVar10 = pbVar1[6];
                  if (-1 < (char)bVar10) {
                    pbVar19[6] = bVar10;
                    uVar11 = 7;
                    goto LAB_1800fd3ac;
                  }
                }
              }
            }
          }
        }
      }
LAB_1800fd448:
      uVar16 = uVar16 + uVar11;
      uVar5 = uVar6 + uVar11;
      if (uVar6 + uVar11 + 2 < param_6) {
        uVar16 = uVar16 + 1;
        uVar6 = uVar5;
joined_r0x0001800fd47f:
        bVar12 = bVar10 + 0x7f;
        if (0x7d < bVar12) {
LAB_1800fdcc3:
          *(undefined2 *)(param_1 + 1) = 0x102;
          *(undefined1 *)((longlong)param_1 + 10) = 0;
LAB_1800fdea7:
          *param_1 = uVar16;
LAB_1800fdeaa:
          param_1[2] = uVar6;
          goto LAB_1800fdeae;
        }
        if (param_4 <= uVar16) {
          if (param_7 != '\0') goto LAB_1800fdcc3;
          *param_2 = '\x01';
          param_2[1] = bVar12;
          *(undefined1 *)(param_1 + 1) = 0;
          goto LAB_1800fdea7;
        }
        cVar2 = param_3[uVar16];
        local_78 = param_5;
        local_60 = uVar6;
        local_58 = param_6;
        if (bVar12 < 0x20) {
          if ((byte)(cVar2 + 0x7fU) < 0x7e) {
            bVar10 = cVar2 + 0xb3;
          }
          else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
            bVar10 = cVar2 + 0xb9;
          }
          else {
            bVar10 = cVar2 + 0xbf;
            if (0x19 < bVar10) goto LAB_1800fde97;
          }
          uVar13 = (ushort)bVar10 + (ushort)bVar12 * 0xb2;
          lVar3 = 0x21b;
          if (uVar13 < 0xb34) {
            lVar3 = 0;
          }
          lVar4 = lVar3 + 0x10e;
          if (uVar13 < (ushort)(&DAT_18023285a)[lVar3]) {
            lVar4 = lVar3;
          }
          lVar3 = lVar4 + 0x87;
          if (uVar13 < (ushort)(&DAT_18023274c)[lVar4]) {
            lVar3 = lVar4;
          }
          lVar4 = lVar3 + 0x43;
          if (uVar13 < (ushort)(&DAT_1802326c4)[lVar3]) {
            lVar4 = lVar3;
          }
          lVar3 = lVar4 + 0x22;
          if (uVar13 < (ushort)(&DAT_180232682)[lVar4]) {
            lVar3 = lVar4;
          }
          lVar4 = lVar3 + 0x11;
          if (uVar13 < (ushort)(&DAT_180232660)[lVar3]) {
            lVar4 = lVar3;
          }
          lVar3 = lVar4 + 8;
          if (uVar13 < (ushort)(&DAT_18023264e)[lVar4]) {
            lVar3 = lVar4;
          }
          lVar4 = lVar3 + 4;
          if (uVar13 < (ushort)(&DAT_180232646)[lVar3]) {
            lVar4 = lVar3;
          }
          lVar3 = lVar4 + 2;
          if (uVar13 < (ushort)(&DAT_180232642)[lVar4]) {
            lVar3 = lVar4;
          }
          lVar4 = lVar3 + 1;
          if (uVar13 < (ushort)(&DAT_180232640)[lVar3]) {
            lVar4 = lVar3;
          }
          lVar3 = lVar4 + 1;
          if (uVar13 < (ushort)(&DAT_180232640)[lVar4]) {
            lVar3 = lVar4;
          }
          if ((&DAT_18023263e)[lVar3] == uVar13) {
            uVar13 = (&DAT_180231960)[lVar3];
          }
          else {
            uVar17 = lVar3 + -1 + (ulonglong)((ushort)(&DAT_18023263e)[lVar3] < uVar13);
            if (0x436 < uVar17) goto LAB_1800fe05b;
            uVar13 = (uVar13 + (&DAT_180231960)[uVar17]) - (&DAT_18023263e)[uVar17];
          }
          uVar20 = (uint)uVar13;
LAB_1800fd6b6:
          param_5[uVar6] = (byte)(uVar20 >> 0xc) | 0xe0;
          param_5[uVar6 + 1] = (byte)(uVar20 >> 6) & 0x3f | 0x80;
LAB_1800fd6e5:
          param_5[uVar6 + 2] = (byte)uVar20 & 0x3f | 0x80;
LAB_1800fd6f0:
          uVar6 = uVar6 + 3;
LAB_1800fd6f4:
          if (param_4 <= uVar16 + 1) {
            *(undefined1 *)(param_1 + 1) = 0;
            goto LAB_1800fdce0;
          }
          if (param_6 <= uVar6 + 2) {
            *(undefined1 *)(param_1 + 1) = 1;
            goto LAB_1800fdce0;
          }
          lVar3 = uVar16 + 1;
          uVar16 = uVar16 + 2;
          bVar10 = param_3[lVar3];
          uVar17 = uVar6;
          while (uVar6 = uVar17, -1 < (char)bVar10) {
            param_5[uVar17] = bVar10;
            uVar6 = uVar17 + 1;
            if (0x3b < bVar10) {
              local_60 = uVar6;
              if (param_4 < uVar16) {
                    /* WARNING: Subroutine does not return */
                puStack_a0 = (undefined *)0x1800fdac4;
                FUN_180201a30(uVar16,param_4,param_4,
                              &PTR_s_C__Users_burne__cargo_registry_s_180238ef8);
              }
              goto LAB_1800fd248;
            }
            if (param_4 == uVar16) {
              *(undefined1 *)(param_1 + 1) = 0;
              *param_1 = param_4;
              goto LAB_1800fdeaa;
            }
            if (param_6 <= uVar17 + 3) {
              *(undefined1 *)(param_1 + 1) = 1;
              goto LAB_1800fdea7;
            }
            pbVar1 = (byte *)(param_3 + uVar16);
            uVar16 = uVar16 + 1;
            uVar17 = uVar6;
            bVar10 = *pbVar1;
          }
          goto joined_r0x0001800fd47f;
        }
        bVar12 = cVar2 + 0x5f;
        if (bVar12 < 0x5e) {
          lVar3 = (ulonglong)(byte)(bVar10 + 0x5f) * 0x5e;
          uVar17 = (ulonglong)bVar12;
          lVar4 = lVar3 + uVar17;
          if ((lVar3 + uVar17) - 0x582 < 0x92e) {
            uVar13 = *(ushort *)(&DAT_18022b53c + lVar4 * 2);
LAB_1800fd4e5:
            param_5[uVar6] = (byte)(uVar13 >> 0xc) | 0xe0;
LAB_1800fd504:
            uVar20 = (uint)uVar13;
            param_5[uVar6 + 1] = (byte)(uVar13 >> 6) & 0x3f | 0x80;
            goto LAB_1800fd6e5;
          }
          if ((uint)lVar4 < 0xa5) {
            uVar13 = *(ushort *)(&DAT_18022ddb0 + lVar4 * 2);
            if (0x7ff < uVar13) {
              param_5[uVar6] = (byte)(uVar13 >> 0xc) | 0xe0;
              goto LAB_1800fd504;
            }
            param_5[uVar6] = (byte)(uVar13 >> 6) | 0xc0;
LAB_1800fd57c:
            param_5[uVar6 + 1] = (byte)uVar13 & 0x3f | 0x80;
            uVar6 = uVar6 + 2;
            goto LAB_1800fd6f4;
          }
          if (lVar4 - 0xf0eU < 0x1318) {
            uVar13 = *(ushort *)(&DAT_180227b38 + lVar4 * 2);
            goto LAB_1800fd4e5;
          }
          if (bVar10 == 0xa6) {
            if (bVar12 < 0x44) {
              uVar20 = (uint)*(ushort *)(&DAT_18021a32a + uVar17 * 2);
              goto LAB_1800fd6b6;
            }
LAB_1800fd980:
            uVar17 = lVar4 - 0xbc;
            if (uVar17 < 0x39f) {
              lVar3 = 0x26;
              if (uVar17 < 0x1bb) {
                lVar3 = 0;
              }
              uVar13 = (ushort)uVar17;
              lVar4 = lVar3 + 0x13;
              if (uVar13 < (ushort)(&DAT_1802318cc)[lVar3]) {
                lVar4 = lVar3;
              }
              lVar3 = lVar4 + 10;
              if (uVar13 < (ushort)(&DAT_1802318ba)[lVar4]) {
                lVar3 = lVar4;
              }
              lVar4 = lVar3 + 5;
              if (uVar13 < (ushort)(&DAT_1802318b0)[lVar3]) {
                lVar4 = lVar3;
              }
              lVar3 = lVar4 + 2;
              if (uVar13 < (ushort)(&DAT_1802318aa)[lVar4]) {
                lVar3 = lVar4;
              }
              lVar4 = lVar3 + 1;
              if (uVar13 < (ushort)(&DAT_1802318a8)[lVar3]) {
                lVar4 = lVar3;
              }
              lVar3 = lVar4 + 1;
              if (uVar13 < (ushort)(&DAT_1802318a8)[lVar4]) {
                lVar3 = lVar4;
              }
              if ((&DAT_1802318a6)[lVar3] == uVar13) {
                uVar13 = (&DAT_180236b34)[lVar3];
              }
              else {
                uVar17 = lVar3 + -1 + (ulonglong)((ushort)(&DAT_1802318a6)[lVar3] < uVar13);
                if (0x4c < uVar17) goto LAB_1800fe08b;
                uVar13 = ((&DAT_180236b34)[uVar17] + uVar13) - (&DAT_1802318a6)[uVar17];
              }
              if (0x7f < uVar13) {
                if (0x7ff < uVar13) {
                  param_5[uVar6] = (byte)(uVar13 >> 0xc) | 0xe0;
                  param_5[uVar6 + 1] = (byte)(uVar13 >> 6) & 0x3f | 0x80;
                  param_5[uVar6 + 2] = (byte)uVar13 & 0x3f | 0x80;
                  goto LAB_1800fd6f0;
                }
                param_5[uVar6] = (byte)(uVar13 >> 6) | 0xc0;
                param_5[uVar6 + 1] = (byte)uVar13 & 0x3f | 0x80;
                uVar6 = uVar6 + 2;
                goto LAB_1800fd6f4;
              }
            }
          }
          else {
            if (bVar10 == 0xa9) {
              if (bVar12 < 0x10) {
                uVar13 = *(ushort *)(&DAT_18022fc00 + uVar17 * 2);
                param_5[uVar6] = (byte)(uVar13 >> 6) | 0xc0;
                param_5[uVar6 + 1] = (byte)uVar13 & 0x3f | 0x80;
                uVar6 = uVar6 + 2;
                goto LAB_1800fd6f4;
              }
              goto LAB_1800fd980;
            }
            if ((bVar10 != 0xa8) || (0xe < bVar12)) goto LAB_1800fd980;
            uVar13 = *(ushort *)(&DAT_18022fc20 + uVar17 * 2);
            if (uVar13 != 0) {
              param_5[uVar6] = (byte)(uVar13 >> 6) | 0xc0;
              goto LAB_1800fd57c;
            }
          }
          *(undefined2 *)(param_1 + 1) = 0x202;
          *(undefined1 *)((longlong)param_1 + 10) = 0;
        }
        else {
          if ((byte)(cVar2 + 0x7fU) < 0x20) {
            bVar12 = cVar2 + 0xb3;
          }
          else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
            bVar12 = cVar2 + 0xb9;
          }
          else {
            bVar12 = cVar2 + 0xbf;
            if (0x19 < bVar12) goto LAB_1800fde97;
          }
          uVar13 = (ushort)bVar12 + (ushort)(byte)(bVar10 + 0x5f) * 0x54;
          if (uVar13 < 0xc36) {
            lVar3 = 0x10b;
            if (uVar13 < 0x6b3) {
              lVar3 = 0;
            }
            lVar4 = lVar3 + 0x86;
            if (uVar13 < (ushort)(&DAT_180233eb0)[lVar3]) {
              lVar4 = lVar3;
            }
            lVar3 = lVar4 + 0x43;
            if (uVar13 < (ushort)(&DAT_180233e2a)[lVar4]) {
              lVar3 = lVar4;
            }
            lVar4 = lVar3 + 0x21;
            if (uVar13 < (ushort)(&DAT_180233de6)[lVar3]) {
              lVar4 = lVar3;
            }
            lVar3 = lVar4 + 0x11;
            if (uVar13 < (ushort)(&DAT_180233dc6)[lVar4]) {
              lVar3 = lVar4;
            }
            lVar4 = lVar3 + 8;
            if (uVar13 < (ushort)(&DAT_180233db4)[lVar3]) {
              lVar4 = lVar3;
            }
            lVar3 = lVar4 + 4;
            if (uVar13 < (ushort)(&DAT_180233dac)[lVar4]) {
              lVar3 = lVar4;
            }
            lVar4 = lVar3 + 2;
            if (uVar13 < (ushort)(&DAT_180233da8)[lVar3]) {
              lVar4 = lVar3;
            }
            lVar3 = lVar4 + 1;
            if (uVar13 < (ushort)(&DAT_180233da6)[lVar4]) {
              lVar3 = lVar4;
            }
            lVar4 = lVar3 + 1;
            if (uVar13 < (ushort)(&DAT_180233da6)[lVar3]) {
              lVar4 = lVar3;
            }
            if ((&DAT_180233da4)[lVar4] == uVar13) {
              uVar20 = (uint)(ushort)(&DAT_180232210)[lVar4];
              goto LAB_1800fd6b6;
            }
            uVar17 = lVar4 + -1 + (ulonglong)((ushort)(&DAT_180233da4)[lVar4] < uVar13);
            if (0x216 < uVar17) goto LAB_1800fe073;
            uVar20 = (uint)(ushort)(((&DAT_180232210)[uVar17] + uVar13) - (&DAT_180233da4)[uVar17]);
            goto LAB_1800fd6b6;
          }
LAB_1800fde97:
          *(undefined1 *)(param_1 + 1) = 2;
          if (-1 < cVar2) {
            *(undefined2 *)((longlong)param_1 + 9) = 1;
            goto LAB_1800fdea7;
          }
          *(undefined2 *)((longlong)param_1 + 9) = 2;
        }
LAB_1800fdce0:
        *param_1 = uVar16 + 1;
        goto LAB_1800fdeaa;
      }
      uVar17 = 1;
    }
    else {
LAB_1800fd297:
      uVar11 = 0;
LAB_1800fd29c:
      if (uVar11 < uVar5) {
        while (bVar10 = pbVar1[uVar11], -1 < (char)bVar10) {
          pbVar19[uVar11] = bVar10;
          uVar11 = uVar11 + 1;
          if (uVar5 == uVar11) goto LAB_1800fdac4;
        }
        goto LAB_1800fd448;
      }
LAB_1800fdac4:
      uVar17 = (ulonglong)(uVar17 < uVar14);
      uVar16 = uVar16 + uVar5;
      uVar5 = uVar6 + uVar5;
    }
    *param_1 = uVar16;
    param_1[1] = (ulonglong)auStack_100 | uVar17;
    param_1[2] = uVar5;
  }
  else {
    bVar10 = param_2[1];
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
        cVar2 = *param_3;
        uVar13 = (ushort)bVar10;
        if (bVar10 < 0x20) {
          if ((byte)(cVar2 + 0x7fU) < 0x7e) {
            bVar10 = cVar2 + 0xb3;
          }
          else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
            bVar10 = cVar2 + 0xb9;
          }
          else {
            bVar10 = cVar2 + 0xbf;
            if (0x19 < bVar10) goto LAB_1800fde6a;
          }
          uVar13 = (ushort)bVar10 + uVar13 * 0xb2;
          lVar3 = 0x21b;
          if (uVar13 < 0xb34) {
            lVar3 = 0;
          }
          puVar7 = &DAT_18023263e;
          lVar4 = lVar3 + 0x10e;
          if (uVar13 < (ushort)(&DAT_18023285a)[lVar3]) {
            lVar4 = lVar3;
          }
          lVar3 = lVar4 + 0x87;
          if (uVar13 < (ushort)(&DAT_18023274c)[lVar4]) {
            lVar3 = lVar4;
          }
          lVar4 = lVar3 + 0x43;
          if (uVar13 < (ushort)(&DAT_1802326c4)[lVar3]) {
            lVar4 = lVar3;
          }
          lVar3 = lVar4 + 0x22;
          if (uVar13 < (ushort)(&DAT_180232682)[lVar4]) {
            lVar3 = lVar4;
          }
          lVar4 = lVar3 + 0x11;
          if (uVar13 < (ushort)(&DAT_180232660)[lVar3]) {
            lVar4 = lVar3;
          }
          lVar3 = lVar4 + 8;
          if (uVar13 < (ushort)(&DAT_18023264e)[lVar4]) {
            lVar3 = lVar4;
          }
          lVar4 = lVar3 + 4;
          if (uVar13 < (ushort)(&DAT_180232646)[lVar3]) {
            lVar4 = lVar3;
          }
          lVar3 = lVar4 + 2;
          if (uVar13 < (ushort)(&DAT_180232642)[lVar4]) {
            lVar3 = lVar4;
          }
          lVar4 = lVar3 + 1;
          if (uVar13 < (ushort)(&DAT_180232640)[lVar3]) {
            lVar4 = lVar3;
          }
          lVar3 = lVar4 + 1;
          if (uVar13 < (ushort)(&DAT_180232640)[lVar4]) {
            lVar3 = lVar4;
          }
          if ((&DAT_18023263e)[lVar3] == uVar13) {
            puVar7 = &DAT_180231960;
LAB_1800fdc4b:
            uVar20 = (uint)(ushort)puVar7[lVar3];
          }
          else {
            uVar6 = lVar3 + -1 + (ulonglong)((ushort)(&DAT_18023263e)[lVar3] < uVar13);
            if (0x436 < uVar6) {
LAB_1800fe05b:
                    /* WARNING: Subroutine does not return */
              puStack_a0 = (undefined *)0x1800fe073;
              FUN_180201d02(0xffffffffffffffff,0x437,
                            &PTR_s_C__Users_burne__cargo_registry_s_180238e60);
            }
            sVar15 = uVar13 + (&DAT_180231960)[uVar6];
LAB_1800fdc6f:
            uVar20 = (uint)(ushort)(sVar15 - puVar7[uVar6]);
          }
LAB_1800fdc78:
          *param_5 = (byte)(uVar20 >> 0xc) | 0xe0;
LAB_1800fdc83:
          param_5[1] = (byte)(uVar20 >> 6) & 0x3f | 0x80;
          uVar6 = 3;
          lVar3 = 2;
        }
        else {
          bVar12 = cVar2 + 0x5f;
          if (0x5d < bVar12) {
            if ((byte)(cVar2 + 0x7fU) < 0x20) {
              bVar12 = cVar2 + 0xb3;
            }
            else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
              bVar12 = cVar2 + 0xb9;
            }
            else {
              bVar12 = cVar2 + 0xbf;
              if (0x19 < bVar12) goto LAB_1800fde6a;
            }
            uVar13 = (ushort)bVar12 + (ushort)(byte)(bVar10 - 0x20) * 0x54;
            if (uVar13 < 0xc36) {
              lVar3 = 0x10b;
              if (uVar13 < 0x6b3) {
                lVar3 = 0;
              }
              puVar7 = &DAT_180233da4;
              lVar4 = lVar3 + 0x86;
              if (uVar13 < (ushort)(&DAT_180233eb0)[lVar3]) {
                lVar4 = lVar3;
              }
              lVar3 = lVar4 + 0x43;
              if (uVar13 < (ushort)(&DAT_180233e2a)[lVar4]) {
                lVar3 = lVar4;
              }
              lVar4 = lVar3 + 0x21;
              if (uVar13 < (ushort)(&DAT_180233de6)[lVar3]) {
                lVar4 = lVar3;
              }
              lVar3 = lVar4 + 0x11;
              if (uVar13 < (ushort)(&DAT_180233dc6)[lVar4]) {
                lVar3 = lVar4;
              }
              lVar4 = lVar3 + 8;
              if (uVar13 < (ushort)(&DAT_180233db4)[lVar3]) {
                lVar4 = lVar3;
              }
              lVar3 = lVar4 + 4;
              if (uVar13 < (ushort)(&DAT_180233dac)[lVar4]) {
                lVar3 = lVar4;
              }
              lVar4 = lVar3 + 2;
              if (uVar13 < (ushort)(&DAT_180233da8)[lVar3]) {
                lVar4 = lVar3;
              }
              lVar9 = lVar4 + 1;
              if (uVar13 < (ushort)(&DAT_180233da6)[lVar4]) {
                lVar9 = lVar4;
              }
              lVar3 = lVar9 + 1;
              if (uVar13 < (ushort)(&DAT_180233da6)[lVar9]) {
                lVar3 = lVar9;
              }
              if ((&DAT_180233da4)[lVar3] != uVar13) {
                uVar6 = lVar3 + -1 + (ulonglong)((ushort)(&DAT_180233da4)[lVar3] < uVar13);
                if (0x216 < uVar6) {
LAB_1800fe073:
                    /* WARNING: Subroutine does not return */
                  puStack_a0 = (undefined *)0x1800fe08b;
                  FUN_180201d02(0xffffffffffffffff,0x217,
                                &PTR_s_C__Users_burne__cargo_registry_s_180238e60);
                }
                sVar15 = (&DAT_180232210)[uVar6] + uVar13;
                goto LAB_1800fdc6f;
              }
              puVar7 = &DAT_180232210;
              goto LAB_1800fdc4b;
            }
LAB_1800fde6a:
            *(undefined1 *)(param_1 + 1) = 2;
            if (cVar2 < '\0') {
              *(undefined2 *)((longlong)param_1 + 9) = 2;
              goto LAB_1800fde86;
            }
            *(undefined2 *)((longlong)param_1 + 9) = 1;
            goto LAB_1800fdb2e;
          }
          lVar3 = (ulonglong)(byte)(bVar10 - 0x20) * 0x5e;
          uVar6 = (ulonglong)bVar12;
          lVar4 = lVar3 + uVar6;
          if ((lVar3 + uVar6) - 0x582 < 0x92e) {
            uVar20 = (uint)*(ushort *)(&DAT_18022b53c + lVar4 * 2);
            goto LAB_1800fd226;
          }
          if ((uint)lVar4 < 0xa5) {
            uVar20 = (uint)*(ushort *)(&DAT_18022ddb0 + lVar4 * 2);
            if (*(ushort *)(&DAT_18022ddb0 + lVar4 * 2) < 0x800) goto LAB_1800fdd08;
            goto LAB_1800fdc78;
          }
          if (lVar4 - 0xf0eU < 0x1318) {
            uVar20 = (uint)*(ushort *)(&DAT_180227b38 + lVar4 * 2);
LAB_1800fd226:
            *param_5 = (byte)(uVar20 >> 0xc) | 0xe0;
            goto LAB_1800fdc83;
          }
          if (bVar10 == 0x25) {
            if (0x43 < bVar12) goto LAB_1800fdf55;
            uVar20 = (uint)*(ushort *)(&DAT_18021a32a + uVar6 * 2);
            goto LAB_1800fd226;
          }
          if (uVar13 != 0x28) {
            if ((uVar13 != 0x27) || (0xe < bVar12)) goto LAB_1800fdf55;
            uVar20 = (uint)*(ushort *)(&DAT_18022fc20 + uVar6 * 2);
            if (*(ushort *)(&DAT_18022fc20 + uVar6 * 2) != 0) goto LAB_1800fdd08;
LAB_1800fe028:
            *(undefined2 *)(param_1 + 1) = 0x202;
            *(undefined1 *)((longlong)param_1 + 10) = 0;
LAB_1800fde86:
            *param_1 = 1;
            param_1[2] = 0;
            return param_1;
          }
          if (0xf < bVar12) {
LAB_1800fdf55:
            uVar6 = lVar4 - 0xbc;
            if (uVar6 < 0x39f) {
              lVar3 = 0x26;
              if (uVar6 < 0x1bb) {
                lVar3 = 0;
              }
              uVar13 = (ushort)uVar6;
              lVar4 = lVar3 + 0x13;
              if (uVar13 < (ushort)(&DAT_1802318cc)[lVar3]) {
                lVar4 = lVar3;
              }
              lVar3 = lVar4 + 10;
              if (uVar13 < (ushort)(&DAT_1802318ba)[lVar4]) {
                lVar3 = lVar4;
              }
              lVar4 = lVar3 + 5;
              if (uVar13 < (ushort)(&DAT_1802318b0)[lVar3]) {
                lVar4 = lVar3;
              }
              lVar3 = lVar4 + 2;
              if (uVar13 < (ushort)(&DAT_1802318aa)[lVar4]) {
                lVar3 = lVar4;
              }
              lVar4 = lVar3 + 1;
              if (uVar13 < (ushort)(&DAT_1802318a8)[lVar3]) {
                lVar4 = lVar3;
              }
              lVar3 = lVar4 + 1;
              if (uVar13 < (ushort)(&DAT_1802318a8)[lVar4]) {
                lVar3 = lVar4;
              }
              if ((&DAT_1802318a6)[lVar3] == uVar13) {
                uVar13 = (&DAT_180236b34)[lVar3];
              }
              else {
                uVar6 = lVar3 + -1 + (ulonglong)((ushort)(&DAT_1802318a6)[lVar3] < uVar13);
                if (0x4c < uVar6) {
LAB_1800fe08b:
                    /* WARNING: Subroutine does not return */
                  puStack_a0 = &UNK_1800fe0a3;
                  FUN_180201d02(0xffffffffffffffff,0x4d,
                                &PTR_s_C__Users_burne__cargo_registry_s_180238e60);
                }
                uVar13 = ((&DAT_180236b34)[uVar6] + uVar13) - (&DAT_1802318a6)[uVar6];
              }
              uVar20 = (uint)uVar13;
              if (0x7f < uVar20) {
                if (0x7ff < uVar20) goto LAB_1800fdc78;
                goto LAB_1800fdd08;
              }
            }
            goto LAB_1800fe028;
          }
          uVar20 = (uint)*(ushort *)(&DAT_18022fc00 + uVar6 * 2);
LAB_1800fdd08:
          *param_5 = (byte)(uVar20 >> 6) | 0xc0;
          uVar6 = 2;
          lVar3 = 1;
        }
        param_5[lVar3] = (byte)uVar20 & 0x3f | 0x80;
        uVar16 = 1;
        goto LAB_1800fd248;
      }
      *(undefined1 *)(param_1 + 1) = 1;
    }
LAB_1800fdb2e:
    *param_1 = 0;
    param_1[2] = 0;
  }
LAB_1800fdeae:
  return param_1;
code_r0x0001800fd3ea:
  uVar11 = uVar11 + 0x10;
  if (uVar5 - 0x10 < uVar11) goto LAB_1800fd29c;
  goto LAB_1800fd3c0;
}


