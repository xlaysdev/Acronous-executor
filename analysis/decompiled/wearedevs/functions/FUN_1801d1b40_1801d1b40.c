/* FUN_1801d1b40 @ 1801d1b40 */

bool FUN_1801d1b40(char param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  ushort uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char cVar20;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  if (param_3 <= param_2) {
    return false;
  }
  if ((ulonglong)((longlong)param_3 - (longlong)param_2) < 0x10) {
    do {
      if (param_3 <= param_2) {
        return false;
      }
      pcVar19 = param_3 + -1;
      param_3 = param_3 + -1;
    } while (*pcVar19 != param_1);
  }
  else {
    auVar21 = pshuflw(ZEXT216(CONCAT11(param_1,param_1)),ZEXT216(CONCAT11(param_1,param_1)),0);
    cVar20 = auVar21[0];
    auVar34[0] = -(param_3[-0x10] == cVar20);
    cVar23 = auVar21[1];
    auVar34[1] = -(param_3[-0xf] == cVar23);
    cVar24 = auVar21[2];
    auVar34[2] = -(param_3[-0xe] == cVar24);
    cVar25 = auVar21[3];
    auVar34[3] = -(param_3[-0xd] == cVar25);
    cVar26 = auVar21[4];
    auVar34[4] = -(param_3[-0xc] == cVar26);
    cVar27 = auVar21[5];
    auVar34[5] = -(param_3[-0xb] == cVar27);
    cVar28 = auVar21[6];
    auVar34[6] = -(param_3[-10] == cVar28);
    cVar29 = auVar21[7];
    auVar34[7] = -(param_3[-9] == cVar29);
    auVar34[8] = -(param_3[-8] == cVar20);
    auVar34[9] = -(param_3[-7] == cVar23);
    auVar34[10] = -(param_3[-6] == cVar24);
    auVar34[0xb] = -(param_3[-5] == cVar25);
    auVar34[0xc] = -(param_3[-4] == cVar26);
    auVar34[0xd] = -(param_3[-3] == cVar27);
    auVar34[0xe] = -(param_3[-2] == cVar28);
    auVar34[0xf] = -(param_3[-1] == cVar29);
    uVar3 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
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
    if (uVar3 == 0) {
      pcVar19 = (char *)((ulonglong)param_3 & 0xfffffffffffffff0);
      if (param_2 + 0x40 <= pcVar19 && 0x3f < (ulonglong)((longlong)param_3 - (longlong)param_2)) {
        pcVar1 = param_3 + (-0x11 - (ulonglong)((uint)param_3 & 0xf));
        do {
          pcVar19 = pcVar1;
          auVar21[0] = -(pcVar19[-0x2f] == cVar20);
          auVar21[1] = -(pcVar19[-0x2e] == cVar23);
          auVar21[2] = -(pcVar19[-0x2d] == cVar24);
          auVar21[3] = -(pcVar19[-0x2c] == cVar25);
          auVar21[4] = -(pcVar19[-0x2b] == cVar26);
          auVar21[5] = -(pcVar19[-0x2a] == cVar27);
          auVar21[6] = -(pcVar19[-0x29] == cVar28);
          auVar21[7] = -(pcVar19[-0x28] == cVar29);
          auVar21[8] = -(pcVar19[-0x27] == cVar20);
          auVar21[9] = -(pcVar19[-0x26] == cVar23);
          auVar21[10] = -(pcVar19[-0x25] == cVar24);
          auVar21[0xb] = -(pcVar19[-0x24] == cVar25);
          auVar21[0xc] = -(pcVar19[-0x23] == cVar26);
          auVar21[0xd] = -(pcVar19[-0x22] == cVar27);
          auVar21[0xe] = -(pcVar19[-0x21] == cVar28);
          auVar21[0xf] = -(pcVar19[-0x20] == cVar29);
          auVar31[0] = -(pcVar19[-0x1f] == cVar20);
          auVar31[1] = -(pcVar19[-0x1e] == cVar23);
          auVar31[2] = -(pcVar19[-0x1d] == cVar24);
          auVar31[3] = -(pcVar19[-0x1c] == cVar25);
          auVar31[4] = -(pcVar19[-0x1b] == cVar26);
          auVar31[5] = -(pcVar19[-0x1a] == cVar27);
          auVar31[6] = -(pcVar19[-0x19] == cVar28);
          auVar31[7] = -(pcVar19[-0x18] == cVar29);
          auVar31[8] = -(pcVar19[-0x17] == cVar20);
          auVar31[9] = -(pcVar19[-0x16] == cVar23);
          auVar31[10] = -(pcVar19[-0x15] == cVar24);
          auVar31[0xb] = -(pcVar19[-0x14] == cVar25);
          auVar31[0xc] = -(pcVar19[-0x13] == cVar26);
          auVar31[0xd] = -(pcVar19[-0x12] == cVar27);
          auVar31[0xe] = -(pcVar19[-0x11] == cVar28);
          auVar31[0xf] = -(pcVar19[-0x10] == cVar29);
          auVar32[0] = -(pcVar19[-0xf] == cVar20);
          auVar32[1] = -(pcVar19[-0xe] == cVar23);
          auVar32[2] = -(pcVar19[-0xd] == cVar24);
          auVar32[3] = -(pcVar19[-0xc] == cVar25);
          auVar32[4] = -(pcVar19[-0xb] == cVar26);
          auVar32[5] = -(pcVar19[-10] == cVar27);
          auVar32[6] = -(pcVar19[-9] == cVar28);
          auVar32[7] = -(pcVar19[-8] == cVar29);
          auVar32[8] = -(pcVar19[-7] == cVar20);
          auVar32[9] = -(pcVar19[-6] == cVar23);
          auVar32[10] = -(pcVar19[-5] == cVar24);
          auVar32[0xb] = -(pcVar19[-4] == cVar25);
          auVar32[0xc] = -(pcVar19[-3] == cVar26);
          auVar32[0xd] = -(pcVar19[-2] == cVar27);
          auVar32[0xe] = -(pcVar19[-1] == cVar28);
          auVar32[0xf] = -(*pcVar19 == cVar29);
          auVar33[0] = -(pcVar19[1] == cVar20);
          auVar33[1] = -(pcVar19[2] == cVar23);
          auVar33[2] = -(pcVar19[3] == cVar24);
          auVar33[3] = -(pcVar19[4] == cVar25);
          auVar33[4] = -(pcVar19[5] == cVar26);
          auVar33[5] = -(pcVar19[6] == cVar27);
          auVar33[6] = -(pcVar19[7] == cVar28);
          auVar33[7] = -(pcVar19[8] == cVar29);
          auVar33[8] = -(pcVar19[9] == cVar20);
          auVar33[9] = -(pcVar19[10] == cVar23);
          auVar33[10] = -(pcVar19[0xb] == cVar24);
          auVar33[0xb] = -(pcVar19[0xc] == cVar25);
          auVar33[0xc] = -(pcVar19[0xd] == cVar26);
          auVar33[0xd] = -(pcVar19[0xe] == cVar27);
          auVar33[0xe] = -(pcVar19[0xf] == cVar28);
          auVar33[0xf] = -(pcVar19[0x10] == cVar29);
          auVar34 = auVar32 | auVar33 | auVar21 | auVar31;
          if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar34 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar34 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar34 >> 0x2f,0) & 1) != 0) || (SUB161(auVar34 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') {
            uVar3 = (ushort)(SUB161(auVar33 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar33[0xf] >> 7) << 0xf;
            if (uVar3 != 0) {
              iVar2 = 0x1f;
              if (uVar3 == 0) {
                return true;
              }
              for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
              }
              return true;
            }
            uVar3 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar32[0xf] >> 7) << 0xf;
            if (uVar3 != 0) {
              iVar2 = 0x1f;
              if (uVar3 == 0) {
                return true;
              }
              for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
              }
              return true;
            }
            uVar3 = (ushort)(SUB161(auVar31 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar31[0xf] >> 7) << 0xf;
            if (uVar3 == 0) {
              uVar3 = (ushort)(SUB161(auVar21 >> 7,0) & 1) |
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
                      (ushort)(auVar21[0xf] >> 7) << 0xf;
              iVar2 = 0x1f;
              if (uVar3 == 0) {
                return true;
              }
              for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
              }
              return true;
            }
            iVar2 = 0x1f;
            if (uVar3 == 0) {
              return true;
            }
            for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
            return true;
          }
          pcVar1 = pcVar19 + -0x40;
        } while (param_2 + 0x40 <= pcVar19 + -0x2f);
        pcVar19 = pcVar19 + -0x2f;
      }
      do {
        if (pcVar19 < param_2 + 0x10) {
          if (pcVar19 <= param_2) {
            return false;
          }
          auVar22[0] = -(cVar20 == *param_2);
          auVar22[1] = -(cVar23 == param_2[1]);
          auVar22[2] = -(cVar24 == param_2[2]);
          auVar22[3] = -(cVar25 == param_2[3]);
          auVar22[4] = -(cVar26 == param_2[4]);
          auVar22[5] = -(cVar27 == param_2[5]);
          auVar22[6] = -(cVar28 == param_2[6]);
          auVar22[7] = -(cVar29 == param_2[7]);
          auVar22[8] = -(cVar20 == param_2[8]);
          auVar22[9] = -(cVar23 == param_2[9]);
          auVar22[10] = -(cVar24 == param_2[10]);
          auVar22[0xb] = -(cVar25 == param_2[0xb]);
          auVar22[0xc] = -(cVar26 == param_2[0xc]);
          auVar22[0xd] = -(cVar27 == param_2[0xd]);
          auVar22[0xe] = -(cVar28 == param_2[0xe]);
          auVar22[0xf] = -(cVar29 == param_2[0xf]);
          uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
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
                  (ushort)(auVar22[0xf] >> 7) << 0xf;
          iVar2 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          return uVar3 != 0;
        }
        pcVar1 = pcVar19 + -0x10;
        pcVar4 = pcVar19 + -0xf;
        pcVar5 = pcVar19 + -0xe;
        pcVar6 = pcVar19 + -0xd;
        pcVar7 = pcVar19 + -0xc;
        pcVar8 = pcVar19 + -0xb;
        pcVar9 = pcVar19 + -10;
        pcVar10 = pcVar19 + -9;
        pcVar11 = pcVar19 + -8;
        pcVar12 = pcVar19 + -7;
        pcVar13 = pcVar19 + -6;
        pcVar14 = pcVar19 + -5;
        pcVar15 = pcVar19 + -4;
        pcVar16 = pcVar19 + -3;
        pcVar17 = pcVar19 + -2;
        pcVar18 = pcVar19 + -1;
        pcVar19 = pcVar19 + -0x10;
        auVar30[0] = -(*pcVar1 == cVar20);
        auVar30[1] = -(*pcVar4 == cVar23);
        auVar30[2] = -(*pcVar5 == cVar24);
        auVar30[3] = -(*pcVar6 == cVar25);
        auVar30[4] = -(*pcVar7 == cVar26);
        auVar30[5] = -(*pcVar8 == cVar27);
        auVar30[6] = -(*pcVar9 == cVar28);
        auVar30[7] = -(*pcVar10 == cVar29);
        auVar30[8] = -(*pcVar11 == cVar20);
        auVar30[9] = -(*pcVar12 == cVar23);
        auVar30[10] = -(*pcVar13 == cVar24);
        auVar30[0xb] = -(*pcVar14 == cVar25);
        auVar30[0xc] = -(*pcVar15 == cVar26);
        auVar30[0xd] = -(*pcVar16 == cVar27);
        auVar30[0xe] = -(*pcVar17 == cVar28);
        auVar30[0xf] = -(*pcVar18 == cVar29);
        uVar3 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
      } while (uVar3 == 0);
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
    }
    else {
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
    }
  }
  return true;
}


