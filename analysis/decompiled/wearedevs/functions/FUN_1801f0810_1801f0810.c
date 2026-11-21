/* FUN_1801f0810 @ 1801f0810 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1801f0810(undefined8 *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  char cVar19;
  char cVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char cVar25;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  undefined1 auVar26 [16];
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
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  
  uVar3 = *(uint *)(param_1 + 2);
  if ((uVar3 & 0x18000000) != 0) {
    if ((uVar3 & 0x10000000) == 0) {
      if (param_3 < (byte *)0x20) {
        if (param_3 == (byte *)0x0) {
          uVar15 = 0;
          param_3 = (byte *)0x0;
        }
        else {
          if ((byte *)0x3 < param_3) {
            uVar9 = (uint)param_3 & 0x1c;
            pbVar7 = (byte *)(ulonglong)uVar9;
            cVar25 = DAT_180293080;
            auVar16[0] = -(cVar25 < (char)*(undefined2 *)param_2);
            cVar27 = DAT_180293080._1_1_;
            cVar19 = -(cVar27 < (char)((ushort)*(undefined2 *)param_2 >> 8));
            cVar28 = DAT_180293080._2_1_;
            cVar29 = DAT_180293080._3_1_;
            cVar30 = DAT_180293080._4_1_;
            cVar31 = DAT_180293080._5_1_;
            cVar32 = DAT_180293080._6_1_;
            cVar33 = DAT_180293080._7_1_;
            cVar20 = -(cVar33 < '\0');
            auVar16._8_8_ =
                 (undefined8)
                 (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20,cVar20),
                                                                        -(cVar32 < '\0')),
                                                               -(cVar32 < '\0')),-(cVar31 < '\0')),
                                             -(cVar31 < '\0')),-(cVar30 < '\0')),
                           CONCAT11(-(cVar30 < '\0'),cVar20)) >> 8);
            auVar16[7] = -(cVar29 < '\0');
            auVar16[6] = -(cVar29 < '\0');
            auVar16[5] = -(cVar28 < '\0');
            auVar16[4] = -(cVar28 < '\0');
            auVar16[3] = cVar19;
            auVar16[2] = cVar19;
            auVar16[1] = auVar16[0];
            auVar16 = pshuflw(auVar16,auVar16,0xd4);
            auVar17._12_4_ = auVar16._12_4_;
            auVar17._0_8_ = auVar16._0_8_;
            auVar17._8_4_ = auVar16._4_4_;
            auVar18 = auVar17 & _DAT_18025f330;
            auVar22[0] = -(cVar25 < (char)*(undefined2 *)(param_2 + 2));
            cVar19 = -(cVar27 < (char)((ushort)*(undefined2 *)(param_2 + 2) >> 8));
            cVar20 = -(cVar33 < '\0');
            auVar22._8_8_ =
                 (undefined8)
                 (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20,cVar20),
                                                                        -(cVar32 < '\0')),
                                                               -(cVar32 < '\0')),-(cVar31 < '\0')),
                                             -(cVar31 < '\0')),-(cVar30 < '\0')),
                           CONCAT11(-(cVar30 < '\0'),cVar20)) >> 8);
            auVar22[7] = -(cVar29 < '\0');
            auVar22[6] = -(cVar29 < '\0');
            auVar22[5] = -(cVar28 < '\0');
            auVar22[4] = -(cVar28 < '\0');
            auVar22[3] = cVar19;
            auVar22[2] = cVar19;
            auVar22[1] = auVar22[0];
            auVar16 = pshuflw(auVar22,auVar22,0xd4);
            auVar23._12_4_ = auVar16._12_4_;
            auVar23._0_8_ = auVar16._0_8_;
            auVar23._8_4_ = auVar16._4_4_;
            auVar24 = auVar23 & _DAT_18025f330;
            if (pbVar7 != (byte *)0x4) {
              auVar34[0] = -(cVar25 < (char)*(undefined2 *)(param_2 + 4));
              cVar19 = -(cVar27 < (char)((ushort)*(undefined2 *)(param_2 + 4) >> 8));
              cVar20 = -(cVar33 < '\0');
              auVar34._8_8_ =
                   (undefined8)
                   (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20,cVar20),
                                                                          -(cVar32 < '\0')),
                                                                 -(cVar32 < '\0')),-(cVar31 < '\0'))
                                               ,-(cVar31 < '\0')),-(cVar30 < '\0')),
                             CONCAT11(-(cVar30 < '\0'),cVar20)) >> 8);
              auVar34[7] = -(cVar29 < '\0');
              auVar34[6] = -(cVar29 < '\0');
              auVar34[5] = -(cVar28 < '\0');
              auVar34[4] = -(cVar28 < '\0');
              auVar34[3] = cVar19;
              auVar34[2] = cVar19;
              auVar34[1] = auVar34[0];
              auVar16 = pshuflw(auVar34,auVar34,0xd4);
              auVar35._12_4_ = auVar16._12_4_;
              auVar35._0_8_ = auVar16._0_8_;
              auVar35._8_4_ = auVar16._4_4_;
              auVar46[0] = -(cVar25 < (char)*(undefined2 *)(param_2 + 6));
              cVar19 = -(cVar27 < (char)((ushort)*(undefined2 *)(param_2 + 6) >> 8));
              cVar20 = -(cVar33 < '\0');
              auVar46._8_8_ =
                   (undefined8)
                   (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20,cVar20),
                                                                          -(cVar32 < '\0')),
                                                                 -(cVar32 < '\0')),-(cVar31 < '\0'))
                                               ,-(cVar31 < '\0')),-(cVar30 < '\0')),
                             CONCAT11(-(cVar30 < '\0'),cVar20)) >> 8);
              auVar46[7] = -(cVar29 < '\0');
              auVar46[6] = -(cVar29 < '\0');
              auVar46[5] = -(cVar28 < '\0');
              auVar46[4] = -(cVar28 < '\0');
              auVar46[3] = cVar19;
              auVar46[2] = cVar19;
              auVar46[1] = auVar46[0];
              auVar16 = pshuflw(auVar46,auVar46,0xd4);
              auVar47._12_4_ = auVar16._12_4_;
              auVar47._0_8_ = auVar16._0_8_;
              auVar47._8_4_ = auVar16._4_4_;
              lVar21 = auVar18._8_8_;
              auVar18._0_8_ = auVar18._0_8_ + SUB168(auVar35 & _DAT_18025f330,0);
              auVar18._8_8_ = lVar21 + SUB168(auVar35 & _DAT_18025f330,8);
              lVar21 = auVar24._8_8_;
              auVar24._0_8_ = auVar24._0_8_ + SUB168(auVar47 & _DAT_18025f330,0);
              auVar24._8_8_ = lVar21 + SUB168(auVar47 & _DAT_18025f330,8);
              if (uVar9 != 8) {
                auVar36[0] = -(cVar25 < (char)*(undefined2 *)(param_2 + 8));
                cVar19 = -(cVar27 < (char)((ushort)*(undefined2 *)(param_2 + 8) >> 8));
                cVar20 = -(cVar33 < '\0');
                auVar36._8_8_ =
                     (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20,cVar20),
                                                                            -(cVar32 < '\0')),
                                                                   -(cVar32 < '\0')),
                                                          -(cVar31 < '\0')),-(cVar31 < '\0')),
                                        -(cVar30 < '\0')),CONCAT11(-(cVar30 < '\0'),cVar20)) >> 8);
                auVar36[7] = -(cVar29 < '\0');
                auVar36[6] = -(cVar29 < '\0');
                auVar36[5] = -(cVar28 < '\0');
                auVar36[4] = -(cVar28 < '\0');
                auVar36[3] = cVar19;
                auVar36[2] = cVar19;
                auVar36[1] = auVar36[0];
                auVar16 = pshuflw(auVar36,auVar36,0xd4);
                auVar37._12_4_ = auVar16._12_4_;
                auVar37._0_8_ = auVar16._0_8_;
                auVar37._8_4_ = auVar16._4_4_;
                auVar48[0] = -(cVar25 < (char)*(undefined2 *)(param_2 + 10));
                cVar19 = -(cVar27 < (char)((ushort)*(undefined2 *)(param_2 + 10) >> 8));
                cVar20 = -(cVar33 < '\0');
                auVar48._8_8_ =
                     (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20,cVar20),
                                                                            -(cVar32 < '\0')),
                                                                   -(cVar32 < '\0')),
                                                          -(cVar31 < '\0')),-(cVar31 < '\0')),
                                        -(cVar30 < '\0')),CONCAT11(-(cVar30 < '\0'),cVar20)) >> 8);
                auVar48[7] = -(cVar29 < '\0');
                auVar48[6] = -(cVar29 < '\0');
                auVar48[5] = -(cVar28 < '\0');
                auVar48[4] = -(cVar28 < '\0');
                auVar48[3] = cVar19;
                auVar48[2] = cVar19;
                auVar48[1] = auVar48[0];
                auVar16 = pshuflw(auVar48,auVar48,0xd4);
                auVar49._12_4_ = auVar16._12_4_;
                auVar49._0_8_ = auVar16._0_8_;
                auVar49._8_4_ = auVar16._4_4_;
                auVar18._0_8_ = auVar18._0_8_ + SUB168(auVar37 & _DAT_18025f330,0);
                auVar18._8_8_ = auVar18._8_8_ + SUB168(auVar37 & _DAT_18025f330,8);
                auVar24._0_8_ = auVar24._0_8_ + SUB168(auVar49 & _DAT_18025f330,0);
                auVar24._8_8_ = auVar24._8_8_ + SUB168(auVar49 & _DAT_18025f330,8);
                if (uVar9 != 0xc) {
                  auVar38[0] = -(cVar25 < (char)*(undefined2 *)(param_2 + 0xc));
                  cVar19 = -(cVar27 < (char)((ushort)*(undefined2 *)(param_2 + 0xc) >> 8));
                  cVar20 = -(cVar33 < '\0');
                  auVar38._8_8_ =
                       (undefined8)
                       (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20,cVar20
                                                                                      ),
                                                                              -(cVar32 < '\0')),
                                                                     -(cVar32 < '\0')),
                                                            -(cVar31 < '\0')),-(cVar31 < '\0')),
                                          -(cVar30 < '\0')),CONCAT11(-(cVar30 < '\0'),cVar20)) >> 8)
                  ;
                  auVar38[7] = -(cVar29 < '\0');
                  auVar38[6] = -(cVar29 < '\0');
                  auVar38[5] = -(cVar28 < '\0');
                  auVar38[4] = -(cVar28 < '\0');
                  auVar38[3] = cVar19;
                  auVar38[2] = cVar19;
                  auVar38[1] = auVar38[0];
                  auVar16 = pshuflw(auVar38,auVar38,0xd4);
                  auVar39._12_4_ = auVar16._12_4_;
                  auVar39._0_8_ = auVar16._0_8_;
                  auVar39._8_4_ = auVar16._4_4_;
                  auVar50[0] = -(cVar25 < (char)*(undefined2 *)(param_2 + 0xe));
                  cVar19 = -(cVar27 < (char)((ushort)*(undefined2 *)(param_2 + 0xe) >> 8));
                  cVar20 = -(cVar33 < '\0');
                  auVar50._8_8_ =
                       (undefined8)
                       (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20,cVar20
                                                                                      ),
                                                                              -(cVar32 < '\0')),
                                                                     -(cVar32 < '\0')),
                                                            -(cVar31 < '\0')),-(cVar31 < '\0')),
                                          -(cVar30 < '\0')),CONCAT11(-(cVar30 < '\0'),cVar20)) >> 8)
                  ;
                  auVar50[7] = -(cVar29 < '\0');
                  auVar50[6] = -(cVar29 < '\0');
                  auVar50[5] = -(cVar28 < '\0');
                  auVar50[4] = -(cVar28 < '\0');
                  auVar50[3] = cVar19;
                  auVar50[2] = cVar19;
                  auVar50[1] = auVar50[0];
                  auVar16 = pshuflw(auVar50,auVar50,0xd4);
                  auVar51._12_4_ = auVar16._12_4_;
                  auVar51._0_8_ = auVar16._0_8_;
                  auVar51._8_4_ = auVar16._4_4_;
                  auVar18._0_8_ = auVar18._0_8_ + SUB168(auVar39 & _DAT_18025f330,0);
                  auVar18._8_8_ = auVar18._8_8_ + SUB168(auVar39 & _DAT_18025f330,8);
                  auVar24._0_8_ = auVar24._0_8_ + SUB168(auVar51 & _DAT_18025f330,0);
                  auVar24._8_8_ = auVar24._8_8_ + SUB168(auVar51 & _DAT_18025f330,8);
                  if (uVar9 != 0x10) {
                    auVar40[0] = -(cVar25 < (char)*(undefined2 *)(param_2 + 0x10));
                    cVar19 = -(cVar27 < (char)((ushort)*(undefined2 *)(param_2 + 0x10) >> 8));
                    cVar20 = -(cVar33 < '\0');
                    auVar40._8_8_ =
                         (undefined8)
                         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20,
                                                  cVar20),-(cVar32 < '\0')),-(cVar32 < '\0')),
                                                  -(cVar31 < '\0')),-(cVar31 < '\0')),
                                            -(cVar30 < '\0')),CONCAT11(-(cVar30 < '\0'),cVar20)) >>
                         8);
                    auVar40[7] = -(cVar29 < '\0');
                    auVar40[6] = -(cVar29 < '\0');
                    auVar40[5] = -(cVar28 < '\0');
                    auVar40[4] = -(cVar28 < '\0');
                    auVar40[3] = cVar19;
                    auVar40[2] = cVar19;
                    auVar40[1] = auVar40[0];
                    auVar16 = pshuflw(auVar40,auVar40,0xd4);
                    auVar41._12_4_ = auVar16._12_4_;
                    auVar41._0_8_ = auVar16._0_8_;
                    auVar41._8_4_ = auVar16._4_4_;
                    auVar52[0] = -(cVar25 < (char)*(undefined2 *)(param_2 + 0x12));
                    cVar19 = -(cVar27 < (char)((ushort)*(undefined2 *)(param_2 + 0x12) >> 8));
                    cVar20 = -(cVar33 < '\0');
                    auVar52._8_8_ =
                         (undefined8)
                         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20,
                                                  cVar20),-(cVar32 < '\0')),-(cVar32 < '\0')),
                                                  -(cVar31 < '\0')),-(cVar31 < '\0')),
                                            -(cVar30 < '\0')),CONCAT11(-(cVar30 < '\0'),cVar20)) >>
                         8);
                    auVar52[7] = -(cVar29 < '\0');
                    auVar52[6] = -(cVar29 < '\0');
                    auVar52[5] = -(cVar28 < '\0');
                    auVar52[4] = -(cVar28 < '\0');
                    auVar52[3] = cVar19;
                    auVar52[2] = cVar19;
                    auVar52[1] = auVar52[0];
                    auVar16 = pshuflw(auVar52,auVar52,0xd4);
                    auVar53._12_4_ = auVar16._12_4_;
                    auVar53._0_8_ = auVar16._0_8_;
                    auVar53._8_4_ = auVar16._4_4_;
                    auVar18._0_8_ = auVar18._0_8_ + SUB168(auVar41 & _DAT_18025f330,0);
                    auVar18._8_8_ = auVar18._8_8_ + SUB168(auVar41 & _DAT_18025f330,8);
                    auVar24._0_8_ = auVar24._0_8_ + SUB168(auVar53 & _DAT_18025f330,0);
                    auVar24._8_8_ = auVar24._8_8_ + SUB168(auVar53 & _DAT_18025f330,8);
                    if (uVar9 != 0x14) {
                      auVar42[0] = -(cVar25 < (char)*(undefined2 *)(param_2 + 0x14));
                      cVar19 = -(cVar27 < (char)((ushort)*(undefined2 *)(param_2 + 0x14) >> 8));
                      cVar20 = -(cVar33 < '\0');
                      auVar42._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20,
                                                  cVar20),-(cVar32 < '\0')),-(cVar32 < '\0')),
                                                  -(cVar31 < '\0')),-(cVar31 < '\0')),
                                              -(cVar30 < '\0')),CONCAT11(-(cVar30 < '\0'),cVar20))
                           >> 8);
                      auVar42[7] = -(cVar29 < '\0');
                      auVar42[6] = -(cVar29 < '\0');
                      auVar42[5] = -(cVar28 < '\0');
                      auVar42[4] = -(cVar28 < '\0');
                      auVar42[3] = cVar19;
                      auVar42[2] = cVar19;
                      auVar42[1] = auVar42[0];
                      auVar16 = pshuflw(auVar42,auVar42,0xd4);
                      auVar43._12_4_ = auVar16._12_4_;
                      auVar43._0_8_ = auVar16._0_8_;
                      auVar43._8_4_ = auVar16._4_4_;
                      auVar54[0] = -(cVar25 < (char)*(undefined2 *)(param_2 + 0x16));
                      cVar19 = -(cVar27 < (char)((ushort)*(undefined2 *)(param_2 + 0x16) >> 8));
                      cVar20 = -(cVar33 < '\0');
                      auVar54._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20,
                                                  cVar20),-(cVar32 < '\0')),-(cVar32 < '\0')),
                                                  -(cVar31 < '\0')),-(cVar31 < '\0')),
                                              -(cVar30 < '\0')),CONCAT11(-(cVar30 < '\0'),cVar20))
                           >> 8);
                      auVar54[7] = -(cVar29 < '\0');
                      auVar54[6] = -(cVar29 < '\0');
                      auVar54[5] = -(cVar28 < '\0');
                      auVar54[4] = -(cVar28 < '\0');
                      auVar54[3] = cVar19;
                      auVar54[2] = cVar19;
                      auVar54[1] = auVar54[0];
                      auVar16 = pshuflw(auVar54,auVar54,0xd4);
                      auVar55._12_4_ = auVar16._12_4_;
                      auVar55._0_8_ = auVar16._0_8_;
                      auVar55._8_4_ = auVar16._4_4_;
                      auVar18._0_8_ = auVar18._0_8_ + SUB168(auVar43 & _DAT_18025f330,0);
                      auVar18._8_8_ = auVar18._8_8_ + SUB168(auVar43 & _DAT_18025f330,8);
                      auVar24._0_8_ = auVar24._0_8_ + SUB168(auVar55 & _DAT_18025f330,0);
                      auVar24._8_8_ = auVar24._8_8_ + SUB168(auVar55 & _DAT_18025f330,8);
                      if (uVar9 != 0x18) {
                        auVar44[0] = -(cVar25 < (char)*(undefined2 *)(param_2 + 0x18));
                        cVar19 = -(cVar27 < (char)((ushort)*(undefined2 *)(param_2 + 0x18) >> 8));
                        cVar20 = -(cVar33 < '\0');
                        auVar44._8_8_ =
                             (undefined8)
                             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20,
                                                  cVar20),-(cVar32 < '\0')),-(cVar32 < '\0')),
                                                  -(cVar31 < '\0')),-(cVar31 < '\0')),
                                                -(cVar30 < '\0')),CONCAT11(-(cVar30 < '\0'),cVar20))
                             >> 8);
                        auVar44[7] = -(cVar29 < '\0');
                        auVar44[6] = -(cVar29 < '\0');
                        auVar44[5] = -(cVar28 < '\0');
                        auVar44[4] = -(cVar28 < '\0');
                        auVar44[3] = cVar19;
                        auVar44[2] = cVar19;
                        auVar44[1] = auVar44[0];
                        auVar16 = pshuflw(auVar44,auVar44,0xd4);
                        auVar45._12_4_ = auVar16._12_4_;
                        auVar45._0_8_ = auVar16._0_8_;
                        auVar45._8_4_ = auVar16._4_4_;
                        auVar56[0] = -(cVar25 < (char)*(undefined2 *)(param_2 + 0x1a));
                        cVar19 = -(cVar27 < (char)((ushort)*(undefined2 *)(param_2 + 0x1a) >> 8));
                        cVar20 = -(cVar33 < '\0');
                        auVar56._8_8_ =
                             (undefined8)
                             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar20,
                                                  cVar20),-(cVar32 < '\0')),-(cVar32 < '\0')),
                                                  -(cVar31 < '\0')),-(cVar31 < '\0')),
                                                -(cVar30 < '\0')),CONCAT11(-(cVar30 < '\0'),cVar20))
                             >> 8);
                        auVar56[7] = -(cVar29 < '\0');
                        auVar56[6] = -(cVar29 < '\0');
                        auVar56[5] = -(cVar28 < '\0');
                        auVar56[4] = -(cVar28 < '\0');
                        auVar56[3] = cVar19;
                        auVar56[2] = cVar19;
                        auVar56[1] = auVar56[0];
                        auVar16 = pshuflw(_DAT_180293080,auVar56,0xd4);
                        auVar26._12_4_ = auVar16._12_4_;
                        auVar26._0_8_ = auVar16._0_8_;
                        auVar26._8_4_ = auVar16._4_4_;
                        auVar18._0_8_ = auVar18._0_8_ + SUB168(auVar45 & _DAT_18025f330,0);
                        auVar18._8_8_ = auVar18._8_8_ + SUB168(auVar45 & _DAT_18025f330,8);
                        auVar24._0_8_ = auVar24._0_8_ + SUB168(auVar26 & _DAT_18025f330,0);
                        auVar24._8_8_ = auVar24._8_8_ + SUB168(auVar26 & _DAT_18025f330,8);
                      }
                    }
                  }
                }
              }
            }
            uVar15 = auVar18._8_8_ + auVar24._8_8_ + auVar18._0_8_ + auVar24._0_8_;
            goto LAB_1801f0b37;
          }
          pbVar7 = (byte *)0x0;
          uVar15 = 0;
          do {
            uVar15 = uVar15 + (-0x41 < (char)param_2[(longlong)pbVar7]);
            pbVar7 = pbVar7 + 1;
LAB_1801f0b37:
          } while (param_3 != pbVar7);
        }
      }
      else {
        uVar15 = FUN_1801f1e40(param_2,param_3);
      }
    }
    else {
      uVar15 = (ulonglong)*(ushort *)((longlong)param_1 + 0x16);
      if (uVar15 == 0) {
        param_3 = (byte *)0x0;
      }
      else {
        pbVar8 = param_2 + (longlong)param_3;
        param_3 = (byte *)0x0;
        uVar6 = uVar15;
        pbVar7 = param_2;
        do {
          if (pbVar7 == pbVar8) goto LAB_1801f08e7;
          bVar1 = *pbVar7;
          if ((char)bVar1 < '\0') {
            if (bVar1 < 0xe0) {
              pbVar10 = pbVar7 + 2;
            }
            else if (bVar1 < 0xf0) {
              pbVar10 = pbVar7 + 3;
            }
            else {
              pbVar10 = pbVar7 + 4;
            }
          }
          else {
            pbVar10 = pbVar7 + 1;
          }
          param_3 = pbVar10 + ((longlong)param_3 - (longlong)pbVar7);
          uVar6 = uVar6 - 1;
          pbVar7 = pbVar10;
        } while (uVar6 != 0);
      }
      uVar6 = 0;
LAB_1801f08e7:
      uVar15 = uVar15 - uVar6;
    }
    uVar2 = *(ushort *)((longlong)param_1 + 0x14);
    if (uVar15 < uVar2) {
      uVar9 = (uint)uVar2 - (int)uVar15;
      switch(uVar3 >> 0x1d & 3) {
      default:
        uVar14 = 0;
        break;
      case 1:
        uVar14 = uVar9;
        break;
      case 2:
        uVar14 = (uVar9 & 0xffff) >> 1;
      }
      uVar4 = *param_1;
      lVar21 = param_1[1];
      uVar13 = uVar14 + 1;
      while (uVar11 = (short)uVar13 - 1, uVar13 = (uint)uVar11, uVar11 != 0) {
        cVar19 = (**(code **)(lVar21 + 0x20))(uVar4,uVar3 & 0x1fffff);
        if (cVar19 != '\0') {
          return true;
        }
      }
      cVar19 = (**(code **)(lVar21 + 0x18))(uVar4,param_2,param_3);
      if (cVar19 != '\0') {
        return true;
      }
      uVar12 = (short)uVar9 - (short)uVar14;
      uVar11 = 0xffff;
      do {
        if ((ushort)(uVar11 + (((short)uVar14 + (short)uVar15) - uVar2)) == -1) {
          uVar11 = uVar12;
          break;
        }
        cVar19 = (**(code **)(lVar21 + 0x20))(uVar4,uVar3 & 0x1fffff);
        uVar11 = uVar11 + 1;
      } while (cVar19 == '\0');
                    /* WARNING: Read-only address (ram,0x00018025f330) is written */
                    /* WARNING: Read-only address (ram,0x000180293080) is written */
      return uVar11 < uVar12;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001801f0baa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(param_1[1] + 0x18))(*param_1,param_2,param_3,*(code **)(param_1[1] + 0x18));
  return uVar5;
}


