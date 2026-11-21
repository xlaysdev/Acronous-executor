/* FUN_18019b950 @ 18019b950 */

void FUN_18019b950(undefined1 *param_1,char *param_2,ulonglong param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 uVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  undefined2 uVar32;
  uint uVar33;
  ushort uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  short sStack_4a;
  undefined1 local_48 [16];
  
  local_48 = (undefined1  [16])0x0;
  if (1 < param_3) {
    if (*param_2 == ':') {
      if (param_2[1] != ':') goto LAB_18019b96c;
      uVar29 = 1;
      uVar39 = 2;
    }
    else {
      uVar39 = 0;
      uVar29 = 0;
    }
    uVar36 = 1;
    uVar38 = uVar29;
    while (uVar39 < param_3) {
      while( true ) {
        if (uVar29 == 8) goto LAB_18019b96c;
        if (param_2[uVar39] != ':') break;
        if (uVar38 == 1) goto LAB_18019b96c;
        uVar39 = uVar39 + 1;
        uVar29 = uVar29 + 1;
        uVar38 = 1;
        uVar36 = uVar29;
        if (param_3 <= uVar39) goto LAB_18019bc3a;
      }
      uVar40 = uVar39 + 4;
      if (param_3 <= uVar39 + 4) {
        uVar40 = param_3;
      }
      uVar33 = 0;
      uVar32 = 0;
      uVar35 = uVar39;
      if (uVar39 < uVar40) {
        do {
          uVar32 = (undefined2)uVar33;
          bVar1 = param_2[uVar35];
          uVar31 = bVar1 - 0x30;
          if (0x39 < bVar1) {
            uVar31 = (bVar1 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar31) goto LAB_18019ba32;
          uVar33 = uVar33 << 4 | uVar31;
          uVar32 = (undefined2)uVar33;
          uVar35 = uVar35 + 1;
        } while (uVar40 != uVar35);
        uVar35 = uVar40;
      }
LAB_18019ba32:
      if (uVar35 < param_3) {
        if (param_2[uVar35] != ':') {
          if ((((param_2[uVar35] != '.') || (param_3 <= uVar39)) || (6 < uVar29)) ||
             (uVar35 == uVar39)) goto LAB_18019b96c;
          uVar33 = 0;
          goto LAB_18019bc9b;
        }
        uVar35 = uVar35 + 1;
        if (uVar35 == param_3) goto LAB_18019b96c;
      }
      if (7 < uVar29) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar29,8,&DAT_180267d10);
      }
      *(undefined2 *)(local_48 + uVar29 * 2) = uVar32;
      uVar29 = uVar29 + 1;
      uVar39 = uVar35;
    }
    goto LAB_18019ba7e;
  }
  goto LAB_18019b96c;
