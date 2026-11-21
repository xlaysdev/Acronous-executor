/* FUN_1800fb120 @ 1800fb120 */

ulonglong *
FUN_1800fb120(ulonglong *param_1,longlong param_2,longlong param_3,ulonglong param_4,
             undefined1 *param_5,ulonglong param_6,char param_7)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined *puVar13;
  longlong lVar14;
  byte bVar15;
  ushort uVar16;
  uint uVar17;
  byte bVar18;
  char cVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auStack_100 [96];
  undefined *puStack_a0;
  undefined1 *local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_70 = param_5;
  local_68 = param_6;
  if (*(char *)(param_2 + 6) == '\x01') {
    if (param_6 < 3) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 0;
      uVar12 = 0;
      goto LAB_1800fc236;
    }
    *(undefined1 *)(param_2 + 6) = 0;
    *param_5 = *(undefined1 *)(param_2 + 7);
    uVar12 = 1;
    cVar19 = *(char *)(param_2 + 8);
  }
  else {
    uVar12 = 0;
    cVar19 = *(char *)(param_2 + 8);
  }
  if (cVar19 == '\0') {
    uVar5 = 0;
    uVar6 = uVar12;
LAB_1800fb280:
    uVar12 = param_6 - uVar6;
    local_58 = param_3;
    local_50 = param_4;
    if (param_6 < uVar6) {
                    /* WARNING: Subroutine does not return */
      puStack_a0 = (undefined *)0x1800fc6a3;
      FUN_180201a30(uVar6,param_6,param_6,&PTR_s_C__Users_burne__cargo_registry_s_180238c38);
    }
    pcVar1 = (char *)(param_3 + uVar5);
    uVar20 = param_4 - uVar5;
    uVar4 = uVar20;
    if (uVar12 < uVar20) {
      uVar4 = uVar12;
    }
    pcVar2 = param_5 + uVar6;
    if ((((uint)pcVar1 ^ (uint)pcVar2) & 7) == 0) {
      uVar9 = -(uint)pcVar1 & 7;
      if (uVar4 < (ulonglong)uVar9 + 0x10) goto LAB_1800fb2d1;
      if ((ulonglong)uVar9 == 0) {
        uVar21 = 0;
        goto LAB_1800fbded;
      }
      cVar19 = *pcVar1;
      if (cVar19 < '\0') {
        uVar21 = 0;
      }
      else {
        *pcVar2 = cVar19;
        uVar21 = 1;
        if (uVar9 == 1) goto LAB_1800fbded;
        cVar19 = pcVar1[1];
        if (-1 < cVar19) {
          pcVar2[1] = cVar19;
          uVar21 = 2;
          if (uVar9 == 2) goto LAB_1800fbded;
          cVar19 = pcVar1[2];
          if (-1 < cVar19) {
            pcVar2[2] = cVar19;
            uVar21 = 3;
            if (uVar9 == 3) goto LAB_1800fbded;
            cVar19 = pcVar1[3];
            if (-1 < cVar19) {
              pcVar2[3] = cVar19;
              uVar21 = 4;
              if (uVar9 == 4) goto LAB_1800fbded;
              cVar19 = pcVar1[4];
              if (-1 < cVar19) {
                pcVar2[4] = cVar19;
                uVar21 = 5;
                if (uVar9 == 5) goto LAB_1800fbded;
                cVar19 = pcVar1[5];
                if (-1 < cVar19) {
                  pcVar2[5] = cVar19;
                  uVar21 = 6;
                  if (uVar9 == 6) {
LAB_1800fbded:
LAB_1800fbe00:
                    uVar10 = *(ulonglong *)(pcVar1 + uVar21);
                    uVar22 = *(ulonglong *)(pcVar1 + uVar21 + 8);
                    *(ulonglong *)(param_5 + uVar21 + uVar6) = uVar10;
                    *(ulonglong *)(param_5 + uVar21 + uVar6 + 8) = uVar22;
                    uVar10 = uVar10 & 0x8080808080808080;
                    uVar22 = uVar22 & 0x8080808080808080;
                    if (uVar22 == 0 && uVar10 == 0) goto code_r0x0001800fbe2b;
                    if (uVar10 == 0) {
                      uVar9 = 0;
                      for (; (uVar22 & 1) == 0; uVar22 = uVar22 >> 1 | 0x8000000000000000) {
                        uVar9 = uVar9 + 1;
                      }
                      uVar12 = (ulonglong)(uVar9 >> 3) + 8;
                    }
                    else {
                      uVar9 = 0;
                      for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
                        uVar9 = uVar9 + 1;
                      }
                      uVar12 = (ulonglong)(uVar9 >> 3);
                    }
                    uVar21 = uVar21 + uVar12;
                    cVar19 = pcVar1[uVar21];
                    goto LAB_1800fb31c;
                  }
                  cVar19 = pcVar1[6];
                  if (-1 < cVar19) {
                    pcVar2[6] = cVar19;
                    uVar21 = 7;
                    goto LAB_1800fbded;
                  }
                }
              }
            }
          }
        }
      }
LAB_1800fb31c:
      uVar5 = uVar5 + uVar21;
      local_60 = uVar21 + uVar6;
      if (uVar21 + uVar6 + 3 < param_6) {
        uVar4 = uVar5 + 1;
LAB_1800fb348:
        uVar12 = local_60;
        bVar18 = cVar19 + 0x7f;
        local_48 = param_6;
        if (0x7d < bVar18) {
          if (!SBORROW1('\0',cVar19)) {
LAB_1800fbffe:
            *(undefined2 *)(param_1 + 1) = 0x102;
LAB_1800fc22d:
            *(undefined1 *)((longlong)param_1 + 10) = 0;
LAB_1800fc232:
            *param_1 = uVar4;
            goto LAB_1800fc236;
          }
          param_5[local_60] = 0xe2;
          param_5[local_60 + 1] = 0x82;
          local_60 = local_60 + 2;
          cVar19 = -0x54;
          goto LAB_1800fbdbf;
        }
        if (param_4 <= uVar4) {
          if (param_7 != '\0') goto LAB_1800fbffe;
          *(undefined1 *)(param_2 + 8) = 1;
          *(byte *)(param_2 + 9) = bVar18;
          *(undefined1 *)(param_1 + 1) = 0;
          goto LAB_1800fc232;
        }
        cVar3 = *(char *)(param_3 + uVar4);
        uVar5 = uVar4 + 1;
        bVar15 = cVar3 - 0x30;
        if (bVar15 < 10) {
          if (param_4 <= uVar5) {
            if (param_7 != '\0') {
              *(undefined2 *)(param_1 + 1) = 0x202;
LAB_1800fc12a:
              *(undefined1 *)((longlong)param_1 + 10) = 0;
              *param_1 = uVar5;
              goto LAB_1800fc236;
            }
            *(undefined1 *)(param_2 + 8) = 2;
            *(byte *)(param_2 + 9) = bVar18;
            *(byte *)(param_2 + 10) = bVar15;
LAB_1800fc211:
            *(undefined1 *)(param_1 + 1) = 0;
            *param_1 = uVar5;
            uVar12 = local_60;
            goto LAB_1800fc236;
          }
          bVar8 = *(char *)(param_3 + 1 + uVar4) + 0x7f;
          if (0x7d < bVar8) {
            *(undefined1 *)(param_2 + 6) = 1;
            *(char *)(param_2 + 7) = cVar3;
            *(undefined2 *)(param_1 + 1) = 0x102;
            *(undefined1 *)((longlong)param_1 + 10) = 1;
            *param_1 = uVar5;
            goto LAB_1800fc236;
          }
          uVar5 = uVar4 + 2;
          if (param_4 <= uVar5) {
            if (param_7 != '\0') {
              *(undefined2 *)(param_1 + 1) = 0x302;
              goto LAB_1800fc12a;
            }
            *(undefined1 *)(param_2 + 8) = 3;
            *(byte *)(param_2 + 9) = bVar18;
            *(byte *)(param_2 + 10) = bVar15;
            *(byte *)(param_2 + 0xb) = bVar8;
            goto LAB_1800fc211;
          }
          bVar11 = *(char *)(param_3 + 2 + uVar4) - 0x30;
          if (9 < bVar11) {
            *(undefined1 *)(param_2 + 6) = 1;
            *(char *)(param_2 + 7) = cVar3;
            *(undefined1 *)(param_2 + 8) = 1;
            *(byte *)(param_2 + 9) = bVar8;
            *(undefined2 *)(param_1 + 1) = 0x102;
            *(undefined1 *)((longlong)param_1 + 10) = 2;
            *param_1 = uVar5;
            goto LAB_1800fc236;
          }
          uVar5 = uVar4 + 3;
          uVar6 = (ulonglong)bVar11 +
                  (ulonglong)bVar15 * 0x4ec + (ulonglong)bVar18 * 0x3138 + (ulonglong)bVar8 * 10;
          if (0x99fb < uVar6) {
            if (0xfffff < uVar6 - 0x2e248) {
              *(undefined2 *)(param_1 + 1) = 0x402;
              uVar4 = uVar5;
              goto LAB_1800fc22d;
            }
            uVar9 = (int)uVar6 - 0x1e248;
            param_5[local_60] = (byte)(uVar9 >> 0x12) | 0xf0;
            param_5[local_60 + 1] = (byte)(uVar9 >> 0xc) & 0x3f | 0x80;
            param_5[local_60 + 2] = (byte)(uVar9 >> 6) & 0x3f | 0x80;
            param_5[local_60 + 3] = (byte)uVar9 & 0x3f | 0x80;
            local_60 = local_60 + 4;
            goto LAB_1800fb9a3;
          }
          if (uVar6 == 0x1d21) {
            param_5[local_60] = 0xee;
            param_5[local_60 + 1] = 0x9f;
            param_5[local_60 + 2] = 0x87;
            local_60 = local_60 + 3;
          }
          else {
            lVar14 = 0x67;
            if (uVar6 < 0x2c46) {
              lVar14 = 0;
            }
            uVar16 = (ushort)uVar6;
            lVar7 = lVar14 + 0x33;
            if (uVar16 < (ushort)(&DAT_18023172e)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 0x1a;
            if (uVar16 < (ushort)(&DAT_1802316fc)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 0xd;
            if (uVar16 < (ushort)(&DAT_1802316e2)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 6;
            if (uVar16 < (ushort)(&DAT_1802316d4)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 3;
            if (uVar16 < (ushort)(&DAT_1802316ce)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 2;
            if (uVar16 < (ushort)(&DAT_1802316cc)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 1;
            if (uVar16 < (ushort)(&DAT_1802316ca)[lVar14]) {
              lVar7 = lVar14;
            }
            if ((&DAT_1802316c8)[lVar7] == uVar16) {
              uVar16 = (&DAT_1802313e0)[lVar7];
            }
            else {
              uVar12 = lVar7 + -1 + (ulonglong)((ushort)(&DAT_1802316c8)[lVar7] < uVar16);
              if (0xcd < uVar12) goto LAB_1800fc9c6;
              uVar16 = ((&DAT_1802313e0)[uVar12] + uVar16) - (&DAT_1802316c8)[uVar12];
            }
            if (uVar16 < 0x800) {
              param_5[local_60] = (byte)(uVar16 >> 6) | 0xc0;
              param_5[local_60 + 1] = (byte)uVar16 & 0x3f | 0x80;
              local_60 = local_60 + 2;
            }
            else {
              param_5[local_60] = (byte)(uVar16 >> 0xc) | 0xe0;
              param_5[local_60 + 1] = (byte)(uVar16 >> 6) & 0x3f | 0x80;
              param_5[local_60 + 2] = (byte)uVar16 & 0x3f | 0x80;
              local_60 = local_60 + 3;
            }
          }
          goto LAB_1800fb9a3;
        }
        if (bVar18 < 0x20) {
          bVar15 = cVar3 - 0x40;
          if (0x3e < bVar15) {
            if (-2 < cVar3) {
LAB_1800fc24e:
              *(undefined1 *)(param_1 + 1) = 2;
              if (-1 < cVar3) {
                *(undefined2 *)((longlong)param_1 + 9) = 1;
                goto LAB_1800fc232;
              }
              goto LAB_1800fc448;
            }
            bVar15 = cVar3 + 0xbf;
          }
          uVar16 = (ushort)bVar15 + (ushort)bVar18 * 0xbe;
          lVar14 = 0x3be;
          if (uVar16 < 0xb40) {
            lVar14 = 0;
          }
          lVar7 = lVar14 + 0x1df;
          if (uVar16 < (ushort)(&DAT_1802352e8)[lVar14]) {
            lVar7 = lVar14;
          }
          lVar14 = lVar7 + 0xef;
          if (uVar16 < (ushort)(&DAT_180235108)[lVar7]) {
            lVar14 = lVar7;
          }
          lVar7 = lVar14 + 0x78;
          if (uVar16 < (ushort)(&DAT_18023501a)[lVar14]) {
            lVar7 = lVar14;
          }
          lVar14 = lVar7 + 0x3c;
          if (uVar16 < (ushort)(&DAT_180234fa2)[lVar7]) {
            lVar14 = lVar7;
          }
          lVar7 = lVar14 + 0x1e;
          if (uVar16 < (ushort)(&DAT_180234f66)[lVar14]) {
            lVar7 = lVar14;
          }
          lVar14 = lVar7 + 0xf;
          if (uVar16 < (ushort)(&DAT_180234f48)[lVar7]) {
            lVar14 = lVar7;
          }
          lVar7 = lVar14 + 7;
          if (uVar16 < (ushort)(&DAT_180234f38)[lVar14]) {
            lVar7 = lVar14;
          }
          lVar14 = lVar7 + 4;
          if (uVar16 < (ushort)(&DAT_180234f32)[lVar7]) {
            lVar14 = lVar7;
          }
          lVar7 = lVar14 + 2;
          if (uVar16 < (ushort)(&DAT_180234f2e)[lVar14]) {
            lVar7 = lVar14;
          }
          lVar14 = lVar7 + 1;
          if (uVar16 < (ushort)(&DAT_180234f2c)[lVar7]) {
            lVar14 = lVar7;
          }
          if ((&DAT_180234f2a)[lVar14] == uVar16) {
            uVar16 = (&DAT_180232eac)[lVar14];
          }
          else {
            uVar6 = lVar14 + -1 + (ulonglong)((ushort)(&DAT_180234f2a)[lVar14] < uVar16);
            if (0x77b < uVar6) goto LAB_1800fc9ae;
            uVar16 = (uVar16 + (&DAT_180232eac)[uVar6]) - (&DAT_180234f2a)[uVar6];
          }
          uVar9 = (uint)uVar16;
LAB_1800fb72b:
          param_5[local_60] = (byte)(uVar9 >> 0xc) | 0xe0;
          bVar18 = (byte)(uVar9 >> 6) & 0x3f | 0x80;
        }
        else {
          bVar15 = cVar3 + 0x5f;
          if (0x5d < bVar15) {
            bVar18 = cVar3 - 0x40;
            if (0x3e < bVar18) {
              if (-0x60 < cVar3) goto LAB_1800fc24e;
              bVar18 = cVar3 + 0xbf;
            }
            uVar4 = (ulonglong)((uint)(byte)(cVar19 + 0x5f) * 0x60);
            uVar6 = (uVar4 + bVar18) - 0x360;
            if (0x1f7a < uVar6) {
              uVar4 = uVar4 + bVar18;
              if (0x35f < (uint)uVar4) {
                if (100 < uVar4 - 0x22db) {
                    /* WARNING: Subroutine does not return */
                  puStack_a0 = (undefined *)0x1800fca0a;
                  FUN_180201d02(uVar4 - 0x22db,0x65,
                                &PTR_s_C__Users_burne__cargo_registry_s_180238c20);
                }
                uVar9 = (uint)*(ushort *)
                               ("f8c6b5b557f\\reqwest-0.12.28\\src\\connect.rs" + uVar4 * 2);
                goto LAB_1800fb72b;
              }
              lVar14 = 0x1d;
              if (uVar4 < 0x309) {
                lVar14 = 0;
              }
              uVar16 = (ushort)uVar4;
              lVar7 = lVar14 + 0xf;
              if (uVar16 < (ushort)(&DAT_18022fc5c)[lVar14]) {
                lVar7 = lVar14;
              }
              lVar14 = lVar7 + 7;
              if (uVar16 < (ushort)(&DAT_18022fc4c)[lVar7]) {
                lVar14 = lVar7;
              }
              lVar7 = lVar14 + 4;
              if (uVar16 < (ushort)(&DAT_18022fc46)[lVar14]) {
                lVar7 = lVar14;
              }
              lVar14 = lVar7 + 2;
              if (uVar16 < (ushort)(&DAT_18022fc42)[lVar7]) {
                lVar14 = lVar7;
              }
              lVar7 = lVar14 + 1;
              if (uVar16 < (ushort)(&DAT_18022fc40)[lVar14]) {
                lVar7 = lVar14;
              }
              if ((&DAT_18022fc3e)[lVar7] == uVar16) {
                uVar16 = (&DAT_180234eb4)[lVar7];
              }
              else {
                uVar12 = lVar7 + -1 + (ulonglong)((ushort)(&DAT_18022fc3e)[lVar7] < uVar16);
                if (0x3a < uVar12) goto LAB_1800fca0a;
                uVar16 = ((&DAT_180234eb4)[uVar12] + uVar16) - (&DAT_18022fc3e)[uVar12];
              }
              if (uVar16 < 0x800) {
                param_5[local_60] = (byte)(uVar16 >> 6) | 0xc0;
                param_5[local_60 + 1] = (byte)uVar16 & 0x3f | 0x80;
                local_60 = local_60 + 2;
              }
              else {
                param_5[local_60] = (byte)(uVar16 >> 0xc) | 0xe0;
                param_5[local_60 + 1] = (byte)(uVar16 >> 6) & 0x3f | 0x80;
                param_5[local_60 + 2] = (byte)uVar16 & 0x3f | 0x80;
                local_60 = local_60 + 3;
              }
              goto LAB_1800fb9a3;
            }
            lVar14 = 0x32d;
            if (uVar6 < 0xb36) {
              lVar14 = 0;
            }
            uVar16 = (ushort)uVar6;
            lVar7 = lVar14 + 0x197;
            if (uVar16 < (ushort)(&DAT_180236150)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 0xcb;
            if (uVar16 < (ushort)(&DAT_180235fb8)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 0x66;
            if (uVar16 < (ushort)(&DAT_180235eee)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 0x33;
            if (uVar16 < (ushort)(&DAT_180235e88)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 0x19;
            if (uVar16 < (ushort)(&DAT_180235e54)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 0xd;
            if (uVar16 < (ushort)(&DAT_180235e3c)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 6;
            if (uVar16 < (ushort)(&DAT_180235e2e)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 3;
            if (uVar16 < (ushort)(&DAT_180235e28)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 2;
            if (uVar16 < (ushort)(&DAT_180235e26)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 1;
            if (uVar16 < (ushort)(&DAT_180235e24)[lVar7]) {
              lVar14 = lVar7;
            }
            if ((&DAT_180235e22)[lVar14] == uVar16) {
              uVar9 = (uint)(ushort)(&DAT_1802341fe)[lVar14];
            }
            else {
              uVar6 = lVar14 + -1 + (ulonglong)((ushort)(&DAT_180235e22)[lVar14] < uVar16);
              if (0x65a < uVar6) goto LAB_1800fc9de;
              uVar9 = (uint)(ushort)(((&DAT_1802341fe)[uVar6] + uVar16) - (&DAT_180235e22)[uVar6]);
            }
            goto LAB_1800fb72b;
          }
          if ((byte)(cVar19 + 0x50U) < 0x48) {
            uVar9 = (uint)*(ushort *)
                           (&DAT_18021a3b2 +
                           (ulonglong)bVar15 * 2 + (ulonglong)(byte)(cVar19 + 0x50U) * 0xbc);
            goto LAB_1800fb72b;
          }
          if (cVar19 == -0x5f) {
            uVar12 = (ulonglong)bVar15;
            puVar13 = &DAT_18022bf84;
LAB_1800fba55:
            uVar16 = *(ushort *)(puVar13 + uVar12 * 2);
            uVar9 = (uint)uVar16;
            if (0x7ff < uVar16) {
              param_5[local_60] = (byte)(uVar16 >> 0xc) | 0xe0;
              param_5[local_60 + 1] = (byte)(uVar16 >> 6) & 0x3f | 0x80;
              param_5[local_60 + 2] = (byte)uVar16 & 0x3f | 0x80;
              local_60 = local_60 + 3;
              goto LAB_1800fb9a3;
            }
LAB_1800fbc51:
            param_5[local_60] = (byte)(uVar9 >> 6) | 0xc0;
            param_5[local_60 + 1] = (byte)uVar9 & 0x3f | 0x80;
            local_60 = local_60 + 2;
            goto LAB_1800fb9a3;
          }
          if (cVar19 == -0x58) {
            if (bVar15 < 0x20) {
              uVar12 = (ulonglong)bVar15;
              puVar13 = &DAT_180226bc2;
              goto LAB_1800fba55;
            }
LAB_1800fbaf1:
            uVar16 = (ushort)bVar15 + (ushort)(byte)(cVar19 + 0x5e) * 0x5e;
            lVar14 = 0x17;
            if (uVar16 < 0x1a9) {
              lVar14 = 0;
            }
            lVar7 = lVar14 + 0xb;
            if (uVar16 < (ushort)(&DAT_180231592)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 6;
            if (uVar16 < (ushort)(&DAT_180231588)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 3;
            if (uVar16 < (ushort)(&DAT_180231582)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 1;
            if (uVar16 < (ushort)(&DAT_18023157e)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 1;
            if (uVar16 < (ushort)(&DAT_18023157e)[lVar14]) {
              lVar7 = lVar14;
            }
            if ((&DAT_18023157c)[lVar7] == uVar16) {
              uVar16 = (&DAT_180236ad8)[lVar7];
            }
            else {
              uVar12 = lVar7 + -1 + (ulonglong)((ushort)(&DAT_18023157c)[lVar7] < uVar16);
              if (0x2d < uVar12) goto LAB_1800fca22;
              uVar16 = ((&DAT_180236ad8)[uVar12] + uVar16) - (&DAT_18023157c)[uVar12];
            }
            uVar9 = (uint)uVar16;
            if (0x7ff < uVar9) {
              param_5[local_60] = (byte)(uVar16 >> 0xc) | 0xe0;
              param_5[local_60 + 1] = (byte)(uVar16 >> 6) & 0x3f | 0x80;
              param_5[local_60 + 2] = (byte)uVar16 & 0x3f | 0x80;
              local_60 = local_60 + 3;
              goto LAB_1800fb9a3;
            }
            goto LAB_1800fbc51;
          }
          if (cVar19 == -0x5a) {
            if ((byte)(cVar3 + 0x20U) < 0x16) {
              uVar12 = (ulonglong)(byte)(cVar3 + 0x20U);
              puVar13 = &DAT_1802341d2;
              goto LAB_1800fba55;
            }
            goto LAB_1800fbaf1;
          }
          if (bVar18 < 0x77) goto LAB_1800fbaf1;
          uVar9 = ((uint)(byte)(cVar19 + 8) * 0x5e + (uint)bVar15) - 0x1dcc;
          param_5[local_60] = 0xee;
          bVar18 = (byte)(uVar9 >> 6) & 0xbf;
        }
        local_60 = local_60 + 2;
        param_5[uVar12 + 1] = bVar18;
        param_5[local_60] = (byte)uVar9 & 0x3f | 0x80;
        local_60 = uVar12 + 3;
LAB_1800fb9a3:
        if (param_4 <= uVar5) goto LAB_1800fc211;
        if (param_6 <= local_60 + 3) {
          *(undefined1 *)(param_1 + 1) = 1;
          *param_1 = uVar5;
          uVar12 = local_60;
          goto LAB_1800fc236;
        }
        cVar19 = *(char *)(param_3 + uVar5);
        uVar4 = uVar5 + 1;
        if (-1 < cVar19) goto LAB_1800fbdbf;
        goto LAB_1800fb348;
      }
      uVar12 = 1;
    }
    else {
LAB_1800fb2d1:
      uVar21 = 0;
LAB_1800fb2d7:
      if (uVar21 < uVar4) {
        while (cVar19 = pcVar1[uVar21], -1 < cVar19) {
          pcVar2[uVar21] = cVar19;
          uVar21 = uVar21 + 1;
          if (uVar4 == uVar21) goto LAB_1800fbe99;
        }
        goto LAB_1800fb31c;
      }
LAB_1800fbe99:
      uVar12 = (ulonglong)(uVar12 < uVar20);
      uVar5 = uVar5 + uVar4;
      local_60 = uVar6 + uVar4;
    }
    *param_1 = uVar5;
    param_1[1] = (ulonglong)auStack_100 | uVar12;
    uVar12 = local_60;
    goto LAB_1800fc236;
  }
  if (param_4 != 0) {
    uVar6 = uVar12 + 3;
    if (param_6 <= uVar6) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 0;
      goto LAB_1800fc236;
    }
    bVar18 = *(byte *)(param_2 + 9);
    bVar15 = *(byte *)(param_2 + 10);
    bVar8 = *(byte *)(param_2 + 0xb);
    uVar4 = 0;
    do {
      while (cVar3 = *(char *)(param_3 + uVar4), cVar19 == '\x01') {
        bVar15 = cVar3 - 0x30;
        if (9 < bVar15) {
          *(undefined1 *)(param_2 + 8) = 0;
          uVar5 = uVar4 + 1;
          uVar16 = (ushort)bVar18;
          if (bVar18 < 0x20) {
            bVar18 = cVar3 - 0x40;
            if (0x3e < bVar18) {
              if (-2 < cVar3) {
LAB_1800fc42f:
                *(undefined1 *)(param_1 + 1) = 2;
                if (cVar3 < '\0') {
LAB_1800fc448:
                  *(undefined2 *)((longlong)param_1 + 9) = 2;
                  *param_1 = uVar5;
                }
                else {
                  *(undefined2 *)((longlong)param_1 + 9) = 1;
                  *param_1 = uVar4;
                }
                goto LAB_1800fc236;
              }
              bVar18 = cVar3 + 0xbf;
            }
            uVar16 = (ushort)bVar18 + uVar16 * 0xbe;
            lVar14 = 0x3be;
            if (uVar16 < 0xb40) {
              lVar14 = 0;
            }
            lVar7 = lVar14 + 0x1df;
            if (uVar16 < (ushort)(&DAT_1802352e8)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 0xef;
            if (uVar16 < (ushort)(&DAT_180235108)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 0x78;
            if (uVar16 < (ushort)(&DAT_18023501a)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 0x3c;
            if (uVar16 < (ushort)(&DAT_180234fa2)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 0x1e;
            if (uVar16 < (ushort)(&DAT_180234f66)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 0xf;
            if (uVar16 < (ushort)(&DAT_180234f48)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 7;
            if (uVar16 < (ushort)(&DAT_180234f38)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 4;
            if (uVar16 < (ushort)(&DAT_180234f32)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 2;
            if (uVar16 < (ushort)(&DAT_180234f2e)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 1;
            if (uVar16 < (ushort)(&DAT_180234f2c)[lVar7]) {
              lVar14 = lVar7;
            }
            if ((&DAT_180234f2a)[lVar14] == uVar16) {
              uVar16 = (&DAT_180232eac)[lVar14];
            }
            else {
              uVar4 = lVar14 + -1 + (ulonglong)((ushort)(&DAT_180234f2a)[lVar14] < uVar16);
              if (0x77b < uVar4) {
LAB_1800fc9ae:
                    /* WARNING: Subroutine does not return */
                puStack_a0 = (undefined *)0x1800fc9c6;
                FUN_180201d02(0xffffffffffffffff,0x77c,
                              &PTR_s_C__Users_burne__cargo_registry_s_180238b38);
              }
              uVar16 = (uVar16 + (&DAT_180232eac)[uVar4]) - (&DAT_180234f2a)[uVar4];
            }
            param_5[uVar12] = (byte)(uVar16 >> 0xc) | 0xe0;
            param_5[uVar12 + 1] = (byte)(uVar16 >> 6) & 0x3f | 0x80;
            param_5[uVar12 + 2] = (byte)uVar16 & 0x3f | 0x80;
            local_60 = uVar6;
          }
          else {
            bVar15 = cVar3 + 0x5f;
            if (bVar15 < 0x5e) {
              if ((byte)(bVar18 - 0x2f) < 0x48) {
                uVar16 = *(ushort *)
                          (&DAT_18021a3b2 +
                          (ulonglong)bVar15 * 2 + (ulonglong)(byte)(bVar18 - 0x2f) * 0xbc);
                param_5[uVar12] = (byte)(uVar16 >> 0xc) | 0xe0;
                param_5[uVar12 + 1] = (byte)(uVar16 >> 6) & 0x3f | 0x80;
                param_5[uVar12 + 2] = (byte)uVar16 & 0x3f | 0x80;
                local_60 = uVar6;
LAB_1800fbfe0:
                uVar5 = uVar4 + 1;
                goto LAB_1800fb280;
              }
              if (bVar18 == 0x20) {
                uVar4 = (ulonglong)bVar15;
                puVar13 = &DAT_18022bf84;
LAB_1800fc787:
                uVar16 = *(ushort *)(puVar13 + uVar4 * 2);
                uVar9 = (uint)uVar16;
                if (uVar16 < 0x800) {
                  param_5[uVar12] = (byte)(uVar16 >> 6) | 0xc0;
                  param_5[uVar12 + 1] = (byte)uVar16 & 0x3f | 0x80;
                  local_60 = uVar12 | 2;
                }
                else {
                  uVar17 = (uint)uVar16;
LAB_1800fc7ec:
                  param_5[uVar12] = (byte)(uVar17 >> 0xc) | 0xe0;
                  param_5[uVar12 + 1] = (byte)(uVar9 >> 6) & 0x3f | 0x80;
                  param_5[uVar12 + 2] = (byte)uVar9 & 0x3f | 0x80;
                  local_60 = uVar6;
                }
                uVar6 = local_60;
                goto LAB_1800fb280;
              }
              if (uVar16 == 0x27) {
                if (bVar15 < 0x20) {
                  uVar4 = (ulonglong)bVar15;
                  puVar13 = &DAT_180226bc2;
                  goto LAB_1800fc787;
                }
              }
              else if (uVar16 == 0x25) {
                if ((byte)(cVar3 + 0x20U) < 0x16) {
                  uVar4 = (ulonglong)(byte)(cVar3 + 0x20U);
                  puVar13 = &DAT_1802341d2;
                  goto LAB_1800fc787;
                }
              }
              else if (0x76 < bVar18) {
                uVar9 = ((uint)(byte)(bVar18 + 0x89) * 0x5e + (uint)bVar15) - 0x1dcc;
                uVar17 = uVar9 & 0xffff;
                goto LAB_1800fc7ec;
              }
              uVar16 = (ushort)bVar15 + (ushort)(byte)(bVar18 - 0x21) * 0x5e;
              lVar14 = 0x17;
              if (uVar16 < 0x1a9) {
                lVar14 = 0;
              }
              lVar7 = lVar14 + 0xb;
              if (uVar16 < (ushort)(&DAT_180231592)[lVar14]) {
                lVar7 = lVar14;
              }
              lVar14 = lVar7 + 6;
              if (uVar16 < (ushort)(&DAT_180231588)[lVar7]) {
                lVar14 = lVar7;
              }
              lVar7 = lVar14 + 3;
              if (uVar16 < (ushort)(&DAT_180231582)[lVar14]) {
                lVar7 = lVar14;
              }
              lVar14 = lVar7 + 1;
              if (uVar16 < (ushort)(&DAT_18023157e)[lVar7]) {
                lVar14 = lVar7;
              }
              lVar7 = lVar14 + 1;
              if (uVar16 < (ushort)(&DAT_18023157e)[lVar14]) {
                lVar7 = lVar14;
              }
              if ((&DAT_18023157c)[lVar7] == uVar16) {
                uVar16 = (&DAT_180236ad8)[lVar7];
              }
              else {
                uVar4 = lVar7 + -1 + (ulonglong)((ushort)(&DAT_18023157c)[lVar7] < uVar16);
                if (0x2d < uVar4) {
LAB_1800fca22:
                    /* WARNING: Subroutine does not return */
                  puStack_a0 = (undefined *)0x1800fca3a;
                  FUN_180201d02(0xffffffffffffffff,0x2e,
                                &PTR_s_C__Users_burne__cargo_registry_s_180238b38);
                }
                uVar16 = ((&DAT_180236ad8)[uVar4] + uVar16) - (&DAT_18023157c)[uVar4];
              }
joined_r0x0001800fc95a:
              if (uVar16 < 0x800) {
                param_5[uVar12] = (byte)(uVar16 >> 6) | 0xc0;
                param_5[uVar12 + 1] = (byte)uVar16 & 0x3f | 0x80;
                uVar6 = uVar12 | 2;
                local_60 = uVar6;
                goto LAB_1800fb280;
              }
              param_5[uVar12] = (byte)(uVar16 >> 0xc) | 0xe0;
              param_5[uVar12 + 1] = (byte)(uVar16 >> 6) & 0x3f | 0x80;
              param_5[uVar12 + 2] = (byte)uVar16 & 0x3f | 0x80;
            }
            else {
              bVar15 = cVar3 - 0x40;
              if (0x3e < bVar15) {
                if (-0x60 < cVar3) goto LAB_1800fc42f;
                bVar15 = cVar3 + 0xbf;
              }
              uVar21 = (ulonglong)((uint)(byte)(bVar18 - 0x20) * 0x60);
              uVar20 = (uVar21 + bVar15) - 0x360;
              if (0x1f7a < uVar20) {
                uVar21 = uVar21 + bVar15;
                if (0x35f < (uint)uVar21) {
                  if (100 < uVar21 - 0x22db) {
                    /* WARNING: Subroutine does not return */
                    puStack_a0 = &UNK_1800fca4e;
                    FUN_180201d02(uVar21 - 0x22db,0x65,
                                  &PTR_s_C__Users_burne__cargo_registry_s_180238c20);
                  }
                  uVar16 = *(ushort *)("f8c6b5b557f\\reqwest-0.12.28\\src\\connect.rs" + uVar21 * 2)
                  ;
                  param_5[uVar12] = (byte)(uVar16 >> 0xc) | 0xe0;
                  param_5[uVar12 + 1] = (byte)(uVar16 >> 6) & 0x3f | 0x80;
                  param_5[uVar12 + 2] = (byte)uVar16 & 0x3f | 0x80;
                  local_60 = uVar6;
                  goto LAB_1800fbfe0;
                }
                lVar14 = 0x1d;
                if (uVar21 < 0x309) {
                  lVar14 = 0;
                }
                uVar16 = (ushort)uVar21;
                lVar7 = lVar14 + 0xf;
                if (uVar16 < (ushort)(&DAT_18022fc5c)[lVar14]) {
                  lVar7 = lVar14;
                }
                lVar14 = lVar7 + 7;
                if (uVar16 < (ushort)(&DAT_18022fc4c)[lVar7]) {
                  lVar14 = lVar7;
                }
                lVar7 = lVar14 + 4;
                if (uVar16 < (ushort)(&DAT_18022fc46)[lVar14]) {
                  lVar7 = lVar14;
                }
                lVar14 = lVar7 + 2;
                if (uVar16 < (ushort)(&DAT_18022fc42)[lVar7]) {
                  lVar14 = lVar7;
                }
                lVar7 = lVar14 + 1;
                if (uVar16 < (ushort)(&DAT_18022fc40)[lVar14]) {
                  lVar7 = lVar14;
                }
                if ((&DAT_18022fc3e)[lVar7] == uVar16) {
                  uVar16 = (&DAT_180234eb4)[lVar7];
                }
                else {
                  uVar4 = lVar7 + -1 + (ulonglong)((ushort)(&DAT_18022fc3e)[lVar7] < uVar16);
                  if (0x3a < uVar4) {
LAB_1800fca0a:
                    /* WARNING: Subroutine does not return */
                    puStack_a0 = (undefined *)0x1800fca22;
                    FUN_180201d02(0xffffffffffffffff,0x3b,
                                  &PTR_s_C__Users_burne__cargo_registry_s_180238b38);
                  }
                  uVar16 = ((&DAT_180234eb4)[uVar4] + uVar16) - (&DAT_18022fc3e)[uVar4];
                }
                goto joined_r0x0001800fc95a;
              }
              lVar14 = 0x32d;
              if (uVar20 < 0xb36) {
                lVar14 = 0;
              }
              uVar16 = (ushort)uVar20;
              lVar7 = lVar14 + 0x197;
              if (uVar16 < (ushort)(&DAT_180236150)[lVar14]) {
                lVar7 = lVar14;
              }
              lVar14 = lVar7 + 0xcb;
              if (uVar16 < (ushort)(&DAT_180235fb8)[lVar7]) {
                lVar14 = lVar7;
              }
              lVar7 = lVar14 + 0x66;
              if (uVar16 < (ushort)(&DAT_180235eee)[lVar14]) {
                lVar7 = lVar14;
              }
              lVar14 = lVar7 + 0x33;
              if (uVar16 < (ushort)(&DAT_180235e88)[lVar7]) {
                lVar14 = lVar7;
              }
              lVar7 = lVar14 + 0x19;
              if (uVar16 < (ushort)(&DAT_180235e54)[lVar14]) {
                lVar7 = lVar14;
              }
              lVar14 = lVar7 + 0xd;
              if (uVar16 < (ushort)(&DAT_180235e3c)[lVar7]) {
                lVar14 = lVar7;
              }
              lVar7 = lVar14 + 6;
              if (uVar16 < (ushort)(&DAT_180235e2e)[lVar14]) {
                lVar7 = lVar14;
              }
              lVar14 = lVar7 + 3;
              if (uVar16 < (ushort)(&DAT_180235e28)[lVar7]) {
                lVar14 = lVar7;
              }
              lVar7 = lVar14 + 2;
              if (uVar16 < (ushort)(&DAT_180235e26)[lVar14]) {
                lVar7 = lVar14;
              }
              lVar14 = lVar7 + 1;
              if (uVar16 < (ushort)(&DAT_180235e24)[lVar7]) {
                lVar14 = lVar7;
              }
              if ((&DAT_180235e22)[lVar14] == uVar16) {
                uVar16 = (&DAT_1802341fe)[lVar14];
              }
              else {
                uVar4 = lVar14 + -1 + (ulonglong)((ushort)(&DAT_180235e22)[lVar14] < uVar16);
                if (0x65a < uVar4) {
LAB_1800fc9de:
                    /* WARNING: Subroutine does not return */
                  puStack_a0 = (undefined *)0x1800fc9f6;
                  FUN_180201d02(0xffffffffffffffff,0x65b,
                                &PTR_s_C__Users_burne__cargo_registry_s_180238b38);
                }
                uVar16 = ((&DAT_1802341fe)[uVar4] + uVar16) - (&DAT_180235e22)[uVar4];
              }
              param_5[uVar12] = (byte)(uVar16 >> 0xc) | 0xe0;
              param_5[uVar12 + 1] = (byte)(uVar16 >> 6) & 0x3f | 0x80;
              param_5[uVar12 + 2] = (byte)uVar16 & 0x3f | 0x80;
            }
            local_60 = uVar6;
          }
          goto LAB_1800fb280;
        }
        *(byte *)(param_2 + 10) = bVar15;
        cVar19 = '\x02';
        uVar4 = uVar4 + 1;
        if (param_4 == uVar4) goto LAB_1800fb216;
      }
      if (cVar19 == '\x03') {
        *(undefined1 *)(param_2 + 8) = 0;
        if (9 < (byte)(cVar3 - 0x30U)) {
          *(undefined1 *)(param_2 + 6) = 1;
          *(byte *)(param_2 + 7) = bVar15 + 0x30;
          *(undefined1 *)(param_2 + 8) = 1;
          *(byte *)(param_2 + 9) = bVar8;
          *(undefined2 *)(param_1 + 1) = 0x102;
          *(undefined1 *)((longlong)param_1 + 10) = 2;
          *param_1 = uVar4;
          goto LAB_1800fc236;
        }
        uVar5 = uVar4 + 1;
        uVar20 = (ulonglong)bVar18 * 0x3138 + (ulonglong)bVar8 * 10 + (ulonglong)bVar15 * 0x4ec +
                 (ulonglong)(byte)(cVar3 - 0x30U);
        if (uVar20 < 0x99fc) {
          if (uVar20 != 0x1d21) {
            lVar14 = 0x67;
            if (uVar20 < 0x2c46) {
              lVar14 = 0;
            }
            uVar16 = (ushort)uVar20;
            lVar7 = lVar14 + 0x33;
            if (uVar16 < (ushort)(&DAT_18023172e)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 0x1a;
            if (uVar16 < (ushort)(&DAT_1802316fc)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 0xd;
            if (uVar16 < (ushort)(&DAT_1802316e2)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 6;
            if (uVar16 < (ushort)(&DAT_1802316d4)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 3;
            if (uVar16 < (ushort)(&DAT_1802316ce)[lVar14]) {
              lVar7 = lVar14;
            }
            lVar14 = lVar7 + 2;
            if (uVar16 < (ushort)(&DAT_1802316cc)[lVar7]) {
              lVar14 = lVar7;
            }
            lVar7 = lVar14 + 1;
            if (uVar16 < (ushort)(&DAT_1802316ca)[lVar14]) {
              lVar7 = lVar14;
            }
            if ((&DAT_1802316c8)[lVar7] == uVar16) {
              uVar16 = (&DAT_1802313e0)[lVar7];
            }
            else {
              uVar4 = lVar7 + -1 + (ulonglong)((ushort)(&DAT_1802316c8)[lVar7] < uVar16);
              if (0xcd < uVar4) {
LAB_1800fc9c6:
                    /* WARNING: Subroutine does not return */
                puStack_a0 = (undefined *)0x1800fc9de;
                FUN_180201d02(0xffffffffffffffff,0xce,
                              &PTR_s_C__Users_burne__cargo_registry_s_180238b38);
              }
              uVar16 = ((&DAT_1802313e0)[uVar4] + uVar16) - (&DAT_1802316c8)[uVar4];
            }
            if (uVar16 < 0x800) {
              param_5[uVar12] = (byte)(uVar16 >> 6) | 0xc0;
              param_5[uVar12 + 1] = (byte)uVar16 & 0x3f | 0x80;
              uVar6 = uVar12 + 2;
            }
            else {
              param_5[uVar12] = (byte)(uVar16 >> 0xc) | 0xe0;
              param_5[uVar12 + 1] = (byte)(uVar16 >> 6) & 0x3f | 0x80;
              param_5[uVar12 + 2] = (byte)uVar16 & 0x3f | 0x80;
            }
            goto LAB_1800fb280;
          }
          param_5[uVar12] = 0xee;
          *(undefined2 *)(param_5 + uVar12 + 1) = 0x879f;
          local_60 = uVar12 + 1;
        }
        else {
          if (0xfffff < uVar20 - 0x2e248) {
            *(undefined2 *)(param_1 + 1) = 0x402;
            *(undefined1 *)((longlong)param_1 + 10) = 0;
            *param_1 = uVar5;
            goto LAB_1800fc236;
          }
          uVar9 = (int)uVar20 - 0x1e248;
          param_5[uVar12] = (byte)(uVar9 >> 0x12) | 0xf0;
          param_5[uVar12 + 1] = (byte)(uVar9 >> 0xc) & 0x3f | 0x80;
          param_5[uVar12 + 2] = (byte)(uVar9 >> 6) & 0x3f | 0x80;
          param_5[uVar12 + 3] = (byte)uVar9 & 0x3f | 0x80;
          uVar6 = uVar12 | 4;
          local_60 = uVar6;
        }
        goto LAB_1800fbfe0;
      }
      bVar8 = cVar3 + 0x7f;
      if (0x7d < bVar8) {
        *(undefined1 *)(param_2 + 8) = 0;
        *(undefined1 *)(param_2 + 6) = 1;
        *(byte *)(param_2 + 7) = bVar15 + 0x30;
        *(undefined2 *)(param_1 + 1) = 0x102;
        *(undefined1 *)((longlong)param_1 + 10) = 1;
        *param_1 = uVar4;
        goto LAB_1800fc236;
      }
      *(byte *)(param_2 + 0xb) = bVar8;
      cVar19 = '\x03';
      uVar4 = uVar4 + 1;
    } while (param_4 != uVar4);
LAB_1800fb216:
    *(char *)(param_2 + 8) = cVar19;
  }
  if (param_7 == '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = param_4;
  }
  else {
    *(undefined1 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_1 + 1) = 2;
    *(char *)((longlong)param_1 + 9) = cVar19;
    *(undefined1 *)((longlong)param_1 + 10) = 0;
    *param_1 = param_4;
  }
LAB_1800fc236:
  param_1[2] = uVar12;
  return param_1;
code_r0x0001800fbe2b:
  uVar21 = uVar21 + 0x10;
  if (uVar4 - 0x10 < uVar21) goto LAB_1800fb2d7;
  goto LAB_1800fbe00;
LAB_1800fbdbf:
  param_5[local_60] = cVar19;
  local_60 = local_60 + 1;
  uVar5 = uVar4;
  uVar6 = local_60;
  if (param_4 < uVar4) {
                    /* WARNING: Subroutine does not return */
    puStack_a0 = (undefined *)0x1800fc9ae;
    FUN_180201a30(uVar4,param_4,param_4,&PTR_s_C__Users_burne__cargo_registry_s_180238c50);
  }
  goto LAB_1800fb280;
}


