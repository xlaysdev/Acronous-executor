/* FUN_18015e7c0 @ 18015e7c0 */

undefined8 *
FUN_18015e7c0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ushort uVar11;
  uint uVar12;
  undefined8 *unaff_R14;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (param_2[2] == 0) {
    FUN_1801fa460(param_2,1,param_5,param_6,1);
    unaff_R14 = param_4;
  }
  pauVar2 = (undefined1 (*) [16])*param_2;
  uVar3 = param_2[1];
  bVar6 = (byte)(param_3 >> 0x38);
  bVar13 = bVar6 >> 1;
  auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
  auVar14 = pshuflw(auVar14,auVar14,0);
  bVar7 = false;
  lVar9 = 0;
  do {
    param_3 = param_3 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + param_3);
    auVar16[0] = -(auVar1[0] == auVar14[0]);
    auVar16[1] = -(auVar1[1] == auVar14[1]);
    auVar16[2] = -(auVar1[2] == auVar14[2]);
    auVar16[3] = -(auVar1[3] == auVar14[3]);
    auVar16[4] = -(auVar1[4] == auVar14[4]);
    auVar16[5] = -(auVar1[5] == auVar14[5]);
    auVar16[6] = -(auVar1[6] == auVar14[6]);
    auVar16[7] = -(auVar1[7] == auVar14[7]);
    auVar16[8] = -(auVar1[8] == auVar14[0]);
    auVar16[9] = -(auVar1[9] == auVar14[1]);
    auVar16[10] = -(auVar1[10] == auVar14[2]);
    auVar16[0xb] = -(auVar1[0xb] == auVar14[3]);
    auVar16[0xc] = -(auVar1[0xc] == auVar14[4]);
    auVar16[0xd] = -(auVar1[0xd] == auVar14[5]);
    bVar13 = auVar1[0xf];
    auVar16[0xe] = -(auVar1[0xe] == auVar14[6]);
    auVar16[0xf] = -(bVar13 == auVar14[7]);
    uVar11 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
    uVar12 = (uint)uVar11;
    while (uVar11 != 0) {
      uVar8 = 0;
      for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar10 = uVar8 + param_3 & uVar3;
      uVar4 = *(ulonglong *)((longlong)pauVar2 + uVar10 * -8 + -8);
      if ((ulonglong)param_4[2] <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar4,param_4[2],&PTR_s_C__Users_burne__cargo_registry_s_18025c130);
      }
      if (*(int *)*param_4 == *(int *)(param_4[1] + 8 + uVar4 * 0x10)) {
        param_1[1] = (longlong)pauVar2 + uVar10 * -8;
        param_1[2] = param_2;
        *param_1 = 0;
        return param_1;
      }
      uVar11 = (ushort)(uVar12 - 1) & (ushort)uVar12;
      uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar11);
    }
    if (bVar7) {
LAB_18015e89b:
      auVar15[0] = -(auVar1[0] == -1);
      auVar15[1] = -(auVar1[1] == -1);
      auVar15[2] = -(auVar1[2] == -1);
      auVar15[3] = -(auVar1[3] == -1);
      auVar15[4] = -(auVar1[4] == -1);
      auVar15[5] = -(auVar1[5] == -1);
      auVar15[6] = -(auVar1[6] == -1);
      auVar15[7] = -(auVar1[7] == 0xff);
      auVar15[8] = -(auVar1[8] == -1);
      auVar15[9] = -(auVar1[9] == -1);
      auVar15[10] = -(auVar1[10] == -1);
      auVar15[0xb] = -(auVar1[0xb] == -1);
      auVar15[0xc] = -(auVar1[0xc] == -1);
      auVar15[0xd] = -(auVar1[0xd] == -1);
      auVar15[0xe] = -(auVar1[0xe] == -1);
      auVar15[0xf] = -(bVar13 == 0xff);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') {
        if (-1 < (char)(*pauVar2)[(longlong)unaff_R14]) {
          auVar14 = *pauVar2;
          uVar12 = 0;
          for (uVar8 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar14[0xf] >> 7) << 0xf); (uVar8 & 1) == 0;
              uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          unaff_R14 = (undefined8 *)(ulonglong)uVar12;
        }
        *param_1 = param_2;
        param_1[1] = unaff_R14;
        *(byte *)(param_1 + 2) = bVar6 >> 1;
        return param_1;
      }
      bVar7 = true;
    }
    else {
      uVar11 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar13 >> 7) << 0xf;
      if (uVar11 != 0) {
        uVar12 = 0;
        for (uVar8 = (uint)uVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        unaff_R14 = (undefined8 *)(uVar12 + param_3 & uVar3);
        goto LAB_18015e89b;
      }
      bVar7 = false;
    }
    param_3 = param_3 + lVar9 + 0x10;
    lVar9 = lVar9 + 0x10;
  } while( true );
}