LAB_18019bc9b:
  do {
    if (0 < (int)uVar33) {
      if ((3 < uVar33) || (param_2[uVar39] != '.')) goto LAB_18019b96c;
      uVar39 = uVar39 + 1;
    }
    if ((param_3 <= uVar39) || (9 < (byte)(param_2[uVar39] - 0x30U))) goto LAB_18019b96c;
    uVar34 = (ushort)(byte)(param_2[uVar39] - 0x30U);
    uVar40 = uVar39 + 1;
    uVar39 = param_3;
    if (uVar40 != param_3) {
      do {
        if (9 < (byte)(param_2[uVar40] - 0x30U)) {
          uVar39 = uVar40;
          break;
        }
        if ((uVar34 == 0) ||
           (uVar34 = (ushort)(byte)(param_2[uVar40] - 0x30U) + uVar34 * 10, 0xff < uVar34))
        goto LAB_18019b96c;
        uVar40 = uVar40 + 1;
      } while (param_3 != uVar40);
    }
    if (7 < uVar29) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar29,8,&DAT_180267d40);
    }
    *(ushort *)(local_48 + uVar29 * 2) = uVar34 + *(short *)(local_48 + uVar29 * 2) * 0x100;
    if ((uVar33 | 2) == 3) {
      uVar29 = uVar29 + 1;
    }
    uVar33 = uVar33 + 1;
  } while (uVar39 < param_3);
  if (uVar33 == 4) {
LAB_18019ba7e:
    if (uVar38 == 0) {
      if (uVar29 != 8) goto LAB_18019b96c;
    }
    else {
      lVar30 = uVar29 - uVar36;
      if (lVar30 != 0) {
        if (7 < uVar29 - 1) {
          uVar29 = 0xffffffffffffffff;
LAB_18019bd7b:
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar29,8,&DAT_180267d28);
        }
        uVar32 = local_48._14_2_;
        local_48._14_2_ = *(undefined2 *)(local_48 + uVar29 * 2 + -2);
        *(undefined2 *)(local_48 + uVar29 * 2 + -2) = uVar32;
        if (lVar30 + -1 != 0) {
          lVar37 = uVar36 - 1;
          uVar29 = lVar30 + -1 + lVar37;
          if (7 < uVar29) goto LAB_18019bd7b;
          uVar32 = local_48._12_2_;
          local_48._12_2_ = *(undefined2 *)(local_48 + uVar29 * 2);
          *(undefined2 *)(local_48 + uVar29 * 2) = uVar32;
          if (lVar30 + -2 != 0) {
            uVar29 = lVar30 + -2 + lVar37;
            if (7 < uVar29) goto LAB_18019bd7b;
            uVar32 = local_48._10_2_;
            local_48._10_2_ = *(undefined2 *)(local_48 + uVar29 * 2);
            *(undefined2 *)(local_48 + uVar29 * 2) = uVar32;
            if (lVar30 + -3 != 0) {
              uVar29 = lVar30 + -3 + lVar37;
              if (7 < uVar29) goto LAB_18019bd7b;
              uVar32 = local_48._8_2_;
              local_48._8_2_ = *(undefined2 *)(local_48 + uVar29 * 2);
              *(undefined2 *)(local_48 + uVar29 * 2) = uVar32;
              if (lVar30 + -4 != 0) {
                uVar29 = lVar30 + -4 + lVar37;
                if (7 < uVar29) goto LAB_18019bd7b;
                uVar32 = local_48._6_2_;
                local_48._6_2_ = *(undefined2 *)(local_48 + uVar29 * 2);
                *(undefined2 *)(local_48 + uVar29 * 2) = uVar32;
                if (lVar30 + -5 != 0) {
                  uVar29 = lVar30 + -5 + lVar37;
                  if (7 < uVar29) goto LAB_18019bd7b;
                  uVar32 = local_48._4_2_;
                  local_48._4_2_ = *(undefined2 *)(local_48 + uVar29 * 2);
                  *(undefined2 *)(local_48 + uVar29 * 2) = uVar32;
                  if (lVar30 + -6 != 0) {
                    uVar29 = lVar30 + -6 + lVar37;
                    if (7 < uVar29) goto LAB_18019bd7b;
                    uVar32 = local_48._2_2_;
                    local_48._2_2_ = *(undefined2 *)(local_48 + uVar29 * 2);
                    *(undefined2 *)(local_48 + uVar29 * 2) = uVar32;
                    if (lVar30 + -7 != 0) {
                      uVar29 = lVar30 + -7 + lVar37;
                      if (7 < uVar29) goto LAB_18019bd7b;
                      uVar32 = local_48._0_2_;
                      local_48._0_2_ = *(undefined2 *)(local_48 + uVar29 * 2);
                      *(undefined2 *)(local_48 + uVar29 * 2) = uVar32;
                      if (lVar30 != 8) {
                    /* WARNING: Subroutine does not return */
                        FUN_180201d02(0xffffffffffffffff,8,&DAT_180267d28);
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
LAB_18019bc3a:
    auVar42[1] = 0;
    auVar42[0] = local_48[8];
    auVar42[2] = local_48[9];
    auVar42[3] = 0;
    auVar42[4] = local_48[10];
    auVar42[5] = 0;
    auVar42[6] = local_48[0xb];
    auVar42[7] = 0;
    auVar42[8] = local_48[0xc];
    auVar42[9] = 0;
    auVar42[10] = local_48[0xd];
    auVar42[0xb] = 0;
    auVar42[0xc] = local_48[0xe];
    auVar42[0xd] = 0;
    auVar42[0xe] = local_48[0xf];
    auVar42[0xf] = 0;
    auVar41 = pshuflw(auVar42,auVar42,0xb1);
    auVar42 = pshufhw(auVar41,auVar41,0xb1);
    auVar18[0xd] = 0;
    auVar18._0_13_ = local_48._0_13_;
    auVar18[0xe] = local_48[7];
    auVar19[0xc] = local_48[6];
    auVar19._0_12_ = local_48._0_12_;
    auVar19._13_2_ = auVar18._13_2_;
    auVar20[0xb] = 0;
    auVar20._0_11_ = local_48._0_11_;
    auVar20._12_3_ = auVar19._12_3_;
    auVar21[10] = local_48[5];
    auVar21._0_10_ = local_48._0_10_;
    auVar21._11_4_ = auVar20._11_4_;
    auVar22[9] = 0;
    auVar22._0_9_ = local_48._0_9_;
    auVar22._10_5_ = auVar21._10_5_;
    auVar23[8] = local_48[4];
    auVar23._0_8_ = local_48._0_8_;
    auVar23._9_6_ = auVar22._9_6_;
    auVar25._7_8_ = 0;
    auVar25._0_7_ = auVar23._8_7_;
    auVar26._1_8_ = SUB158(auVar25 << 0x40,7);
    auVar26[0] = local_48[3];
    auVar26._9_6_ = 0;
    auVar27._1_10_ = SUB1510(auVar26 << 0x30,5);
    auVar27[0] = local_48[2];
    auVar27._11_4_ = 0;
    auVar24[2] = local_48[1];
    auVar24._0_2_ = local_48._0_2_;
    auVar24._3_12_ = SUB1512(auVar27 << 0x20,3);
    auVar41._0_2_ = local_48._0_2_ & 0xff;
    auVar41._2_13_ = auVar24._2_13_;
    auVar41[0xf] = 0;
    auVar41 = pshuflw((undefined1  [16])0x0,auVar41,0xb1);
    auVar41 = pshufhw(auVar41,auVar41,0xb1);
    sVar2 = auVar41._0_2_;
    sVar3 = auVar41._2_2_;
    sVar4 = auVar41._4_2_;
    sVar5 = auVar41._6_2_;
    sVar6 = auVar41._8_2_;
    sVar7 = auVar41._10_2_;
    sVar8 = auVar41._12_2_;
    sVar9 = auVar41._14_2_;
    sVar10 = auVar42._0_2_;
    sVar11 = auVar42._2_2_;
    sVar12 = auVar42._4_2_;
    sVar13 = auVar42._6_2_;
    sVar14 = auVar42._8_2_;
    sVar15 = auVar42._10_2_;
    sVar16 = auVar42._12_2_;
    sVar17 = auVar42._14_2_;
    param_1[1] = (0 < sVar2) * (sVar2 < 0x100) * auVar41[0] - (0xff < sVar2);
    param_1[2] = (0 < sVar3) * (sVar3 < 0x100) * auVar41[2] - (0xff < sVar3);
    param_1[3] = (0 < sVar4) * (sVar4 < 0x100) * auVar41[4] - (0xff < sVar4);
    param_1[4] = (0 < sVar5) * (sVar5 < 0x100) * auVar41[6] - (0xff < sVar5);
    param_1[5] = (0 < sVar6) * (sVar6 < 0x100) * auVar41[8] - (0xff < sVar6);
    param_1[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar41[10] - (0xff < sVar7);
    param_1[7] = (0 < sVar8) * (sVar8 < 0x100) * auVar41[0xc] - (0xff < sVar8);
    param_1[8] = (0 < sVar9) * (sVar9 < 0x100) * auVar41[0xe] - (0xff < sVar9);
    param_1[9] = (0 < sVar10) * (sVar10 < 0x100) * auVar42[0] - (0xff < sVar10);
    param_1[10] = (0 < sVar11) * (sVar11 < 0x100) * auVar42[2] - (0xff < sVar11);
    param_1[0xb] = (0 < sVar12) * (sVar12 < 0x100) * auVar42[4] - (0xff < sVar12);
    param_1[0xc] = (0 < sVar13) * (sVar13 < 0x100) * auVar42[6] - (0xff < sVar13);
    param_1[0xd] = (0 < sVar14) * (sVar14 < 0x100) * auVar42[8] - (0xff < sVar14);
    param_1[0xe] = (0 < sVar15) * (sVar15 < 0x100) * auVar42[10] - (0xff < sVar15);
    param_1[0xf] = (0 < sVar16) * (sVar16 < 0x100) * auVar42[0xc] - (0xff < sVar16);
    param_1[0x10] = (0 < sVar17) * (sVar17 < 0x100) * auVar42[0xe] - (0xff < sVar17);
    uVar28 = 0;
    goto LAB_18019b972;
  }
LAB_18019b96c:
  param_1[1] = 4;
  uVar28 = 1;
LAB_18019b972:
  *param_1 = uVar28;
  return;
}


