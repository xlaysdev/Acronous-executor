/* FUN_1800a1140 @ 1800a1140 */

undefined8 * FUN_1800a1140(longlong *param_1,void *param_2,size_t param_3)

{
  char *pcVar1;
  longlong lVar2;
  void *_Src;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
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
  char cVar24;
  ushort uVar25;
  int iVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  undefined1 *_Dst;
  undefined8 *puVar29;
  longlong lVar30;
  undefined8 uVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
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
  undefined1 auVar38 [16];
  
  lVar30 = param_1[2];
  if (*(longlong *)(lVar30 + 0x28) == 0) {
LAB_1800a126e:
    puVar28 = (undefined8 *)
              (**(code **)(param_1[1] + 0x18))
                        (*param_1 + (*(longlong *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) +
                         0x10,param_2,param_3);
    return puVar28;
  }
  uVar27 = FUN_1800c95b0(lVar30 + 0x30,param_2,param_3);
  lVar2 = *(longlong *)(lVar30 + 0x10);
  uVar33 = *(ulonglong *)(lVar30 + 0x18);
  bVar35 = (byte)(uVar27 >> 0x39);
  auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
  auVar36 = pshuflw(auVar36,auVar36,0);
  lVar30 = 0;
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
  do {
    uVar27 = uVar27 & uVar33;
    pcVar1 = (char *)(lVar2 + uVar27);
    cVar9 = *pcVar1;
    cVar10 = pcVar1[1];
    cVar11 = pcVar1[2];
    cVar12 = pcVar1[3];
    cVar13 = pcVar1[4];
    cVar14 = pcVar1[5];
    cVar15 = pcVar1[6];
    cVar16 = pcVar1[7];
    cVar17 = pcVar1[8];
    cVar18 = pcVar1[9];
    cVar19 = pcVar1[10];
    cVar20 = pcVar1[0xb];
    cVar21 = pcVar1[0xc];
    cVar22 = pcVar1[0xd];
    cVar23 = pcVar1[0xe];
    cVar24 = pcVar1[0xf];
    auVar37[0] = -(cVar9 == auVar36[0]);
    auVar37[1] = -(cVar10 == auVar36[1]);
    auVar37[2] = -(cVar11 == auVar36[2]);
    auVar37[3] = -(cVar12 == auVar36[3]);
    auVar37[4] = -(cVar13 == auVar36[4]);
    auVar37[5] = -(cVar14 == auVar36[5]);
    auVar37[6] = -(cVar15 == auVar36[6]);
    auVar37[7] = -(cVar16 == auVar36[7]);
    auVar37[8] = -(cVar17 == auVar36[0]);
    auVar37[9] = -(cVar18 == auVar36[1]);
    auVar37[10] = -(cVar19 == auVar36[2]);
    auVar37[0xb] = -(cVar20 == auVar36[3]);
    auVar37[0xc] = -(cVar21 == auVar36[4]);
    auVar37[0xd] = -(cVar22 == auVar36[5]);
    auVar37[0xe] = -(cVar23 == auVar36[6]);
    auVar37[0xf] = -(cVar24 == auVar36[7]);
    uVar25 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
    uVar32 = (uint)uVar25;
    if (uVar25 != 0) {
      do {
        uVar3 = 0;
        for (uVar4 = uVar32; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar34 = (uVar3 + uVar27 & uVar33) * -0x30;
        if ((param_3 == *(size_t *)(lVar2 + -0x20 + lVar34)) &&
           (iVar26 = memcmp(param_2,*(void **)(lVar2 + lVar34 + -0x28),param_3), iVar26 == 0)) {
          uVar33 = *(ulonglong *)(lVar2 + -8 + lVar34);
          uVar27 = uVar33 * 0x20;
          if (0x7ffffffffffffffc < uVar27 || uVar33 >> 0x3b != 0) {
            uVar31 = 0;
LAB_1800a12ca:
                    /* WARNING: Subroutine does not return */
            FUN_18020171e(uVar31,uVar27);
          }
          _Src = *(void **)(lVar2 + -0x10 + lVar34);
          if (uVar27 == 0) {
            _Dst = &DAT_00000004;
            uVar33 = 0;
          }
          else {
            FUN_180027490();
            uVar31 = 4;
            _Dst = (undefined1 *)thunk_FUN_1801d32d0(uVar27,4);
            if (_Dst == (undefined1 *)0x0) goto LAB_1800a12ca;
          }
          memcpy(_Dst,_Src,uVar27);
          FUN_180027490();
          puVar28 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
          if (puVar28 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201705(8,0x20);
          }
          *puVar28 = _Dst;
          puVar28[1] = _Dst;
          puVar28[2] = uVar33;
          puVar28[3] = _Dst + uVar27;
          FUN_180027490();
          puVar29 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
          if (puVar29 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201705(8,0x18);
          }
          puVar29[2] = &PTR_LAB_180210080;
          *puVar29 = 0;
          puVar29[1] = puVar28;
          if (param_3 == 0) {
            return puVar29;
          }
          thunk_FUN_1801d3330(param_2,param_3,1);
          return puVar29;
        }
        uVar25 = (ushort)(uVar32 - 1) & (ushort)uVar32;
        uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar25);
      } while (uVar25 != 0);
    }
    auVar38[0] = -(cVar9 == (char)iVar5);
    auVar38[1] = -(cVar10 == (char)((uint)iVar5 >> 8));
    auVar38[2] = -(cVar11 == (char)((uint)iVar5 >> 0x10));
    auVar38[3] = -(cVar12 == (char)((uint)iVar5 >> 0x18));
    auVar38[4] = -(cVar13 == (char)iVar6);
    auVar38[5] = -(cVar14 == (char)((uint)iVar6 >> 8));
    auVar38[6] = -(cVar15 == (char)((uint)iVar6 >> 0x10));
    auVar38[7] = -(cVar16 == (char)((uint)iVar6 >> 0x18));
    auVar38[8] = -(cVar17 == (char)iVar7);
    auVar38[9] = -(cVar18 == (char)((uint)iVar7 >> 8));
    auVar38[10] = -(cVar19 == (char)((uint)iVar7 >> 0x10));
    auVar38[0xb] = -(cVar20 == (char)((uint)iVar7 >> 0x18));
    auVar38[0xc] = -(cVar21 == (char)iVar8);
    auVar38[0xd] = -(cVar22 == (char)((uint)iVar8 >> 8));
    auVar38[0xe] = -(cVar23 == (char)((uint)iVar8 >> 0x10));
    auVar38[0xf] = -(cVar24 == (char)((uint)iVar8 >> 0x18));
    if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar38 >> 0x17,0) & 1) != 0) || (SUB161(auVar38 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar38 >> 0x27,0) & 1) != 0) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar38 >> 0x37,0) & 1) != 0) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') goto LAB_1800a126e;
    uVar27 = uVar27 + lVar30 + 0x10;
    lVar30 = lVar30 + 0x10;
  } while( true );
}


