/* FUN_1800a1560 @ 1800a1560 */

undefined8 * FUN_1800a1560(undefined8 *param_1,longlong *param_2,byte *param_3)

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
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  char cVar32;
  ushort uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  uint uVar38;
  byte bVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
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
  undefined1 auVar42 [16];
  
  uVar34 = FUN_1800c93e0(param_2 + 4,param_3);
  lVar2 = *param_2;
  uVar3 = param_2[1];
  bVar39 = (byte)(uVar34 >> 0x39);
  auVar40 = ZEXT216(CONCAT11(bVar39,bVar39));
  auVar40 = pshuflw(auVar40,auVar40,0);
  lVar36 = 0;
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
  uVar35 = uVar34;
  while( true ) {
    uVar35 = uVar35 & uVar3;
    pcVar1 = (char *)(lVar2 + uVar35);
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
    auVar41[0] = -(cVar11 == auVar40[0]);
    auVar41[1] = -(cVar12 == auVar40[1]);
    auVar41[2] = -(cVar13 == auVar40[2]);
    auVar41[3] = -(cVar14 == auVar40[3]);
    auVar41[4] = -(cVar15 == auVar40[4]);
    auVar41[5] = -(cVar16 == auVar40[5]);
    auVar41[6] = -(cVar17 == auVar40[6]);
    auVar41[7] = -(cVar18 == auVar40[7]);
    auVar41[8] = -(cVar19 == auVar40[0]);
    auVar41[9] = -(cVar20 == auVar40[1]);
    auVar41[10] = -(cVar21 == auVar40[2]);
    auVar41[0xb] = -(cVar22 == auVar40[3]);
    auVar41[0xc] = -(cVar23 == auVar40[4]);
    auVar41[0xd] = -(cVar24 == auVar40[5]);
    auVar41[0xe] = -(cVar25 == auVar40[6]);
    auVar41[0xf] = -(cVar26 == auVar40[7]);
    uVar33 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
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
    uVar38 = (uint)uVar33;
    if (uVar33 != 0) {
      do {
        uVar5 = 0;
        for (uVar6 = uVar38; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar37 = (uVar5 + uVar35 & uVar3) * -0x50;
        cVar32 = FUN_1801ae3a0(lVar2 + lVar37 + -0x50,param_3);
        if (cVar32 != '\0') {
          lVar37 = lVar37 + lVar2;
          cVar32 = FUN_1801acfa0(lVar37 + -0x40,param_3 + 0x10);
          if (cVar32 != '\0') {
            param_1[1] = lVar37;
            param_1[2] = param_2;
            *(undefined1 *)param_1 = 3;
            if (1 < *param_3) {
              plVar4 = *(longlong **)(param_3 + 8);
              (**(code **)(*plVar4 + 0x20))(plVar4[3],plVar4[1],plVar4[2]);
              thunk_FUN_1801d3330(plVar4,0x20,8);
            }
            (**(code **)(*(longlong *)(param_3 + 0x10) + 0x20))
                      (*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x18),
                       *(undefined8 *)(param_3 + 0x20));
            return param_1;
          }
        }
        uVar33 = (ushort)(uVar38 - 1) & (ushort)uVar38;
        uVar38 = CONCAT22((short)(uVar38 - 1 >> 0x10),uVar33);
      } while (uVar33 != 0);
    }
    auVar42[0] = -(cVar11 == (char)iVar7);
    auVar42[1] = -(cVar12 == (char)((uint)iVar7 >> 8));
    auVar42[2] = -(cVar13 == (char)((uint)iVar7 >> 0x10));
    auVar42[3] = -(cVar14 == (char)((uint)iVar7 >> 0x18));
    auVar42[4] = -(cVar15 == (char)iVar8);
    auVar42[5] = -(cVar16 == (char)((uint)iVar8 >> 8));
    auVar42[6] = -(cVar17 == (char)((uint)iVar8 >> 0x10));
    auVar42[7] = -(cVar18 == (char)((uint)iVar8 >> 0x18));
    auVar42[8] = -(cVar19 == (char)iVar9);
    auVar42[9] = -(cVar20 == (char)((uint)iVar9 >> 8));
    auVar42[10] = -(cVar21 == (char)((uint)iVar9 >> 0x10));
    auVar42[0xb] = -(cVar22 == (char)((uint)iVar9 >> 0x18));
    auVar42[0xc] = -(cVar23 == (char)iVar10);
    auVar42[0xd] = -(cVar24 == (char)((uint)iVar10 >> 8));
    auVar42[0xe] = -(cVar25 == (char)((uint)iVar10 >> 0x10));
    auVar42[0xf] = -(cVar26 == (char)((uint)iVar10 >> 0x18));
    if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar42 >> 0x17,0) & 1) != 0) || (SUB161(auVar42 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar42 >> 0x27,0) & 1) != 0) || (SUB161(auVar42 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar42 >> 0x37,0) & 1) != 0) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar42 >> 0x47,0) & 1) != 0) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') break;
    uVar35 = uVar35 + lVar36 + 0x10;
    lVar36 = lVar36 + 0x10;
  }
  if (param_2[2] == 0) {
    FUN_1801f8150(param_2,1,param_2 + 4,1);
  }
  uVar27 = *(undefined8 *)param_3;
  uVar28 = *(undefined8 *)(param_3 + 8);
  uVar29 = *(undefined8 *)(param_3 + 0x10);
  uVar30 = *(undefined8 *)(param_3 + 0x18);
  uVar31 = *(undefined8 *)(param_3 + 0x28);
  param_1[4] = *(undefined8 *)(param_3 + 0x20);
  param_1[5] = uVar31;
  param_1[2] = uVar29;
  param_1[3] = uVar30;
  *param_1 = uVar27;
  param_1[1] = uVar28;
  param_1[6] = param_2;
  param_1[7] = uVar34;
  return param_1;
}


