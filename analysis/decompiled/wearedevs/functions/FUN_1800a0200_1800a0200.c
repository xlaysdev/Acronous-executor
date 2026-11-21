/* FUN_1800a0200 @ 1800a0200 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800a0200(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint7 uVar28;
  undefined8 *puVar27;
  undefined8 *puVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  longlong lVar33;
  ushort uVar34;
  ulonglong uVar35;
  char *pcVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 in_XMM1_Ba;
  undefined1 in_XMM1_Bb;
  undefined1 in_XMM1_Bc;
  undefined1 in_XMM1_Bd;
  undefined1 in_XMM1_Be;
  undefined1 in_XMM1_Bf;
  undefined1 in_XMM1_Bg;
  undefined1 in_XMM1_Bh;
  undefined1 in_XMM1_Bi;
  undefined1 in_XMM1_Bj;
  undefined1 in_XMM1_Bk;
  undefined1 in_XMM1_Bl;
  undefined1 in_XMM1_Bm;
  undefined1 in_XMM1_Bn;
  undefined1 in_XMM1_Bo;
  undefined1 in_XMM1_Bp;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  char local_58;
  char cStack_57;
  char cStack_56;
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = *param_2;
    uVar31 = param_2[1];
    uVar30 = 0xdc38e5a5f26fb8b9;
    lVar33 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar8 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar9 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar30 = uVar30 & uVar31;
      auVar37 = *(undefined1 (*) [16])(lVar1 + uVar30);
      auVar41[0] = -(auVar37[0] == 'n');
      auVar41[1] = -(auVar37[1] == 'n');
      auVar41[2] = -(auVar37[2] == 'n');
      auVar41[3] = -(auVar37[3] == 'n');
      auVar41[4] = -(auVar37[4] == 'n');
      auVar41[5] = -(auVar37[5] == 'n');
      auVar41[6] = -(auVar37[6] == 'n');
      auVar41[7] = -(auVar37[7] == 'n');
      auVar41[8] = -(auVar37[8] == 'n');
      auVar41[9] = -(auVar37[9] == 'n');
      auVar41[10] = -(auVar37[10] == 'n');
      auVar41[0xb] = -(auVar37[0xb] == 'n');
      auVar41[0xc] = -(auVar37[0xc] == 'n');
      auVar41[0xd] = -(auVar37[0xd] == 'n');
      auVar41[0xe] = -(auVar37[0xe] == 'n');
      auVar41[0xf] = -(auVar37[0xf] == 'n');
      uVar34 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
      uVar32 = (uint)uVar34;
      while (uVar34 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar32; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar35 = uVar4 + uVar30 & uVar31;
        pcVar36 = (char *)(lVar1 + -0x20 + uVar35 * -0x20);
        auVar42[0] = -(*pcVar36 == DAT_18020fba0);
        auVar42[1] = -(pcVar36[1] == DAT_18020fba0._1_1_);
        auVar42[2] = -(pcVar36[2] == DAT_18020fba0._2_1_);
        auVar42[3] = -(pcVar36[3] == DAT_18020fba0._3_1_);
        auVar42[4] = -(pcVar36[4] == DAT_18020fba0._4_1_);
        auVar42[5] = -(pcVar36[5] == DAT_18020fba0._5_1_);
        auVar42[6] = -(pcVar36[6] == DAT_18020fba0._6_1_);
        auVar42[7] = -(pcVar36[7] == DAT_18020fba0._7_1_);
        auVar42[8] = -(pcVar36[8] == DAT_18020fba0._8_1_);
        auVar42[9] = -(pcVar36[9] == DAT_18020fba0._9_1_);
        auVar42[10] = -(pcVar36[10] == DAT_18020fba0._10_1_);
        auVar42[0xb] = -(pcVar36[0xb] == DAT_18020fba0._11_1_);
        auVar42[0xc] = -(pcVar36[0xc] == DAT_18020fba0._12_1_);
        auVar42[0xd] = -(pcVar36[0xd] == DAT_18020fba0._13_1_);
        auVar42[0xe] = -(pcVar36[0xe] == DAT_18020fba0._14_1_);
        auVar42[0xf] = -(pcVar36[0xf] == DAT_18020fba0._15_1_);
        if ((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar42[0xf] >> 7) << 0xf) == 0xffff) {
          lVar33 = uVar35 * -0x20 + lVar1;
          uVar31 = uVar35 - 0x10 & uVar31;
          pcVar36 = (char *)(lVar1 + uVar31);
          auVar37[0] = -(*pcVar36 == -1);
          auVar37[1] = -(pcVar36[1] == -1);
          auVar37[2] = -(pcVar36[2] == -1);
          auVar37[3] = -(pcVar36[3] == -1);
          auVar37[4] = -(pcVar36[4] == -1);
          auVar37[5] = -(pcVar36[5] == -1);
          auVar37[6] = -(pcVar36[6] == -1);
          auVar37[7] = -(pcVar36[7] == -1);
          auVar37[8] = -(pcVar36[8] == -1);
          auVar37[9] = -(pcVar36[9] == -1);
          auVar37[10] = -(pcVar36[10] == -1);
          auVar37[0xb] = -(pcVar36[0xb] == -1);
          auVar37[0xc] = -(pcVar36[0xc] == -1);
          auVar37[0xd] = -(pcVar36[0xd] == -1);
          auVar37[0xe] = -(pcVar36[0xe] == -1);
          auVar37[0xf] = -(pcVar36[0xf] == -1);
          uVar2 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar37[0xf] >> 7) << 0xf;
          pcVar36 = (char *)(lVar1 + uVar35);
          auVar38[0] = -(*pcVar36 == -1);
          auVar38[1] = -(pcVar36[1] == -1);
          auVar38[2] = -(pcVar36[2] == -1);
          auVar38[3] = -(pcVar36[3] == -1);
          auVar38[4] = -(pcVar36[4] == -1);
          auVar38[5] = -(pcVar36[5] == -1);
          auVar38[6] = -(pcVar36[6] == -1);
          auVar38[7] = -(pcVar36[7] == -1);
          auVar38[8] = -(pcVar36[8] == -1);
          auVar38[9] = -(pcVar36[9] == -1);
          auVar38[10] = -(pcVar36[10] == -1);
          auVar38[0xb] = -(pcVar36[0xb] == -1);
          auVar38[0xc] = -(pcVar36[0xc] == -1);
          auVar38[0xd] = -(pcVar36[0xd] == -1);
          auVar38[0xe] = -(pcVar36[0xe] == -1);
          auVar38[0xf] = -(pcVar36[0xf] == -1);
          uVar34 = 0xf;
          if (uVar2 != 0) {
            for (; uVar2 >> uVar34 == 0; uVar34 = uVar34 - 1) {
            }
          }
          sVar3 = 0;
          for (uVar32 = (ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar38[0xf] >> 7) << 0xf) | 0x10000; (uVar32 & 1) == 0;
              uVar32 = uVar32 >> 1 | 0x80000000) {
            sVar3 = sVar3 + 1;
          }
          uVar28 = (uint7)(byte)(uVar2 >> 8);
          puVar27 = (undefined8 *)CONCAT71(uVar28,0x80);
          if ((ushort)(sVar3 + (uVar34 ^ 0xf)) < 0x10) {
            param_2[2] = param_2[2] + 1;
            puVar27 = (undefined8 *)CONCAT71(uVar28,0xff);
          }
          *(char *)(lVar1 + uVar35) = (char)puVar27;
          *(char *)(lVar1 + 0x10 + uVar31) = (char)puVar27;
          param_2[3] = param_2[3] + -1;
          if (*(longlong *)(lVar33 + -0x10) != 0) {
            local_40 = (undefined8 *)(**(code **)(*(longlong *)(lVar33 + -8) + 0x38))();
            local_38 = puVar27;
            (*(code *)puVar27[3])(&local_58,local_40);
            auVar39[0] = -(local_58 == '_');
            auVar39[1] = -(cStack_57 == 'V');
            auVar39[2] = -(cStack_56 == 'S');
            auVar39[3] = -(cStack_55 == 'P');
            auVar39[4] = -(cStack_54 == -0x2e);
            auVar39[5] = -(cStack_53 == '=');
            auVar39[6] = -(cStack_52 == -0x1f);
            auVar39[7] = -(cStack_51 == -0x73);
            auVar39[8] = -(cStack_50 == -0x47);
            auVar39[9] = -(cStack_4f == -0x48);
            auVar39[10] = -(cStack_4e == 'o');
            auVar39[0xb] = -(cStack_4d == -0xe);
            auVar39[0xc] = -(cStack_4c == -0x5b);
            auVar39[0xd] = -(cStack_4b == -0x1b);
            auVar39[0xe] = -(cStack_4a == '8');
            auVar39[0xf] = -(cStack_49 == -0x24);
            puVar27 = (undefined8 *)0x0;
            if ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar39[0xf] >> 7) << 0xf) == 0xffff) {
              puVar29 = local_40;
              puVar27 = local_40;
            }
            else {
              if ((code *)*local_38 != (code *)0x0) {
                (*(code *)*local_38)(local_40);
              }
              puVar29 = local_40;
              if (local_38[1] != 0) {
                thunk_FUN_1801d3330(local_40,local_38[1],local_38[2]);
              }
            }
            if (puVar27 != (undefined8 *)0x0) {
              uVar25 = *puVar29;
              uVar26 = puVar29[1];
              uVar10 = *(undefined1 *)((longlong)puVar29 + 0x11);
              uVar11 = *(undefined1 *)((longlong)puVar29 + 0x12);
              uVar12 = *(undefined1 *)((longlong)puVar29 + 0x13);
              uVar13 = *(undefined1 *)((longlong)puVar29 + 0x14);
              uVar14 = *(undefined1 *)((longlong)puVar29 + 0x15);
              uVar15 = *(undefined1 *)((longlong)puVar29 + 0x16);
              uVar16 = *(undefined1 *)((longlong)puVar29 + 0x17);
              uVar17 = *(undefined1 *)(puVar29 + 3);
              uVar18 = *(undefined1 *)((longlong)puVar29 + 0x19);
              uVar19 = *(undefined1 *)((longlong)puVar29 + 0x1a);
              uVar20 = *(undefined1 *)((longlong)puVar29 + 0x1b);
              uVar21 = *(undefined1 *)((longlong)puVar29 + 0x1c);
              uVar22 = *(undefined1 *)((longlong)puVar29 + 0x1d);
              uVar23 = *(undefined1 *)((longlong)puVar29 + 0x1e);
              uVar24 = *(undefined1 *)((longlong)puVar29 + 0x1f);
              *(undefined1 *)(param_1 + 2) = *(undefined1 *)(puVar29 + 2);
              *(undefined1 *)((longlong)param_1 + 0x11) = uVar10;
              *(undefined1 *)((longlong)param_1 + 0x12) = uVar11;
              *(undefined1 *)((longlong)param_1 + 0x13) = uVar12;
              *(undefined1 *)((longlong)param_1 + 0x14) = uVar13;
              *(undefined1 *)((longlong)param_1 + 0x15) = uVar14;
              *(undefined1 *)((longlong)param_1 + 0x16) = uVar15;
              *(undefined1 *)((longlong)param_1 + 0x17) = uVar16;
              *(undefined1 *)(param_1 + 3) = uVar17;
              *(undefined1 *)((longlong)param_1 + 0x19) = uVar18;
              *(undefined1 *)((longlong)param_1 + 0x1a) = uVar19;
              *(undefined1 *)((longlong)param_1 + 0x1b) = uVar20;
              *(undefined1 *)((longlong)param_1 + 0x1c) = uVar21;
              *(undefined1 *)((longlong)param_1 + 0x1d) = uVar22;
              *(undefined1 *)((longlong)param_1 + 0x1e) = uVar23;
              *(undefined1 *)((longlong)param_1 + 0x1f) = uVar24;
              *param_1 = uVar25;
              param_1[1] = uVar26;
              thunk_FUN_1801d3330(puVar27,0x20,8);
              return param_1;
            }
          }
          goto LAB_1800a03e1;
        }
        uVar34 = (ushort)(uVar32 - 1) & (ushort)uVar32;
        uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar34);
      }
      auVar40[0] = -(auVar37[0] == (char)iVar6);
      auVar40[1] = -(auVar37[1] == (char)((uint)iVar6 >> 8));
      auVar40[2] = -(auVar37[2] == (char)((uint)iVar6 >> 0x10));
      auVar40[3] = -(auVar37[3] == (char)((uint)iVar6 >> 0x18));
      auVar40[4] = -(auVar37[4] == (char)iVar7);
      auVar40[5] = -(auVar37[5] == (char)((uint)iVar7 >> 8));
      auVar40[6] = -(auVar37[6] == (char)((uint)iVar7 >> 0x10));
      auVar40[7] = -(auVar37[7] == (char)((uint)iVar7 >> 0x18));
      auVar40[8] = -(auVar37[8] == (char)iVar8);
      auVar40[9] = -(auVar37[9] == (char)((uint)iVar8 >> 8));
      auVar40[10] = -(auVar37[10] == (char)((uint)iVar8 >> 0x10));
      auVar40[0xb] = -(auVar37[0xb] == (char)((uint)iVar8 >> 0x18));
      auVar40[0xc] = -(auVar37[0xc] == (char)iVar9);
      auVar40[0xd] = -(auVar37[0xd] == (char)((uint)iVar9 >> 8));
      auVar40[0xe] = -(auVar37[0xe] == (char)((uint)iVar9 >> 0x10));
      auVar40[0xf] = -(auVar37[0xf] == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar40 >> 0x3f,0) & 1) != 0) || (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar40 >> 0x5f,0) & 1) != 0) || (SUB161(auVar40 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar40 >> 0x6f,0) & 1) != 0) || (SUB161(auVar40 >> 0x77,0) & 1) != 0) ||
          auVar40[0xf] < '\0') break;
      uVar30 = uVar30 + lVar33 + 0x10;
      lVar33 = lVar33 + 0x10;
    }
  }
LAB_1800a03e1:
  *param_1 = 0;
                    /* WARNING: Read-only address (ram,0x00018020fba0) is written */
  return param_1;
}


