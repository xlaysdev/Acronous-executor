/* FUN_1801b6d50 @ 1801b6d50 */

void FUN_1801b6d50(undefined8 *param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  uint uVar4;
  BOOL BVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  longlong local_40;
  undefined4 local_38;
  
  lVar7 = param_1[3];
  if (lVar7 != 0) {
    pauVar6 = (undefined1 (*) [16])*param_1;
    pauVar8 = pauVar6 + 1;
    auVar1 = *pauVar6;
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
    do {
      if ((short)uVar4 == 0) {
        do {
          auVar1 = *pauVar8;
          pauVar6 = pauVar6 + -0x20;
          pauVar8 = pauVar8 + 1;
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
      iVar2 = 0;
      for (uVar3 = uVar4; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        iVar2 = iVar2 + 1;
      }
      uVar4 = uVar4 - 1 & uVar4;
      PdhRemoveCounter(*(undefined8 *)((longlong)pauVar6 + (-8 - (ulonglong)(uint)(iVar2 << 5))));
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (((1 < (longlong)param_1[7] + 1U) && (BVar5 = CloseHandle((HANDLE)param_1[7]), BVar5 == 0)) &&
     (local_40 = FUN_1801c9650(), local_38 = param_2, local_40 != 0)) {
    FUN_180111960(&local_40);
  }
  if (1 < param_1[6] + 1) {
    PdhCloseQuery();
  }
  return;
}


