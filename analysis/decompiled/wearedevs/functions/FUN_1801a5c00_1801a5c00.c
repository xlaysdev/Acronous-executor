/* FUN_1801a5c00 @ 1801a5c00 */

uint FUN_1801a5c00(longlong param_1,uint param_2,uint param_3)

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
  ulonglong uVar25;
  ulonglong *puVar26;
  ulonglong *puVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  uint *puVar31;
  longlong lVar32;
  undefined4 uVar33;
  longlong lVar34;
  ulonglong uVar35;
  undefined8 uVar36;
  ulonglong uVar37;
  undefined1 local_89;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  uint local_48;
  
  if ((param_3 & 0x3fffffff) == 0) {
    uVar25 = 0;
    goto LAB_1801a5f01;
  }
  if ((param_3 & 0x3fff0000) == 0) {
    param_2 = param_2 - 0xac00;
    if (param_2 < 0x2ba4) {
      uVar28 = param_2 * 0x6f75 >> 0x18;
      iVar24 = param_2 + ((param_2 & 0xffff) / 0x1c) * -0x1c;
      puVar27 = (ulonglong *)(param_1 + 0x48);
      uVar25 = *(ulonglong *)(param_1 + 0x48);
      if (uVar25 < 0x12) {
        lVar22 = param_1 + 4;
        uVar35 = 0x11;
        puVar20 = puVar27;
        uVar21 = uVar25;
      }
      else {
        lVar22 = *(longlong *)(param_1 + 0x10);
        puVar20 = (ulonglong *)(param_1 + 8);
        uVar21 = *(ulonglong *)(param_1 + 8);
        uVar35 = uVar25;
      }
      if (uVar21 == uVar35) {
        FUN_1801fc070(param_1);
        puVar20 = (ulonglong *)(param_1 + 8);
        uVar21 = *(ulonglong *)(param_1 + 8);
        lVar22 = *(longlong *)(param_1 + 0x10);
      }
      *(uint *)(lVar22 + uVar21 * 4) =
           ((param_2 + uVar28 * -0x24c & 0xffff) * 0x925 >> 0x10) + 0x1161;
      *puVar20 = *puVar20 + 1;
      param_2 = uVar28 | 0x1100;
      if ((short)iVar24 == 0) {
        uVar25 = 1;
      }
      else {
        uVar25 = *puVar27;
        if (uVar25 < 0x12) {
          lVar22 = param_1 + 4;
          uVar35 = 0x11;
          uVar21 = uVar25;
        }
        else {
          puVar27 = (ulonglong *)(param_1 + 8);
          lVar22 = *(longlong *)(param_1 + 0x10);
          uVar21 = *(ulonglong *)(param_1 + 8);
          uVar35 = uVar25;
        }
        if (uVar21 == uVar35) {
          FUN_1801fc070(param_1);
          puVar27 = (ulonglong *)(param_1 + 8);
          uVar21 = *(ulonglong *)(param_1 + 8);
          lVar22 = *(longlong *)(param_1 + 0x10);
        }
        *(uint *)(lVar22 + uVar21 * 4) = iVar24 + 0x11a7U & 0xffff;
        *puVar27 = *puVar27 + 1;
        uVar25 = 2;
      }
    }
    else {
      param_2 = param_3 & 0xffff;
      if (param_2 == 1) {
        uVar25 = *(ulonglong *)PTR_DAT_1802fd520;
        auVar2._8_4_ = 0;
        auVar2._0_8_ = uVar25;
        auVar2._12_2_ = (short)(uVar25 >> 0x30);
        auVar6._8_2_ = (short)(uVar25 >> 0x20);
        auVar6._0_8_ = uVar25;
        auVar6._10_4_ = auVar2._10_4_;
        auVar14._6_8_ = 0;
        auVar14._0_6_ = auVar6._8_6_;
        auVar10._4_2_ = (short)(uVar25 >> 0x10);
        auVar10._0_4_ = (uint)uVar25;
        auVar10._6_8_ = SUB148(auVar14 << 0x40,6);
        local_88._0_4_ = (uint)uVar25 & 0xffff;
        local_88._4_10_ = auVar10._4_10_;
        local_88._14_2_ = 0;
        uVar25 = *(ulonglong *)(PTR_DAT_1802fd520 + 8);
        auVar3._8_4_ = 0;
        auVar3._0_8_ = uVar25;
        auVar3._12_2_ = (short)(uVar25 >> 0x30);
        auVar7._8_2_ = (short)(uVar25 >> 0x20);
        auVar7._0_8_ = uVar25;
        auVar7._10_4_ = auVar3._10_4_;
        auVar15._6_8_ = 0;
        auVar15._0_6_ = auVar7._8_6_;
        auVar11._4_2_ = (short)(uVar25 >> 0x10);
        auVar11._0_4_ = (uint)uVar25;
        auVar11._6_8_ = SUB148(auVar15 << 0x40,6);
        local_78._0_4_ = (uint)uVar25 & 0xffff;
        local_78._4_10_ = auVar11._4_10_;
        local_78._14_2_ = 0;
        uVar25 = *(ulonglong *)(PTR_DAT_1802fd520 + 0x10);
        auVar4._8_4_ = 0;
        auVar4._0_8_ = uVar25;
        auVar4._12_2_ = (short)(uVar25 >> 0x30);
        auVar8._8_2_ = (short)(uVar25 >> 0x20);
        auVar8._0_8_ = uVar25;
        auVar8._10_4_ = auVar4._10_4_;
        auVar16._6_8_ = 0;
        auVar16._0_6_ = auVar8._8_6_;
        auVar12._4_2_ = (short)(uVar25 >> 0x10);
        auVar12._0_4_ = (uint)uVar25;
        auVar12._6_8_ = SUB148(auVar16 << 0x40,6);
        local_68._0_4_ = (uint)uVar25 & 0xffff;
        local_68._4_10_ = auVar12._4_10_;
        local_68._14_2_ = 0;
        uVar25 = *(ulonglong *)(PTR_DAT_1802fd520 + 0x18);
        auVar5._8_4_ = 0;
        auVar5._0_8_ = uVar25;
        auVar5._12_2_ = (short)(uVar25 >> 0x30);
        auVar9._8_2_ = (short)(uVar25 >> 0x20);
        auVar9._0_8_ = uVar25;
        auVar9._10_4_ = auVar5._10_4_;
        auVar17._6_8_ = 0;
        auVar17._0_6_ = auVar9._8_6_;
        auVar13._4_2_ = (short)(uVar25 >> 0x10);
        auVar13._0_4_ = (uint)uVar25;
        auVar13._6_8_ = SUB148(auVar17 << 0x40,6);
        local_58._0_4_ = (uint)uVar25 & 0xffff;
        local_58._4_10_ = auVar13._4_10_;
        local_58._14_2_ = 0;
        local_48 = (uint)*(ushort *)(PTR_DAT_1802fd520 + 0x20);
        FUN_1801a3da0(param_1,local_88);
        param_2 = 0x635;
        uVar25 = 0x11;
      }
      else {
        if ((param_3 & 0xf800 ^ 0xffefd800) < 0xffef0800) {
          param_2 = 0xfffd;
        }
        uVar25 = 0;
      }
    }
    goto LAB_1801a5f01;
  }
  if ((param_3 & 0xffe0) != 0) {
    uVar25 = *(ulonglong *)(param_1 + 0x48);
    if (uVar25 < 0x12) {
      plVar19 = (longlong *)(param_1 + 0x48);
      lVar22 = param_1 + 4;
      uVar35 = 0x11;
      uVar21 = uVar25;
    }
    else {
      plVar19 = (longlong *)(param_1 + 8);
      lVar22 = *(longlong *)(param_1 + 0x10);
      uVar21 = *(ulonglong *)(param_1 + 8);
      uVar35 = uVar25;
    }
    if (uVar21 == uVar35) {
      FUN_1801fc070(param_1);
      plVar19 = (longlong *)(param_1 + 8);
      uVar21 = *(ulonglong *)(param_1 + 8);
      lVar22 = *(longlong *)(param_1 + 0x10);
    }
    param_2 = param_3 & 0x7fff;
    *(uint *)(lVar22 + uVar21 * 4) = param_3 >> 0xf & 0x7fff | 0xff000000;
    *plVar19 = *plVar19 + 1;
    uVar25 = 0;
    goto LAB_1801a5f01;
  }
  uVar35 = (ulonglong)((param_3 & 0x3fffffff) >> 0x10) - 1;
  uVar21 = *(ulonglong *)(param_1 + 0x78);
  if (uVar35 < uVar21) {
    uVar28 = (param_3 & 0x10) >> 4;
    uVar36 = *(undefined8 *)(param_1 + 0x70);
    uVar25 = uVar35;
    uVar37 = uVar21;
LAB_1801a5d16:
    param_2 = FUN_1801a64d0(param_1,uVar25,(param_3 & 0xf) + 2,uVar28,uVar36,uVar37);
  }
  else {
    lVar22 = *(longlong *)(param_1 + 0x88);
    uVar29 = uVar21 + lVar22;
    uVar25 = uVar35 - uVar29;
    if (uVar35 < uVar29) {
      uVar28 = (param_3 & 0x10) >> 4;
      uVar36 = *(undefined8 *)(param_1 + 0x80);
    }
    else {
      uVar37 = *(ulonglong *)(param_1 + 0x98);
      uVar21 = uVar29 + uVar37;
      uVar28 = (param_3 & 0x10) >> 4;
      if (uVar35 < uVar21) {
        uVar36 = *(undefined8 *)(param_1 + 0x90);
        goto LAB_1801a5d16;
      }
      uVar36 = *(undefined8 *)(param_1 + 0xa0);
      lVar22 = *(longlong *)(param_1 + 0xa8);
    }
    uVar25 = uVar35 - uVar21;
    param_2 = FUN_1801a66c0(param_1,uVar25,(param_3 & 0xf) + 1,uVar28,uVar36,lVar22);
  }
