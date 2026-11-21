/* FUN_18015dfe0 @ 18015dfe0 */

undefined8 FUN_18015dfe0(longlong param_1,int *param_2)

{
  char *pcVar1;
  longlong lVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  uint uVar13;
  longlong lVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 local_30 [3];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_30[0] = 0;
  }
  else if (*(longlong *)(param_1 + 0x10) == 1) {
    if (*param_2 == (int)(*(ulonglong **)(param_1 + 8))[1]) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar10 = **(ulonglong **)(param_1 + 8);
      lVar2 = *(longlong *)(param_1 + 0x18);
      uVar11 = *(ulonglong *)(param_1 + 0x20);
      bVar15 = (byte)(uVar10 >> 0x39);
      auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
      auVar16 = pshuflw(auVar16,auVar16,0);
      lVar14 = 0;
      while( true ) {
        uVar10 = uVar10 & uVar11;
        pcVar1 = (char *)(lVar2 + uVar10);
        auVar19[0] = -(*pcVar1 == auVar16[0]);
        auVar19[1] = -(pcVar1[1] == auVar16[1]);
        auVar19[2] = -(pcVar1[2] == auVar16[2]);
        auVar19[3] = -(pcVar1[3] == auVar16[3]);
        auVar19[4] = -(pcVar1[4] == auVar16[4]);
        auVar19[5] = -(pcVar1[5] == auVar16[5]);
        auVar19[6] = -(pcVar1[6] == auVar16[6]);
        auVar19[7] = -(pcVar1[7] == auVar16[7]);
        auVar19[8] = -(pcVar1[8] == auVar16[0]);
        auVar19[9] = -(pcVar1[9] == auVar16[1]);
        auVar19[10] = -(pcVar1[10] == auVar16[2]);
        auVar19[0xb] = -(pcVar1[0xb] == auVar16[3]);
        auVar19[0xc] = -(pcVar1[0xc] == auVar16[4]);
        auVar19[0xd] = -(pcVar1[0xd] == auVar16[5]);
        auVar19[0xe] = -(pcVar1[0xe] == auVar16[6]);
        auVar19[0xf] = -(pcVar1[0xf] == auVar16[7]);
        uVar7 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
        uVar13 = (uint)uVar7;
        while (uVar7 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          uVar8 = uVar5 + uVar10 & uVar11;
          if (*(longlong *)(lVar2 + uVar8 * -8 + -8) == 0) {
            uVar11 = uVar8 - 0x10 & uVar11;
            pcVar1 = (char *)(lVar2 + uVar11);
            auVar16[0] = -(*pcVar1 == -1);
            auVar16[1] = -(pcVar1[1] == -1);
            auVar16[2] = -(pcVar1[2] == -1);
            auVar16[3] = -(pcVar1[3] == -1);
            auVar16[4] = -(pcVar1[4] == -1);
            auVar16[5] = -(pcVar1[5] == -1);
            auVar16[6] = -(pcVar1[6] == -1);
            auVar16[7] = -(pcVar1[7] == -1);
            auVar16[8] = -(pcVar1[8] == -1);
            auVar16[9] = -(pcVar1[9] == -1);
            auVar16[10] = -(pcVar1[10] == -1);
            auVar16[0xb] = -(pcVar1[0xb] == -1);
            auVar16[0xc] = -(pcVar1[0xc] == -1);
            auVar16[0xd] = -(pcVar1[0xd] == -1);
            auVar16[0xe] = -(pcVar1[0xe] == -1);
            auVar16[0xf] = -(pcVar1[0xf] == -1);
            uVar3 = (ushort)(SUB161(auVar16 >> 7,0) & 1) |
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
            pcVar1 = (char *)(lVar2 + uVar8);
            auVar17[0] = -(*pcVar1 == -1);
            auVar17[1] = -(pcVar1[1] == -1);
            auVar17[2] = -(pcVar1[2] == -1);
            auVar17[3] = -(pcVar1[3] == -1);
            auVar17[4] = -(pcVar1[4] == -1);
            auVar17[5] = -(pcVar1[5] == -1);
            auVar17[6] = -(pcVar1[6] == -1);
            auVar17[7] = -(pcVar1[7] == -1);
            auVar17[8] = -(pcVar1[8] == -1);
            auVar17[9] = -(pcVar1[9] == -1);
            auVar17[10] = -(pcVar1[10] == -1);
            auVar17[0xb] = -(pcVar1[0xb] == -1);
            auVar17[0xc] = -(pcVar1[0xc] == -1);
            auVar17[0xd] = -(pcVar1[0xd] == -1);
            auVar17[0xe] = -(pcVar1[0xe] == -1);
            auVar17[0xf] = -(pcVar1[0xf] == -1);
            uVar7 = 0xf;
            if (uVar3 != 0) {
              for (; uVar3 >> uVar7 == 0; uVar7 = uVar7 - 1) {
              }
            }
            sVar4 = 0;
            for (uVar13 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
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
                                  (ushort)(auVar17[0xf] >> 7) << 0xf) | 0x10000; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x80000000) {
              sVar4 = sVar4 + 1;
            }
            uVar12 = 0x80;
            if ((ushort)(sVar4 + (uVar7 ^ 0xf)) < 0x10) {
              *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
              uVar12 = 0xff;
            }
            *(undefined1 *)(lVar2 + uVar8) = uVar12;
            *(undefined1 *)(lVar2 + 0x10 + uVar11) = uVar12;
            *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -1;
            return 1;
          }
          uVar7 = (ushort)(uVar13 - 1) & (ushort)uVar13;
          uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar7);
        }
        auVar18[0] = -(*pcVar1 == -1);
        auVar18[1] = -(pcVar1[1] == -1);
        auVar18[2] = -(pcVar1[2] == -1);
        auVar18[3] = -(pcVar1[3] == -1);
        auVar18[4] = -(pcVar1[4] == -1);
        auVar18[5] = -(pcVar1[5] == -1);
        auVar18[6] = -(pcVar1[6] == -1);
        auVar18[7] = -(pcVar1[7] == -1);
        auVar18[8] = -(pcVar1[8] == -1);
        auVar18[9] = -(pcVar1[9] == -1);
        auVar18[10] = -(pcVar1[10] == -1);
        auVar18[0xb] = -(pcVar1[0xb] == -1);
        auVar18[0xc] = -(pcVar1[0xc] == -1);
        auVar18[0xd] = -(pcVar1[0xd] == -1);
        auVar18[0xe] = -(pcVar1[0xe] == -1);
        auVar18[0xf] = -(pcVar1[0xf] == -1);
        local_30[0] = 1;
        if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar18 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar18 >> 0x1f,0) & 1) != 0) || (SUB161(auVar18 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') break;
        uVar10 = uVar10 + lVar14 + 0x10;
        lVar14 = lVar14 + 0x10;
      }
    }
    else {
      local_30[0] = 0;
    }
  }
  else {
    uVar9 = FUN_180153f70(param_1 + 0x38);
    FUN_180154b00(local_30,param_1,uVar9,param_2);
  }
  return local_30[0];
}


