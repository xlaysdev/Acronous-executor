/* FUN_1801a53b0 @ 1801a53b0 */

uint FUN_1801a53b0(longlong param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  uint uVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint *puVar23;
  int iVar24;
  uint uVar25;
  ulonglong *puVar26;
  undefined4 uVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  uint uVar30;
  uint *puVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined8 uVar35;
  ulonglong uVar36;
  ulonglong local_98;
  undefined1 local_89;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint local_48;
  
  if ((param_3 & 0x3fffffff) == 0) {
    local_98 = 0;
    goto LAB_1801a56da;
  }
  if ((param_3 & 0x3fff0000) == 0) {
    param_2 = param_2 - 0xac00;
    if (param_2 < 0x2ba4) {
      uVar18 = param_2 * 0x6f75 >> 0x18;
      iVar24 = param_2 + ((param_2 & 0xffff) / 0x1c) * -0x1c;
      puVar28 = (ulonglong *)(param_1 + 0x48);
      uVar21 = *(ulonglong *)(param_1 + 0x48);
      if (uVar21 < 0x12) {
        lVar22 = param_1 + 4;
        uVar29 = 0x11;
        puVar20 = puVar28;
        uVar34 = uVar21;
      }
      else {
        lVar22 = *(longlong *)(param_1 + 0x10);
        puVar20 = (ulonglong *)(param_1 + 8);
        uVar34 = *(ulonglong *)(param_1 + 8);
        uVar29 = uVar21;
      }
      if (uVar34 == uVar29) {
        FUN_1801fc070(param_1);
        puVar20 = (ulonglong *)(param_1 + 8);
        uVar34 = *(ulonglong *)(param_1 + 8);
        lVar22 = *(longlong *)(param_1 + 0x10);
      }
      *(uint *)(lVar22 + uVar34 * 4) =
           ((param_2 + uVar18 * -0x24c & 0xffff) * 0x925 >> 0x10) + 0x1161;
      *puVar20 = *puVar20 + 1;
      param_2 = uVar18 | 0x1100;
      if ((short)iVar24 == 0) {
        local_98 = 1;
      }
      else {
        uVar21 = *puVar28;
        if (uVar21 < 0x12) {
          lVar22 = param_1 + 4;
          uVar29 = 0x11;
          uVar34 = uVar21;
        }
        else {
          puVar28 = (ulonglong *)(param_1 + 8);
          lVar22 = *(longlong *)(param_1 + 0x10);
          uVar34 = *(ulonglong *)(param_1 + 8);
          uVar29 = uVar21;
        }
        if (uVar34 == uVar29) {
          FUN_1801fc070(param_1);
          puVar28 = (ulonglong *)(param_1 + 8);
          uVar34 = *(ulonglong *)(param_1 + 8);
          lVar22 = *(longlong *)(param_1 + 0x10);
        }
        *(uint *)(lVar22 + uVar34 * 4) = iVar24 + 0x11a7U & 0xffff;
        *puVar28 = *puVar28 + 1;
        local_98 = 2;
      }
    }
    else {
      param_2 = param_3 & 0xffff;
      if (param_2 == 1) {
        uVar21 = *(ulonglong *)PTR_DAT_1802fd520;
        auVar2._8_4_ = 0;
        auVar2._0_8_ = uVar21;
        auVar2._12_2_ = (short)(uVar21 >> 0x30);
        auVar6._8_2_ = (short)(uVar21 >> 0x20);
        auVar6._0_8_ = uVar21;
        auVar6._10_4_ = auVar2._10_4_;
        auVar14._6_8_ = 0;
        auVar14._0_6_ = auVar6._8_6_;
        auVar10._4_2_ = (short)(uVar21 >> 0x10);
        auVar10._0_4_ = (uint)uVar21;
        auVar10._6_8_ = SUB148(auVar14 << 0x40,6);
        local_88._0_4_ = (uint)uVar21 & 0xffff;
        local_88._4_10_ = auVar10._4_10_;
        local_88._14_2_ = 0;
        uVar21 = *(ulonglong *)(PTR_DAT_1802fd520 + 8);
        auVar3._8_4_ = 0;
        auVar3._0_8_ = uVar21;
        auVar3._12_2_ = (short)(uVar21 >> 0x30);
        auVar7._8_2_ = (short)(uVar21 >> 0x20);
        auVar7._0_8_ = uVar21;
        auVar7._10_4_ = auVar3._10_4_;
        auVar15._6_8_ = 0;
        auVar15._0_6_ = auVar7._8_6_;
        auVar11._4_2_ = (short)(uVar21 >> 0x10);
        auVar11._0_4_ = (uint)uVar21;
        auVar11._6_8_ = SUB148(auVar15 << 0x40,6);
        local_78._0_4_ = (uint)uVar21 & 0xffff;
        local_78._4_10_ = auVar11._4_10_;
        local_78._14_2_ = 0;
        uVar21 = *(ulonglong *)(PTR_DAT_1802fd520 + 0x10);
        auVar4._8_4_ = 0;
        auVar4._0_8_ = uVar21;
        auVar4._12_2_ = (short)(uVar21 >> 0x30);
        auVar8._8_2_ = (short)(uVar21 >> 0x20);
        auVar8._0_8_ = uVar21;
        auVar8._10_4_ = auVar4._10_4_;
        auVar16._6_8_ = 0;
        auVar16._0_6_ = auVar8._8_6_;
        auVar12._4_2_ = (short)(uVar21 >> 0x10);
        auVar12._0_4_ = (uint)uVar21;
        auVar12._6_8_ = SUB148(auVar16 << 0x40,6);
        local_68._0_4_ = (uint)uVar21 & 0xffff;
        local_68._4_10_ = auVar12._4_10_;
        local_68._14_2_ = 0;
        uVar21 = *(ulonglong *)(PTR_DAT_1802fd520 + 0x18);
        auVar5._8_4_ = 0;
        auVar5._0_8_ = uVar21;
        auVar5._12_2_ = (short)(uVar21 >> 0x30);
        auVar9._8_2_ = (short)(uVar21 >> 0x20);
        auVar9._0_8_ = uVar21;
        auVar9._10_4_ = auVar5._10_4_;
        auVar17._6_8_ = 0;
        auVar17._0_6_ = auVar9._8_6_;
        auVar13._4_2_ = (short)(uVar21 >> 0x10);
        auVar13._0_4_ = (uint)uVar21;
        auVar13._6_8_ = SUB148(auVar17 << 0x40,6);
        local_58._0_4_ = (uint)uVar21 & 0xffff;
        local_58._4_10_ = auVar13._4_10_;
        local_58._14_2_ = 0;
        local_48 = (uint)*(ushort *)(PTR_DAT_1802fd520 + 0x20);
        FUN_1801a3da0(param_1,local_88);
        param_2 = 0x635;
        local_98 = 0x11;
      }
      else {
        if ((param_3 & 0xf800 ^ 0xffefd800) < 0xffef0800) {
          param_2 = 0xfffd;
        }
        local_98 = 0;
      }
    }
    goto LAB_1801a56da;
  }
  if ((param_3 & 0xffe0) != 0) {
    uVar21 = *(ulonglong *)(param_1 + 0x48);
    if (uVar21 < 0x12) {
      plVar19 = (longlong *)(param_1 + 0x48);
      lVar22 = param_1 + 4;
      uVar29 = 0x11;
      uVar34 = uVar21;
    }
    else {
      plVar19 = (longlong *)(param_1 + 8);
      lVar22 = *(longlong *)(param_1 + 0x10);
      uVar34 = *(ulonglong *)(param_1 + 8);
      uVar29 = uVar21;
    }
    if (uVar34 == uVar29) {
      FUN_1801fc070(param_1);
      plVar19 = (longlong *)(param_1 + 8);
      uVar34 = *(ulonglong *)(param_1 + 8);
      lVar22 = *(longlong *)(param_1 + 0x10);
    }
    param_2 = param_3 & 0x7fff;
    *(uint *)(lVar22 + uVar34 * 4) = param_3 >> 0xf & 0x7fff | 0xff000000;
    *plVar19 = *plVar19 + 1;
    local_98 = 0;
    goto LAB_1801a56da;
  }
  uVar34 = (ulonglong)((param_3 & 0x3fffffff) >> 0x10) - 1;
  uVar21 = *(ulonglong *)(param_1 + 0x78);
  if (uVar34 < uVar21) {
    uVar18 = (param_3 & 0x10) >> 4;
    uVar35 = *(undefined8 *)(param_1 + 0x70);
    local_98 = uVar34;
    uVar36 = uVar21;
LAB_1801a54cd:
    param_2 = FUN_1801a64d0(param_1,local_98,(param_3 & 0xf) + 2,uVar18,uVar35,uVar36);
  }
  else {
    lVar22 = *(longlong *)(param_1 + 0x88);
    uVar29 = uVar21 + lVar22;
    local_98 = uVar34 - uVar29;
    if (uVar34 < uVar29) {
      uVar18 = (param_3 & 0x10) >> 4;
      uVar35 = *(undefined8 *)(param_1 + 0x80);
    }
    else {
      uVar36 = *(ulonglong *)(param_1 + 0x98);
      uVar21 = uVar29 + uVar36;
      uVar18 = (param_3 & 0x10) >> 4;
      if (uVar34 < uVar21) {
        uVar35 = *(undefined8 *)(param_1 + 0x90);
        goto LAB_1801a54cd;
      }
      uVar35 = *(undefined8 *)(param_1 + 0xa0);
      lVar22 = *(longlong *)(param_1 + 0xa8);
    }
    local_98 = uVar34 - uVar21;
    param_2 = FUN_1801a66c0(param_1,local_98,(param_3 & 0xf) + 1,uVar18,uVar35,lVar22);
  }
LAB_1801a56da:
  puVar28 = (ulonglong *)(param_1 + 0x48);
  lVar22 = param_1 + 4;
  puVar20 = (ulonglong *)(param_1 + 8);
  while( true ) {
    uVar18 = *(uint *)(param_1 + 0x50);
    uVar25 = *(uint *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x50) = 0x110000;
    if ((uVar18 == 0x110000) && (uVar18 = FUN_1801a68c0(param_1), uVar18 == 0x110000))
    goto LAB_1801a5a87;
    if ((uVar25 & 0x3ffffe00) != 0xd800) break;
    if ((~uVar25 & 0xd900) == 0) {
      uVar27 = 0xff00fffd;
      if ((int)uVar18 < 0xf75) {
        switch(uVar18) {
        case 0x340:
          uVar27 = 0xe6000300;
          uVar21 = *puVar28;
          break;
        case 0x341:
          uVar27 = 0xe6000301;
          uVar21 = *puVar28;
          break;
        case 0x342:
switchD_1801a5764_caseD_342:
          uVar21 = *puVar28;
          break;
        case 0x343:
          uVar27 = 0xe6000313;
          uVar21 = *puVar28;
          break;
        case 0x344:
          uVar21 = *puVar28;
          if (uVar21 < 0x12) {
            uVar29 = 0x11;
            uVar34 = uVar21;
            lVar33 = lVar22;
            puVar26 = puVar28;
          }
          else {
            uVar34 = *(ulonglong *)(param_1 + 8);
            lVar33 = *(longlong *)(param_1 + 0x10);
            puVar26 = puVar20;
            uVar29 = uVar21;
          }
          if (uVar34 == uVar29) {
            FUN_1801fc070(param_1);
            uVar34 = *(ulonglong *)(param_1 + 8);
            lVar33 = *(longlong *)(param_1 + 0x10);
            puVar26 = puVar20;
          }
          *(undefined4 *)(lVar33 + uVar34 * 4) = 0xe6000308;
          *puVar26 = *puVar26 + 1;
          uVar27 = 0xe6000301;
          uVar21 = *puVar28;
          break;
        default:
          if (uVar18 != 0xf73) goto switchD_1801a5764_caseD_342;
          uVar21 = *puVar28;
          if (uVar21 < 0x12) {
            uVar29 = 0x11;
            uVar34 = uVar21;
            lVar33 = lVar22;
            puVar26 = puVar28;
          }
          else {
            uVar34 = *(ulonglong *)(param_1 + 8);
            lVar33 = *(longlong *)(param_1 + 0x10);
            puVar26 = puVar20;
            uVar29 = uVar21;
          }
          if (uVar34 == uVar29) {
            FUN_1801fc070(param_1);
            uVar34 = *(ulonglong *)(param_1 + 8);
            lVar33 = *(longlong *)(param_1 + 0x10);
            puVar26 = puVar20;
          }
          *(undefined4 *)(lVar33 + uVar34 * 4) = 0x81000f71;
          *puVar26 = *puVar26 + 1;
          uVar27 = 0x82000f72;
          uVar21 = *puVar28;
        }
      }
      else {
        if ((int)uVar18 < 0xff9e) {
          if (uVar18 == 0xf75) {
            uVar21 = *puVar28;
            if (uVar21 < 0x12) {
              uVar29 = 0x11;
              uVar34 = uVar21;
              lVar33 = lVar22;
              puVar26 = puVar28;
            }
            else {
              uVar34 = *(ulonglong *)(param_1 + 8);
              lVar33 = *(longlong *)(param_1 + 0x10);
              puVar26 = puVar20;
              uVar29 = uVar21;
            }
            if (uVar34 == uVar29) {
              FUN_1801fc070(param_1);
              uVar34 = *(ulonglong *)(param_1 + 8);
              lVar33 = *(longlong *)(param_1 + 0x10);
              puVar26 = puVar20;
            }
            *(undefined4 *)(lVar33 + uVar34 * 4) = 0x81000f71;
            *puVar26 = *puVar26 + 1;
            uVar27 = 0x84000f74;
          }
          else if (uVar18 == 0xf81) {
            uVar21 = *puVar28;
            if (uVar21 < 0x12) {
              uVar29 = 0x11;
              uVar34 = uVar21;
              lVar33 = lVar22;
              puVar26 = puVar28;
            }
            else {
              uVar34 = *(ulonglong *)(param_1 + 8);
              lVar33 = *(longlong *)(param_1 + 0x10);
              puVar26 = puVar20;
              uVar29 = uVar21;
            }
            if (uVar34 == uVar29) {
              FUN_1801fc070(param_1);
              uVar34 = *(ulonglong *)(param_1 + 8);
              lVar33 = *(longlong *)(param_1 + 0x10);
              puVar26 = puVar20;
            }
            *(undefined4 *)(lVar33 + uVar34 * 4) = 0x81000f71;
            *puVar26 = *puVar26 + 1;
            uVar27 = 0x82000f80;
            uVar21 = *puVar28;
            goto joined_r0x0001801a588d;
          }
          goto switchD_1801a5764_caseD_342;
        }
        if (uVar18 == 0xff9e) {
          uVar27 = 0x8003099;
          uVar21 = *puVar28;
        }
        else {
          if (uVar18 != 0xff9f) goto switchD_1801a5764_caseD_342;
          uVar27 = 0x800309a;
          uVar21 = *puVar28;
        }
      }
joined_r0x0001801a588d:
      if (uVar21 < 0x12) {
        uVar34 = uVar21;
        lVar33 = lVar22;
        puVar26 = puVar28;
        uVar21 = 0x11;
      }
      else {
        uVar34 = *(ulonglong *)(param_1 + 8);
        lVar33 = *(longlong *)(param_1 + 0x10);
        puVar26 = puVar20;
      }
      if (uVar34 == uVar21) {
        FUN_1801fc070(param_1);
        uVar34 = *(ulonglong *)(param_1 + 8);
        lVar33 = *(longlong *)(param_1 + 0x10);
        puVar26 = puVar20;
      }
      *(undefined4 *)(lVar33 + uVar34 * 4) = uVar27;
      *puVar26 = *puVar26 + 1;
    }
    else {
      uVar21 = *puVar28;
      if (uVar21 < 0x12) {
        uVar29 = 0x11;
        uVar34 = uVar21;
        lVar33 = lVar22;
        puVar26 = puVar28;
      }
      else {
        uVar34 = *(ulonglong *)(param_1 + 8);
        lVar33 = *(longlong *)(param_1 + 0x10);
        puVar26 = puVar20;
        uVar29 = uVar21;
      }
      if (uVar34 == uVar29) {
        FUN_1801fc070(param_1);
        uVar34 = *(ulonglong *)(param_1 + 8);
        lVar33 = *(longlong *)(param_1 + 0x10);
        puVar26 = puVar20;
      }
      *(uint *)(lVar33 + uVar34 * 4) = uVar25 << 0x18 | uVar18;
      *puVar26 = *puVar26 + 1;
    }
  }
  *(uint *)(param_1 + 0x50) = uVar18;
  *(uint *)(param_1 + 0x54) = uVar25;
LAB_1801a5a87:
  uVar21 = *puVar28;
  if (0x11 < uVar21) {
    uVar21 = *(ulonglong *)(param_1 + 8);
    lVar22 = *(longlong *)(param_1 + 0x10);
  }
  uVar34 = uVar21 - local_98;
  if (uVar21 < local_98) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(local_98,uVar21,uVar21,&PTR_s_C__Users_burne__cargo_registry_s_180282270);
  }
  if (1 < uVar34) {
    puVar1 = (uint *)(lVar22 + local_98 * 4);
    lVar33 = uVar34 * 4;
    puVar23 = puVar1;
    do {
      FUN_1801a8c80(puVar23);
      lVar33 = lVar33 + -4;
      puVar23 = puVar23 + 1;
    } while (lVar33 != 0);
    local_88._0_8_ = &local_89;
    if (uVar34 < 0x15) {
      puVar23 = puVar1 + 1;
      lVar33 = 0;
      do {
        uVar18 = puVar23[-1];
        uVar25 = *puVar23;
        uVar30 = uVar25 >> 0x18;
        if (uVar30 < uVar18 >> 0x18) {
          lVar32 = 0;
          do {
            *(uint *)((longlong)puVar23 + lVar32) = uVar18;
            if (lVar33 == lVar32) {
              puVar31 = puVar1;
              goto LAB_1801a5b23;
            }
            uVar18 = *(uint *)((longlong)puVar23 + lVar32 + -8);
            lVar32 = lVar32 + -4;
          } while (uVar30 < uVar18 >> 0x18);
          puVar31 = (uint *)(lVar32 + (longlong)puVar23);
LAB_1801a5b23:
          *puVar31 = uVar25;
        }
        puVar23 = puVar23 + 1;
        lVar33 = lVar33 + -4;
      } while (puVar23 != (uint *)(lVar22 + uVar21 * 4));
    }
    else {
      FUN_1801a8410(puVar1,uVar34,local_88);
    }
  }
  return param_2;
}