LAB_1801a5f01:
  puVar27 = (ulonglong *)(param_1 + 0x48);
  lVar22 = param_1 + 4;
  puVar20 = (ulonglong *)(param_1 + 8);
LAB_1801a5f17:
  do {
    uVar28 = *(uint *)(param_1 + 0x50);
    uVar18 = *(uint *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x50) = 0x110000;
    if (uVar28 == 0x110000) {
      while( true ) {
        puVar1 = *(uint **)(param_1 + 0x58);
        if (puVar1 == *(uint **)(param_1 + 0x60)) goto LAB_1801a6361;
        *(uint **)(param_1 + 0x58) = puVar1 + 1;
        uVar28 = *puVar1;
        if (uVar28 < *(uint *)(param_1 + 0xb8)) {
          uVar18 = 0;
          goto LAB_1801a635a;
        }
        plVar19 = *(longlong **)(param_1 + 0x68);
        uVar18 = 0xffff;
        if (*(char *)((longlong)plVar19 + 0x34) != '\0') {
          uVar18 = 0xfff;
        }
        if (uVar18 < uVar28) {
          uVar18 = FUN_1801a8300(plVar19,uVar28);
        }
        else {
          uVar18 = *(uint *)(plVar19[2] +
                            (ulonglong)
                            ((uVar28 & 0x3f) +
                            (uint)*(ushort *)(*plVar19 + (ulonglong)(uVar28 >> 6) * 2)) * 4);
        }
        if (uVar18 != 0xffffffff) break;
        if (*(char *)(param_1 + 0xbc) != '\x01') {
          uVar18 = 0xffffffff;
          if (*(char *)(param_1 + 0xbc) != '\0') {
            uVar18 = 0x4000fffd;
          }
          goto LAB_1801a635a;
        }
      }
    }
    if ((uVar18 & 0x3ffffe00) != 0xd800) {
LAB_1801a635a:
      *(uint *)(param_1 + 0x50) = uVar28;
      *(uint *)(param_1 + 0x54) = uVar18;
LAB_1801a6361:
      uVar21 = *puVar27;
      if (0x11 < uVar21) {
        uVar21 = *(ulonglong *)(param_1 + 8);
        lVar22 = *(longlong *)(param_1 + 0x10);
      }
      uVar35 = uVar21 - uVar25;
      if (uVar21 < uVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar25,uVar21,uVar21,&PTR_s_C__Users_burne__cargo_registry_s_180282270);
      }
      if (1 < uVar35) {
        puVar1 = (uint *)(lVar22 + uVar25 * 4);
        lVar34 = uVar35 * 4;
        puVar23 = puVar1;
        do {
          FUN_1801a8c80(puVar23);
          lVar34 = lVar34 + -4;
          puVar23 = puVar23 + 1;
        } while (lVar34 != 0);
        local_88._0_8_ = &local_89;
        if (uVar35 < 0x15) {
          puVar23 = puVar1 + 1;
          lVar34 = 0;
          do {
            uVar28 = puVar23[-1];
            uVar18 = *puVar23;
            uVar30 = uVar18 >> 0x18;
            if (uVar30 < uVar28 >> 0x18) {
              lVar32 = 0;
              do {
                *(uint *)((longlong)puVar23 + lVar32) = uVar28;
                if (lVar34 == lVar32) {
                  puVar31 = puVar1;
                  goto LAB_1801a63f3;
                }
                uVar28 = *(uint *)((longlong)puVar23 + lVar32 + -8);
                lVar32 = lVar32 + -4;
              } while (uVar30 < uVar28 >> 0x18);
              puVar31 = (uint *)(lVar32 + (longlong)puVar23);
LAB_1801a63f3:
              *puVar31 = uVar18;
            }
            puVar23 = puVar23 + 1;
            lVar34 = lVar34 + -4;
          } while (puVar23 != (uint *)(lVar22 + uVar21 * 4));
        }
        else {
          FUN_1801a8410(puVar1,uVar35,local_88);
        }
      }
      return param_2;
    }
    if ((~uVar18 & 0xd900) != 0) {
      uVar21 = *puVar27;
      if (uVar21 < 0x12) {
        uVar29 = 0x11;
        uVar35 = uVar21;
        lVar34 = lVar22;
        puVar26 = puVar27;
      }
      else {
        uVar35 = *(ulonglong *)(param_1 + 8);
        lVar34 = *(longlong *)(param_1 + 0x10);
        puVar26 = puVar20;
        uVar29 = uVar21;
      }
      if (uVar35 == uVar29) {
        FUN_1801fc070(param_1);
        uVar35 = *(ulonglong *)(param_1 + 8);
        lVar34 = *(longlong *)(param_1 + 0x10);
        puVar26 = puVar20;
      }
      *(uint *)(lVar34 + uVar35 * 4) = uVar18 << 0x18 | uVar28;
      *puVar26 = *puVar26 + 1;
      goto LAB_1801a5f17;
    }
    uVar33 = 0xff00fffd;
    if ((int)uVar28 < 0xf75) {
      switch(uVar28) {
      case 0x340:
        uVar33 = 0xe6000300;
        uVar21 = *puVar27;
        break;
      case 0x341:
        uVar33 = 0xe6000301;
        uVar21 = *puVar27;
        break;
      case 0x342:
switchD_1801a6021_caseD_342:
        uVar21 = *puVar27;
        break;
      case 0x343:
        uVar33 = 0xe6000313;
        uVar21 = *puVar27;
        break;
      case 0x344:
        uVar21 = *puVar27;
        if (uVar21 < 0x12) {
          uVar29 = 0x11;
          uVar35 = uVar21;
          lVar34 = lVar22;
          puVar26 = puVar27;
        }
        else {
          uVar35 = *(ulonglong *)(param_1 + 8);
          lVar34 = *(longlong *)(param_1 + 0x10);
          puVar26 = puVar20;
          uVar29 = uVar21;
        }
        if (uVar35 == uVar29) {
          FUN_1801fc070(param_1);
          uVar35 = *(ulonglong *)(param_1 + 8);
          lVar34 = *(longlong *)(param_1 + 0x10);
          puVar26 = puVar20;
        }
        *(undefined4 *)(lVar34 + uVar35 * 4) = 0xe6000308;
        *puVar26 = *puVar26 + 1;
        uVar33 = 0xe6000301;
        uVar21 = *puVar27;
        break;
      default:
        if (uVar28 != 0xf73) goto switchD_1801a6021_caseD_342;
        uVar21 = *puVar27;
        if (uVar21 < 0x12) {
          uVar29 = 0x11;
          uVar35 = uVar21;
          lVar34 = lVar22;
          puVar26 = puVar27;
        }
        else {
          uVar35 = *(ulonglong *)(param_1 + 8);
          lVar34 = *(longlong *)(param_1 + 0x10);
          puVar26 = puVar20;
          uVar29 = uVar21;
        }
        if (uVar35 == uVar29) {
          FUN_1801fc070(param_1);
          uVar35 = *(ulonglong *)(param_1 + 8);
          lVar34 = *(longlong *)(param_1 + 0x10);
          puVar26 = puVar20;
        }
        *(undefined4 *)(lVar34 + uVar35 * 4) = 0x81000f71;
        *puVar26 = *puVar26 + 1;
        uVar33 = 0x82000f72;
        uVar21 = *puVar27;
      }
    }
    else {
      if ((int)uVar28 < 0xff9e) {
        if (uVar28 == 0xf75) {
          uVar21 = *puVar27;
          if (uVar21 < 0x12) {
            uVar29 = 0x11;
            uVar35 = uVar21;
            lVar34 = lVar22;
            puVar26 = puVar27;
          }
          else {
            uVar35 = *(ulonglong *)(param_1 + 8);
            lVar34 = *(longlong *)(param_1 + 0x10);
            puVar26 = puVar20;
            uVar29 = uVar21;
          }
          if (uVar35 == uVar29) {
            FUN_1801fc070(param_1);
            uVar35 = *(ulonglong *)(param_1 + 8);
            lVar34 = *(longlong *)(param_1 + 0x10);
            puVar26 = puVar20;
          }
          *(undefined4 *)(lVar34 + uVar35 * 4) = 0x81000f71;
          *puVar26 = *puVar26 + 1;
          uVar33 = 0x84000f74;
        }
        else if (uVar28 == 0xf81) {
          uVar21 = *puVar27;
          if (uVar21 < 0x12) {
            uVar29 = 0x11;
            uVar35 = uVar21;
            lVar34 = lVar22;
            puVar26 = puVar27;
          }
          else {
            uVar35 = *(ulonglong *)(param_1 + 8);
            lVar34 = *(longlong *)(param_1 + 0x10);
            puVar26 = puVar20;
            uVar29 = uVar21;
          }
          if (uVar35 == uVar29) {
            FUN_1801fc070(param_1);
            uVar35 = *(ulonglong *)(param_1 + 8);
            lVar34 = *(longlong *)(param_1 + 0x10);
            puVar26 = puVar20;
          }
          *(undefined4 *)(lVar34 + uVar35 * 4) = 0x81000f71;
          *puVar26 = *puVar26 + 1;
          uVar33 = 0x82000f80;
          uVar21 = *puVar27;
          goto joined_r0x0001801a6205;
        }
        goto switchD_1801a6021_caseD_342;
      }
      if (uVar28 == 0xff9e) {
        uVar33 = 0x8003099;
        uVar21 = *puVar27;
      }
      else {
        if (uVar28 != 0xff9f) goto switchD_1801a6021_caseD_342;
        uVar33 = 0x800309a;
        uVar21 = *puVar27;
      }
    }
joined_r0x0001801a6205:
    if (uVar21 < 0x12) {
      uVar35 = uVar21;
      lVar34 = lVar22;
      puVar26 = puVar27;
      uVar21 = 0x11;
    }
    else {
      uVar35 = *(ulonglong *)(param_1 + 8);
      lVar34 = *(longlong *)(param_1 + 0x10);
      puVar26 = puVar20;
    }
    if (uVar35 == uVar21) {
      FUN_1801fc070(param_1);
      uVar35 = *(ulonglong *)(param_1 + 8);
      lVar34 = *(longlong *)(param_1 + 0x10);
      puVar26 = puVar20;
    }
    *(undefined4 *)(lVar34 + uVar35 * 4) = uVar33;
    *puVar26 = *puVar26 + 1;
  } while( true );
}


