/* FUN_1801d1890 @ 1801d1890 */

bool FUN_1801d1890(char param_1,char *param_2,char *param_3)

{
  ushort uVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if (param_3 <= param_2) {
    return false;
  }
  if ((ulonglong)((longlong)param_3 - (longlong)param_2) < 0x10) {
    while (*param_2 != param_1) {
      param_2 = param_2 + 1;
      if (param_2 == param_3) {
        return false;
      }
    }
  }
  else {
    auVar6 = pshuflw(ZEXT216(CONCAT11(param_1,param_1)),ZEXT216(CONCAT11(param_1,param_1)),0);
    cVar5 = auVar6[0];
    auVar19[0] = -(*param_2 == cVar5);
    cVar8 = auVar6[1];
    auVar19[1] = -(param_2[1] == cVar8);
    cVar9 = auVar6[2];
    auVar19[2] = -(param_2[2] == cVar9);
    cVar10 = auVar6[3];
    auVar19[3] = -(param_2[3] == cVar10);
    cVar11 = auVar6[4];
    auVar19[4] = -(param_2[4] == cVar11);
    cVar12 = auVar6[5];
    auVar19[5] = -(param_2[5] == cVar12);
    cVar13 = auVar6[6];
    auVar19[6] = -(param_2[6] == cVar13);
    cVar14 = auVar6[7];
    auVar19[7] = -(param_2[7] == cVar14);
    auVar19[8] = -(param_2[8] == cVar5);
    auVar19[9] = -(param_2[9] == cVar8);
    auVar19[10] = -(param_2[10] == cVar9);
    auVar19[0xb] = -(param_2[0xb] == cVar10);
    auVar19[0xc] = -(param_2[0xc] == cVar11);
    auVar19[0xd] = -(param_2[0xd] == cVar12);
    auVar19[0xe] = -(param_2[0xe] == cVar13);
    auVar19[0xf] = -(param_2[0xf] == cVar14);
    uVar1 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
    uVar3 = (uint)uVar1;
    if (uVar1 == 0) {
      pcVar4 = (char *)(((ulonglong)param_2 & 0xfffffffffffffff0) + 0x10);
      if (pcVar4 <= param_3 + -0x40 && 0x3f < (ulonglong)((longlong)param_3 - (longlong)param_2)) {
        pcVar2 = param_2 + (0x20 - (ulonglong)((uint)param_2 & 0xf));
        do {
          pcVar4 = pcVar2;
          auVar18[0] = -(pcVar4[-0x10] == cVar5);
          auVar18[1] = -(pcVar4[-0xf] == cVar8);
          auVar18[2] = -(pcVar4[-0xe] == cVar9);
          auVar18[3] = -(pcVar4[-0xd] == cVar10);
          auVar18[4] = -(pcVar4[-0xc] == cVar11);
          auVar18[5] = -(pcVar4[-0xb] == cVar12);
          auVar18[6] = -(pcVar4[-10] == cVar13);
          auVar18[7] = -(pcVar4[-9] == cVar14);
          auVar18[8] = -(pcVar4[-8] == cVar5);
          auVar18[9] = -(pcVar4[-7] == cVar8);
          auVar18[10] = -(pcVar4[-6] == cVar9);
          auVar18[0xb] = -(pcVar4[-5] == cVar10);
          auVar18[0xc] = -(pcVar4[-4] == cVar11);
          auVar18[0xd] = -(pcVar4[-3] == cVar12);
          auVar18[0xe] = -(pcVar4[-2] == cVar13);
          auVar18[0xf] = -(pcVar4[-1] == cVar14);
          auVar17[0] = -(*pcVar4 == cVar5);
          auVar17[1] = -(pcVar4[1] == cVar8);
          auVar17[2] = -(pcVar4[2] == cVar9);
          auVar17[3] = -(pcVar4[3] == cVar10);
          auVar17[4] = -(pcVar4[4] == cVar11);
          auVar17[5] = -(pcVar4[5] == cVar12);
          auVar17[6] = -(pcVar4[6] == cVar13);
          auVar17[7] = -(pcVar4[7] == cVar14);
          auVar17[8] = -(pcVar4[8] == cVar5);
          auVar17[9] = -(pcVar4[9] == cVar8);
          auVar17[10] = -(pcVar4[10] == cVar9);
          auVar17[0xb] = -(pcVar4[0xb] == cVar10);
          auVar17[0xc] = -(pcVar4[0xc] == cVar11);
          auVar17[0xd] = -(pcVar4[0xd] == cVar12);
          auVar17[0xe] = -(pcVar4[0xe] == cVar13);
          auVar17[0xf] = -(pcVar4[0xf] == cVar14);
          auVar16[0] = -(pcVar4[0x10] == cVar5);
          auVar16[1] = -(pcVar4[0x11] == cVar8);
          auVar16[2] = -(pcVar4[0x12] == cVar9);
          auVar16[3] = -(pcVar4[0x13] == cVar10);
          auVar16[4] = -(pcVar4[0x14] == cVar11);
          auVar16[5] = -(pcVar4[0x15] == cVar12);
          auVar16[6] = -(pcVar4[0x16] == cVar13);
          auVar16[7] = -(pcVar4[0x17] == cVar14);
          auVar16[8] = -(pcVar4[0x18] == cVar5);
          auVar16[9] = -(pcVar4[0x19] == cVar8);
          auVar16[10] = -(pcVar4[0x1a] == cVar9);
          auVar16[0xb] = -(pcVar4[0x1b] == cVar10);
          auVar16[0xc] = -(pcVar4[0x1c] == cVar11);
          auVar16[0xd] = -(pcVar4[0x1d] == cVar12);
          auVar16[0xe] = -(pcVar4[0x1e] == cVar13);
          auVar16[0xf] = -(pcVar4[0x1f] == cVar14);
          auVar6[0] = -(pcVar4[0x20] == cVar5);
          auVar6[1] = -(pcVar4[0x21] == cVar8);
          auVar6[2] = -(pcVar4[0x22] == cVar9);
          auVar6[3] = -(pcVar4[0x23] == cVar10);
          auVar6[4] = -(pcVar4[0x24] == cVar11);
          auVar6[5] = -(pcVar4[0x25] == cVar12);
          auVar6[6] = -(pcVar4[0x26] == cVar13);
          auVar6[7] = -(pcVar4[0x27] == cVar14);
          auVar6[8] = -(pcVar4[0x28] == cVar5);
          auVar6[9] = -(pcVar4[0x29] == cVar8);
          auVar6[10] = -(pcVar4[0x2a] == cVar9);
          auVar6[0xb] = -(pcVar4[0x2b] == cVar10);
          auVar6[0xc] = -(pcVar4[0x2c] == cVar11);
          auVar6[0xd] = -(pcVar4[0x2d] == cVar12);
          auVar6[0xe] = -(pcVar4[0x2e] == cVar13);
          auVar6[0xf] = -(pcVar4[0x2f] == cVar14);
          auVar19 = auVar16 | auVar6 | auVar18 | auVar17;
          if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar19 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar19 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar19 >> 0x2f,0) & 1) != 0) || (SUB161(auVar19 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') {
            uVar1 = (ushort)(SUB161(auVar18 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar18[0xf] >> 7) << 0xf;
            if (uVar1 != 0) {
              for (uVar3 = (uint)uVar1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
              }
              return true;
            }
            uVar3 = (uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(auVar17[0xf] >> 7) << 0xf);
            if (uVar3 == 0) {
              uVar1 = (ushort)(SUB161(auVar16 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar16[0xf] >> 7) << 0xf;
              if (uVar1 == 0) {
                for (uVar3 = (uint)(ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                                            (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                                            (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                                            (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                                            (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                                            (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                                            (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                                            (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                                            (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                                            (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                                            (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                                            (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                                            (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                                            (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                                            (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                                           (ushort)(auVar6[0xf] >> 7) << 0xf); (uVar3 & 1) == 0;
                    uVar3 = uVar3 >> 1 | 0x80000000) {
                }
                return true;
              }
              for (uVar3 = (uint)uVar1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
              }
              return true;
            }
            goto LAB_1801d18fd;
          }
          pcVar2 = pcVar4 + 0x40;
        } while (pcVar4 + 0x30 <= param_3 + -0x40);
        pcVar4 = pcVar4 + 0x30;
      }
      for (; pcVar4 <= param_3 + -0x10; pcVar4 = pcVar4 + 0x10) {
        auVar15[0] = -(*pcVar4 == cVar5);
        auVar15[1] = -(pcVar4[1] == cVar8);
        auVar15[2] = -(pcVar4[2] == cVar9);
        auVar15[3] = -(pcVar4[3] == cVar10);
        auVar15[4] = -(pcVar4[4] == cVar11);
        auVar15[5] = -(pcVar4[5] == cVar12);
        auVar15[6] = -(pcVar4[6] == cVar13);
        auVar15[7] = -(pcVar4[7] == cVar14);
        auVar15[8] = -(pcVar4[8] == cVar5);
        auVar15[9] = -(pcVar4[9] == cVar8);
        auVar15[10] = -(pcVar4[10] == cVar9);
        auVar15[0xb] = -(pcVar4[0xb] == cVar10);
        auVar15[0xc] = -(pcVar4[0xc] == cVar11);
        auVar15[0xd] = -(pcVar4[0xd] == cVar12);
        auVar15[0xe] = -(pcVar4[0xe] == cVar13);
        auVar15[0xf] = -(pcVar4[0xf] == cVar14);
        uVar1 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
        if (uVar1 != 0) {
          for (uVar3 = (uint)uVar1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          }
          return true;
        }
      }
      if (param_3 <= pcVar4) {
        return false;
      }
      auVar7[0] = -(cVar5 == param_3[-0x10]);
      auVar7[1] = -(cVar8 == param_3[-0xf]);
      auVar7[2] = -(cVar9 == param_3[-0xe]);
      auVar7[3] = -(cVar10 == param_3[-0xd]);
      auVar7[4] = -(cVar11 == param_3[-0xc]);
      auVar7[5] = -(cVar12 == param_3[-0xb]);
      auVar7[6] = -(cVar13 == param_3[-10]);
      auVar7[7] = -(cVar14 == param_3[-9]);
      auVar7[8] = -(cVar5 == param_3[-8]);
      auVar7[9] = -(cVar8 == param_3[-7]);
      auVar7[10] = -(cVar9 == param_3[-6]);
      auVar7[0xb] = -(cVar10 == param_3[-5]);
      auVar7[0xc] = -(cVar11 == param_3[-4]);
      auVar7[0xd] = -(cVar12 == param_3[-3]);
      auVar7[0xe] = -(cVar13 == param_3[-2]);
      auVar7[0xf] = -(cVar14 == param_3[-1]);
      uVar1 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf;
      for (uVar3 = (uint)uVar1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      }
      return uVar1 != 0;
    }
LAB_1801d18fd:
    for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
    }
  }
  return true;
}


