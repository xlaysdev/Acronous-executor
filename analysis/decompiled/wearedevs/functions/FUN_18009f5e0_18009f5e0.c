/* FUN_18009f5e0 @ 18009f5e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18009f5e0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  ushort uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char local_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  char cStack_1c;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && (param_1[3] != 0)) {
    lVar4 = *param_1;
    uVar8 = 0xf5b5e3849784a274;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & param_1[1];
      auVar11 = *(undefined1 (*) [16])(lVar4 + uVar8);
      auVar13[0] = -(auVar11[0] == DAT_180208b50);
      auVar13[1] = -(auVar11[1] == DAT_180208b50._1_1_);
      auVar13[2] = -(auVar11[2] == DAT_180208b50._2_1_);
      auVar13[3] = -(auVar11[3] == DAT_180208b50._3_1_);
      auVar13[4] = -(auVar11[4] == DAT_180208b50._4_1_);
      auVar13[5] = -(auVar11[5] == DAT_180208b50._5_1_);
      auVar13[6] = -(auVar11[6] == DAT_180208b50._6_1_);
      auVar13[7] = -(auVar11[7] == DAT_180208b50._7_1_);
      auVar13[8] = -(auVar11[8] == DAT_180208b50._8_1_);
      auVar13[9] = -(auVar11[9] == DAT_180208b50._9_1_);
      auVar13[10] = -(auVar11[10] == DAT_180208b50._10_1_);
      auVar13[0xb] = -(auVar11[0xb] == DAT_180208b50._11_1_);
      auVar13[0xc] = -(auVar11[0xc] == DAT_180208b50._12_1_);
      auVar13[0xd] = -(auVar11[0xd] == DAT_180208b50._13_1_);
      auVar13[0xe] = -(auVar11[0xe] == DAT_180208b50._14_1_);
      auVar13[0xf] = -(auVar11[0xf] == DAT_180208b50._15_1_);
      uVar6 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar6;
      while (uVar6 != 0) {
        uVar1 = 0;
        for (uVar2 = uVar10; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
          uVar1 = uVar1 + 1;
        }
        uVar7 = uVar1 + uVar8 & param_1[1];
        pcVar5 = (char *)(lVar4 + -0x20 + uVar7 * -0x20);
        auVar14[0] = -(*pcVar5 == DAT_180208b60);
        auVar14[1] = -(pcVar5[1] == DAT_180208b60._1_1_);
        auVar14[2] = -(pcVar5[2] == DAT_180208b60._2_1_);
        auVar14[3] = -(pcVar5[3] == DAT_180208b60._3_1_);
        auVar14[4] = -(pcVar5[4] == DAT_180208b60._4_1_);
        auVar14[5] = -(pcVar5[5] == DAT_180208b60._5_1_);
        auVar14[6] = -(pcVar5[6] == DAT_180208b60._6_1_);
        auVar14[7] = -(pcVar5[7] == DAT_180208b60._7_1_);
        auVar14[8] = -(pcVar5[8] == DAT_180208b60._8_1_);
        auVar14[9] = -(pcVar5[9] == DAT_180208b60._9_1_);
        auVar14[10] = -(pcVar5[10] == DAT_180208b60._10_1_);
        auVar14[0xb] = -(pcVar5[0xb] == DAT_180208b60._11_1_);
        auVar14[0xc] = -(pcVar5[0xc] == DAT_180208b60._12_1_);
        auVar14[0xd] = -(pcVar5[0xd] == DAT_180208b60._13_1_);
        auVar14[0xe] = -(pcVar5[0xe] == DAT_180208b60._14_1_);
        auVar14[0xf] = -(pcVar5[0xf] == DAT_180208b60._15_1_);
        if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar14[0xf] >> 7) << 0xf) == 0xffff) {
          lVar9 = uVar7 * -0x20;
          uVar3 = (**(code **)(*(longlong *)(lVar4 + -8 + lVar9) + 0x28))
                            (*(undefined8 *)(lVar4 + -0x10 + lVar9));
          (**(code **)(lVar4 + 0x18))(&local_28,uVar3);
          auVar11[0] = -(local_28 == 't');
          auVar11[1] = -(cStack_27 == '\t');
          auVar11[2] = -(cStack_26 == -0x17);
          auVar11[3] = -(cStack_25 == 'E');
          auVar11[4] = -(cStack_24 == 'q');
          auVar11[5] = -(cStack_23 == -0x18);
          auVar11[6] = -(cStack_22 == '\x7f');
          auVar11[7] = -(cStack_21 == -0x35);
          auVar11[8] = -(cStack_20 == 't');
          auVar11[9] = -(cStack_1f == -0x5e);
          auVar11[10] = -(cStack_1e == -0x7c);
          auVar11[0xb] = -(cStack_1d == -0x69);
          auVar11[0xc] = -(cStack_1c == -0x7c);
          auVar11[0xd] = -(cStack_1b == -0x1d);
          auVar11[0xe] = -(cStack_1a == -0x4b);
          auVar11[0xf] = -(cStack_19 == -0xb);
          if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar11[0xf] >> 7) << 0xf) == 0xffff) {
            return uVar3;
          }
          return 0;
        }
        uVar6 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar6);
      }
      auVar12[0] = -(auVar11[0] == -1);
      auVar12[1] = -(auVar11[1] == -1);
      auVar12[2] = -(auVar11[2] == -1);
      auVar12[3] = -(auVar11[3] == -1);
      auVar12[4] = -(auVar11[4] == -1);
      auVar12[5] = -(auVar11[5] == -1);
      auVar12[6] = -(auVar11[6] == -1);
      auVar12[7] = -(auVar11[7] == -1);
      auVar12[8] = -(auVar11[8] == -1);
      auVar12[9] = -(auVar11[9] == -1);
      auVar12[10] = -(auVar11[10] == -1);
      auVar12[0xb] = -(auVar11[0xb] == -1);
      auVar12[0xc] = -(auVar11[0xc] == -1);
      auVar12[0xd] = -(auVar11[0xd] == -1);
      auVar12[0xe] = -(auVar11[0xe] == -1);
      auVar12[0xf] = -(auVar11[0xf] == -1);
      if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar12 >> 0x17,0) & 1) != 0) || (SUB161(auVar12 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar12 >> 0x27,0) & 1) != 0) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar12 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar12 >> 0x3f,0) & 1) != 0) || (SUB161(auVar12 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar12 >> 0x4f,0) & 1) != 0) || (SUB161(auVar12 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || (SUB161(auVar12 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar12 >> 0x6f,0) & 1) != 0) || (SUB161(auVar12 >> 0x77,0) & 1) != 0) ||
          auVar12[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
                    /* WARNING: Read-only address (ram,0x000180208b50) is written */
                    /* WARNING: Read-only address (ram,0x000180208b60) is written */
  return 0;
}


