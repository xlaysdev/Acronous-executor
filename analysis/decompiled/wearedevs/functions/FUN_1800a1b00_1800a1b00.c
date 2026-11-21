/* FUN_1800a1b00 @ 1800a1b00 */

undefined8 FUN_1800a1b00(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
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
  ushort uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 extraout_var;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  byte bVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
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
  undefined1 auVar36 [16];
  
  if (param_1[3] != 0) {
    uVar29 = FUN_1800c9240(param_1 + 4);
    lVar2 = *param_1;
    uVar3 = param_1[1];
    bVar33 = (byte)(uVar29 >> 0x39);
    auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
    auVar34 = pshuflw(auVar34,auVar34,0);
    lVar31 = 0;
    iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                   CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                    CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    while( true ) {
      uVar29 = uVar29 & uVar3;
      pcVar1 = (char *)(lVar2 + uVar29);
      cVar11 = *pcVar1;
      cVar12 = pcVar1[1];
      cVar13 = pcVar1[2];
      cVar14 = pcVar1[3];
      cVar15 = pcVar1[4];
      cVar16 = pcVar1[5];
      cVar17 = pcVar1[6];
      cVar18 = pcVar1[7];
      cVar19 = pcVar1[8];
      cVar20 = pcVar1[9];
      cVar21 = pcVar1[10];
      cVar22 = pcVar1[0xb];
      cVar23 = pcVar1[0xc];
      cVar24 = pcVar1[0xd];
      cVar25 = pcVar1[0xe];
      cVar26 = pcVar1[0xf];
      auVar35[0] = -(cVar11 == auVar34[0]);
      auVar35[1] = -(cVar12 == auVar34[1]);
      auVar35[2] = -(cVar13 == auVar34[2]);
      auVar35[3] = -(cVar14 == auVar34[3]);
      auVar35[4] = -(cVar15 == auVar34[4]);
      auVar35[5] = -(cVar16 == auVar34[5]);
      auVar35[6] = -(cVar17 == auVar34[6]);
      auVar35[7] = -(cVar18 == auVar34[7]);
      auVar35[8] = -(cVar19 == auVar34[0]);
      auVar35[9] = -(cVar20 == auVar34[1]);
      auVar35[10] = -(cVar21 == auVar34[2]);
      auVar35[0xb] = -(cVar22 == auVar34[3]);
      auVar35[0xc] = -(cVar23 == auVar34[4]);
      auVar35[0xd] = -(cVar24 == auVar34[5]);
      auVar35[0xe] = -(cVar25 == auVar34[6]);
      auVar35[0xf] = -(cVar26 == auVar34[7]);
      uVar27 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
      uVar32 = (uint)uVar27;
      if (uVar27 != 0) {
        if (*param_2 == 0) {
          do {
            uVar5 = 0;
            for (uVar6 = uVar32; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            lVar30 = lVar2 + (uVar5 + uVar29 & uVar3) * -8;
            plVar4 = *(longlong **)(lVar30 + -8);
            if ((*plVar4 == 0) && ((char)param_2[1] == (char)plVar4[1])) {
              return CONCAT71((int7)((ulonglong)lVar30 >> 8),1);
            }
            uVar27 = (ushort)(uVar32 - 1) & (ushort)uVar32;
            uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar27);
          } while (uVar27 != 0);
        }
        else {
          do {
            uVar5 = 0;
            for (uVar6 = uVar32; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            plVar4 = *(longlong **)(lVar2 + (uVar5 + uVar29 & uVar3) * -8 + -8);
            if ((*plVar4 != 0) && (param_2[2] == plVar4[2])) {
              iVar28 = memcmp((void *)param_2[1],(void *)plVar4[1],param_2[2]);
              if (iVar28 == 0) {
                return CONCAT71((int7)(CONCAT44(extraout_var,iVar28) >> 8),1);
              }
            }
            uVar27 = (ushort)(uVar32 - 1) & (ushort)uVar32;
            uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar27);
          } while (uVar27 != 0);
        }
      }
      auVar36[0] = -(cVar11 == (char)iVar7);
      auVar36[1] = -(cVar12 == (char)((uint)iVar7 >> 8));
      auVar36[2] = -(cVar13 == (char)((uint)iVar7 >> 0x10));
      auVar36[3] = -(cVar14 == (char)((uint)iVar7 >> 0x18));
      auVar36[4] = -(cVar15 == (char)iVar8);
      auVar36[5] = -(cVar16 == (char)((uint)iVar8 >> 8));
      auVar36[6] = -(cVar17 == (char)((uint)iVar8 >> 0x10));
      auVar36[7] = -(cVar18 == (char)((uint)iVar8 >> 0x18));
      auVar36[8] = -(cVar19 == (char)iVar9);
      auVar36[9] = -(cVar20 == (char)((uint)iVar9 >> 8));
      auVar36[10] = -(cVar21 == (char)((uint)iVar9 >> 0x10));
      auVar36[0xb] = -(cVar22 == (char)((uint)iVar9 >> 0x18));
      auVar36[0xc] = -(cVar23 == (char)iVar10);
      auVar36[0xd] = -(cVar24 == (char)((uint)iVar10 >> 8));
      auVar36[0xe] = -(cVar25 == (char)((uint)iVar10 >> 0x10));
      auVar36[0xf] = -(cVar26 == (char)((uint)iVar10 >> 0x18));
      if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
          auVar36[0xf] < '\0') break;
      uVar29 = uVar29 + lVar31 + 0x10;
      lVar31 = lVar31 + 0x10;
    }
  }
  return 0;
}


