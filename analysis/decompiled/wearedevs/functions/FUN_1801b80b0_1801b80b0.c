/* FUN_1801b80b0 @ 1801b80b0 */

void FUN_1801b80b0(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  
  lVar2 = param_1[8];
  if (lVar2 != 0) {
    lVar8 = param_1[10];
    if (lVar8 != 0) {
      pauVar7 = (undefined1 (*) [16])param_1[7];
      auVar1 = *pauVar7;
      uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      pauVar9 = pauVar7 + 1;
      do {
        if ((short)uVar10 == 0) {
          do {
            auVar1 = *pauVar9;
            pauVar7 = pauVar7 + -0x160;
            pauVar9 = pauVar9 + 1;
            uVar10 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar10 == 0xffff);
          uVar10 = ~uVar10;
        }
        uVar4 = 0;
        for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        FUN_1801c1230(pauVar7 + (ulonglong)uVar4 * -0x16 + -0x16);
        uVar10 = uVar10 - 1 & uVar10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    lVar8 = lVar2 * 0x161 + 0x171;
    if (lVar8 != 0) {
      thunk_FUN_1801d3330(param_1[7] + lVar2 * -0x160 + -0x160,lVar8,0x10);
    }
  }
  lVar2 = param_1[3];
  if ((!SBORROW8(0,lVar2)) && (lVar2 != 0)) {
    thunk_FUN_1801d3330(param_1[4],lVar2,1);
  }
  FUN_180030ad0(param_1);
  if (*param_1 != 0) {
    thunk_FUN_1801d3330(param_1[1],*param_1 * 0x70,8);
  }
  if (param_1[0x11] != 0) {
    FUN_1801b6d50();
    lVar2 = param_1[0x12];
    if (lVar2 != 0) {
      lVar8 = param_1[0x14];
      if (lVar8 != 0) {
        pauVar7 = (undefined1 (*) [16])param_1[0x11];
        auVar1 = *pauVar7;
        uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        pauVar9 = pauVar7 + 1;
        do {
          if ((short)uVar10 == 0) {
            do {
              auVar1 = *pauVar9;
              pauVar7 = pauVar7 + -0x20;
              pauVar9 = pauVar9 + 1;
              uVar10 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            } while (uVar10 == 0xffff);
            uVar10 = ~uVar10;
          }
          iVar5 = 0;
          for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            iVar5 = iVar5 + 1;
          }
          lVar3 = *(longlong *)((longlong)pauVar7 + (-0x20 - (ulonglong)(uint)(iVar5 << 5)));
          if (lVar3 != 0) {
            thunk_FUN_1801d3330(*(undefined8 *)
                                 ((longlong)pauVar7 + (-0x18 - (ulonglong)(uint)(iVar5 << 5))),lVar3
                                ,1);
          }
          lVar8 = lVar8 + -1;
          uVar10 = uVar10 - 1 & uVar10;
        } while (lVar8 != 0);
      }
      lVar8 = lVar2 * 0x21 + 0x31;
      if (lVar8 != 0) {
        thunk_FUN_1801d3330(param_1[0x11] + lVar2 * -0x20 + -0x20,lVar8,0x10);
        return;
      }
    }
  }
  return;
}


