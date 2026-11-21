/* FUN_1800a1830 @ 1800a1830 */

undefined8 * FUN_1800a1830(undefined8 *param_1,longlong *param_2,byte *param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
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
  char cVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  char cVar33;
  ushort uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  uint uVar39;
  byte bVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
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
  undefined1 auVar43 [16];
  
  uVar35 = FUN_1800c93e0(param_2 + 4,param_3);
  lVar3 = *param_2;
  uVar4 = param_2[1];
  bVar40 = (byte)(uVar35 >> 0x39);
  auVar41 = ZEXT216(CONCAT11(bVar40,bVar40));
  auVar41 = pshuflw(auVar41,auVar41,0);
  lVar38 = 0;
  iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                 CONCAT13(unaff_XMM7_Bd,
                          CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                 CONCAT13(unaff_XMM7_Bh,
                          CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                  CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                  CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  uVar37 = uVar35;
  while( true ) {
    uVar37 = uVar37 & uVar4;
    pcVar1 = (char *)(lVar3 + uVar37);
    cVar12 = *pcVar1;
    cVar13 = pcVar1[1];
    cVar14 = pcVar1[2];
    cVar15 = pcVar1[3];
    cVar16 = pcVar1[4];
    cVar17 = pcVar1[5];
    cVar18 = pcVar1[6];
    cVar19 = pcVar1[7];
    cVar20 = pcVar1[8];
    cVar21 = pcVar1[9];
    cVar22 = pcVar1[10];
    cVar23 = pcVar1[0xb];
    cVar24 = pcVar1[0xc];
    cVar25 = pcVar1[0xd];
    cVar26 = pcVar1[0xe];
    cVar27 = pcVar1[0xf];
    auVar42[0] = -(cVar12 == auVar41[0]);
    auVar42[1] = -(cVar13 == auVar41[1]);
    auVar42[2] = -(cVar14 == auVar41[2]);
    auVar42[3] = -(cVar15 == auVar41[3]);
    auVar42[4] = -(cVar16 == auVar41[4]);
    auVar42[5] = -(cVar17 == auVar41[5]);
    auVar42[6] = -(cVar18 == auVar41[6]);
    auVar42[7] = -(cVar19 == auVar41[7]);
    auVar42[8] = -(cVar20 == auVar41[0]);
    auVar42[9] = -(cVar21 == auVar41[1]);
    auVar42[10] = -(cVar22 == auVar41[2]);
    auVar42[0xb] = -(cVar23 == auVar41[3]);
    auVar42[0xc] = -(cVar24 == auVar41[4]);
    auVar42[0xd] = -(cVar25 == auVar41[5]);
    auVar42[0xe] = -(cVar26 == auVar41[6]);
    auVar42[0xf] = -(cVar27 == auVar41[7]);
    uVar34 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
    uVar39 = (uint)uVar34;
    if (uVar34 != 0) {
      do {
        uVar6 = 0;
        for (uVar7 = uVar39; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar36 = uVar6 + uVar37 & uVar4;
        cVar33 = FUN_1801ae3a0(lVar3 + uVar36 * -0x48 + -0x48,param_3);
        if (cVar33 != '\0') {
          lVar2 = lVar3 + uVar36 * -0x48;
          cVar33 = FUN_1801acfa0(lVar2 + -0x38,param_3 + 0x10);
          if (cVar33 != '\0') {
            param_1[1] = lVar2;
            param_1[2] = param_2;
            *(undefined1 *)param_1 = 3;
            if (1 < *param_3) {
              plVar5 = *(longlong **)(param_3 + 8);
              (**(code **)(*plVar5 + 0x20))(plVar5[3],plVar5[1],plVar5[2]);
              thunk_FUN_1801d3330(plVar5,0x20,8);
            }
            (**(code **)(*(longlong *)(param_3 + 0x10) + 0x20))
                      (*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
                       *(undefined8 *)(param_3 + 0x20));
            return param_1;
          }
        }
        uVar34 = (ushort)(uVar39 - 1) & (ushort)uVar39;
        uVar39 = CONCAT22((short)(uVar39 - 1 >> 0x10),uVar34);
      } while (uVar34 != 0);
    }
    auVar43[0] = -(cVar12 == (char)iVar8);
    auVar43[1] = -(cVar13 == (char)((uint)iVar8 >> 8));
    auVar43[2] = -(cVar14 == (char)((uint)iVar8 >> 0x10));
    auVar43[3] = -(cVar15 == (char)((uint)iVar8 >> 0x18));
    auVar43[4] = -(cVar16 == (char)iVar9);
    auVar43[5] = -(cVar17 == (char)((uint)iVar9 >> 8));
    auVar43[6] = -(cVar18 == (char)((uint)iVar9 >> 0x10));
    auVar43[7] = -(cVar19 == (char)((uint)iVar9 >> 0x18));
    auVar43[8] = -(cVar20 == (char)iVar10);
    auVar43[9] = -(cVar21 == (char)((uint)iVar10 >> 8));
    auVar43[10] = -(cVar22 == (char)((uint)iVar10 >> 0x10));
    auVar43[0xb] = -(cVar23 == (char)((uint)iVar10 >> 0x18));
    auVar43[0xc] = -(cVar24 == (char)iVar11);
    auVar43[0xd] = -(cVar25 == (char)((uint)iVar11 >> 8));
    auVar43[0xe] = -(cVar26 == (char)((uint)iVar11 >> 0x10));
    auVar43[0xf] = -(cVar27 == (char)((uint)iVar11 >> 0x18));
    if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar43 >> 0x17,0) & 1) != 0) || (SUB161(auVar43 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar43 >> 0x27,0) & 1) != 0) || (SUB161(auVar43 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar43 >> 0x37,0) & 1) != 0) || (SUB161(auVar43 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar43 >> 0x47,0) & 1) != 0) || (SUB161(auVar43 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar43 >> 0x67,0) & 1) != 0) || (SUB161(auVar43 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar43 >> 0x77,0) & 1) != 0) || auVar43[0xf] < '\0') break;
    uVar37 = uVar37 + lVar38 + 0x10;
    lVar38 = lVar38 + 0x10;
  }
  if (param_2[2] == 0) {
    FUN_1801f7a30(param_2,1,param_2 + 4,1);
  }
  uVar28 = *(undefined8 *)param_3;
  uVar29 = *(undefined8 *)(param_3 + 8);
  uVar30 = *(undefined8 *)(param_3 + 0x10);
  uVar31 = *(undefined8 *)(param_3 + 0x18);
  uVar32 = *(undefined8 *)(param_3 + 0x28);
  param_1[4] = *(undefined8 *)(param_3 + 0x20);
  param_1[5] = uVar32;
  param_1[2] = uVar30;
  param_1[3] = uVar31;
  *param_1 = uVar28;
  param_1[1] = uVar29;
  param_1[6] = param_2;
  param_1[7] = uVar35;
  return param_1;
}


