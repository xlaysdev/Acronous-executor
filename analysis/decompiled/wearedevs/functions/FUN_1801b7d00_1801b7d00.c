/* FUN_1801b7d00 @ 1801b7d00 */

ulonglong FUN_1801b7d00(longlong *param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  longlong lVar2;
  size_t _Size;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  char cVar10;
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
  ushort uVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  longlong lVar28;
  void *unaff_RBX;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
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
  undefined1 auVar35 [16];
  undefined1 local_c0 [24];
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  if (param_1[3] != 0) {
    local_88 = param_3;
    uVar27 = FUN_1801bb6b0(param_1 + 4,param_2);
    lVar2 = *param_1;
    uVar29 = param_1[1];
    bVar32 = (byte)(uVar27 >> 0x39);
    auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
    auVar33 = pshuflw(auVar33,auVar33,0);
    lVar28 = lVar2 + -0x20;
    unaff_RBX = *(void **)(param_2 + 8);
    _Size = *(size_t *)(param_2 + 0x10);
    lVar30 = 0;
    iVar26 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                              CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                    CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar5 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                   CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                   CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    while( true ) {
      uVar27 = uVar27 & uVar29;
      pcVar1 = (char *)(lVar2 + uVar27);
      cVar8 = *pcVar1;
      cVar9 = pcVar1[1];
      cVar10 = pcVar1[2];
      cVar11 = pcVar1[3];
      cVar12 = pcVar1[4];
      cVar13 = pcVar1[5];
      cVar14 = pcVar1[6];
      cVar15 = pcVar1[7];
      cVar16 = pcVar1[8];
      cVar17 = pcVar1[9];
      cVar18 = pcVar1[10];
      cVar19 = pcVar1[0xb];
      cVar20 = pcVar1[0xc];
      cVar21 = pcVar1[0xd];
      cVar22 = pcVar1[0xe];
      cVar23 = pcVar1[0xf];
      auVar34[0] = -(cVar8 == auVar33[0]);
      auVar34[1] = -(cVar9 == auVar33[1]);
      auVar34[2] = -(cVar10 == auVar33[2]);
      auVar34[3] = -(cVar11 == auVar33[3]);
      auVar34[4] = -(cVar12 == auVar33[4]);
      auVar34[5] = -(cVar13 == auVar33[5]);
      auVar34[6] = -(cVar14 == auVar33[6]);
      auVar34[7] = -(cVar15 == auVar33[7]);
      auVar34[8] = -(cVar16 == auVar33[0]);
      auVar34[9] = -(cVar17 == auVar33[1]);
      auVar34[10] = -(cVar18 == auVar33[2]);
      auVar34[0xb] = -(cVar19 == auVar33[3]);
      auVar34[0xc] = -(cVar20 == auVar33[4]);
      auVar34[0xd] = -(cVar21 == auVar33[5]);
      auVar34[0xe] = -(cVar22 == auVar33[6]);
      auVar34[0xf] = -(cVar23 == auVar33[7]);
      uVar24 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
      uVar31 = (uint)uVar24;
      if (uVar24 != 0) {
        local_a8 = uVar27;
        local_a0 = lVar28;
        local_98 = lVar30;
        do {
          uVar3 = 0;
          for (uVar4 = uVar31; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          lVar28 = local_a0 + (uVar3 + local_a8 & uVar29) * -0x20;
          if (_Size == *(size_t *)(lVar28 + 0x10)) {
            iVar25 = memcmp(unaff_RBX,*(void **)(lVar28 + 8),_Size);
            if (iVar25 == 0) {
              uVar29 = 0;
              goto LAB_1801b7e6a;
            }
          }
          uVar24 = (ushort)(uVar31 - 1) & (ushort)uVar31;
          uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar24);
          uVar27 = local_a8;
          lVar28 = local_a0;
          lVar30 = local_98;
        } while (uVar24 != 0);
      }
      auVar35[0] = -(cVar8 == (char)iVar26);
      auVar35[1] = -(cVar9 == (char)((uint)iVar26 >> 8));
      auVar35[2] = -(cVar10 == (char)((uint)iVar26 >> 0x10));
      auVar35[3] = -(cVar11 == (char)((uint)iVar26 >> 0x18));
      auVar35[4] = -(cVar12 == (char)iVar5);
      auVar35[5] = -(cVar13 == (char)((uint)iVar5 >> 8));
      auVar35[6] = -(cVar14 == (char)((uint)iVar5 >> 0x10));
      auVar35[7] = -(cVar15 == (char)((uint)iVar5 >> 0x18));
      auVar35[8] = -(cVar16 == (char)iVar6);
      auVar35[9] = -(cVar17 == (char)((uint)iVar6 >> 8));
      auVar35[10] = -(cVar18 == (char)((uint)iVar6 >> 0x10));
      auVar35[0xb] = -(cVar19 == (char)((uint)iVar6 >> 0x18));
      auVar35[0xc] = -(cVar20 == (char)iVar7);
      auVar35[0xd] = -(cVar21 == (char)((uint)iVar7 >> 8));
      auVar35[0xe] = -(cVar22 == (char)((uint)iVar7 >> 0x10));
      auVar35[0xf] = -(cVar23 == (char)((uint)iVar7 >> 0x18));
      param_3 = local_88;
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') break;
      uVar27 = uVar27 + lVar30 + 0x10;
      lVar30 = lVar30 + 0x10;
    }
  }
  local_90 = 0;
  iVar26 = PdhAddEnglishCounterW(param_1[6],param_3[1],0,&local_90);
  uVar29 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar26 == 0);
  if (iVar26 == 0) {
    local_88 = param_3;
    FUN_1801ed500(local_c0,param_2);
    FUN_1801bb390(param_1,local_c0,local_90);
LAB_1801b7e6a:
    param_3 = local_88;
  }
  if (*param_3 != 0) {
    thunk_FUN_1801d3330(param_3[1],*param_3 * 2,2);
  }
  return uVar29 & 0xffffffff;
}


