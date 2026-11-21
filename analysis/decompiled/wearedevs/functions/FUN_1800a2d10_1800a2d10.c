/* FUN_1800a2d10 @ 1800a2d10 */

void FUN_1800a2d10(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  undefined1 uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  uint uVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  char cVar22;
  undefined1 unaff_XMM6_Bc;
  char cVar23;
  undefined1 unaff_XMM6_Bd;
  char cVar24;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  char cVar25;
  undefined1 unaff_XMM6_Bg;
  char cVar26;
  undefined1 unaff_XMM6_Bh;
  char cVar27;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  char cVar28;
  undefined1 unaff_XMM6_Bk;
  char cVar29;
  undefined1 unaff_XMM6_Bl;
  char cVar30;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  char cVar31;
  undefined1 unaff_XMM6_Bo;
  char cVar32;
  undefined1 unaff_XMM6_Bp;
  char cVar33;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  lVar16 = param_1[3];
  if (lVar16 != 0) {
    pauVar17 = (undefined1 (*) [16])*param_1;
    pauVar13 = pauVar17 + 1;
    auVar20 = *pauVar17;
    uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar20[0xf] >> 7) << 0xf);
    iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                   CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    cVar22 = (char)((uint)iVar7 >> 8);
    cVar23 = (char)((uint)iVar7 >> 0x10);
    cVar24 = (char)((uint)iVar7 >> 0x18);
    iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                   CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    cVar25 = (char)((uint)iVar8 >> 8);
    cVar26 = (char)((uint)iVar8 >> 0x10);
    cVar27 = (char)((uint)iVar8 >> 0x18);
    iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                   CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    cVar28 = (char)((uint)iVar9 >> 8);
    cVar29 = (char)((uint)iVar9 >> 0x10);
    cVar30 = (char)((uint)iVar9 >> 0x18);
    iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                    CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    cVar31 = (char)((uint)iVar10 >> 8);
    cVar32 = (char)((uint)iVar10 >> 0x10);
    cVar33 = (char)((uint)iVar10 >> 0x18);
    do {
      if ((short)uVar18 == 0) {
        do {
          auVar20 = *pauVar13;
          pauVar17 = pauVar17 + -0x48;
          pauVar13 = pauVar13 + 1;
          uVar18 = (uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar20[0xf] >> 7) << 0xf);
        } while (uVar18 == 0xffff);
        uVar18 = ~uVar18;
      }
      uVar15 = 0;
      for (uVar6 = uVar18; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar15 = uVar15 + 1;
      }
      uVar12 = (ulonglong)uVar15;
      lVar19 = uVar12 * -0x48 + -0x48 + (longlong)pauVar17;
      local_70 = &local_78;
      local_78 = lVar19;
      local_68 = param_2;
      local_60 = param_3;
      FUN_18009b630((longlong)pauVar17 + uVar12 * -0x48 + -0x18,&local_70);
      if (*(longlong *)((longlong)pauVar17 + uVar12 * -0x48 + -8) == 0) {
        lVar2 = *param_1;
        lVar11 = ((longlong)(lVar2 - (uVar12 * -0x48 + (longlong)pauVar17)) >> 3) *
                 -0x71c71c71c71c71c7;
        uVar12 = lVar11 - 0x10U & param_1[1];
        pcVar1 = (char *)(lVar2 + uVar12);
        auVar20[0] = -(*pcVar1 == (char)iVar7);
        auVar20[1] = -(pcVar1[1] == cVar22);
        auVar20[2] = -(pcVar1[2] == cVar23);
        auVar20[3] = -(pcVar1[3] == cVar24);
        auVar20[4] = -(pcVar1[4] == (char)iVar8);
        auVar20[5] = -(pcVar1[5] == cVar25);
        auVar20[6] = -(pcVar1[6] == cVar26);
        auVar20[7] = -(pcVar1[7] == cVar27);
        auVar20[8] = -(pcVar1[8] == (char)iVar9);
        auVar20[9] = -(pcVar1[9] == cVar28);
        auVar20[10] = -(pcVar1[10] == cVar29);
        auVar20[0xb] = -(pcVar1[0xb] == cVar30);
        auVar20[0xc] = -(pcVar1[0xc] == (char)iVar10);
        auVar20[0xd] = -(pcVar1[0xd] == cVar31);
        auVar20[0xe] = -(pcVar1[0xe] == cVar32);
        auVar20[0xf] = -(pcVar1[0xf] == cVar33);
        uVar4 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
        pcVar1 = (char *)(lVar2 + lVar11);
        auVar21[0] = -(*pcVar1 == (char)iVar7);
        auVar21[1] = -(pcVar1[1] == cVar22);
        auVar21[2] = -(pcVar1[2] == cVar23);
        auVar21[3] = -(pcVar1[3] == cVar24);
        auVar21[4] = -(pcVar1[4] == (char)iVar8);
        auVar21[5] = -(pcVar1[5] == cVar25);
        auVar21[6] = -(pcVar1[6] == cVar26);
        auVar21[7] = -(pcVar1[7] == cVar27);
        auVar21[8] = -(pcVar1[8] == (char)iVar9);
        auVar21[9] = -(pcVar1[9] == cVar28);
        auVar21[10] = -(pcVar1[10] == cVar29);
        auVar21[0xb] = -(pcVar1[0xb] == cVar30);
        auVar21[0xc] = -(pcVar1[0xc] == (char)iVar10);
        auVar21[0xd] = -(pcVar1[0xd] == cVar31);
        auVar21[0xe] = -(pcVar1[0xe] == cVar32);
        auVar21[0xf] = -(pcVar1[0xf] == cVar33);
        uVar3 = 0xf;
        if (uVar4 != 0) {
          for (; uVar4 >> uVar3 == 0; uVar3 = uVar3 - 1) {
          }
        }
        sVar5 = 0;
        for (uVar15 = (ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar21[0xf] >> 7) << 0xf) | 0x10000; (uVar15 & 1) == 0;
            uVar15 = uVar15 >> 1 | 0x80000000) {
          sVar5 = sVar5 + 1;
        }
        uVar14 = 0x80;
        if ((ushort)(sVar5 + (uVar3 ^ 0xf)) < 0x10) {
          param_1[2] = param_1[2] + 1;
          uVar14 = 0xff;
        }
        *(undefined1 *)(lVar2 + lVar11) = uVar14;
        *(undefined1 *)(lVar2 + 0x10 + uVar12) = uVar14;
        param_1[3] = param_1[3] + -1;
        FUN_18009efd0(lVar19);
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}


