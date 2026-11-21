/* FUN_1801bb170 @ 1801bb170 */

undefined8 * FUN_1801bb170(undefined8 *param_1,undefined8 *param_2,longlong param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong local_48;
  void *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  plVar9 = &local_48;
  local_48 = param_3;
  local_40 = param_4;
  uVar7 = FUN_1801bb830(param_2 + 4);
  if (param_2[2] == 0) {
    plVar9 = (longlong *)0x1;
    FUN_1801fd690(param_2);
  }
  pauVar2 = (undefined1 (*) [16])*param_2;
  uVar3 = param_2[1];
  bVar6 = (byte)(uVar7 >> 0x38);
  bVar14 = bVar6 >> 1;
  auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
  auVar15 = pshuflw(auVar15,auVar15,0);
  bVar5 = false;
  lVar10 = 0;
  do {
    uVar7 = uVar7 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar7);
    auVar17[0] = -(auVar1[0] == auVar15[0]);
    auVar17[1] = -(auVar1[1] == auVar15[1]);
    auVar17[2] = -(auVar1[2] == auVar15[2]);
    auVar17[3] = -(auVar1[3] == auVar15[3]);
    auVar17[4] = -(auVar1[4] == auVar15[4]);
    auVar17[5] = -(auVar1[5] == auVar15[5]);
    auVar17[6] = -(auVar1[6] == auVar15[6]);
    auVar17[7] = -(auVar1[7] == auVar15[7]);
    auVar17[8] = -(auVar1[8] == auVar15[0]);
    auVar17[9] = -(auVar1[9] == auVar15[1]);
    auVar17[10] = -(auVar1[10] == auVar15[2]);
    auVar17[0xb] = -(auVar1[0xb] == auVar15[3]);
    auVar17[0xc] = -(auVar1[0xc] == auVar15[4]);
    auVar17[0xd] = -(auVar1[0xd] == auVar15[5]);
    bVar14 = auVar1[0xf];
    auVar17[0xe] = -(auVar1[0xe] == auVar15[6]);
    auVar17[0xf] = -(bVar14 == auVar15[7]);
    uVar12 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
    uVar11 = (uint)uVar12;
    while (uVar12 != 0) {
      uVar8 = 0;
      for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar13 = uVar8 + uVar7 & uVar3;
      if (param_3 == *(longlong *)pauVar2[uVar13 * -0x16 + -0x16]) {
        memcpy(param_1,pauVar2[uVar13 * -0x16 + -0x16] + 8,0x158);
        memcpy(pauVar2[uVar13 * -0x16 + -0x16] + 8,local_40,0x158);
        return param_1;
      }
      uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
      uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
    }
    if (bVar5) {
LAB_1801bb248:
      auVar16[0] = -(auVar1[0] == -1);
      auVar16[1] = -(auVar1[1] == -1);
      auVar16[2] = -(auVar1[2] == -1);
      auVar16[3] = -(auVar1[3] == -1);
      auVar16[4] = -(auVar1[4] == -1);
      auVar16[5] = -(auVar1[5] == -1);
      auVar16[6] = -(auVar1[6] == -1);
      auVar16[7] = -(auVar1[7] == 0xff);
      auVar16[8] = -(auVar1[8] == -1);
      auVar16[9] = -(auVar1[9] == -1);
      auVar16[10] = -(auVar1[10] == -1);
      auVar16[0xb] = -(auVar1[0xb] == -1);
      auVar16[0xc] = -(auVar1[0xc] == -1);
      auVar16[0xd] = -(auVar1[0xd] == -1);
      auVar16[0xe] = -(auVar1[0xe] == -1);
      auVar16[0xf] = -(bVar14 == 0xff);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') {
        bVar14 = (*pauVar2)[(longlong)plVar9];
        if (-1 < (char)bVar14) {
          auVar15 = *pauVar2;
          uVar11 = 0;
          for (uVar8 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
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
                                      (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar15[0xf] >> 7) << 0xf); (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          plVar9 = (longlong *)(ulonglong)uVar11;
          bVar14 = (*pauVar2)[(longlong)plVar9];
        }
        bVar6 = bVar6 >> 1;
        (*pauVar2)[(longlong)plVar9] = bVar6;
        pauVar2[1][(ulonglong)(plVar9 + -2) & uVar3] = bVar6;
        param_2[2] = param_2[2] - (ulonglong)(bVar14 & 1);
        param_2[3] = param_2[3] + 1;
        *(longlong *)pauVar2[(longlong)plVar9 * -0x16 + -0x16] = param_3;
        memcpy(pauVar2[(longlong)plVar9 * -0x16 + -0x16] + 8,local_40,0x158);
        *param_1 = 2;
        return param_1;
      }
      bVar5 = true;
    }
    else {
      uVar12 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar14 >> 7) << 0xf;
      if (uVar12 != 0) {
        uVar11 = 0;
        for (uVar8 = (uint)uVar12; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        plVar9 = (longlong *)(uVar11 + uVar7 & uVar3);
        goto LAB_1801bb248;
      }
      bVar5 = false;
      plVar9 = (longlong *)0x0;
    }
    uVar7 = uVar7 + lVar10 + 0x10;
    lVar10 = lVar10 + 0x10;
  } while( true );
}


