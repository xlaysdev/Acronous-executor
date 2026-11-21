/* FUN_1800a0970 @ 1800a0970 */

void FUN_1800a0970(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar6 = param_1[3];
    if (lVar6 != 0) {
      pauVar7 = (undefined1 (*) [16])*param_1;
      auVar1 = *pauVar7;
      uVar5 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      pauVar8 = pauVar7 + 1;
      do {
        if ((short)uVar5 == 0) {
          do {
            auVar1 = *pauVar8;
            pauVar7 = pauVar7 + -0x50;
            pauVar8 = pauVar8 + 1;
            uVar5 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar5 == 0xffff);
          uVar5 = ~uVar5;
        }
        uVar3 = 0;
        for (uVar4 = uVar5; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar5 = uVar5 - 1 & uVar5;
        FUN_18009f210(pauVar7 + (ulonglong)uVar3 * -5 + -5);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    lVar6 = lVar2 * 0x51 + 0x61;
    if (lVar6 != 0) {
      thunk_FUN_1801d3330(*param_1 + lVar2 * -0x50 + -0x50,lVar6,0x10);
      return;
    }
  }
  return;
}


