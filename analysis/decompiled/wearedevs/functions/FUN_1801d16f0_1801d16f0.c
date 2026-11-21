/* FUN_1801d16f0 @ 1801d16f0 */

ulonglong FUN_1801d16f0(longlong param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  ushort uVar3;
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
  char cVar18;
  char cVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  char *pcVar27;
  char *pcVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  char *pcVar33;
  char *pcVar34;
  ulonglong uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  if (param_3 <= param_2) {
    return 0;
  }
  if (0x1f < (ulonglong)((longlong)param_3 - (longlong)param_2)) {
    uVar35 = FUN_1801d1430();
    return uVar35;
  }
  if ((ulonglong)((longlong)param_3 - (longlong)param_2) < 0x10) {
    do {
      if (param_3 <= param_2) {
        return 0;
      }
      pcVar1 = param_3 + -1;
      param_3 = param_3 + -1;
    } while (*pcVar1 != *(char *)(param_1 + 0x50));
  }
  else {
    cVar4 = *(char *)(param_1 + 0x40);
    cVar5 = *(char *)(param_1 + 0x41);
    cVar6 = *(char *)(param_1 + 0x42);
    cVar7 = *(char *)(param_1 + 0x43);
    cVar8 = *(char *)(param_1 + 0x44);
    cVar9 = *(char *)(param_1 + 0x45);
    cVar10 = *(char *)(param_1 + 0x46);
    cVar11 = *(char *)(param_1 + 0x47);
    cVar12 = *(char *)(param_1 + 0x48);
    cVar13 = *(char *)(param_1 + 0x49);
    cVar14 = *(char *)(param_1 + 0x4a);
    cVar15 = *(char *)(param_1 + 0x4b);
    cVar16 = *(char *)(param_1 + 0x4c);
    cVar17 = *(char *)(param_1 + 0x4d);
    cVar18 = *(char *)(param_1 + 0x4e);
    cVar19 = *(char *)(param_1 + 0x4f);
    auVar37[0] = -(param_3[-0x10] == cVar4);
    auVar37[1] = -(param_3[-0xf] == cVar5);
    auVar37[2] = -(param_3[-0xe] == cVar6);
    auVar37[3] = -(param_3[-0xd] == cVar7);
    auVar37[4] = -(param_3[-0xc] == cVar8);
    auVar37[5] = -(param_3[-0xb] == cVar9);
    auVar37[6] = -(param_3[-10] == cVar10);
    auVar37[7] = -(param_3[-9] == cVar11);
    auVar37[8] = -(param_3[-8] == cVar12);
    auVar37[9] = -(param_3[-7] == cVar13);
    auVar37[10] = -(param_3[-6] == cVar14);
    auVar37[0xb] = -(param_3[-5] == cVar15);
    auVar37[0xc] = -(param_3[-4] == cVar16);
    auVar37[0xd] = -(param_3[-3] == cVar17);
    auVar37[0xe] = -(param_3[-2] == cVar18);
    auVar37[0xf] = -(param_3[-1] == cVar19);
    uVar3 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
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
    if (uVar3 == 0) {
      param_3 = (char *)((ulonglong)param_3 & 0xfffffffffffffff0);
      do {
        if (param_3 < param_2 + 0x10) {
          if (param_3 <= param_2) {
            return 0;
          }
          auVar36[0] = -(cVar4 == *param_2);
          auVar36[1] = -(cVar5 == param_2[1]);
          auVar36[2] = -(cVar6 == param_2[2]);
          auVar36[3] = -(cVar7 == param_2[3]);
          auVar36[4] = -(cVar8 == param_2[4]);
          auVar36[5] = -(cVar9 == param_2[5]);
          auVar36[6] = -(cVar10 == param_2[6]);
          auVar36[7] = -(cVar11 == param_2[7]);
          auVar36[8] = -(cVar12 == param_2[8]);
          auVar36[9] = -(cVar13 == param_2[9]);
          auVar36[10] = -(cVar14 == param_2[10]);
          auVar36[0xb] = -(cVar15 == param_2[0xb]);
          auVar36[0xc] = -(cVar16 == param_2[0xc]);
          auVar36[0xd] = -(cVar17 == param_2[0xd]);
          auVar36[0xe] = -(cVar18 == param_2[0xe]);
          auVar36[0xf] = -(cVar19 == param_2[0xf]);
          uVar3 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar36[0xf] >> 7) << 0xf;
          iVar2 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          return (ulonglong)(uVar3 != 0);
        }
        pcVar1 = param_3 + -0x10;
        pcVar20 = param_3 + -0xf;
        pcVar21 = param_3 + -0xe;
        pcVar22 = param_3 + -0xd;
        pcVar23 = param_3 + -0xc;
        pcVar24 = param_3 + -0xb;
        pcVar25 = param_3 + -10;
        pcVar26 = param_3 + -9;
        pcVar27 = param_3 + -8;
        pcVar28 = param_3 + -7;
        pcVar29 = param_3 + -6;
        pcVar30 = param_3 + -5;
        pcVar31 = param_3 + -4;
        pcVar32 = param_3 + -3;
        pcVar33 = param_3 + -2;
        pcVar34 = param_3 + -1;
        param_3 = param_3 + -0x10;
        auVar38[0] = -(*pcVar1 == cVar4);
        auVar38[1] = -(*pcVar20 == cVar5);
        auVar38[2] = -(*pcVar21 == cVar6);
        auVar38[3] = -(*pcVar22 == cVar7);
        auVar38[4] = -(*pcVar23 == cVar8);
        auVar38[5] = -(*pcVar24 == cVar9);
        auVar38[6] = -(*pcVar25 == cVar10);
        auVar38[7] = -(*pcVar26 == cVar11);
        auVar38[8] = -(*pcVar27 == cVar12);
        auVar38[9] = -(*pcVar28 == cVar13);
        auVar38[10] = -(*pcVar29 == cVar14);
        auVar38[0xb] = -(*pcVar30 == cVar15);
        auVar38[0xc] = -(*pcVar31 == cVar16);
        auVar38[0xd] = -(*pcVar32 == cVar17);
        auVar38[0xe] = -(*pcVar33 == cVar18);
        auVar38[0xf] = -(*pcVar34 == cVar19);
        uVar3 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
      } while (uVar3 == 0);
    }
    iVar2 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
  }
  return 1;
}


