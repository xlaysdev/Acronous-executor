/* FUN_1801efa20 @ 1801efa20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801efa20(undefined8 *param_1,char param_2,undefined2 *param_3,ulonglong param_4,
                       undefined8 param_5,longlong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  undefined7 uVar15;
  char cVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  char cVar23;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  undefined1 auVar24 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined4 local_44;
  
  if (param_2 == '\0') {
    uVar8 = param_6 + 1;
    uVar13 = *(uint *)(param_1 + 2);
    local_44 = 0x2d;
    if ((uVar13 & 0x800000) != 0) goto LAB_1801efa78;
LAB_1801efabd:
    param_3 = (undefined2 *)0x0;
    uVar12 = *(ushort *)((longlong)param_1 + 0x14);
    if (uVar12 <= uVar8) {
LAB_1801eface:
      uVar1 = *param_1;
      lVar5 = param_1[1];
      cVar3 = FUN_1801ef9c0(uVar1,lVar5,local_44,param_3,param_4);
      uVar6 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      if (cVar3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001801efb15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (**(code **)(lVar5 + 0x18))(uVar1,param_5,param_6);
        return uVar8;
      }
      goto LAB_1801eff06;
    }
  }
  else {
    uVar13 = *(uint *)(param_1 + 2);
    local_44 = 0x2b;
    if ((uVar13 & 0x200000) == 0) {
      local_44 = 0x110000;
    }
    uVar8 = (ulonglong)((uVar13 & 0x200000) >> 0x15) + param_6;
    if ((uVar13 & 0x800000) == 0) goto LAB_1801efabd;
LAB_1801efa78:
    if (param_4 < 0x20) {
      if (param_4 == 0) {
        lVar5 = 0;
      }
      else {
        if (3 < param_4) {
          uVar7 = (uint)param_4 & 0x1c;
          uVar6 = (ulonglong)uVar7;
          cVar23 = DAT_180293080;
          auVar16[0] = -(cVar23 < (char)*param_3);
          cVar25 = DAT_180293080._1_1_;
          cVar3 = -(cVar25 < (char)((ushort)*param_3 >> 8));
          cVar26 = DAT_180293080._2_1_;
          cVar27 = DAT_180293080._3_1_;
          cVar28 = DAT_180293080._4_1_;
          cVar29 = DAT_180293080._5_1_;
          cVar30 = DAT_180293080._6_1_;
          cVar31 = DAT_180293080._7_1_;
          cVar19 = -(cVar31 < '\0');
          auVar16._8_8_ =
               (undefined8)
               (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19),
                                                                      -(cVar30 < '\0')),
                                                             -(cVar30 < '\0')),-(cVar29 < '\0')),
                                           -(cVar29 < '\0')),-(cVar28 < '\0')),
                         CONCAT11(-(cVar28 < '\0'),cVar19)) >> 8);
          auVar16[7] = -(cVar27 < '\0');
          auVar16[6] = -(cVar27 < '\0');
          auVar16[5] = -(cVar26 < '\0');
          auVar16[4] = -(cVar26 < '\0');
          auVar16[3] = cVar3;
          auVar16[2] = cVar3;
          auVar16[1] = auVar16[0];
          auVar16 = pshuflw(auVar16,auVar16,0xd4);
          auVar17._12_4_ = auVar16._12_4_;
          auVar17._0_8_ = auVar16._0_8_;
          auVar17._8_4_ = auVar16._4_4_;
          auVar18 = auVar17 & _DAT_18025f330;
          auVar20[0] = -(cVar23 < (char)param_3[1]);
          cVar3 = -(cVar25 < (char)((ushort)param_3[1] >> 8));
          cVar19 = -(cVar31 < '\0');
          auVar20._8_8_ =
               (undefined8)
               (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19),
                                                                      -(cVar30 < '\0')),
                                                             -(cVar30 < '\0')),-(cVar29 < '\0')),
                                           -(cVar29 < '\0')),-(cVar28 < '\0')),
                         CONCAT11(-(cVar28 < '\0'),cVar19)) >> 8);
          auVar20[7] = -(cVar27 < '\0');
          auVar20[6] = -(cVar27 < '\0');
          auVar20[5] = -(cVar26 < '\0');
          auVar20[4] = -(cVar26 < '\0');
          auVar20[3] = cVar3;
          auVar20[2] = cVar3;
          auVar20[1] = auVar20[0];
          auVar16 = pshuflw(auVar20,auVar20,0xd4);
          auVar21._12_4_ = auVar16._12_4_;
          auVar21._0_8_ = auVar16._0_8_;
          auVar21._8_4_ = auVar16._4_4_;
          auVar22 = auVar21 & _DAT_18025f330;
          if (uVar6 != 4) {
            auVar32[0] = -(cVar23 < (char)param_3[2]);
            cVar3 = -(cVar25 < (char)((ushort)param_3[2] >> 8));
            cVar19 = -(cVar31 < '\0');
            auVar32._8_8_ =
                 (undefined8)
                 (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19),
                                                                        -(cVar30 < '\0')),
                                                               -(cVar30 < '\0')),-(cVar29 < '\0')),
                                             -(cVar29 < '\0')),-(cVar28 < '\0')),
                           CONCAT11(-(cVar28 < '\0'),cVar19)) >> 8);
            auVar32[7] = -(cVar27 < '\0');
            auVar32[6] = -(cVar27 < '\0');
            auVar32[5] = -(cVar26 < '\0');
            auVar32[4] = -(cVar26 < '\0');
            auVar32[3] = cVar3;
            auVar32[2] = cVar3;
            auVar32[1] = auVar32[0];
            auVar16 = pshuflw(auVar32,auVar32,0xd4);
            auVar33._12_4_ = auVar16._12_4_;
            auVar33._0_8_ = auVar16._0_8_;
            auVar33._8_4_ = auVar16._4_4_;
            auVar44[0] = -(cVar23 < (char)param_3[3]);
            cVar3 = -(cVar25 < (char)((ushort)param_3[3] >> 8));
            cVar19 = -(cVar31 < '\0');
            auVar44._8_8_ =
                 (undefined8)
                 (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19),
                                                                        -(cVar30 < '\0')),
                                                               -(cVar30 < '\0')),-(cVar29 < '\0')),
                                             -(cVar29 < '\0')),-(cVar28 < '\0')),
                           CONCAT11(-(cVar28 < '\0'),cVar19)) >> 8);
            auVar44[7] = -(cVar27 < '\0');
            auVar44[6] = -(cVar27 < '\0');
            auVar44[5] = -(cVar26 < '\0');
            auVar44[4] = -(cVar26 < '\0');
            auVar44[3] = cVar3;
            auVar44[2] = cVar3;
            auVar44[1] = auVar44[0];
            auVar16 = pshuflw(auVar44,auVar44,0xd4);
            auVar45._12_4_ = auVar16._12_4_;
            auVar45._0_8_ = auVar16._0_8_;
            auVar45._8_4_ = auVar16._4_4_;
            lVar5 = auVar18._8_8_;
            auVar18._0_8_ = auVar18._0_8_ + SUB168(auVar33 & _DAT_18025f330,0);
            auVar18._8_8_ = lVar5 + SUB168(auVar33 & _DAT_18025f330,8);
            lVar5 = auVar22._8_8_;
            auVar22._0_8_ = auVar22._0_8_ + SUB168(auVar45 & _DAT_18025f330,0);
            auVar22._8_8_ = lVar5 + SUB168(auVar45 & _DAT_18025f330,8);
            if (uVar7 != 8) {
              auVar34[0] = -(cVar23 < (char)param_3[4]);
              cVar3 = -(cVar25 < (char)((ushort)param_3[4] >> 8));
              cVar19 = -(cVar31 < '\0');
              auVar34._8_8_ =
                   (undefined8)
                   (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19),
                                                                          -(cVar30 < '\0')),
                                                                 -(cVar30 < '\0')),-(cVar29 < '\0'))
                                               ,-(cVar29 < '\0')),-(cVar28 < '\0')),
                             CONCAT11(-(cVar28 < '\0'),cVar19)) >> 8);
              auVar34[7] = -(cVar27 < '\0');
              auVar34[6] = -(cVar27 < '\0');
              auVar34[5] = -(cVar26 < '\0');
              auVar34[4] = -(cVar26 < '\0');
              auVar34[3] = cVar3;
              auVar34[2] = cVar3;
              auVar34[1] = auVar34[0];
              auVar16 = pshuflw(auVar34,auVar34,0xd4);
              auVar35._12_4_ = auVar16._12_4_;
              auVar35._0_8_ = auVar16._0_8_;
              auVar35._8_4_ = auVar16._4_4_;
              auVar46[0] = -(cVar23 < (char)param_3[5]);
              cVar3 = -(cVar25 < (char)((ushort)param_3[5] >> 8));
              cVar19 = -(cVar31 < '\0');
              auVar46._8_8_ =
                   (undefined8)
                   (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19),
                                                                          -(cVar30 < '\0')),
                                                                 -(cVar30 < '\0')),-(cVar29 < '\0'))
                                               ,-(cVar29 < '\0')),-(cVar28 < '\0')),
                             CONCAT11(-(cVar28 < '\0'),cVar19)) >> 8);
              auVar46[7] = -(cVar27 < '\0');
              auVar46[6] = -(cVar27 < '\0');
              auVar46[5] = -(cVar26 < '\0');
              auVar46[4] = -(cVar26 < '\0');
              auVar46[3] = cVar3;
              auVar46[2] = cVar3;
              auVar46[1] = auVar46[0];
              auVar16 = pshuflw(auVar46,auVar46,0xd4);
              auVar47._12_4_ = auVar16._12_4_;
              auVar47._0_8_ = auVar16._0_8_;
              auVar47._8_4_ = auVar16._4_4_;
              auVar18._0_8_ = auVar18._0_8_ + SUB168(auVar35 & _DAT_18025f330,0);
              auVar18._8_8_ = auVar18._8_8_ + SUB168(auVar35 & _DAT_18025f330,8);
              auVar22._0_8_ = auVar22._0_8_ + SUB168(auVar47 & _DAT_18025f330,0);
              auVar22._8_8_ = auVar22._8_8_ + SUB168(auVar47 & _DAT_18025f330,8);
              if (uVar7 != 0xc) {
                auVar36[0] = -(cVar23 < (char)param_3[6]);
                cVar3 = -(cVar25 < (char)((ushort)param_3[6] >> 8));
                cVar19 = -(cVar31 < '\0');
                auVar36._8_8_ =
                     (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19),
                                                                            -(cVar30 < '\0')),
                                                                   -(cVar30 < '\0')),
                                                          -(cVar29 < '\0')),-(cVar29 < '\0')),
                                        -(cVar28 < '\0')),CONCAT11(-(cVar28 < '\0'),cVar19)) >> 8);
                auVar36[7] = -(cVar27 < '\0');
                auVar36[6] = -(cVar27 < '\0');
                auVar36[5] = -(cVar26 < '\0');
                auVar36[4] = -(cVar26 < '\0');
                auVar36[3] = cVar3;
                auVar36[2] = cVar3;
                auVar36[1] = auVar36[0];
                auVar16 = pshuflw(auVar36,auVar36,0xd4);
                auVar37._12_4_ = auVar16._12_4_;
                auVar37._0_8_ = auVar16._0_8_;
                auVar37._8_4_ = auVar16._4_4_;
                auVar48[0] = -(cVar23 < (char)param_3[7]);
                cVar3 = -(cVar25 < (char)((ushort)param_3[7] >> 8));
                cVar19 = -(cVar31 < '\0');
                auVar48._8_8_ =
                     (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19),
                                                                            -(cVar30 < '\0')),
                                                                   -(cVar30 < '\0')),
                                                          -(cVar29 < '\0')),-(cVar29 < '\0')),
                                        -(cVar28 < '\0')),CONCAT11(-(cVar28 < '\0'),cVar19)) >> 8);
                auVar48[7] = -(cVar27 < '\0');
                auVar48[6] = -(cVar27 < '\0');
                auVar48[5] = -(cVar26 < '\0');
                auVar48[4] = -(cVar26 < '\0');
                auVar48[3] = cVar3;
                auVar48[2] = cVar3;
                auVar48[1] = auVar48[0];
                auVar16 = pshuflw(auVar48,auVar48,0xd4);
                auVar49._12_4_ = auVar16._12_4_;
                auVar49._0_8_ = auVar16._0_8_;
                auVar49._8_4_ = auVar16._4_4_;
                auVar18._0_8_ = auVar18._0_8_ + SUB168(auVar37 & _DAT_18025f330,0);
                auVar18._8_8_ = auVar18._8_8_ + SUB168(auVar37 & _DAT_18025f330,8);
                auVar22._0_8_ = auVar22._0_8_ + SUB168(auVar49 & _DAT_18025f330,0);
                auVar22._8_8_ = auVar22._8_8_ + SUB168(auVar49 & _DAT_18025f330,8);
                if (uVar7 != 0x10) {
                  auVar38[0] = -(cVar23 < (char)param_3[8]);
                  cVar3 = -(cVar25 < (char)((ushort)param_3[8] >> 8));
                  cVar19 = -(cVar31 < '\0');
                  auVar38._8_8_ =
                       (undefined8)
                       (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19
                                                                                      ),
                                                                              -(cVar30 < '\0')),
                                                                     -(cVar30 < '\0')),
                                                            -(cVar29 < '\0')),-(cVar29 < '\0')),
                                          -(cVar28 < '\0')),CONCAT11(-(cVar28 < '\0'),cVar19)) >> 8)
                  ;
                  auVar38[7] = -(cVar27 < '\0');
                  auVar38[6] = -(cVar27 < '\0');
                  auVar38[5] = -(cVar26 < '\0');
                  auVar38[4] = -(cVar26 < '\0');
                  auVar38[3] = cVar3;
                  auVar38[2] = cVar3;
                  auVar38[1] = auVar38[0];
                  auVar16 = pshuflw(auVar38,auVar38,0xd4);
                  auVar39._12_4_ = auVar16._12_4_;
                  auVar39._0_8_ = auVar16._0_8_;
                  auVar39._8_4_ = auVar16._4_4_;
                  auVar50[0] = -(cVar23 < (char)param_3[9]);
                  cVar3 = -(cVar25 < (char)((ushort)param_3[9] >> 8));
                  cVar19 = -(cVar31 < '\0');
                  auVar50._8_8_ =
                       (undefined8)
                       (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19
                                                                                      ),
                                                                              -(cVar30 < '\0')),
                                                                     -(cVar30 < '\0')),
                                                            -(cVar29 < '\0')),-(cVar29 < '\0')),
                                          -(cVar28 < '\0')),CONCAT11(-(cVar28 < '\0'),cVar19)) >> 8)
                  ;
                  auVar50[7] = -(cVar27 < '\0');
                  auVar50[6] = -(cVar27 < '\0');
                  auVar50[5] = -(cVar26 < '\0');
                  auVar50[4] = -(cVar26 < '\0');
                  auVar50[3] = cVar3;
                  auVar50[2] = cVar3;
                  auVar50[1] = auVar50[0];
                  auVar16 = pshuflw(auVar50,auVar50,0xd4);
                  auVar51._12_4_ = auVar16._12_4_;
                  auVar51._0_8_ = auVar16._0_8_;
                  auVar51._8_4_ = auVar16._4_4_;
                  auVar18._0_8_ = auVar18._0_8_ + SUB168(auVar39 & _DAT_18025f330,0);
                  auVar18._8_8_ = auVar18._8_8_ + SUB168(auVar39 & _DAT_18025f330,8);
                  auVar22._0_8_ = auVar22._0_8_ + SUB168(auVar51 & _DAT_18025f330,0);
                  auVar22._8_8_ = auVar22._8_8_ + SUB168(auVar51 & _DAT_18025f330,8);
                  if (uVar7 != 0x14) {
                    auVar40[0] = -(cVar23 < (char)param_3[10]);
                    cVar3 = -(cVar25 < (char)((ushort)param_3[10] >> 8));
                    cVar19 = -(cVar31 < '\0');
                    auVar40._8_8_ =
                         (undefined8)
                         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,
                                                  cVar19),-(cVar30 < '\0')),-(cVar30 < '\0')),
                                                  -(cVar29 < '\0')),-(cVar29 < '\0')),
                                            -(cVar28 < '\0')),CONCAT11(-(cVar28 < '\0'),cVar19)) >>
                         8);
                    auVar40[7] = -(cVar27 < '\0');
                    auVar40[6] = -(cVar27 < '\0');
                    auVar40[5] = -(cVar26 < '\0');
                    auVar40[4] = -(cVar26 < '\0');
                    auVar40[3] = cVar3;
                    auVar40[2] = cVar3;
                    auVar40[1] = auVar40[0];
                    auVar16 = pshuflw(auVar40,auVar40,0xd4);
                    auVar41._12_4_ = auVar16._12_4_;
                    auVar41._0_8_ = auVar16._0_8_;
                    auVar41._8_4_ = auVar16._4_4_;
                    auVar52[0] = -(cVar23 < (char)param_3[0xb]);
                    cVar3 = -(cVar25 < (char)((ushort)param_3[0xb] >> 8));
                    cVar19 = -(cVar31 < '\0');
                    auVar52._8_8_ =
                         (undefined8)
                         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,
                                                  cVar19),-(cVar30 < '\0')),-(cVar30 < '\0')),
                                                  -(cVar29 < '\0')),-(cVar29 < '\0')),
                                            -(cVar28 < '\0')),CONCAT11(-(cVar28 < '\0'),cVar19)) >>
                         8);
                    auVar52[7] = -(cVar27 < '\0');
                    auVar52[6] = -(cVar27 < '\0');
                    auVar52[5] = -(cVar26 < '\0');
                    auVar52[4] = -(cVar26 < '\0');
                    auVar52[3] = cVar3;
                    auVar52[2] = cVar3;
                    auVar52[1] = auVar52[0];
                    auVar16 = pshuflw(auVar52,auVar52,0xd4);
                    auVar53._12_4_ = auVar16._12_4_;
                    auVar53._0_8_ = auVar16._0_8_;
                    auVar53._8_4_ = auVar16._4_4_;
                    auVar18._0_8_ = auVar18._0_8_ + SUB168(auVar41 & _DAT_18025f330,0);
                    auVar18._8_8_ = auVar18._8_8_ + SUB168(auVar41 & _DAT_18025f330,8);
                    auVar22._0_8_ = auVar22._0_8_ + SUB168(auVar53 & _DAT_18025f330,0);
                    auVar22._8_8_ = auVar22._8_8_ + SUB168(auVar53 & _DAT_18025f330,8);
                    if (uVar7 != 0x18) {
                      auVar42[0] = -(cVar23 < (char)param_3[0xc]);
                      cVar3 = -(cVar25 < (char)((ushort)param_3[0xc] >> 8));
                      cVar19 = -(cVar31 < '\0');
                      auVar42._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,
                                                  cVar19),-(cVar30 < '\0')),-(cVar30 < '\0')),
                                                  -(cVar29 < '\0')),-(cVar29 < '\0')),
                                              -(cVar28 < '\0')),CONCAT11(-(cVar28 < '\0'),cVar19))
                           >> 8);
                      auVar42[7] = -(cVar27 < '\0');
                      auVar42[6] = -(cVar27 < '\0');
                      auVar42[5] = -(cVar26 < '\0');
                      auVar42[4] = -(cVar26 < '\0');
                      auVar42[3] = cVar3;
                      auVar42[2] = cVar3;
                      auVar42[1] = auVar42[0];
                      auVar16 = pshuflw(auVar42,auVar42,0xd4);
                      auVar43._12_4_ = auVar16._12_4_;
                      auVar43._0_8_ = auVar16._0_8_;
                      auVar43._8_4_ = auVar16._4_4_;
                      auVar54[0] = -(cVar23 < (char)param_3[0xd]);
                      cVar3 = -(cVar25 < (char)((ushort)param_3[0xd] >> 8));
                      cVar19 = -(cVar31 < '\0');
                      auVar54._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,
                                                  cVar19),-(cVar30 < '\0')),-(cVar30 < '\0')),
                                                  -(cVar29 < '\0')),-(cVar29 < '\0')),
                                              -(cVar28 < '\0')),CONCAT11(-(cVar28 < '\0'),cVar19))
                           >> 8);
                      auVar54[7] = -(cVar27 < '\0');
                      auVar54[6] = -(cVar27 < '\0');
                      auVar54[5] = -(cVar26 < '\0');
                      auVar54[4] = -(cVar26 < '\0');
                      auVar54[3] = cVar3;
                      auVar54[2] = cVar3;
                      auVar54[1] = auVar54[0];
                      auVar16 = pshuflw(_DAT_180293080,auVar54,0xd4);
                      auVar24._12_4_ = auVar16._12_4_;
                      auVar24._0_8_ = auVar16._0_8_;
                      auVar24._8_4_ = auVar16._4_4_;
                      auVar18._0_8_ = auVar18._0_8_ + SUB168(auVar43 & _DAT_18025f330,0);
                      auVar18._8_8_ = auVar18._8_8_ + SUB168(auVar43 & _DAT_18025f330,8);
                      auVar22._0_8_ = auVar22._0_8_ + SUB168(auVar24 & _DAT_18025f330,0);
                      auVar22._8_8_ = auVar22._8_8_ + SUB168(auVar24 & _DAT_18025f330,8);
                    }
                  }
                }
              }
            }
          }
          lVar5 = auVar18._8_8_ + auVar22._8_8_ + auVar18._0_8_ + auVar22._0_8_;
          goto LAB_1801efd7d;
        }
        uVar6 = 0;
        lVar5 = 0;
        do {
          lVar5 = lVar5 + (ulonglong)(-0x41 < *(char *)((longlong)param_3 + uVar6));
          uVar6 = uVar6 + 1;
LAB_1801efd7d:
        } while (param_4 != uVar6);
      }
    }
    else {
      lVar5 = FUN_1801f1e40(param_3,param_4);
    }
    uVar8 = uVar8 + lVar5;
    uVar12 = *(ushort *)((longlong)param_1 + 0x14);
    if (uVar12 <= uVar8) goto LAB_1801eface;
  }
  uVar15 = (undefined7)((ulonglong)param_3 >> 8);
  if ((uVar13 & 0x1000000) == 0) {
    uVar7 = (uint)uVar12 - (int)uVar8;
    switch(uVar13 >> 0x1d & 3) {
    case 0:
      uVar4 = 0;
      break;
    default:
      uVar4 = uVar7;
      break;
    case 2:
      uVar4 = (uVar7 & 0xffff) >> 1;
    }
    uVar1 = *param_1;
    lVar5 = param_1[1];
    uVar10 = uVar4 + 1;
    do {
      uVar9 = (short)uVar10 - 1;
      uVar10 = (uint)uVar9;
      if (uVar9 == 0) {
        cVar3 = FUN_1801ef9c0(uVar1,lVar5,local_44,param_3,param_4);
        uVar6 = CONCAT71(uVar15,1);
        if ((cVar3 != '\0') ||
           (cVar3 = (**(code **)(lVar5 + 0x18))(uVar1,param_5,param_6), cVar3 != '\0'))
        goto LAB_1801eff06;
        iVar14 = uVar7 - uVar4;
        iVar11 = 0xffff;
        goto LAB_1801efee0;
      }
      cVar3 = (**(code **)(lVar5 + 0x20))(uVar1,uVar13 & 0x1fffff);
    } while (cVar3 == '\0');
    uVar6 = CONCAT71(uVar15,1);
  }
  else {
    uVar1 = param_1[2];
    *(uint *)(param_1 + 2) = (uint)uVar1 & 0x9fe00000 | 0x20000030;
    uVar2 = *param_1;
    lVar5 = param_1[1];
    cVar3 = FUN_1801ef9c0(uVar2,lVar5,local_44,param_3,param_4);
    uVar6 = CONCAT71(uVar15,1);
    if (cVar3 == '\0') {
      uVar13 = ((uint)uVar12 - (int)uVar8) + 1;
      do {
        uVar12 = (short)uVar13 - 1;
        uVar13 = (uint)uVar12;
        if (uVar12 == 0) {
          cVar3 = (**(code **)(lVar5 + 0x18))(uVar2,param_5,param_6);
          if (cVar3 == '\0') {
            param_1[2] = uVar1;
            uVar6 = 0;
          }
          break;
        }
        cVar3 = (**(code **)(lVar5 + 0x20))(uVar2,0x30);
      } while (cVar3 == '\0');
    }
  }
LAB_1801eff06:
  return uVar6 & 0xffffffff;
  while( true ) {
    cVar3 = (**(code **)(lVar5 + 0x20))(uVar1,uVar13 & 0x1fffff);
    iVar11 = iVar11 + 1;
    if (cVar3 != '\0') break;
LAB_1801efee0:
    if ((ushort)((((short)uVar4 + (short)uVar8) - uVar12) + (short)iVar11) == -1) {
      iVar11 = iVar14;
      break;
    }
  }
  uVar6 = (ulonglong)CONCAT31((int3)((uint)iVar14 >> 8),(ushort)iVar11 < (ushort)iVar14);
  goto LAB_1801eff06;
}


