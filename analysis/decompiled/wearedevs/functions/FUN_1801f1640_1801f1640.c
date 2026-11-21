/* FUN_1801f1640 @ 1801f1640 */

void FUN_1801f1640(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  short sVar5;
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  longlong lVar26;
  ulonglong uVar27;
  undefined1 (*pauVar28) [16];
  char cVar29;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  undefined1 auVar30 [16];
  char cVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined6 local_58;
  undefined2 local_52;
  undefined6 uStack_50;
  undefined1 local_48 [2] [16];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_48[0] = (undefined1  [16])0x0;
  pauVar28 = local_48;
  lVar26 = FUN_1801f1430(param_2,pauVar28,8);
  if (lVar26 == 8) {
    auVar46[1] = 0;
    auVar46[0] = local_48[0][8];
    auVar46[2] = local_48[0][9];
    auVar46[3] = 0;
    auVar46[4] = local_48[0][10];
    auVar46[5] = 0;
    auVar46[6] = local_48[0][0xb];
    auVar46[7] = 0;
    auVar46[8] = local_48[0][0xc];
    auVar46[9] = 0;
    auVar46[10] = local_48[0][0xd];
    auVar46[0xb] = 0;
    auVar46[0xc] = local_48[0][0xe];
    auVar46[0xd] = 0;
    auVar46[0xe] = local_48[0][0xf];
    auVar46[0xf] = 0;
    auVar47 = pshuflw(auVar46,auVar46,0xb1);
    auVar48 = pshufhw(auVar47,auVar47,0xb1);
    auVar7[0xd] = 0;
    auVar7._0_13_ = local_48[0]._0_13_;
    auVar7[0xe] = local_48[0][7];
    auVar9[0xc] = local_48[0][6];
    auVar9._0_12_ = local_48[0]._0_12_;
    auVar9._13_2_ = auVar7._13_2_;
    auVar11[0xb] = 0;
    auVar11._0_11_ = local_48[0]._0_11_;
    auVar11._12_3_ = auVar9._12_3_;
    auVar13[10] = local_48[0][5];
    auVar13._0_10_ = local_48[0]._0_10_;
    auVar13._11_4_ = auVar11._11_4_;
    auVar15[9] = 0;
    auVar15._0_9_ = local_48[0]._0_9_;
    auVar15._10_5_ = auVar13._10_5_;
    auVar17[8] = local_48[0][4];
    auVar17._0_8_ = local_48[0]._0_8_;
    auVar17._9_6_ = auVar15._9_6_;
    auVar20._7_8_ = 0;
    auVar20._0_7_ = auVar17._8_7_;
    auVar21._1_8_ = SUB158(auVar20 << 0x40,7);
    auVar21[0] = local_48[0][3];
    auVar21._9_6_ = 0;
    auVar22._1_10_ = SUB1510(auVar21 << 0x30,5);
    auVar22[0] = local_48[0][2];
    auVar22._11_4_ = 0;
    auVar19[2] = local_48[0][1];
    auVar19._0_2_ = local_48[0]._0_2_;
    auVar19._3_12_ = SUB1512(auVar22 << 0x20,3);
    auVar30._0_2_ = local_48[0]._0_2_ & 0xff;
    auVar30._2_13_ = auVar19._2_13_;
    auVar30[0xf] = 0;
    auVar47 = pshuflw(auVar30,auVar30,0xb1);
    auVar47 = pshufhw(auVar47,auVar47,0xb1);
    sVar5 = auVar47._0_2_;
    cVar29 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[0] - (0xff < sVar5);
    sVar5 = auVar47._2_2_;
    cVar31 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[2] - (0xff < sVar5);
    sVar5 = auVar47._4_2_;
    cVar32 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[4] - (0xff < sVar5);
    sVar5 = auVar47._6_2_;
    cVar33 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[6] - (0xff < sVar5);
    sVar5 = auVar47._8_2_;
    cVar34 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[8] - (0xff < sVar5);
    sVar5 = auVar47._10_2_;
    cVar35 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[10] - (0xff < sVar5);
    sVar5 = auVar47._12_2_;
    cVar36 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[0xc] - (0xff < sVar5);
    sVar5 = auVar47._14_2_;
    cVar37 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[0xe] - (0xff < sVar5);
    sVar5 = auVar48._0_2_;
    cVar38 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[0] - (0xff < sVar5);
    sVar5 = auVar48._2_2_;
    cVar39 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[2] - (0xff < sVar5);
    sVar5 = auVar48._4_2_;
    cVar40 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[4] - (0xff < sVar5);
    sVar5 = auVar48._6_2_;
    cVar41 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[6] - (0xff < sVar5);
    sVar5 = auVar48._8_2_;
    cVar42 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[8] - (0xff < sVar5);
    sVar5 = auVar48._10_2_;
    cVar43 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[10] - (0xff < sVar5);
    sVar5 = auVar48._12_2_;
    cVar44 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[0xc] - (0xff < sVar5);
    sVar5 = auVar48._14_2_;
    cVar45 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[0xe] - (0xff < sVar5);
LAB_1801f16ab:
    param_1[1] = cVar29;
    param_1[2] = cVar31;
    param_1[3] = cVar32;
    param_1[4] = cVar33;
    param_1[5] = cVar34;
    param_1[6] = cVar35;
    param_1[7] = cVar36;
    param_1[8] = cVar37;
    param_1[9] = cVar38;
    param_1[10] = cVar39;
    param_1[0xb] = cVar40;
    param_1[0xc] = cVar41;
    param_1[0xd] = cVar42;
    param_1[0xe] = cVar43;
    param_1[0xf] = cVar44;
    param_1[0x10] = cVar45;
    *param_1 = 1;
  }
  else {
    if ((((((ulonglong)pauVar28 & 1) == 0) && (lVar3 = param_2[1], lVar3 != 0)) &&
        (pcVar4 = (char *)*param_2, *pcVar4 == ':')) && (lVar3 != 1)) {
      cVar37 = pcVar4[1];
      *param_2 = pcVar4 + 2;
      param_2[1] = lVar3 + -2;
      if (cVar37 == ':') {
        uStack_50 = 0;
        local_58 = 0;
        local_52 = 0;
        if (7 < 7U - lVar26) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,7U - lVar26,7,&PTR_s_library_core_src_net_parser_rs_180293780);
        }
        uVar27 = FUN_1801f1430(param_2,&local_58);
        if (8 < uVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(8 - uVar27,8,8,&PTR_s_library_core_src_net_parser_rs_180293768);
        }
        if (uVar27 == 8) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,8,7,&PTR_s_library_core_src_net_parser_rs_180293750);
        }
        memcpy((void *)((longlong)local_48 + (8 - uVar27) * 2),&local_58,uVar27 * 2);
        auVar48[1] = 0;
        auVar48[0] = local_48[0][8];
        auVar48[2] = local_48[0][9];
        auVar48[3] = 0;
        auVar48[4] = local_48[0][10];
        auVar48[5] = 0;
        auVar48[6] = local_48[0][0xb];
        auVar48[7] = 0;
        auVar48[8] = local_48[0][0xc];
        auVar48[9] = 0;
        auVar48[10] = local_48[0][0xd];
        auVar48[0xb] = 0;
        auVar48[0xc] = local_48[0][0xe];
        auVar48[0xd] = 0;
        auVar48[0xe] = local_48[0][0xf];
        auVar48[0xf] = 0;
        auVar47 = pshuflw(auVar48,auVar48,0xb1);
        auVar48 = pshufhw(auVar47,auVar47,0xb1);
        auVar6[0xd] = 0;
        auVar6._0_13_ = local_48[0]._0_13_;
        auVar6[0xe] = local_48[0][7];
        auVar8[0xc] = local_48[0][6];
        auVar8._0_12_ = local_48[0]._0_12_;
        auVar8._13_2_ = auVar6._13_2_;
        auVar10[0xb] = 0;
        auVar10._0_11_ = local_48[0]._0_11_;
        auVar10._12_3_ = auVar8._12_3_;
        auVar12[10] = local_48[0][5];
        auVar12._0_10_ = local_48[0]._0_10_;
        auVar12._11_4_ = auVar10._11_4_;
        auVar14[9] = 0;
        auVar14._0_9_ = local_48[0]._0_9_;
        auVar14._10_5_ = auVar12._10_5_;
        auVar16[8] = local_48[0][4];
        auVar16._0_8_ = local_48[0]._0_8_;
        auVar16._9_6_ = auVar14._9_6_;
        auVar23._7_8_ = 0;
        auVar23._0_7_ = auVar16._8_7_;
        auVar24._1_8_ = SUB158(auVar23 << 0x40,7);
        auVar24[0] = local_48[0][3];
        auVar24._9_6_ = 0;
        auVar25._1_10_ = SUB1510(auVar24 << 0x30,5);
        auVar25[0] = local_48[0][2];
        auVar25._11_4_ = 0;
        auVar18[2] = local_48[0][1];
        auVar18._0_2_ = local_48[0]._0_2_;
        auVar18._3_12_ = SUB1512(auVar25 << 0x20,3);
        auVar47._0_2_ = local_48[0]._0_2_ & 0xff;
        auVar47._2_13_ = auVar18._2_13_;
        auVar47[0xf] = 0;
        auVar47 = pshuflw((undefined1  [16])0x0,auVar47,0xb1);
        auVar47 = pshufhw(auVar47,auVar47,0xb1);
        sVar5 = auVar47._0_2_;
        cVar29 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[0] - (0xff < sVar5);
        sVar5 = auVar47._2_2_;
        cVar31 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[2] - (0xff < sVar5);
        sVar5 = auVar47._4_2_;
        cVar32 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[4] - (0xff < sVar5);
        sVar5 = auVar47._6_2_;
        cVar33 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[6] - (0xff < sVar5);
        sVar5 = auVar47._8_2_;
        cVar34 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[8] - (0xff < sVar5);
        sVar5 = auVar47._10_2_;
        cVar35 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[10] - (0xff < sVar5);
        sVar5 = auVar47._12_2_;
        cVar36 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[0xc] - (0xff < sVar5);
        sVar5 = auVar47._14_2_;
        cVar37 = (0 < sVar5) * (sVar5 < 0x100) * auVar47[0xe] - (0xff < sVar5);
        sVar5 = auVar48._0_2_;
        cVar38 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[0] - (0xff < sVar5);
        sVar5 = auVar48._2_2_;
        cVar39 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[2] - (0xff < sVar5);
        sVar5 = auVar48._4_2_;
        cVar40 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[4] - (0xff < sVar5);
        sVar5 = auVar48._6_2_;
        cVar41 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[6] - (0xff < sVar5);
        sVar5 = auVar48._8_2_;
        cVar42 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[8] - (0xff < sVar5);
        sVar5 = auVar48._10_2_;
        cVar43 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[10] - (0xff < sVar5);
        sVar5 = auVar48._12_2_;
        cVar44 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[0xc] - (0xff < sVar5);
        sVar5 = auVar48._14_2_;
        cVar45 = (0 < sVar5) * (sVar5 < 0x100) * auVar48[0xe] - (0xff < sVar5);
        goto LAB_1801f16ab;
      }
    }
    *param_1 = 0;
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  return;
}


