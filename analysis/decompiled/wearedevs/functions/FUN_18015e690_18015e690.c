/* FUN_18015e690 @ 18015e690 */

longlong FUN_18015e690(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  pauVar5 = (undefined1 (*) [16])*param_1;
  uVar6 = param_1[1];
  uVar8 = uVar6 & param_2;
  auVar1 = *(undefined1 (*) [16])(*pauVar5 + uVar8);
  uVar10 = auVar1._0_8_;
  uVar2 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
  uVar3 = (uint)uVar2;
  if (uVar2 == 0) {
    lVar9 = 0x10;
    do {
      uVar8 = uVar8 + lVar9 & uVar6;
      auVar1 = *(undefined1 (*) [16])(*pauVar5 + uVar8);
      uVar10 = auVar1._0_8_;
      lVar9 = lVar9 + 0x10;
      uVar3 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                             (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    } while (uVar3 == 0);
  }
  uVar4 = 0;
  for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
    uVar4 = uVar4 + 1;
  }
  uVar8 = uVar4 + uVar8 & uVar6;
  bVar7 = (*pauVar5)[uVar8];
  if (-1 < (char)bVar7) {
    auVar1 = *pauVar5;
    uVar10 = auVar1._0_8_;
    uVar3 = 0;
    for (uVar4 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar1[0xf] >> 7) << 0xf); (uVar4 & 1) == 0;
        uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    uVar8 = (ulonglong)uVar3;
    bVar7 = (*pauVar5)[uVar8];
  }
  lVar9 = param_1[2];
  bVar7 = bVar7 & 1;
  if (bVar7 != 0 && lVar9 == 0) {
    FUN_1801fa460(uVar10,1,param_4,param_5,1);
    pauVar5 = (undefined1 (*) [16])*param_1;
    uVar6 = param_1[1];
    uVar8 = FUN_18015e640(pauVar5,uVar6,param_2);
    lVar9 = param_1[2];
    bVar7 = (*pauVar5)[uVar8] & 1;
  }
  param_1[2] = lVar9 - (ulonglong)bVar7;
  bVar7 = (byte)(param_2 >> 0x39);
  (*pauVar5)[uVar8] = bVar7;
  pauVar5[1][uVar8 - 0x10 & uVar6] = bVar7;
  param_1[3] = param_1[3] + 1;
  *(undefined8 *)((longlong)pauVar5 + uVar8 * -8 + -8) = param_3;
  return (longlong)pauVar5 + uVar8 * -8;
}


