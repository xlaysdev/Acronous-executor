/* FUN_1800a2440 @ 1800a2440 */

longlong * FUN_1800a2440(longlong *param_1,longlong *param_2,longlong param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char cVar15;
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
  longlong lVar31;
  char cVar32;
  ushort uVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  undefined1 uVar37;
  uint uVar38;
  longlong lVar39;
  ulonglong uVar40;
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
  lVar2 = *param_2;
  uVar36 = param_2[1];
  bVar41 = (byte)(uVar34 >> 0x39);
  auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
  auVar42 = pshuflw(auVar42,auVar42,0);
  lVar39 = 0;
  iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                  CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  iVar12 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                  CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  iVar13 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                  CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  iVar14 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                  CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  do {
    uVar34 = uVar34 & uVar36;
    pcVar1 = (char *)(lVar2 + uVar34);
    cVar15 = *pcVar1;
    cVar16 = pcVar1[1];
    cVar17 = pcVar1[2];
    cVar18 = pcVar1[3];
    cVar19 = pcVar1[4];
    cVar20 = pcVar1[5];
    cVar21 = pcVar1[6];
    cVar22 = pcVar1[7];
    cVar23 = pcVar1[8];
    cVar24 = pcVar1[9];
    cVar25 = pcVar1[10];
    cVar26 = pcVar1[0xb];
    cVar27 = pcVar1[0xc];
    cVar28 = pcVar1[0xd];
    cVar29 = pcVar1[0xe];
    cVar30 = pcVar1[0xf];
    auVar43[0] = -(cVar15 == auVar42[0]);
    auVar43[1] = -(cVar16 == auVar42[1]);
    auVar43[2] = -(cVar17 == auVar42[2]);
    auVar43[3] = -(cVar18 == auVar42[3]);
    auVar43[4] = -(cVar19 == auVar42[4]);
    auVar43[5] = -(cVar20 == auVar42[5]);
    auVar43[6] = -(cVar21 == auVar42[6]);
    auVar43[7] = -(cVar22 == auVar42[7]);
    auVar43[8] = -(cVar23 == auVar42[0]);
    auVar43[9] = -(cVar24 == auVar42[1]);
    auVar43[10] = -(cVar25 == auVar42[2]);
    auVar43[0xb] = -(cVar26 == auVar42[3]);
    auVar43[0xc] = -(cVar27 == auVar42[4]);
    auVar43[0xd] = -(cVar28 == auVar42[5]);
    auVar43[0xe] = -(cVar29 == auVar42[6]);
    auVar43[0xf] = -(cVar30 == auVar42[7]);
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
    uVar38 = (uint)uVar33;
    if (uVar33 != 0) {
      do {
        uVar9 = 0;
        for (uVar10 = uVar38; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar40 = uVar9 + uVar34 & uVar36;
        lVar35 = lVar2 + -0x48 + uVar40 * -0x48;
        cVar32 = FUN_1801ae3a0(param_3,lVar35);
        if ((cVar32 != '\0') &&
           (cVar32 = FUN_1801acfa0(param_3 + 0x10,lVar35 + 0x10), cVar32 != '\0')) {
          lVar39 = lVar2 + uVar40 * -0x48;
          lVar35 = ((longlong)(uVar40 * 0x48) >> 3) * -0x71c71c71c71c71c7;
          uVar36 = lVar35 - 0x10U & uVar36;
          pcVar1 = (char *)(lVar2 + uVar36);
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
          uVar7 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1
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
          pcVar1 = (char *)(lVar2 + lVar35);
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
          if (uVar7 != 0) {
            for (; uVar7 >> uVar33 == 0; uVar33 = uVar33 - 1) {
            }
          }
          sVar8 = 0;
          for (uVar38 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
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
                                (ushort)(auVar44[0xf] >> 7) << 0xf) | 0x10000; (uVar38 & 1) == 0;
              uVar38 = uVar38 >> 1 | 0x80000000) {
            sVar8 = sVar8 + 1;
          }
          uVar37 = 0x80;
          if ((ushort)(sVar8 + (uVar33 ^ 0xf)) < 0x10) {
            param_2[2] = param_2[2] + 1;
            uVar37 = 0xff;
          }
          *(undefined1 *)(lVar2 + lVar35) = uVar37;
          *(undefined1 *)(lVar2 + 0x10 + uVar36) = uVar37;
          param_2[3] = param_2[3] + -1;
          lVar2 = *(longlong *)(lVar39 + -0x18);
          if (!SBORROW8(0,lVar2)) {
            plVar3 = *(longlong **)(lVar39 + -0x40);
            lVar35 = *(longlong *)(lVar39 + -0x38);
            uVar4 = *(undefined8 *)(lVar39 + -0x30);
            uVar5 = *(undefined8 *)(lVar39 + -0x28);
            uVar6 = *(undefined8 *)(lVar39 + -0x20);
            bVar41 = *(byte *)(lVar39 + -0x48);
            lVar31 = *(longlong *)(lVar39 + -8);
            param_1[1] = *(longlong *)(lVar39 + -0x10);
            param_1[2] = lVar31;
            *param_1 = lVar2;
            if (1 < bVar41) {
              (**(code **)(*plVar3 + 0x20))(plVar3[3],plVar3[1],plVar3[2]);
              thunk_FUN_1801d3330(plVar3,0x20,8);
            }
            (**(code **)(lVar35 + 0x20))(uVar6,uVar4,uVar5);
            return param_1;
          }
          goto LAB_1800a2605;
        }
        uVar33 = (ushort)(uVar38 - 1) & (ushort)uVar38;
        uVar38 = CONCAT22((short)(uVar38 - 1 >> 0x10),uVar33);
      } while (uVar33 != 0);
    }
    auVar45[0] = -(cVar15 == (char)iVar11);
    auVar45[1] = -(cVar16 == (char)((uint)iVar11 >> 8));
    auVar45[2] = -(cVar17 == (char)((uint)iVar11 >> 0x10));
    auVar45[3] = -(cVar18 == (char)((uint)iVar11 >> 0x18));
    auVar45[4] = -(cVar19 == (char)iVar12);
    auVar45[5] = -(cVar20 == (char)((uint)iVar12 >> 8));
    auVar45[6] = -(cVar21 == (char)((uint)iVar12 >> 0x10));
    auVar45[7] = -(cVar22 == (char)((uint)iVar12 >> 0x18));
    auVar45[8] = -(cVar23 == (char)iVar13);
    auVar45[9] = -(cVar24 == (char)((uint)iVar13 >> 8));
    auVar45[10] = -(cVar25 == (char)((uint)iVar13 >> 0x10));
    auVar45[0xb] = -(cVar26 == (char)((uint)iVar13 >> 0x18));
    auVar45[0xc] = -(cVar27 == (char)iVar14);
    auVar45[0xd] = -(cVar28 == (char)((uint)iVar14 >> 8));
    auVar45[0xe] = -(cVar29 == (char)((uint)iVar14 >> 0x10));
    auVar45[0xf] = -(cVar30 == (char)((uint)iVar14 >> 0x18));
    if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x17,0) & 1) != 0) || (SUB161(auVar45 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar45 >> 0x27,0) & 1) != 0) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar45 >> 0x37,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') {
LAB_1800a2605:
      *param_1 = -0x8000000000000000;
      return param_1;
    }
    uVar34 = uVar34 + lVar39 + 0x10;
    lVar39 = lVar39 + 0x10;
  } while( true );
}


