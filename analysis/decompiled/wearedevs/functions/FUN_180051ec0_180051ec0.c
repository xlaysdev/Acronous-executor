/* FUN_180051ec0 @ 180051ec0 */

longlong FUN_180051ec0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte *pbVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  byte *pbVar33;
  longlong *plVar34;
  ulonglong uVar35;
  bool bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  byte bVar49;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 local_170 [24];
  byte **local_158;
  undefined1 *puStack_150;
  longlong *local_148;
  undefined1 *puStack_140;
  undefined8 local_138;
  longlong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  byte *local_b8;
  ulonglong local_b0;
  byte **local_a8;
  undefined1 *puStack_a0;
  longlong *local_98;
  undefined1 *puStack_90;
  char local_88;
  undefined7 uStack_87;
  longlong *local_80;
  undefined1 local_71;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  cVar2 = *(char *)((longlong)param_1 + 0x32);
  if (cVar2 == '\x02') {
    plVar34 = (longlong *)param_1[2];
    plVar4 = *(longlong **)(*param_1 + 0x28);
    if (plVar4 <= plVar34) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(plVar34,plVar4,&PTR_s_C__Users_burne__cargo_registry_s_180208e60);
    }
    lVar31 = *(longlong *)(*param_1 + 0x20);
    goto LAB_1800520b8;
  }
  uVar30 = *(ulonglong *)(param_2 + 0x20);
  local_80 = param_1;
  if (uVar30 == 0) {
    local_71 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("authority implies host",0x16,&PTR_s_C__Users_burne__cargo_registry_s_180208c38);
  }
  local_71 = 1;
  pbVar29 = (byte *)FUN_1801ac970(*(undefined8 *)(param_2 + 0x18));
  local_71 = 1;
  local_b8 = pbVar29;
  local_b0 = uVar30;
  FUN_180104740();
  if (local_f0 == 0) {
    if (uVar30 != 0) {
      if (uVar30 < 8) {
        bVar36 = false;
        pbVar33 = pbVar29;
LAB_180052258:
        do {
          bVar3 = *pbVar33;
          pbVar33 = pbVar33 + 1;
          bVar36 = (bool)(bVar36 | (bVar3 != 9 && (bVar3 == 0x7f || bVar3 < 0x20)));
        } while (pbVar33 != pbVar29 + uVar30);
      }
      else if (uVar30 < 0x20) {
        uVar32 = 0;
        bVar36 = false;
LAB_1800521c9:
        uVar35 = uVar30 & 0xfffffffffffffff8;
        pbVar33 = pbVar29 + uVar35;
        auVar37 = ZEXT116(bVar36);
        auVar38._8_4_ = 0xffffffff;
        auVar38._0_8_ = 0xffffffffffffffff;
        auVar38._12_4_ = 0xffffffff;
        do {
          uVar1 = *(undefined8 *)(pbVar29 + uVar32);
          bVar49 = (byte)uVar1;
          bVar52 = (byte)((ulonglong)uVar1 >> 8);
          bVar53 = (byte)((ulonglong)uVar1 >> 0x10);
          bVar54 = (byte)((ulonglong)uVar1 >> 0x18);
          bVar55 = (byte)((ulonglong)uVar1 >> 0x20);
          bVar56 = (byte)((ulonglong)uVar1 >> 0x28);
          bVar57 = (byte)((ulonglong)uVar1 >> 0x30);
          bVar3 = (byte)((ulonglong)uVar1 >> 0x38);
          auVar51[0] = -((byte)((bVar49 < (byte)' ') * ' ' | (bVar49 >= (byte)' ') * bVar49) ==
                        bVar49);
          auVar51[1] = -((byte)((bVar52 < (byte)' ') * ' ' | (bVar52 >= (byte)' ') * bVar52) ==
                        bVar52);
          auVar51[2] = -((byte)((bVar53 < (byte)' ') * ' ' | (bVar53 >= (byte)' ') * bVar53) ==
                        bVar53);
          auVar51[3] = -((byte)((bVar54 < (byte)' ') * ' ' | (bVar54 >= (byte)' ') * bVar54) ==
                        bVar54);
          auVar51[4] = -((byte)((bVar55 < (byte)' ') * ' ' | (bVar55 >= (byte)' ') * bVar55) ==
                        bVar55);
          auVar51[5] = -((byte)((bVar56 < (byte)' ') * ' ' | (bVar56 >= (byte)' ') * bVar56) ==
                        bVar56);
          auVar51[6] = -((byte)((bVar57 < (byte)' ') * ' ' | (bVar57 >= (byte)' ') * bVar57) ==
                        bVar57);
          auVar51[7] = -((byte)((bVar3 < (byte)' ') * ' ' | (bVar3 >= (byte)' ') * bVar3) == bVar3);
          auVar51[8] = 0xff;
          auVar51[9] = 0xff;
          auVar51[10] = 0xff;
          auVar51[0xb] = 0xff;
          auVar51[0xc] = 0xff;
          auVar51[0xd] = 0xff;
          auVar51[0xe] = 0xff;
          auVar51[0xf] = 0xff;
          auVar60[0] = -(bVar49 == 0x7f);
          auVar60[1] = -(bVar52 == 0x7f);
          auVar60[2] = -(bVar53 == 0x7f);
          auVar60[3] = -(bVar54 == 0x7f);
          auVar60[4] = -(bVar55 == 0x7f);
          auVar60[5] = -(bVar56 == 0x7f);
          auVar60[6] = -(bVar57 == 0x7f);
          auVar60[7] = -(bVar3 == 0x7f);
          auVar60[8] = 0xff;
          auVar60[9] = 0xff;
          auVar60[10] = 0xff;
          auVar60[0xb] = 0xff;
          auVar60[0xc] = 0xff;
          auVar60[0xd] = 0xff;
          auVar60[0xe] = 0xff;
          auVar60[0xf] = 0xff;
          auVar39[0] = -(bVar49 == '\t');
          auVar39[1] = -(bVar52 == '\t');
          auVar39[2] = -(bVar53 == '\t');
          auVar39[3] = -(bVar54 == '\t');
          auVar39[4] = -(bVar55 == '\t');
          auVar39[5] = -(bVar56 == '\t');
          auVar39[6] = -(bVar57 == '\t');
          auVar39[7] = -(bVar3 == '\t');
          auVar39[8] = 0xff;
          auVar39[9] = 0xff;
          auVar39[10] = 0xff;
          auVar39[0xb] = 0xff;
          auVar39[0xc] = 0xff;
          auVar39[0xd] = 0xff;
          auVar39[0xe] = 0xff;
          auVar39[0xf] = 0xff;
          auVar40 = ~auVar39 & (auVar60 | auVar51 ^ auVar38);
          auVar48._0_14_ = auVar40._0_14_;
          auVar48[0xe] = auVar40[7];
          auVar48[0xf] = auVar40[7];
          auVar47._14_2_ = auVar48._14_2_;
          auVar47._0_13_ = auVar40._0_13_;
          auVar47[0xd] = auVar40[6];
          auVar46._13_3_ = auVar47._13_3_;
          auVar46._0_12_ = auVar40._0_12_;
          auVar46[0xc] = auVar40[6];
          auVar45._12_4_ = auVar46._12_4_;
          auVar45._0_11_ = auVar40._0_11_;
          auVar45[0xb] = auVar40[5];
          auVar44._11_5_ = auVar45._11_5_;
          auVar44._0_10_ = auVar40._0_10_;
          auVar44[10] = auVar40[5];
          auVar43._10_6_ = auVar44._10_6_;
          auVar43._0_9_ = auVar40._0_9_;
          auVar43[9] = auVar40[4];
          auVar42._9_7_ = auVar43._9_7_;
          auVar42._0_8_ = auVar40._0_8_;
          auVar42[8] = auVar40[4];
          auVar41._8_8_ = auVar42._8_8_;
          auVar41[7] = auVar40[3];
          auVar41[6] = auVar40[3];
          auVar41[5] = auVar40[2];
          auVar41[4] = auVar40[2];
          auVar41[3] = auVar40[1];
          auVar41[2] = auVar40[1];
          auVar41[0] = auVar40[0];
          auVar41[1] = auVar41[0];
          auVar37 = auVar37 | auVar41;
          uVar32 = uVar32 + 8;
        } while (uVar35 != uVar32);
        auVar37 = psllw(auVar37,7);
        bVar36 = (((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x37,0) & 1) != 0)
                   || (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x57,0) & 1) != 0)
                 || (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x77,0) & 1) != 0;
        if (uVar30 != uVar35) goto LAB_180052258;
      }
      else {
        uVar32 = uVar30 & 0xffffffffffffffe0;
        auVar37 = (undefined1  [16])0x0;
        uVar35 = 0;
        auVar38 = (undefined1  [16])0x0;
        do {
          pbVar33 = pbVar29 + uVar35;
          bVar3 = *pbVar33;
          bVar49 = pbVar33[1];
          bVar52 = pbVar33[2];
          bVar53 = pbVar33[3];
          bVar54 = pbVar33[4];
          bVar55 = pbVar33[5];
          bVar56 = pbVar33[6];
          bVar57 = pbVar33[7];
          bVar5 = pbVar33[8];
          bVar6 = pbVar33[9];
          bVar7 = pbVar33[10];
          bVar8 = pbVar33[0xb];
          bVar9 = pbVar33[0xc];
          bVar10 = pbVar33[0xd];
          bVar11 = pbVar33[0xe];
          bVar12 = pbVar33[0xf];
          pbVar33 = pbVar29 + uVar35 + 0x10;
          bVar13 = *pbVar33;
          bVar14 = pbVar33[1];
          bVar15 = pbVar33[2];
          bVar16 = pbVar33[3];
          bVar17 = pbVar33[4];
          bVar18 = pbVar33[5];
          bVar19 = pbVar33[6];
          bVar20 = pbVar33[7];
          bVar21 = pbVar33[8];
          bVar22 = pbVar33[9];
          bVar23 = pbVar33[10];
          bVar24 = pbVar33[0xb];
          bVar25 = pbVar33[0xc];
          bVar26 = pbVar33[0xd];
          bVar27 = pbVar33[0xe];
          bVar28 = pbVar33[0xf];
          auVar58[0] = -((byte)((0x1f < bVar3) * '\x1f' | (0x1f >= bVar3) * bVar3) == bVar3);
          auVar58[1] = -((byte)((0x1f < bVar49) * '\x1f' | (0x1f >= bVar49) * bVar49) == bVar49);
          auVar58[2] = -((byte)((0x1f < bVar52) * '\x1f' | (0x1f >= bVar52) * bVar52) == bVar52);
          auVar58[3] = -((byte)((0x1f < bVar53) * '\x1f' | (0x1f >= bVar53) * bVar53) == bVar53);
          auVar58[4] = -((byte)((0x1f < bVar54) * '\x1f' | (0x1f >= bVar54) * bVar54) == bVar54);
          auVar58[5] = -((byte)((0x1f < bVar55) * '\x1f' | (0x1f >= bVar55) * bVar55) == bVar55);
          auVar58[6] = -((byte)((0x1f < bVar56) * '\x1f' | (0x1f >= bVar56) * bVar56) == bVar56);
          auVar58[7] = -((byte)((0x1f < bVar57) * '\x1f' | (0x1f >= bVar57) * bVar57) == bVar57);
          auVar58[8] = -((byte)((0x1f < bVar5) * '\x1f' | (0x1f >= bVar5) * bVar5) == bVar5);
          auVar58[9] = -((byte)((0x1f < bVar6) * '\x1f' | (0x1f >= bVar6) * bVar6) == bVar6);
          auVar58[10] = -((byte)((0x1f < bVar7) * '\x1f' | (0x1f >= bVar7) * bVar7) == bVar7);
          auVar58[0xb] = -((byte)((0x1f < bVar8) * '\x1f' | (0x1f >= bVar8) * bVar8) == bVar8);
          auVar58[0xc] = -((byte)((0x1f < bVar9) * '\x1f' | (0x1f >= bVar9) * bVar9) == bVar9);
          auVar58[0xd] = -((byte)((0x1f < bVar10) * '\x1f' | (0x1f >= bVar10) * bVar10) == bVar10);
          auVar58[0xe] = -((byte)((0x1f < bVar11) * '\x1f' | (0x1f >= bVar11) * bVar11) == bVar11);
          auVar58[0xf] = -((byte)((0x1f < bVar12) * '\x1f' | (0x1f >= bVar12) * bVar12) == bVar12);
          auVar61[0] = -((byte)((0x1f < bVar13) * '\x1f' | (0x1f >= bVar13) * bVar13) == bVar13);
          auVar61[1] = -((byte)((0x1f < bVar14) * '\x1f' | (0x1f >= bVar14) * bVar14) == bVar14);
          auVar61[2] = -((byte)((0x1f < bVar15) * '\x1f' | (0x1f >= bVar15) * bVar15) == bVar15);
          auVar61[3] = -((byte)((0x1f < bVar16) * '\x1f' | (0x1f >= bVar16) * bVar16) == bVar16);
          auVar61[4] = -((byte)((0x1f < bVar17) * '\x1f' | (0x1f >= bVar17) * bVar17) == bVar17);
          auVar61[5] = -((byte)((0x1f < bVar18) * '\x1f' | (0x1f >= bVar18) * bVar18) == bVar18);
          auVar61[6] = -((byte)((0x1f < bVar19) * '\x1f' | (0x1f >= bVar19) * bVar19) == bVar19);
          auVar61[7] = -((byte)((0x1f < bVar20) * '\x1f' | (0x1f >= bVar20) * bVar20) == bVar20);
          auVar61[8] = -((byte)((0x1f < bVar21) * '\x1f' | (0x1f >= bVar21) * bVar21) == bVar21);
          auVar61[9] = -((byte)((0x1f < bVar22) * '\x1f' | (0x1f >= bVar22) * bVar22) == bVar22);
          auVar61[10] = -((byte)((0x1f < bVar23) * '\x1f' | (0x1f >= bVar23) * bVar23) == bVar23);
          auVar61[0xb] = -((byte)((0x1f < bVar24) * '\x1f' | (0x1f >= bVar24) * bVar24) == bVar24);
          auVar61[0xc] = -((byte)((0x1f < bVar25) * '\x1f' | (0x1f >= bVar25) * bVar25) == bVar25);
          auVar61[0xd] = -((byte)((0x1f < bVar26) * '\x1f' | (0x1f >= bVar26) * bVar26) == bVar26);
          auVar61[0xe] = -((byte)((0x1f < bVar27) * '\x1f' | (0x1f >= bVar27) * bVar27) == bVar27);
          auVar61[0xf] = -((byte)((0x1f < bVar28) * '\x1f' | (0x1f >= bVar28) * bVar28) == bVar28);
          auVar62[0] = -(bVar3 == 0x7f);
          auVar62[1] = -(bVar49 == 0x7f);
          auVar62[2] = -(bVar52 == 0x7f);
          auVar62[3] = -(bVar53 == 0x7f);
          auVar62[4] = -(bVar54 == 0x7f);
          auVar62[5] = -(bVar55 == 0x7f);
          auVar62[6] = -(bVar56 == 0x7f);
          auVar62[7] = -(bVar57 == 0x7f);
          auVar62[8] = -(bVar5 == 0x7f);
          auVar62[9] = -(bVar6 == 0x7f);
          auVar62[10] = -(bVar7 == 0x7f);
          auVar62[0xb] = -(bVar8 == 0x7f);
          auVar62[0xc] = -(bVar9 == 0x7f);
          auVar62[0xd] = -(bVar10 == 0x7f);
          auVar62[0xe] = -(bVar11 == 0x7f);
          auVar62[0xf] = -(bVar12 == 0x7f);
          auVar59[0] = -(bVar13 == 0x7f);
          auVar59[1] = -(bVar14 == 0x7f);
          auVar59[2] = -(bVar15 == 0x7f);
          auVar59[3] = -(bVar16 == 0x7f);
          auVar59[4] = -(bVar17 == 0x7f);
          auVar59[5] = -(bVar18 == 0x7f);
          auVar59[6] = -(bVar19 == 0x7f);
          auVar59[7] = -(bVar20 == 0x7f);
          auVar59[8] = -(bVar21 == 0x7f);
          auVar59[9] = -(bVar22 == 0x7f);
          auVar59[10] = -(bVar23 == 0x7f);
          auVar59[0xb] = -(bVar24 == 0x7f);
          auVar59[0xc] = -(bVar25 == 0x7f);
          auVar59[0xd] = -(bVar26 == 0x7f);
          auVar59[0xe] = -(bVar27 == 0x7f);
          auVar59[0xf] = -(bVar28 == 0x7f);
          auVar40[0] = -(bVar3 == 9);
          auVar40[1] = -(bVar49 == 9);
          auVar40[2] = -(bVar52 == 9);
          auVar40[3] = -(bVar53 == 9);
          auVar40[4] = -(bVar54 == 9);
          auVar40[5] = -(bVar55 == 9);
          auVar40[6] = -(bVar56 == 9);
          auVar40[7] = -(bVar57 == 9);
          auVar40[8] = -(bVar5 == 9);
          auVar40[9] = -(bVar6 == 9);
          auVar40[10] = -(bVar7 == 9);
          auVar40[0xb] = -(bVar8 == 9);
          auVar40[0xc] = -(bVar9 == 9);
          auVar40[0xd] = -(bVar10 == 9);
          auVar40[0xe] = -(bVar11 == 9);
          auVar40[0xf] = -(bVar12 == 9);
          auVar37 = auVar37 | ~auVar40 & (auVar62 | auVar58);
          auVar50[0] = -(bVar13 == 9);
          auVar50[1] = -(bVar14 == 9);
          auVar50[2] = -(bVar15 == 9);
          auVar50[3] = -(bVar16 == 9);
          auVar50[4] = -(bVar17 == 9);
          auVar50[5] = -(bVar18 == 9);
          auVar50[6] = -(bVar19 == 9);
          auVar50[7] = -(bVar20 == 9);
          auVar50[8] = -(bVar21 == 9);
          auVar50[9] = -(bVar22 == 9);
          auVar50[10] = -(bVar23 == 9);
          auVar50[0xb] = -(bVar24 == 9);
          auVar50[0xc] = -(bVar25 == 9);
          auVar50[0xd] = -(bVar26 == 9);
          auVar50[0xe] = -(bVar27 == 9);
          auVar50[0xf] = -(bVar28 == 9);
          auVar38 = auVar38 | ~auVar50 & (auVar59 | auVar61);
          uVar35 = uVar35 + 0x20;
        } while (uVar32 != uVar35);
        auVar37 = psllw(auVar38 | auVar37,7);
        bVar36 = (((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 ||
                              (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                             (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                            (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                           (SUB161(auVar37 >> 0x27,0) & 1) != 0) ||
                          (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
                         (SUB161(auVar37 >> 0x37,0) & 1) != 0) ||
                        (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
                       (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0
                      ) || (SUB161(auVar37 >> 0x57,0) & 1) != 0) ||
                    (SUB161(auVar37 >> 0x5f,0) & 1) != 0) || (SUB161(auVar37 >> 0x67,0) & 1) != 0)
                  || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) || (SUB161(auVar37 >> 0x77,0) & 1) != 0)
                 || auVar37[0xf] < '\0';
        if (uVar30 != uVar32) {
          if ((uVar30 & 0x18) == 0) {
            pbVar33 = pbVar29 + uVar32;
            goto LAB_180052258;
          }
          goto LAB_1800521c9;
        }
      }
      local_88 = '\x02';
      local_158 = local_a8;
      puStack_150 = puStack_a0;
      local_148 = local_98;
      puStack_140 = puStack_90;
      if (bVar36) goto joined_r0x0001800522be;
    }
    local_71 = 1;
    FUN_1801b3ac0(&local_a8,pbVar29,uVar30);
    local_88 = '\0';
    local_158 = local_a8;
    puStack_150 = puStack_a0;
    local_148 = local_98;
    puStack_140 = puStack_90;
  }
  else {
    local_f8 = local_e0;
    local_108 = local_f0;
    uStack_100 = uStack_e8;
    local_a8 = &local_b8;
    puStack_a0 = &LAB_1800a5660;
    local_98 = &local_108;
    puStack_90 = &LAB_1800ab4d0;
    local_71 = 1;
    FUN_1801ec780(local_170,&DAT_180208b70,&local_a8);
    local_71 = 1;
    FUN_1801b3d20(&local_128,local_170);
    if (local_128 == 0) {
      local_71 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180215a98);
    }
    local_d8 = local_128;
    local_d0 = local_120;
    uStack_c8 = uStack_118;
    local_c0 = local_110;
    local_71 = 1;
    FUN_1801b18c0(&local_a8,&local_d8);
    local_158 = local_a8;
    puStack_150 = puStack_a0;
    local_148 = local_98;
    puStack_140 = puStack_90;
  }
joined_r0x0001800522be:
  local_a8 = local_158;
  puStack_a0 = puStack_150;
  local_98 = local_148;
  puStack_90 = puStack_140;
  if (local_88 == '\x02') {
    local_71 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("uri host is valid header value",0x1e,&local_d8,&DAT_180208e08,
                  &PTR_s_C__Users_burne__cargo_registry_s_180208c08);
  }
  local_138 = CONCAT71(uStack_87,local_88);
  lVar31 = *local_80;
  plVar34 = local_80 + 1;
  local_71 = 0;
  uVar30 = FUN_180054210(lVar31,plVar34,&local_158,(short)local_80[6],local_80[5],cVar2);
  if ((uVar30 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_d8,&DAT_180208de8,
                  &PTR_s_C__Users_burne__cargo_registry_s_180208e78);
  }
  if (*(longlong **)(lVar31 + 0x28) <= plVar34) {
    local_71 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(plVar34,*(longlong **)(lVar31 + 0x28),
                  &PTR_s_C__Users_burne__cargo_registry_s_1802091a8);
  }
  lVar31 = *(longlong *)(lVar31 + 0x20);
LAB_1800520b8:
  return lVar31 + (longlong)plVar34 * 0x68 + 0x18;
}


