/* FUN_1801d1600 @ 1801d1600 */

ulonglong FUN_1801d1600(longlong param_1,char *param_2,char *param_3)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
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
  uint uVar18;
  ulonglong uVar19;
  char *pcVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  if (param_3 <= param_2) {
    return 0;
  }
  if (0x1f < (ulonglong)((longlong)param_3 - (longlong)param_2)) {
    uVar19 = FUN_1801d1280();
    return uVar19;
  }
  if ((ulonglong)((longlong)param_3 - (longlong)param_2) < 0x10) {
    while (*param_2 != *(char *)(param_1 + 0x50)) {
      param_2 = param_2 + 1;
      if (param_2 == param_3) {
        return 0;
      }
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x40);
    cVar3 = *(char *)(param_1 + 0x41);
    cVar4 = *(char *)(param_1 + 0x42);
    cVar5 = *(char *)(param_1 + 0x43);
    cVar6 = *(char *)(param_1 + 0x44);
    cVar7 = *(char *)(param_1 + 0x45);
    cVar8 = *(char *)(param_1 + 0x46);
    cVar9 = *(char *)(param_1 + 0x47);
    cVar10 = *(char *)(param_1 + 0x48);
    cVar11 = *(char *)(param_1 + 0x49);
    cVar12 = *(char *)(param_1 + 0x4a);
    cVar13 = *(char *)(param_1 + 0x4b);
    cVar14 = *(char *)(param_1 + 0x4c);
    cVar15 = *(char *)(param_1 + 0x4d);
    cVar16 = *(char *)(param_1 + 0x4e);
    cVar17 = *(char *)(param_1 + 0x4f);
    auVar22[0] = -(*param_2 == cVar2);
    auVar22[1] = -(param_2[1] == cVar3);
    auVar22[2] = -(param_2[2] == cVar4);
    auVar22[3] = -(param_2[3] == cVar5);
    auVar22[4] = -(param_2[4] == cVar6);
    auVar22[5] = -(param_2[5] == cVar7);
    auVar22[6] = -(param_2[6] == cVar8);
    auVar22[7] = -(param_2[7] == cVar9);
    auVar22[8] = -(param_2[8] == cVar10);
    auVar22[9] = -(param_2[9] == cVar11);
    auVar22[10] = -(param_2[10] == cVar12);
    auVar22[0xb] = -(param_2[0xb] == cVar13);
    auVar22[0xc] = -(param_2[0xc] == cVar14);
    auVar22[0xd] = -(param_2[0xd] == cVar15);
    auVar22[0xe] = -(param_2[0xe] == cVar16);
    auVar22[0xf] = -(param_2[0xf] == cVar17);
    uVar1 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
    if (uVar1 == 0) {
      for (pcVar20 = (char *)(((ulonglong)param_2 & 0xfffffffffffffff0) + 0x10);
          pcVar20 <= param_3 + -0x10; pcVar20 = pcVar20 + 0x10) {
        auVar23[0] = -(*pcVar20 == cVar2);
        auVar23[1] = -(pcVar20[1] == cVar3);
        auVar23[2] = -(pcVar20[2] == cVar4);
        auVar23[3] = -(pcVar20[3] == cVar5);
        auVar23[4] = -(pcVar20[4] == cVar6);
        auVar23[5] = -(pcVar20[5] == cVar7);
        auVar23[6] = -(pcVar20[6] == cVar8);
        auVar23[7] = -(pcVar20[7] == cVar9);
        auVar23[8] = -(pcVar20[8] == cVar10);
        auVar23[9] = -(pcVar20[9] == cVar11);
        auVar23[10] = -(pcVar20[10] == cVar12);
        auVar23[0xb] = -(pcVar20[0xb] == cVar13);
        auVar23[0xc] = -(pcVar20[0xc] == cVar14);
        auVar23[0xd] = -(pcVar20[0xd] == cVar15);
        auVar23[0xe] = -(pcVar20[0xe] == cVar16);
        auVar23[0xf] = -(pcVar20[0xf] == cVar17);
        uVar1 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
        if (uVar1 != 0) {
          for (uVar18 = (uint)uVar1; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          }
          return 1;
        }
      }
      if (param_3 <= pcVar20) {
        return 0;
      }
      auVar21[0] = -(cVar2 == param_3[-0x10]);
      auVar21[1] = -(cVar3 == param_3[-0xf]);
      auVar21[2] = -(cVar4 == param_3[-0xe]);
      auVar21[3] = -(cVar5 == param_3[-0xd]);
      auVar21[4] = -(cVar6 == param_3[-0xc]);
      auVar21[5] = -(cVar7 == param_3[-0xb]);
      auVar21[6] = -(cVar8 == param_3[-10]);
      auVar21[7] = -(cVar9 == param_3[-9]);
      auVar21[8] = -(cVar10 == param_3[-8]);
      auVar21[9] = -(cVar11 == param_3[-7]);
      auVar21[10] = -(cVar12 == param_3[-6]);
      auVar21[0xb] = -(cVar13 == param_3[-5]);
      auVar21[0xc] = -(cVar14 == param_3[-4]);
      auVar21[0xd] = -(cVar15 == param_3[-3]);
      auVar21[0xe] = -(cVar16 == param_3[-2]);
      auVar21[0xf] = -(cVar17 == param_3[-1]);
      uVar1 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
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
      for (uVar18 = (uint)uVar1; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
      }
      return (ulonglong)(uVar1 != 0);
    }
    for (uVar18 = (uint)uVar1; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
    }
  }
  return 1;
}


