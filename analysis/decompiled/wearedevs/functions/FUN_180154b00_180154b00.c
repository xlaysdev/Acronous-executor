/* FUN_180154b00 @ 180154b00 */

undefined8 * FUN_180154b00(undefined8 *param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ushort uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  lVar17 = *(longlong *)(param_2 + 8);
  uVar10 = *(ulonglong *)(param_2 + 0x10);
  uVar3 = *(ulonglong *)(param_2 + 0x20);
  lVar4 = *(longlong *)(param_2 + 0x18);
  bVar20 = (byte)(param_3 >> 0x39);
  auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
  auVar21 = pshuflw(auVar21,auVar21,0);
  uVar14 = 0;
  lVar18 = 0;
  while( true ) {
    param_3 = param_3 & uVar3;
    auVar22 = *(undefined1 (*) [16])(lVar4 + param_3);
    auVar24[0] = -(auVar22[0] == auVar21[0]);
    auVar24[1] = -(auVar22[1] == auVar21[1]);
    auVar24[2] = -(auVar22[2] == auVar21[2]);
    auVar24[3] = -(auVar22[3] == auVar21[3]);
    auVar24[4] = -(auVar22[4] == auVar21[4]);
    auVar24[5] = -(auVar22[5] == auVar21[5]);
    auVar24[6] = -(auVar22[6] == auVar21[6]);
    auVar24[7] = -(auVar22[7] == auVar21[7]);
    auVar24[8] = -(auVar22[8] == auVar21[0]);
    auVar24[9] = -(auVar22[9] == auVar21[1]);
    auVar24[10] = -(auVar22[10] == auVar21[2]);
    auVar24[0xb] = -(auVar22[0xb] == auVar21[3]);
    auVar24[0xc] = -(auVar22[0xc] == auVar21[4]);
    auVar24[0xd] = -(auVar22[0xd] == auVar21[5]);
    auVar24[0xe] = -(auVar22[0xe] == auVar21[6]);
    auVar24[0xf] = -(auVar22[0xf] == auVar21[7]);
    uVar15 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
    uVar12 = (uint)uVar15;
    if (uVar15 != 0) break;
LAB_180154bb0:
    auVar23[0] = -(auVar22[0] == -1);
    auVar23[1] = -(auVar22[1] == -1);
    auVar23[2] = -(auVar22[2] == -1);
    auVar23[3] = -(auVar22[3] == -1);
    auVar23[4] = -(auVar22[4] == -1);
    auVar23[5] = -(auVar22[5] == -1);
    auVar23[6] = -(auVar22[6] == -1);
    auVar23[7] = -(auVar22[7] == -1);
    auVar23[8] = -(auVar22[8] == -1);
    auVar23[9] = -(auVar22[9] == -1);
    auVar23[10] = -(auVar22[10] == -1);
    auVar23[0xb] = -(auVar22[0xb] == -1);
    auVar23[0xc] = -(auVar22[0xc] == -1);
    auVar23[0xd] = -(auVar22[0xd] == -1);
    auVar23[0xe] = -(auVar22[0xe] == -1);
    auVar23[0xf] = -(auVar22[0xf] == -1);
    if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') {
LAB_180154d06:
      *param_1 = uVar14;
      return param_1;
    }
    param_3 = param_3 + lVar18 + 0x10;
    lVar18 = lVar18 + 0x10;
  }
  while( true ) {
    uVar7 = 0;
    for (uVar8 = uVar12; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar19 = uVar7 + param_3 & uVar3;
    uVar16 = *(ulonglong *)(lVar4 + uVar19 * -8 + -8);
    if (uVar10 <= uVar16) goto LAB_180154d3d;
    if (*param_4 == *(int *)(lVar17 + 8 + uVar16 * 0x10)) break;
    uVar15 = (ushort)(uVar12 - 1) & (ushort)uVar12;
    uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar15);
    if (uVar15 == 0) goto LAB_180154bb0;
  }
  uVar16 = uVar19 - 0x10 & uVar3;
  pcVar1 = (char *)(lVar4 + uVar16);
  auVar21[0] = -(*pcVar1 == -1);
  auVar21[1] = -(pcVar1[1] == -1);
  auVar21[2] = -(pcVar1[2] == -1);
  auVar21[3] = -(pcVar1[3] == -1);
  auVar21[4] = -(pcVar1[4] == -1);
  auVar21[5] = -(pcVar1[5] == -1);
  auVar21[6] = -(pcVar1[6] == -1);
  auVar21[7] = -(pcVar1[7] == -1);
  auVar21[8] = -(pcVar1[8] == -1);
  auVar21[9] = -(pcVar1[9] == -1);
  auVar21[10] = -(pcVar1[10] == -1);
  auVar21[0xb] = -(pcVar1[0xb] == -1);
  auVar21[0xc] = -(pcVar1[0xc] == -1);
  auVar21[0xd] = -(pcVar1[0xd] == -1);
  auVar21[0xe] = -(pcVar1[0xe] == -1);
  auVar21[0xf] = -(pcVar1[0xf] == -1);
  uVar5 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
  pcVar1 = (char *)(lVar4 + uVar19);
  auVar22[0] = -(*pcVar1 == -1);
  auVar22[1] = -(pcVar1[1] == -1);
  auVar22[2] = -(pcVar1[2] == -1);
  auVar22[3] = -(pcVar1[3] == -1);
  auVar22[4] = -(pcVar1[4] == -1);
  auVar22[5] = -(pcVar1[5] == -1);
  auVar22[6] = -(pcVar1[6] == -1);
  auVar22[7] = -(pcVar1[7] == -1);
  auVar22[8] = -(pcVar1[8] == -1);
  auVar22[9] = -(pcVar1[9] == -1);
  auVar22[10] = -(pcVar1[10] == -1);
  auVar22[0xb] = -(pcVar1[0xb] == -1);
  auVar22[0xc] = -(pcVar1[0xc] == -1);
  auVar22[0xd] = -(pcVar1[0xd] == -1);
  auVar22[0xe] = -(pcVar1[0xe] == -1);
  auVar22[0xf] = -(pcVar1[0xf] == -1);
  uVar15 = 0xf;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar15 == 0; uVar15 = uVar15 - 1) {
    }
  }
  sVar6 = 0;
  for (uVar12 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
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
                        (ushort)(auVar22[0xf] >> 7) << 0xf) | 0x10000; (uVar12 & 1) == 0;
      uVar12 = uVar12 >> 1 | 0x80000000) {
    sVar6 = sVar6 + 1;
  }
  uVar11 = 0x80;
  if ((ushort)(sVar6 + (uVar15 ^ 0xf)) < 0x10) {
    *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
    uVar11 = 0xff;
  }
  *(undefined1 *)(lVar4 + uVar19) = uVar11;
  *(undefined1 *)(lVar4 + 0x10 + uVar16) = uVar11;
  *(longlong *)(param_2 + 0x30) = *(longlong *)(param_2 + 0x30) + -1;
  uVar19 = *(ulonglong *)(lVar4 + -8 + uVar19 * -8);
  if (uVar10 <= uVar19) {
    FUN_180201680(uVar19);
LAB_180154d3d:
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(uVar16);
  }
  lVar18 = uVar19 * 0x10;
  uVar14 = *(undefined8 *)(lVar17 + 8 + lVar18);
  uVar10 = uVar10 - 1;
  puVar2 = (undefined8 *)(lVar17 + uVar10 * 0x10);
  uVar9 = puVar2[1];
  *(undefined8 *)(lVar17 + lVar18) = *puVar2;
  ((undefined8 *)(lVar17 + lVar18))[1] = uVar9;
  *(ulonglong *)(param_2 + 0x10) = uVar10;
  if (uVar10 <= uVar19) {
LAB_180154cf8:
    param_1[1] = uVar19;
    param_1[2] = uVar14;
    uVar14 = 1;
    goto LAB_180154d06;
  }
  uVar16 = *(ulonglong *)(lVar17 + lVar18);
  bVar20 = (byte)(uVar16 >> 0x39);
  auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
  auVar21 = pshuflw(auVar21,auVar21,0);
  lVar17 = 0;
  do {
    uVar16 = uVar16 & uVar3;
    pcVar1 = (char *)(lVar4 + uVar16);
    auVar26[0] = -(*pcVar1 == auVar21[0]);
    auVar26[1] = -(pcVar1[1] == auVar21[1]);
    auVar26[2] = -(pcVar1[2] == auVar21[2]);
    auVar26[3] = -(pcVar1[3] == auVar21[3]);
    auVar26[4] = -(pcVar1[4] == auVar21[4]);
    auVar26[5] = -(pcVar1[5] == auVar21[5]);
    auVar26[6] = -(pcVar1[6] == auVar21[6]);
    auVar26[7] = -(pcVar1[7] == auVar21[7]);
    auVar26[8] = -(pcVar1[8] == auVar21[0]);
    auVar26[9] = -(pcVar1[9] == auVar21[1]);
    auVar26[10] = -(pcVar1[10] == auVar21[2]);
    auVar26[0xb] = -(pcVar1[0xb] == auVar21[3]);
    auVar26[0xc] = -(pcVar1[0xc] == auVar21[4]);
    auVar26[0xd] = -(pcVar1[0xd] == auVar21[5]);
    auVar26[0xe] = -(pcVar1[0xe] == auVar21[6]);
    auVar26[0xf] = -(pcVar1[0xf] == auVar21[7]);
    uVar15 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
    uVar12 = (uint)uVar15;
    while (uVar15 != 0) {
      uVar7 = 0;
      for (uVar8 = uVar12; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      uVar13 = uVar7 + uVar16 & uVar3;
      if (*(ulonglong *)(lVar4 + uVar13 * -8 + -8) == uVar10) {
        *(ulonglong *)(lVar4 + -8 + uVar13 * -8) = uVar19;
        goto LAB_180154cf8;
      }
      uVar15 = (ushort)(uVar12 - 1) & (ushort)uVar12;
      uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar15);
    }
    auVar25[0] = -(*pcVar1 == -1);
    auVar25[1] = -(pcVar1[1] == -1);
    auVar25[2] = -(pcVar1[2] == -1);
    auVar25[3] = -(pcVar1[3] == -1);
    auVar25[4] = -(pcVar1[4] == -1);
    auVar25[5] = -(pcVar1[5] == -1);
    auVar25[6] = -(pcVar1[6] == -1);
    auVar25[7] = -(pcVar1[7] == -1);
    auVar25[8] = -(pcVar1[8] == -1);
    auVar25[9] = -(pcVar1[9] == -1);
    auVar25[10] = -(pcVar1[10] == -1);
    auVar25[0xb] = -(pcVar1[0xb] == -1);
    auVar25[0xc] = -(pcVar1[0xc] == -1);
    auVar25[0xd] = -(pcVar1[0xd] == -1);
    auVar25[0xe] = -(pcVar1[0xe] == -1);
    auVar25[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("index not found",0xf,&DAT_180258b80);
    }
    uVar16 = uVar16 + lVar17 + 0x10;
    lVar17 = lVar17 + 0x10;
  } while( true );
}


