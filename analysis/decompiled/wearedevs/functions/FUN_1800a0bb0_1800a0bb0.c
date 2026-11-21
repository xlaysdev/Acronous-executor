/* FUN_1800a0bb0 @ 1800a0bb0 */

void FUN_1800a0bb0(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar7 = param_1[3];
    if (lVar7 != 0) {
      pauVar9 = (undefined1 (*) [16])*param_1;
      auVar1 = *pauVar9;
      uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      pauVar10 = pauVar9 + 1;
      do {
        if ((short)uVar8 == 0) {
          do {
            auVar1 = *pauVar10;
            pauVar9 = pauVar9 + -0x30;
            pauVar10 = pauVar10 + 1;
            uVar8 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar8 == 0xffff);
          uVar8 = ~uVar8;
        }
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar6 = (ulonglong)uVar4;
        if (1 < (byte)pauVar9[uVar6 * -3 + -3][0]) {
          plVar3 = *(longlong **)(pauVar9[uVar6 * -3 + -3] + 8);
          (**(code **)(*plVar3 + 0x20))(plVar3[3],plVar3[1],plVar3[2]);
          thunk_FUN_1801d3330(plVar3,0x20,8);
        }
        uVar8 = uVar8 - 1 & uVar8;
        lVar7 = lVar7 + -1;
        (**(code **)(*(longlong *)pauVar9[uVar6 * -3 + -2] + 0x20))
                  (*(undefined8 *)(pauVar9[uVar6 * -3 + -1] + 8),
                   *(undefined8 *)(pauVar9[uVar6 * -3 + -2] + 8),
                   *(undefined8 *)pauVar9[uVar6 * -3 + -1]);
      } while (lVar7 != 0);
    }
    lVar7 = lVar2 * 0x31 + 0x41;
    if (lVar7 != 0) {
      thunk_FUN_1801d3330(*param_1 + lVar2 * -0x30 + -0x30,lVar7,0x10);
      return;
    }
  }
  return;
}


