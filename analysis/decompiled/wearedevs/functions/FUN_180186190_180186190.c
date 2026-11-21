/* FUN_180186190 @ 180186190 */

void FUN_180186190(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  
  lVar2 = param_1[7];
  while (lVar2 != 0) {
    uVar6 = (uint)*(ushort *)(param_1 + 6);
    lVar8 = param_1[3];
    if (*(ushort *)(param_1 + 6) == 0) {
      pauVar7 = (undefined1 (*) [16])param_1[4];
      do {
        auVar1 = *pauVar7;
        lVar8 = lVar8 + -0x200;
        pauVar7 = pauVar7 + 1;
        uVar6 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      } while (uVar6 == 0xffff);
      uVar6 = ~uVar6;
      param_1[4] = (longlong)pauVar7;
      param_1[3] = lVar8;
    }
    uVar5 = (ushort)uVar6;
    iVar4 = 0;
    for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      iVar4 = iVar4 + 1;
    }
    *(ushort *)(param_1 + 6) = uVar5 - 1 & uVar5;
    lVar8 = lVar8 - (ulonglong)(uint)(iVar4 << 5);
    param_1[7] = lVar2 + -1;
    CloseHandle(*(HANDLE *)(lVar8 + -8));
    plVar3 = *(longlong **)(lVar8 + -0x18);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1801e3970(lVar8 + -0x18);
    }
    plVar3 = *(longlong **)(lVar8 + -0x10);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1801e3850(lVar8 + -0x10);
    }
    lVar2 = param_1[7];
  }
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    return;
  }
  thunk_FUN_1801d3330(param_1[2]);
  return;
}


