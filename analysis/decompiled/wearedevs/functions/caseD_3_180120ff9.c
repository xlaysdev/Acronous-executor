/* caseD_3 @ 180120ff9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void switchD_180120fb1::caseD_3(void)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong unaff_R14;
  undefined8 uVar18;
  char *pcVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 in_XMM1_Ba;
  undefined1 in_XMM1_Bb;
  undefined1 in_XMM1_Bc;
  undefined1 in_XMM1_Bd;
  undefined1 in_XMM1_Be;
  undefined1 in_XMM1_Bf;
  undefined1 in_XMM1_Bg;
  undefined1 in_XMM1_Bh;
  undefined1 in_XMM1_Bi;
  undefined1 in_XMM1_Bj;
  undefined1 in_XMM1_Bk;
  undefined1 in_XMM1_Bl;
  undefined1 in_XMM1_Bm;
  undefined1 in_XMM1_Bn;
  undefined1 in_XMM1_Bo;
  undefined1 in_XMM1_Bp;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  lVar17 = unaff_RBX[2];
  if ((ulonglong)(*unaff_RBX - lVar17) < 3) {
    FUN_1801f6a80();
    lVar17 = unaff_RBX[2];
  }
  memcpy((void *)(unaff_RBX[1] + lVar17),&DAT_180241856,3);
  lVar17 = lVar17 + 3;
  unaff_RBX[2] = lVar17;
  if (*unaff_RBX == lVar17) {
    FUN_1801f6a80();
    lVar17 = unaff_RBX[2];
  }
  *(undefined1 *)(unaff_RBX[1] + lVar17) = 0x20;
  unaff_RBX[2] = lVar17 + 1;
  *(longlong **)(unaff_RBP + 0x110) = unaff_RBX;
  *(longlong *)(unaff_RBP + 0x130) = unaff_RDI + 0x60;
  *(code **)(unaff_RBP + 0x138) = FUN_1801ac560;
  uVar20 = FUN_1801ef150(unaff_RBP + 0x110,&DAT_180241740,&DAT_180241879);
  cVar1 = *(char *)(unaff_RDI + 0xd8);
  if (cVar1 == '\x01') {
    lVar17 = unaff_RBX[2];
    uVar18 = 0x302e312f50545448;
    if (7 < (ulonglong)(*unaff_RBX - lVar17)) goto LAB_180121196;
    uVar20 = FUN_1801f6a80(uVar20,lVar17,8,1,1);
  }
  else if (cVar1 == '\x02') {
    lVar17 = unaff_RBX[2];
    uVar18 = 0x312e312f50545448;
    if (7 < (ulonglong)(*unaff_RBX - lVar17)) goto LAB_180121196;
    uVar20 = FUN_1801f6a80(uVar20,lVar17,8,1,1);
  }
  else {
    if (cVar1 != '\x03') {
      *(char *)(unaff_RBP + 0x110) = cVar1;
      *(longlong *)(unaff_RBP + 0x130) = unaff_RBP + 0x110;
      *(code **)(unaff_RBP + 0x138) = FUN_1801ae140;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_18024187d,unaff_RBP + 0x130,
                    &PTR_s_C__Users_burne__cargo_registry_s_1802418a0);
    }
    lVar17 = unaff_RBX[2];
    uVar18 = 0x312e312f50545448;
    if (7 < (ulonglong)(*unaff_RBX - lVar17)) goto LAB_180121196;
    uVar20 = FUN_1801f6a80(uVar20,lVar17,8,1,1);
  }
  lVar17 = unaff_RBX[2];
LAB_180121196:
  *(undefined8 *)(unaff_RBX[1] + lVar17) = uVar18;
  lVar17 = lVar17 + 8;
  unaff_RBX[2] = lVar17;
  if ((ulonglong)(*unaff_RBX - lVar17) < 2) {
    FUN_1801f6a80(uVar20,lVar17,2,1,1);
    lVar17 = unaff_RBX[2];
  }
  *(undefined2 *)(unaff_RBX[1] + lVar17) = 0xa0d;
  unaff_RBX[2] = lVar17 + 2;
  plVar2 = *(longlong **)(unaff_RDI + 0xd0);
  if ((plVar2 != (longlong *)0x0) && (plVar2[3] != 0)) {
    lVar11 = *plVar2;
    lVar17 = lVar11 + -0x20;
    uVar12 = 0x4aef2b61a7c3b130;
    lVar13 = 0;
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar8 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar9 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar12 = uVar12 & plVar2[1];
      auVar21 = *(undefined1 (*) [16])(lVar11 + uVar12);
      auVar23[0] = -(auVar21[0] == DAT_180240ec0);
      auVar23[1] = -(auVar21[1] == DAT_180240ec0._1_1_);
      auVar23[2] = -(auVar21[2] == DAT_180240ec0._2_1_);
      auVar23[3] = -(auVar21[3] == DAT_180240ec0._3_1_);
      auVar23[4] = -(auVar21[4] == DAT_180240ec0._4_1_);
      auVar23[5] = -(auVar21[5] == DAT_180240ec0._5_1_);
      auVar23[6] = -(auVar21[6] == DAT_180240ec0._6_1_);
      auVar23[7] = -(auVar21[7] == DAT_180240ec0._7_1_);
      auVar23[8] = -(auVar21[8] == DAT_180240ec0._8_1_);
      auVar23[9] = -(auVar21[9] == DAT_180240ec0._9_1_);
      auVar23[10] = -(auVar21[10] == DAT_180240ec0._10_1_);
      auVar23[0xb] = -(auVar21[0xb] == DAT_180240ec0._11_1_);
      auVar23[0xc] = -(auVar21[0xc] == DAT_180240ec0._12_1_);
      auVar23[0xd] = -(auVar21[0xd] == DAT_180240ec0._13_1_);
      auVar23[0xe] = -(auVar21[0xe] == DAT_180240ec0._14_1_);
      auVar23[0xf] = -(auVar21[0xf] == DAT_180240ec0._15_1_);
      uVar15 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar16 = uVar4 + uVar12 & plVar2[1];
        pcVar19 = (char *)(lVar17 + uVar16 * -0x20);
        auVar24[0] = -(*pcVar19 == DAT_180240ed0);
        auVar24[1] = -(pcVar19[1] == DAT_180240ed0._1_1_);
        auVar24[2] = -(pcVar19[2] == DAT_180240ed0._2_1_);
        auVar24[3] = -(pcVar19[3] == DAT_180240ed0._3_1_);
        auVar24[4] = -(pcVar19[4] == DAT_180240ed0._4_1_);
        auVar24[5] = -(pcVar19[5] == DAT_180240ed0._5_1_);
        auVar24[6] = -(pcVar19[6] == DAT_180240ed0._6_1_);
        auVar24[7] = -(pcVar19[7] == DAT_180240ed0._7_1_);
        auVar24[8] = -(pcVar19[8] == DAT_180240ed0._8_1_);
        auVar24[9] = -(pcVar19[9] == DAT_180240ed0._9_1_);
        auVar24[10] = -(pcVar19[10] == DAT_180240ed0._10_1_);
        auVar24[0xb] = -(pcVar19[0xb] == DAT_180240ed0._11_1_);
        auVar24[0xc] = -(pcVar19[0xc] == DAT_180240ed0._12_1_);
        auVar24[0xd] = -(pcVar19[0xd] == DAT_180240ed0._13_1_);
        auVar24[0xe] = -(pcVar19[0xe] == DAT_180240ed0._14_1_);
        auVar24[0xf] = -(pcVar19[0xf] == DAT_180240ed0._15_1_);
        if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
          lVar13 = uVar16 * -0x20;
          lVar11 = (**(code **)(*(longlong *)(lVar11 + -8 + lVar13) + 0x28))
                             (*(undefined8 *)(lVar11 + -0x10 + lVar13));
          (**(code **)(lVar17 + 0x18))(unaff_RBP + 0x130,lVar11);
          auVar21[0] = -(*(char *)(unaff_RBP + 0x130) == -0x36);
          auVar21[1] = -(*(char *)(unaff_RBP + 0x131) == ':');
          auVar21[2] = -(*(char *)(unaff_RBP + 0x132) == -0x4d);
          auVar21[3] = -(*(char *)(unaff_RBP + 0x133) == ')');
          auVar21[4] = -(*(char *)(unaff_RBP + 0x134) == '\x7f');
          auVar21[5] = -(*(char *)(unaff_RBP + 0x135) == 'Y');
          auVar21[6] = -(*(char *)(unaff_RBP + 0x136) == -0x66);
          auVar21[7] = -(*(char *)(unaff_RBP + 0x137) == -0x29);
          auVar21[8] = -(*(char *)(unaff_RBP + 0x138) == '0');
          auVar21[9] = -(*(char *)(unaff_RBP + 0x139) == -0x4f);
          auVar21[10] = -(*(char *)(unaff_RBP + 0x13a) == -0x3d);
          auVar21[0xb] = -(*(char *)(unaff_RBP + 0x13b) == -0x59);
          auVar21[0xc] = -(*(char *)(unaff_RBP + 0x13c) == 'a');
          auVar21[0xd] = -(*(char *)(unaff_RBP + 0x13d) == '+');
          auVar21[0xe] = -(*(char *)(unaff_RBP + 0x13e) == -0x11);
          auVar21[0xf] = -(*(char *)(unaff_RBP + 0x13f) == 'J');
          if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
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
                      (ushort)(auVar21[0xf] >> 7) << 0xf) != 0xffff) goto LAB_1801212e1;
          cVar1 = *(char *)(unaff_R14 + 0x20);
          if (lVar11 == 0) goto joined_r0x0001801212d2;
          uVar20 = FUN_1801f9400();
          goto LAB_1801212f3;
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar22[0] = -(auVar21[0] == (char)iVar6);
      auVar22[1] = -(auVar21[1] == (char)((uint)iVar6 >> 8));
      auVar22[2] = -(auVar21[2] == (char)((uint)iVar6 >> 0x10));
      auVar22[3] = -(auVar21[3] == (char)((uint)iVar6 >> 0x18));
      auVar22[4] = -(auVar21[4] == (char)iVar7);
      auVar22[5] = -(auVar21[5] == (char)((uint)iVar7 >> 8));
      auVar22[6] = -(auVar21[6] == (char)((uint)iVar7 >> 0x10));
      auVar22[7] = -(auVar21[7] == (char)((uint)iVar7 >> 0x18));
      auVar22[8] = -(auVar21[8] == (char)iVar8);
      auVar22[9] = -(auVar21[9] == (char)((uint)iVar8 >> 8));
      auVar22[10] = -(auVar21[10] == (char)((uint)iVar8 >> 0x10));
      auVar22[0xb] = -(auVar21[0xb] == (char)((uint)iVar8 >> 0x18));
      auVar22[0xc] = -(auVar21[0xc] == (char)iVar9);
      auVar22[0xd] = -(auVar21[0xd] == (char)((uint)iVar9 >> 8));
      auVar22[0xe] = -(auVar21[0xe] == (char)((uint)iVar9 >> 0x10));
      auVar22[0xf] = -(auVar21[0xf] == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar12 = uVar12 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
LAB_1801212e1:
  cVar1 = *(char *)(unaff_R14 + 0x20);
joined_r0x0001801212d2:
  if (cVar1 == '\0') {
                    /* WARNING: Read-only address (ram,0x000180240ec0) is written */
                    /* WARNING: Read-only address (ram,0x000180240ed0) is written */
    uVar20 = FUN_18011ba20();
  }
  else {
                    /* WARNING: Read-only address (ram,0x000180240ec0) is written */
                    /* WARNING: Read-only address (ram,0x000180240ed0) is written */
    uVar20 = FUN_18011c400();
  }
LAB_1801212f3:
  lVar17 = unaff_RBX[2];
  if ((ulonglong)(*unaff_RBX - lVar17) < 2) {
    FUN_1801f6a80(uVar20,lVar17,2,1,1);
    lVar17 = unaff_RBX[2];
  }
  *(undefined2 *)(unaff_RBX[1] + lVar17) = 0xa0d;
  unaff_RBX[2] = lVar17 + 2;
  FUN_18012a720();
  uVar20 = *(undefined8 *)(unaff_RBP + 0x30);
  uVar18 = *(undefined8 *)(unaff_RBP + 0x38);
  uVar10 = *(undefined8 *)(unaff_RBP + 0x48);
  puVar3 = *(undefined8 **)(unaff_RBP + -0x18);
  puVar3[2] = *(undefined8 *)(unaff_RBP + 0x40);
  puVar3[3] = uVar10;
  *puVar3 = uVar20;
  puVar3[1] = uVar18;
  return;
}


