/* FUN_1800a1fd0 @ 1800a1fd0 */

undefined8 FUN_1800a1fd0(undefined8 *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 extraout_var;
  longlong lVar15;
  longlong lVar16;
  ulonglong unaff_R12;
  uint uVar17;
  byte bVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  undefined1 auVar22 [16];
  
  uVar14 = FUN_1800c90a0(param_1 + 4);
  if (param_1[2] == 0) {
    FUN_1801f7400(param_1,1,param_1 + 4,1);
  }
  pauVar2 = (undefined1 (*) [16])*param_1;
  uVar3 = param_1[1];
  bVar18 = (byte)(uVar14 >> 0x38);
  bVar19 = bVar18 >> 1;
  auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
  auVar20 = pshuflw(auVar20,auVar20,0);
  bVar10 = false;
  iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                 CONCAT13(unaff_XMM7_Bd,
                          CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                 CONCAT13(unaff_XMM7_Bh,
                          CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                 CONCAT13(unaff_XMM7_Bl,
                          CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                 CONCAT13(unaff_XMM7_Bp,
                          CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  lVar16 = 0;
  do {
    uVar14 = uVar14 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar14);
    auVar21[0] = -(auVar1[0] == auVar20[0]);
    auVar21[1] = -(auVar1[1] == auVar20[1]);
    auVar21[2] = -(auVar1[2] == auVar20[2]);
    auVar21[3] = -(auVar1[3] == auVar20[3]);
    auVar21[4] = -(auVar1[4] == auVar20[4]);
    auVar21[5] = -(auVar1[5] == auVar20[5]);
    auVar21[6] = -(auVar1[6] == auVar20[6]);
    auVar21[7] = -(auVar1[7] == auVar20[7]);
    auVar21[8] = -(auVar1[8] == auVar20[0]);
    auVar21[9] = -(auVar1[9] == auVar20[1]);
    auVar21[10] = -(auVar1[10] == auVar20[2]);
    auVar21[0xb] = -(auVar1[0xb] == auVar20[3]);
    auVar21[0xc] = -(auVar1[0xc] == auVar20[4]);
    auVar21[0xd] = -(auVar1[0xd] == auVar20[5]);
    bVar19 = auVar1[0xf];
    auVar21[0xe] = -(auVar1[0xe] == auVar20[6]);
    auVar21[0xf] = -(bVar19 == auVar20[7]);
    uVar11 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
    uVar17 = (uint)uVar11;
    if (uVar11 != 0) {
      if (*param_2 == 0) {
        do {
          uVar13 = 0;
          for (uVar5 = uVar17; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          lVar15 = (longlong)pauVar2 + (uVar13 + uVar14 & uVar3) * -8;
          plVar4 = *(longlong **)(lVar15 + -8);
          if ((*plVar4 == 0) && ((char)param_2[1] == (char)plVar4[1])) {
            return CONCAT71((int7)((ulonglong)lVar15 >> 8),1);
          }
          uVar11 = (ushort)(uVar17 - 1) & (ushort)uVar17;
          uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar11);
        } while (uVar11 != 0);
      }
      else {
        do {
          uVar13 = 0;
          for (uVar5 = uVar17; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          plVar4 = *(longlong **)((longlong)pauVar2 + (uVar13 + uVar14 & uVar3) * -8 + -8);
          if ((*plVar4 != 0) && (param_2[2] == plVar4[2])) {
            iVar12 = memcmp((void *)param_2[1],(void *)plVar4[1],param_2[2]);
            if (iVar12 == 0) {
              return CONCAT71((int7)(CONCAT44(extraout_var,iVar12) >> 8),1);
            }
          }
          uVar11 = (ushort)(uVar17 - 1) & (ushort)uVar17;
          uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar11);
        } while (uVar11 != 0);
      }
    }
    if (bVar10) {
LAB_1800a20ea:
      auVar22[0] = -(auVar1[0] == (char)iVar6);
      auVar22[1] = -(auVar1[1] == (char)((uint)iVar6 >> 8));
      auVar22[2] = -(auVar1[2] == (char)((uint)iVar6 >> 0x10));
      auVar22[3] = -(auVar1[3] == (char)((uint)iVar6 >> 0x18));
      auVar22[4] = -(auVar1[4] == (char)iVar7);
      auVar22[5] = -(auVar1[5] == (char)((uint)iVar7 >> 8));
      auVar22[6] = -(auVar1[6] == (char)((uint)iVar7 >> 0x10));
      auVar22[7] = -(auVar1[7] == (byte)((uint)iVar7 >> 0x18));
      auVar22[8] = -(auVar1[8] == (char)iVar8);
      auVar22[9] = -(auVar1[9] == (char)((uint)iVar8 >> 8));
      auVar22[10] = -(auVar1[10] == (char)((uint)iVar8 >> 0x10));
      auVar22[0xb] = -(auVar1[0xb] == (char)((uint)iVar8 >> 0x18));
      auVar22[0xc] = -(auVar1[0xc] == (char)iVar9);
      auVar22[0xd] = -(auVar1[0xd] == (char)((uint)iVar9 >> 8));
      auVar22[0xe] = -(auVar1[0xe] == (char)((uint)iVar9 >> 0x10));
      auVar22[0xf] = -(bVar19 == (byte)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') {
        bVar19 = (*pauVar2)[unaff_R12];
        if (-1 < (char)bVar19) {
          auVar20 = *pauVar2;
          uVar17 = 0;
          for (uVar13 = (uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar20[0xf] >> 7) << 0xf); (uVar13 & 1) == 0;
              uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar17 = uVar17 + 1;
          }
          unaff_R12 = (ulonglong)uVar17;
          bVar19 = (*pauVar2)[unaff_R12];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar2)[unaff_R12] = bVar18;
        pauVar2[1][unaff_R12 - 0x10 & uVar3] = bVar18;
        param_1[2] = param_1[2] - (ulonglong)(bVar19 & 1);
        param_1[3] = param_1[3] + 1;
        *(longlong **)((longlong)pauVar2 + unaff_R12 * -8 + -8) = param_2;
        return 0;
      }
      bVar10 = true;
    }
    else {
      uVar11 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar19 >> 7) << 0xf;
      if (uVar11 != 0) {
        uVar17 = 0;
        for (uVar13 = (uint)uVar11; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar17 = uVar17 + 1;
        }
        unaff_R12 = uVar17 + uVar14 & uVar3;
        goto LAB_1800a20ea;
      }
      bVar10 = false;
    }
    uVar14 = uVar14 + lVar16 + 0x10;
    lVar16 = lVar16 + 0x10;
  } while( true );
}


