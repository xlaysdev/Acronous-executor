/* FUN_1800a2ea0 @ 1800a2ea0 */

void FUN_1800a2ea0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  
  lVar7 = param_1[3];
  if (lVar7 != 0) {
    pauVar8 = (undefined1 (*) [16])*param_1;
    auVar1 = *pauVar8;
    uVar9 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    pauVar6 = pauVar8 + 1;
    do {
      if ((short)uVar9 == 0) {
        do {
          auVar1 = *pauVar6;
          pauVar8 = pauVar8 + -0x20;
          pauVar6 = pauVar6 + 1;
          uVar9 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar9 == 0xffff);
        uVar9 = ~uVar9;
      }
      iVar4 = 0;
      for (uVar5 = uVar9; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      uVar2 = *(undefined8 *)((longlong)pauVar8 + (-0x10 - (ulonglong)(uint)(iVar4 << 5)));
      puVar3 = *(undefined8 **)((longlong)pauVar8 + (-8 - (ulonglong)(uint)(iVar4 << 5)));
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(uVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
      }
      uVar9 = uVar9 - 1 & uVar9;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}


