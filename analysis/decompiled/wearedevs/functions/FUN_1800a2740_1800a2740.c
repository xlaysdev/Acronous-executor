/* FUN_1800a2740 @ 1800a2740 */

longlong * FUN_1800a2740(longlong *param_1,longlong *param_2,longlong param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  ushort uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined1 uVar36;
  uint uVar37;
  longlong lVar38;
  ulonglong uVar39;
  longlong lVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  undefined1 auVar45 [16];
  
  uVar34 = FUN_1800c93e0(param_2 + 4,param_3);
  lVar3 = *param_2;
  uVar35 = param_2[1];
  bVar41 = (byte)(uVar34 >> 0x39);
  auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
  auVar42 = pshuflw(auVar42,auVar42,0);
  lVar38 = 0;
  iVar12 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                  CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  iVar13 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                  CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  iVar14 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                  CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  iVar15 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                  CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  do {
    uVar34 = uVar34 & uVar35;
    pcVar1 = (char *)(lVar3 + uVar34);
    cVar16 = *pcVar1;
    cVar17 = pcVar1[1];
    cVar18 = pcVar1[2];
    cVar19 = pcVar1[3];
    cVar20 = pcVar1[4];
    cVar21 = pcVar1[5];
    cVar22 = pcVar1[6];
    cVar23 = pcVar1[7];
    cVar24 = pcVar1[8];
    cVar25 = pcVar1[9];
    cVar26 = pcVar1[10];
    cVar27 = pcVar1[0xb];
    cVar28 = pcVar1[0xc];
    cVar29 = pcVar1[0xd];
    cVar30 = pcVar1[0xe];
    cVar31 = pcVar1[0xf];
    auVar43[0] = -(cVar16 == auVar42[0]);
    auVar43[1] = -(cVar17 == auVar42[1]);
    auVar43[2] = -(cVar18 == auVar42[2]);
    auVar43[3] = -(cVar19 == auVar42[3]);
    auVar43[4] = -(cVar20 == auVar42[4]);
    auVar43[5] = -(cVar21 == auVar42[5]);
    auVar43[6] = -(cVar22 == auVar42[6]);
    auVar43[7] = -(cVar23 == auVar42[7]);
    auVar43[8] = -(cVar24 == auVar42[0]);
    auVar43[9] = -(cVar25 == auVar42[1]);
    auVar43[10] = -(cVar26 == auVar42[2]);
    auVar43[0xb] = -(cVar27 == auVar42[3]);
    auVar43[0xc] = -(cVar28 == auVar42[4]);
    auVar43[0xd] = -(cVar29 == auVar42[5]);
    auVar43[0xe] = -(cVar30 == auVar42[6]);
    auVar43[0xf] = -(cVar31 == auVar42[7]);
    uVar33 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
    uVar37 = (uint)uVar33;
    if (uVar33 != 0) {
      do {
        uVar10 = 0;
        for (uVar11 = uVar37; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        uVar39 = uVar10 + uVar34 & uVar35;
        lVar40 = uVar39 * -0x50;
        lVar2 = lVar3 + -0x50 + lVar40;
        cVar32 = FUN_1801ae3a0(param_3,lVar2);
        if ((cVar32 != '\0') &&
           (cVar32 = FUN_1801acfa0(param_3 + 0x10,lVar2 + 0x10), cVar32 != '\0')) {
          lVar40 = lVar40 + lVar3;
          lVar38 = ((longlong)(uVar39 * 0x50) >> 4) * -0x3333333333333333;
          uVar35 = lVar38 - 0x10U & uVar35;
          pcVar1 = (char *)(lVar3 + uVar35);
          auVar42[0] = -(*pcVar1 == -1);
          auVar42[1] = -(pcVar1[1] == -1);
          auVar42[2] = -(pcVar1[2] == -1);
          auVar42[3] = -(pcVar1[3] == -1);
          auVar42[4] = -(pcVar1[4] == -1);
          auVar42[5] = -(pcVar1[5] == -1);
          auVar42[6] = -(pcVar1[6] == -1);
          auVar42[7] = -(pcVar1[7] == -1);
          auVar42[8] = -(pcVar1[8] == -1);
          auVar42[9] = -(pcVar1[9] == -1);
          auVar42[10] = -(pcVar1[10] == -1);
          auVar42[0xb] = -(pcVar1[0xb] == -1);
          auVar42[0xc] = -(pcVar1[0xc] == -1);
          auVar42[0xd] = -(pcVar1[0xd] == -1);
          auVar42[0xe] = -(pcVar1[0xe] == -1);
          auVar42[0xf] = -(pcVar1[0xf] == -1);
          uVar8 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
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
                  (ushort)(auVar42[0xf] >> 7) << 0xf;
          pcVar1 = (char *)(lVar3 + lVar38);
          auVar44[0] = -(*pcVar1 == -1);
          auVar44[1] = -(pcVar1[1] == -1);
          auVar44[2] = -(pcVar1[2] == -1);
          auVar44[3] = -(pcVar1[3] == -1);
          auVar44[4] = -(pcVar1[4] == -1);
          auVar44[5] = -(pcVar1[5] == -1);
          auVar44[6] = -(pcVar1[6] == -1);
          auVar44[7] = -(pcVar1[7] == -1);
          auVar44[8] = -(pcVar1[8] == -1);
          auVar44[9] = -(pcVar1[9] == -1);
          auVar44[10] = -(pcVar1[10] == -1);
          auVar44[0xb] = -(pcVar1[0xb] == -1);
          auVar44[0xc] = -(pcVar1[0xc] == -1);
          auVar44[0xd] = -(pcVar1[0xd] == -1);
          auVar44[0xe] = -(pcVar1[0xe] == -1);
          auVar44[0xf] = -(pcVar1[0xf] == -1);
          uVar33 = 0xf;
          if (uVar8 != 0) {
            for (; uVar8 >> uVar33 == 0; uVar33 = uVar33 - 1) {
            }
          }
          sVar9 = 0;
          for (uVar37 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar44[0xf] >> 7) << 0xf) | 0x10000; (uVar37 & 1) == 0;
              uVar37 = uVar37 >> 1 | 0x80000000) {
            sVar9 = sVar9 + 1;
          }
          uVar36 = 0x80;
          if ((ushort)(sVar9 + (uVar33 ^ 0xf)) < 0x10) {
            param_2[2] = param_2[2] + 1;
            uVar36 = 0xff;
          }
          *(undefined1 *)(lVar3 + lVar38) = uVar36;
          *(undefined1 *)(lVar3 + 0x10 + uVar35) = uVar36;
          param_2[3] = param_2[3] + -1;
          lVar3 = *(longlong *)(lVar40 + -0x20);
          if (!SBORROW8(0,lVar3)) {
            plVar4 = *(longlong **)(lVar40 + -0x48);
            lVar38 = *(longlong *)(lVar40 + -0x40);
            uVar5 = *(undefined8 *)(lVar40 + -0x38);
            uVar6 = *(undefined8 *)(lVar40 + -0x30);
            uVar7 = *(undefined8 *)(lVar40 + -0x28);
            bVar41 = *(byte *)(lVar40 + -0x50);
            param_1[3] = *(longlong *)(lVar40 + -8);
            lVar2 = *(longlong *)(lVar40 + -0x10);
            param_1[1] = *(longlong *)(lVar40 + -0x18);
            param_1[2] = lVar2;
            *param_1 = lVar3;
            if (1 < bVar41) {
              (**(code **)(*plVar4 + 0x20))(plVar4[3],plVar4[1],plVar4[2]);
              thunk_FUN_1801d3330(plVar4,0x20,8);
            }
            (**(code **)(lVar38 + 0x20))(uVar7,uVar5,uVar6);
            return param_1;
          }
          goto LAB_1800a2908;
        }
        uVar33 = (ushort)(uVar37 - 1) & (ushort)uVar37;
        uVar37 = CONCAT22((short)(uVar37 - 1 >> 0x10),uVar33);
      } while (uVar33 != 0);
    }
    auVar45[0] = -(cVar16 == (char)iVar12);
    auVar45[1] = -(cVar17 == (char)((uint)iVar12 >> 8));
    auVar45[2] = -(cVar18 == (char)((uint)iVar12 >> 0x10));
    auVar45[3] = -(cVar19 == (char)((uint)iVar12 >> 0x18));
    auVar45[4] = -(cVar20 == (char)iVar13);
    auVar45[5] = -(cVar21 == (char)((uint)iVar13 >> 8));
    auVar45[6] = -(cVar22 == (char)((uint)iVar13 >> 0x10));
    auVar45[7] = -(cVar23 == (char)((uint)iVar13 >> 0x18));
    auVar45[8] = -(cVar24 == (char)iVar14);
    auVar45[9] = -(cVar25 == (char)((uint)iVar14 >> 8));
    auVar45[10] = -(cVar26 == (char)((uint)iVar14 >> 0x10));
    auVar45[0xb] = -(cVar27 == (char)((uint)iVar14 >> 0x18));
    auVar45[0xc] = -(cVar28 == (char)iVar15);
    auVar45[0xd] = -(cVar29 == (char)((uint)iVar15 >> 8));
    auVar45[0xe] = -(cVar30 == (char)((uint)iVar15 >> 0x10));
    auVar45[0xf] = -(cVar31 == (char)((uint)iVar15 >> 0x18));
    if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x17,0) & 1) != 0) || (SUB161(auVar45 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar45 >> 0x27,0) & 1) != 0) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar45 >> 0x37,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') {
LAB_1800a2908:
      *param_1 = -0x8000000000000000;
      return param_1;
    }
    uVar34 = uVar34 + lVar38 + 0x10;
    lVar38 = lVar38 + 0x10;
  } while( true );
}


