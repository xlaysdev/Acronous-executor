/* FUN_18002a190 @ 18002a190 */

void FUN_18002a190(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
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
            pauVar9 = pauVar9 + -0x20;
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
        iVar5 = 0;
        for (uVar6 = uVar8; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          iVar5 = iVar5 + 1;
        }
        uVar3 = *(undefined8 *)((longlong)pauVar9 + (-0x10 - (ulonglong)(uint)(iVar5 << 5)));
        puVar4 = *(undefined8 **)((longlong)pauVar9 + (-8 - (ulonglong)(uint)(iVar5 << 5)));
        if ((code *)*puVar4 != (code *)0x0) {
          (*(code *)*puVar4)(uVar3);
        }
        if (puVar4[1] != 0) {
          thunk_FUN_1801d3330(uVar3,puVar4[1],puVar4[2]);
        }
        uVar8 = uVar8 - 1 & uVar8;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    lVar7 = lVar2 * 0x21 + 0x31;
    if (lVar7 != 0) {
      thunk_FUN_1801d3330(*param_1 + lVar2 * -0x20 + -0x20,lVar7,0x10);
      return;
    }
  }
  return;
}


