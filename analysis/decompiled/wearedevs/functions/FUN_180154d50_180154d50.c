/* FUN_180154d50 @ 180154d50 */

void FUN_180154d50(undefined4 *param_1,longlong param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  if (*(longlong *)(param_2 + 0x10) != 0) {
    lVar13 = *(longlong *)(param_2 + 0x10) + -1;
    *(longlong *)(param_2 + 0x10) = lVar13;
    lVar3 = *(longlong *)(param_2 + 0x18);
    uVar15 = *(ulonglong *)(*(longlong *)(param_2 + 8) + lVar13 * 0x10);
    uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 8 + lVar13 * 0x10);
    uVar11 = *(ulonglong *)(param_2 + 0x20);
    bVar17 = (byte)(uVar15 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar16 = 0;
    do {
      uVar15 = uVar15 & uVar11;
      pcVar1 = (char *)(lVar3 + uVar15);
      auVar21[0] = -(*pcVar1 == auVar18[0]);
      auVar21[1] = -(pcVar1[1] == auVar18[1]);
      auVar21[2] = -(pcVar1[2] == auVar18[2]);
      auVar21[3] = -(pcVar1[3] == auVar18[3]);
      auVar21[4] = -(pcVar1[4] == auVar18[4]);
      auVar21[5] = -(pcVar1[5] == auVar18[5]);
      auVar21[6] = -(pcVar1[6] == auVar18[6]);
      auVar21[7] = -(pcVar1[7] == auVar18[7]);
      auVar21[8] = -(pcVar1[8] == auVar18[0]);
      auVar21[9] = -(pcVar1[9] == auVar18[1]);
      auVar21[10] = -(pcVar1[10] == auVar18[2]);
      auVar21[0xb] = -(pcVar1[0xb] == auVar18[3]);
      auVar21[0xc] = -(pcVar1[0xc] == auVar18[4]);
      auVar21[0xd] = -(pcVar1[0xd] == auVar18[5]);
      auVar21[0xe] = -(pcVar1[0xe] == auVar18[6]);
      auVar21[0xf] = -(pcVar1[0xf] == auVar18[7]);
      uVar9 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar9;
      if (uVar9 != 0) {
LAB_180154dc4:
        uVar6 = 0;
        for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar10 = uVar6 + uVar15 & uVar11;
        if (*(longlong *)(lVar3 + uVar10 * -8 + -8) != lVar13) goto code_r0x000180154de2;
        uVar11 = uVar11 & uVar10 - 0x10;
        pcVar1 = (char *)(lVar3 + uVar11);
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
        uVar4 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
        pcVar1 = (char *)(lVar3 + uVar10);
        auVar19[0] = -(*pcVar1 == -1);
        auVar19[1] = -(pcVar1[1] == -1);
        auVar19[2] = -(pcVar1[2] == -1);
        auVar19[3] = -(pcVar1[3] == -1);
        auVar19[4] = -(pcVar1[4] == -1);
        auVar19[5] = -(pcVar1[5] == -1);
        auVar19[6] = -(pcVar1[6] == -1);
        auVar19[7] = -(pcVar1[7] == -1);
        auVar19[8] = -(pcVar1[8] == -1);
        auVar19[9] = -(pcVar1[9] == -1);
        auVar19[10] = -(pcVar1[10] == -1);
        auVar19[0xb] = -(pcVar1[0xb] == -1);
        auVar19[0xc] = -(pcVar1[0xc] == -1);
        auVar19[0xd] = -(pcVar1[0xd] == -1);
        auVar19[0xe] = -(pcVar1[0xe] == -1);
        auVar19[0xf] = -(pcVar1[0xf] == -1);
        uVar9 = 0xf;
        if (uVar4 != 0) {
          for (; uVar4 >> uVar9 == 0; uVar9 = uVar9 - 1) {
          }
        }
        sVar5 = 0;
        for (uVar14 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar19[0xf] >> 7) << 0xf) | 0x10000; (uVar14 & 1) == 0;
            uVar14 = uVar14 >> 1 | 0x80000000) {
          sVar5 = sVar5 + 1;
        }
        uVar12 = 0x80;
        if ((ushort)(sVar5 + (uVar9 ^ 0xf)) < 0x10) {
          *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
          uVar12 = 0xff;
        }
        *(undefined1 *)(lVar3 + uVar10) = uVar12;
        *(undefined1 *)(lVar3 + 0x10 + uVar11) = uVar12;
        *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + -1;
        goto LAB_180154e6c;
      }
LAB_180154df0:
      auVar20[0] = -(*pcVar1 == -1);
      auVar20[1] = -(pcVar1[1] == -1);
      auVar20[2] = -(pcVar1[2] == -1);
      auVar20[3] = -(pcVar1[3] == -1);
      auVar20[4] = -(pcVar1[4] == -1);
      auVar20[5] = -(pcVar1[5] == -1);
      auVar20[6] = -(pcVar1[6] == -1);
      auVar20[7] = -(pcVar1[7] == -1);
      auVar20[8] = -(pcVar1[8] == -1);
      auVar20[9] = -(pcVar1[9] == -1);
      auVar20[10] = -(pcVar1[10] == -1);
      auVar20[0xb] = -(pcVar1[0xb] == -1);
      auVar20[0xc] = -(pcVar1[0xc] == -1);
      auVar20[0xd] = -(pcVar1[0xd] == -1);
      auVar20[0xe] = -(pcVar1[0xe] == -1);
      auVar20[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') goto LAB_180154e6c;
      uVar15 = uVar15 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    } while( true );
  }
  uVar8 = 0;
LAB_180154e79:
  *param_1 = uVar8;
  return;
code_r0x000180154de2:
  uVar9 = (ushort)(uVar14 - 1) & (ushort)uVar14;
  uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar9);
  if (uVar9 == 0) goto LAB_180154df0;
  goto LAB_180154dc4;
LAB_180154e6c:
  *(undefined8 *)(param_1 + 1) = uVar2;
  uVar8 = 1;
  goto LAB_180154e79;
}


