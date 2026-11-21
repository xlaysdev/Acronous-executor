/* FUN_1801bb390 @ 1801bb390 */

undefined8 FUN_1801bb390(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  void *_Buf1;
  size_t _Size;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte bVar18;
  undefined8 *puVar19;
  uint uVar20;
  byte bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  undefined1 auVar24 [16];
  
  puVar19 = param_1 + 4;
  uVar15 = FUN_1801bb6b0();
  if (param_1[2] == 0) {
    FUN_1801fd0d0(param_1,1,puVar19,1);
  }
  pauVar2 = (undefined1 (*) [16])*param_1;
  uVar3 = param_1[1];
  bVar18 = (byte)(uVar15 >> 0x38);
  bVar21 = bVar18 >> 1;
  auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
  auVar22 = pshuflw(auVar22,auVar22,0);
  _Buf1 = (void *)param_2[1];
  _Size = param_2[2];
  bVar11 = false;
  iVar5 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                 CONCAT13(unaff_XMM7_Bd,
                          CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                 CONCAT13(unaff_XMM7_Bh,
                          CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                 CONCAT13(unaff_XMM7_Bl,
                          CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                 CONCAT13(unaff_XMM7_Bp,
                          CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  lVar17 = 0;
  do {
    uVar15 = uVar15 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar15);
    auVar23[0] = -(auVar1[0] == auVar22[0]);
    auVar23[1] = -(auVar1[1] == auVar22[1]);
    auVar23[2] = -(auVar1[2] == auVar22[2]);
    auVar23[3] = -(auVar1[3] == auVar22[3]);
    auVar23[4] = -(auVar1[4] == auVar22[4]);
    auVar23[5] = -(auVar1[5] == auVar22[5]);
    auVar23[6] = -(auVar1[6] == auVar22[6]);
    auVar23[7] = -(auVar1[7] == auVar22[7]);
    auVar23[8] = -(auVar1[8] == auVar22[0]);
    auVar23[9] = -(auVar1[9] == auVar22[1]);
    auVar23[10] = -(auVar1[10] == auVar22[2]);
    auVar23[0xb] = -(auVar1[0xb] == auVar22[3]);
    auVar23[0xc] = -(auVar1[0xc] == auVar22[4]);
    auVar23[0xd] = -(auVar1[0xd] == auVar22[5]);
    bVar21 = auVar1[0xf];
    auVar23[0xe] = -(auVar1[0xe] == auVar22[6]);
    auVar23[0xf] = -(bVar21 == auVar22[7]);
    uVar12 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
    uVar20 = (uint)uVar12;
    if (uVar12 != 0) {
      do {
        uVar14 = 0;
        for (uVar4 = uVar20; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        uVar16 = uVar14 + uVar15 & uVar3;
        if ((_Size == *(size_t *)pauVar2[uVar16 * -2 + -1]) &&
           (iVar13 = memcmp(_Buf1,*(void **)(pauVar2[uVar16 * -2 + -2] + 8),_Size), iVar13 == 0)) {
          *(undefined8 *)(pauVar2[uVar16 * -2 + -1] + 8) = param_3;
          if (*param_2 == 0) {
            return 1;
          }
          thunk_FUN_1801d3330(param_2[1],*param_2,1);
          return 1;
        }
        uVar12 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar12);
      } while (uVar12 != 0);
    }
    if (bVar11) {
LAB_1801bb4ca:
      auVar24[0] = -(auVar1[0] == (char)iVar5);
      auVar24[1] = -(auVar1[1] == (char)((uint)iVar5 >> 8));
      auVar24[2] = -(auVar1[2] == (char)((uint)iVar5 >> 0x10));
      auVar24[3] = -(auVar1[3] == (char)((uint)iVar5 >> 0x18));
      auVar24[4] = -(auVar1[4] == (char)iVar6);
      auVar24[5] = -(auVar1[5] == (char)((uint)iVar6 >> 8));
      auVar24[6] = -(auVar1[6] == (char)((uint)iVar6 >> 0x10));
      auVar24[7] = -(auVar1[7] == (byte)((uint)iVar6 >> 0x18));
      auVar24[8] = -(auVar1[8] == (char)iVar7);
      auVar24[9] = -(auVar1[9] == (char)((uint)iVar7 >> 8));
      auVar24[10] = -(auVar1[10] == (char)((uint)iVar7 >> 0x10));
      auVar24[0xb] = -(auVar1[0xb] == (char)((uint)iVar7 >> 0x18));
      auVar24[0xc] = -(auVar1[0xc] == (char)iVar8);
      auVar24[0xd] = -(auVar1[0xd] == (char)((uint)iVar8 >> 8));
      auVar24[0xe] = -(auVar1[0xe] == (char)((uint)iVar8 >> 0x10));
      auVar24[0xf] = -(bVar21 == (byte)((uint)iVar8 >> 0x18));
      if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') {
        bVar21 = (*pauVar2)[(longlong)puVar19];
        if (-1 < (char)bVar21) {
          auVar22 = *pauVar2;
          uVar20 = 0;
          for (uVar14 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar22[0xf] >> 7) << 0xf); (uVar14 & 1) == 0;
              uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar20 = uVar20 + 1;
          }
          puVar19 = (undefined8 *)(ulonglong)uVar20;
          bVar21 = (*pauVar2)[(longlong)puVar19];
        }
        lVar17 = param_2[2];
        lVar9 = *param_2;
        lVar10 = param_2[1];
        bVar18 = bVar18 >> 1;
        (*pauVar2)[(longlong)puVar19] = bVar18;
        pauVar2[1][(ulonglong)(puVar19 + -2) & uVar3] = bVar18;
        param_1[2] = param_1[2] - (ulonglong)(bVar21 & 1);
        param_1[3] = param_1[3] + 1;
        *(longlong *)pauVar2[(longlong)puVar19 * -2 + -1] = lVar17;
        *(longlong *)pauVar2[(longlong)puVar19 * -2 + -2] = lVar9;
        *(longlong *)(pauVar2[(longlong)puVar19 * -2 + -2] + 8) = lVar10;
        *(undefined8 *)(pauVar2[(longlong)puVar19 * -2 + -1] + 8) = param_3;
        return 0;
      }
      bVar11 = true;
    }
    else {
      uVar12 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar21 >> 7) << 0xf;
      uVar20 = (uint)uVar12;
      if (uVar12 != 0) {
        uVar14 = 0;
        for (; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        puVar19 = (undefined8 *)(uVar14 + uVar15 & uVar3);
        goto LAB_1801bb4ca;
      }
      bVar11 = false;
    }
    uVar15 = uVar15 + lVar17 + 0x10;
    lVar17 = lVar17 + 0x10;
  } while( true );
}


