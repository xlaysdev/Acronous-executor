/* FUN_18015e150 @ 18015e150 */

longlong FUN_18015e150(longlong param_1,int *param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      lVar9 = *(longlong *)(param_1 + 8);
      uVar7 = 0;
      if (*param_2 != *(int *)(lVar9 + 8)) {
        return 0;
      }
LAB_18015e17c:
      return uVar7 * 0x10 + lVar9 + 0xc;
    }
    uVar5 = FUN_180153f70(param_1 + 0x38);
    lVar9 = *(longlong *)(param_1 + 8);
    bVar11 = (byte)(uVar5 >> 0x39);
    auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar12 = pshuflw(auVar12,auVar12,0);
    lVar10 = 0;
    while( true ) {
      uVar5 = uVar5 & *(ulonglong *)(param_1 + 0x20);
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x18) + uVar5);
      auVar14[0] = -(auVar1[0] == auVar12[0]);
      auVar14[1] = -(auVar1[1] == auVar12[1]);
      auVar14[2] = -(auVar1[2] == auVar12[2]);
      auVar14[3] = -(auVar1[3] == auVar12[3]);
      auVar14[4] = -(auVar1[4] == auVar12[4]);
      auVar14[5] = -(auVar1[5] == auVar12[5]);
      auVar14[6] = -(auVar1[6] == auVar12[6]);
      auVar14[7] = -(auVar1[7] == auVar12[7]);
      auVar14[8] = -(auVar1[8] == auVar12[0]);
      auVar14[9] = -(auVar1[9] == auVar12[1]);
      auVar14[10] = -(auVar1[10] == auVar12[2]);
      auVar14[0xb] = -(auVar1[0xb] == auVar12[3]);
      auVar14[0xc] = -(auVar1[0xc] == auVar12[4]);
      auVar14[0xd] = -(auVar1[0xd] == auVar12[5]);
      auVar14[0xe] = -(auVar1[0xe] == auVar12[6]);
      auVar14[0xf] = -(auVar1[0xf] == auVar12[7]);
      uVar6 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar6;
      while (uVar6 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar7 = *(ulonglong *)
                 (*(longlong *)(param_1 + 0x18) +
                  (uVar3 + uVar5 & *(ulonglong *)(param_1 + 0x20)) * -8 + -8);
        if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar7,uVar2,&DAT_180258b58);
        }
        if (*param_2 == *(int *)(lVar9 + 8 + uVar7 * 0x10)) goto LAB_18015e17c;
        uVar6 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar6);
      }
      auVar13[0] = -(auVar1[0] == -1);
      auVar13[1] = -(auVar1[1] == -1);
      auVar13[2] = -(auVar1[2] == -1);
      auVar13[3] = -(auVar1[3] == -1);
      auVar13[4] = -(auVar1[4] == -1);
      auVar13[5] = -(auVar1[5] == -1);
      auVar13[6] = -(auVar1[6] == -1);
      auVar13[7] = -(auVar1[7] == -1);
      auVar13[8] = -(auVar1[8] == -1);
      auVar13[9] = -(auVar1[9] == -1);
      auVar13[10] = -(auVar1[10] == -1);
      auVar13[0xb] = -(auVar1[0xb] == -1);
      auVar13[0xc] = -(auVar1[0xc] == -1);
      auVar13[0xd] = -(auVar1[0xd] == -1);
      auVar13[0xe] = -(auVar1[0xe] == -1);
      auVar13[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar5 = uVar5 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  return 0;
}


