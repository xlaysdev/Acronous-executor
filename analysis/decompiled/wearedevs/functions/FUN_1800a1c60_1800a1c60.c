/* FUN_1800a1c60 @ 1800a1c60 */

undefined8 FUN_1800a1c60(longlong *param_1,byte *param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  char cVar18;
  ushort uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  byte bVar24;
  longlong lVar25;
  ulonglong unaff_R12;
  uint uVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
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
  undefined1 auVar30 [16];
  
  uVar21 = FUN_1800c93e0(param_1 + 4);
  if (param_1[2] == 0) {
    FUN_1801f6d20(param_1,1,param_1 + 4,1);
  }
  pauVar3 = (undefined1 (*) [16])*param_1;
  uVar4 = param_1[1];
  bVar24 = (byte)(uVar21 >> 0x38);
  bVar27 = bVar24 >> 1;
  auVar28 = ZEXT216(CONCAT11(bVar27,bVar27));
  auVar28 = pshuflw(auVar28,auVar28,0);
  bVar17 = false;
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
  lVar25 = 0;
  do {
    uVar21 = uVar21 & uVar4;
    auVar2 = *(undefined1 (*) [16])(*pauVar3 + uVar21);
    auVar29[0] = -(auVar2[0] == auVar28[0]);
    auVar29[1] = -(auVar2[1] == auVar28[1]);
    auVar29[2] = -(auVar2[2] == auVar28[2]);
    auVar29[3] = -(auVar2[3] == auVar28[3]);
    auVar29[4] = -(auVar2[4] == auVar28[4]);
    auVar29[5] = -(auVar2[5] == auVar28[5]);
    auVar29[6] = -(auVar2[6] == auVar28[6]);
    auVar29[7] = -(auVar2[7] == auVar28[7]);
    auVar29[8] = -(auVar2[8] == auVar28[0]);
    auVar29[9] = -(auVar2[9] == auVar28[1]);
    auVar29[10] = -(auVar2[10] == auVar28[2]);
    auVar29[0xb] = -(auVar2[0xb] == auVar28[3]);
    auVar29[0xc] = -(auVar2[0xc] == auVar28[4]);
    auVar29[0xd] = -(auVar2[0xd] == auVar28[5]);
    bVar27 = auVar2[0xf];
    auVar29[0xe] = -(auVar2[0xe] == auVar28[6]);
    auVar29[0xf] = -(bVar27 == auVar28[7]);
    uVar19 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
    uVar26 = (uint)uVar19;
    if (uVar19 != 0) {
      do {
        uVar20 = 0;
        for (uVar6 = uVar26; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        lVar22 = *param_1;
        lVar23 = (uVar20 + uVar21 & uVar4) * -0x30;
        cVar18 = FUN_1801ae3a0(param_2,lVar22 + lVar23 + -0x30);
        if ((cVar18 != '\0') &&
           (cVar18 = FUN_1801acfa0(param_2 + 0x10,lVar22 + lVar23 + -0x20), cVar18 != '\0')) {
          if (1 < *param_2) {
            plVar5 = *(longlong **)(param_2 + 8);
            (**(code **)(*plVar5 + 0x20))(plVar5[3],plVar5[1],plVar5[2]);
            thunk_FUN_1801d3330(plVar5,0x20,8);
          }
          (**(code **)(*(longlong *)(param_2 + 0x10) + 0x20))
                    (*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x18),
                     *(undefined8 *)(param_2 + 0x20));
          return 1;
        }
        uVar19 = (ushort)(uVar26 - 1) & (ushort)uVar26;
        uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar19);
      } while (uVar19 != 0);
    }
    if (bVar17) {
LAB_1800a1d9a:
      auVar30[0] = -(auVar2[0] == (char)iVar7);
      auVar30[1] = -(auVar2[1] == (char)((uint)iVar7 >> 8));
      auVar30[2] = -(auVar2[2] == (char)((uint)iVar7 >> 0x10));
      auVar30[3] = -(auVar2[3] == (char)((uint)iVar7 >> 0x18));
      auVar30[4] = -(auVar2[4] == (char)iVar8);
      auVar30[5] = -(auVar2[5] == (char)((uint)iVar8 >> 8));
      auVar30[6] = -(auVar2[6] == (char)((uint)iVar8 >> 0x10));
      auVar30[7] = -(auVar2[7] == (byte)((uint)iVar8 >> 0x18));
      auVar30[8] = -(auVar2[8] == (char)iVar9);
      auVar30[9] = -(auVar2[9] == (char)((uint)iVar9 >> 8));
      auVar30[10] = -(auVar2[10] == (char)((uint)iVar9 >> 0x10));
      auVar30[0xb] = -(auVar2[0xb] == (char)((uint)iVar9 >> 0x18));
      auVar30[0xc] = -(auVar2[0xc] == (char)iVar10);
      auVar30[0xd] = -(auVar2[0xd] == (char)((uint)iVar10 >> 8));
      auVar30[0xe] = -(auVar2[0xe] == (char)((uint)iVar10 >> 0x10));
      auVar30[0xf] = -(bVar27 == (byte)((uint)iVar10 >> 0x18));
      if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar30 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar30 >> 0x3f,0) & 1) != 0) || (SUB161(auVar30 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar30 >> 0x4f,0) & 1) != 0) || (SUB161(auVar30 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar30 >> 0x5f,0) & 1) != 0) || (SUB161(auVar30 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar30 >> 0x6f,0) & 1) != 0) || (SUB161(auVar30 >> 0x77,0) & 1) != 0) ||
          auVar30[0xf] < '\0') {
        if (-1 < (char)(*pauVar3)[unaff_R12]) {
          auVar28 = *pauVar3;
          uVar26 = 0;
          for (uVar20 = (uint)(ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar28[0xf] >> 7) << 0xf); (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x80000000) {
            uVar26 = uVar26 + 1;
          }
          unaff_R12 = (ulonglong)uVar26;
        }
        uVar11 = *(undefined8 *)param_2;
        uVar12 = *(undefined8 *)(param_2 + 8);
        uVar13 = *(undefined8 *)(param_2 + 0x10);
        uVar14 = *(undefined8 *)(param_2 + 0x18);
        uVar15 = *(undefined8 *)(param_2 + 0x20);
        uVar16 = *(undefined8 *)(param_2 + 0x28);
        lVar25 = *param_1;
        bVar27 = *(byte *)(lVar25 + unaff_R12);
        uVar21 = param_1[1];
        bVar24 = bVar24 >> 1;
        *(byte *)(lVar25 + unaff_R12) = bVar24;
        *(byte *)(lVar25 + 0x10 + (unaff_R12 - 0x10 & uVar21)) = bVar24;
        param_1[2] = param_1[2] - (ulonglong)(bVar27 & 1);
        param_1[3] = param_1[3] + 1;
        lVar22 = unaff_R12 * -0x30;
        puVar1 = (undefined8 *)(lVar25 + -0x10 + lVar22);
        *puVar1 = uVar15;
        puVar1[1] = uVar16;
        puVar1 = (undefined8 *)(lVar25 + -0x20 + lVar22);
        *puVar1 = uVar13;
        puVar1[1] = uVar14;
        puVar1 = (undefined8 *)(lVar25 + -0x30 + lVar22);
        *puVar1 = uVar11;
        puVar1[1] = uVar12;
        return 0;
      }
      bVar17 = true;
    }
    else {
      uVar19 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(bVar27 >> 7) << 0xf;
      uVar26 = (uint)uVar19;
      if (uVar19 != 0) {
        uVar20 = 0;
        for (; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
          uVar20 = uVar20 + 1;
        }
        unaff_R12 = uVar20 + uVar21 & uVar4;
        goto LAB_1800a1d9a;
      }
      bVar17 = false;
    }
    uVar21 = uVar21 + lVar25 + 0x10;
    lVar25 = lVar25 + 0x10;
  } while( true );
}


