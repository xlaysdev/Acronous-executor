/* FUN_1800a0d60 @ 1800a0d60 */

void FUN_1800a0d60(longlong *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  
  lVar7 = param_1[1];
  if (lVar7 != 0) {
    lVar6 = param_1[3];
    if (lVar6 != 0) {
      pauVar8 = (undefined1 (*) [16])*param_1;
      auVar1 = *pauVar8;
      uVar4 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      pauVar9 = pauVar8 + 1;
      do {
        if ((short)uVar4 == 0) {
          do {
            auVar1 = *pauVar9;
            pauVar8 = pauVar8 + -0x48;
            pauVar9 = pauVar9 + 1;
            uVar4 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar4 == 0xffff);
          uVar4 = ~uVar4;
        }
        uVar2 = 0;
        for (uVar3 = uVar4; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        uVar4 = uVar4 - 1 & uVar4;
        FUN_18009efd0((longlong)pauVar8 + (ulonglong)uVar2 * -0x48 + -0x48);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar5 = lVar7 * 0x48 + 0x57U & 0xfffffffffffffff0;
    lVar7 = lVar7 + uVar5 + 0x11;
    if (lVar7 != 0) {
      thunk_FUN_1801d3330(*param_1 - uVar5,lVar7,0x10);
      return;
    }
  }
  return;
}


