/* FUN_180079f10 @ 180079f10 */

void FUN_180079f10(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  uint uVar12;
  
  FUN_1800a0bb0(param_1 + 0x28);
  lVar9 = *(longlong *)(param_1 + 0x60);
  if (lVar9 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x70);
    if (lVar10 != 0) {
      pauVar8 = *(undefined1 (**) [16])(param_1 + 0x58);
      auVar3 = *pauVar8;
      uVar12 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
      pauVar11 = pauVar8 + 1;
      do {
        if ((short)uVar12 == 0) {
          do {
            auVar3 = *pauVar11;
            pauVar8 = pauVar8 + -0x48;
            pauVar11 = pauVar11 + 1;
            uVar12 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
          } while (uVar12 == 0xffff);
          uVar12 = ~uVar12;
        }
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        FUN_18009efd0((longlong)pauVar8 + (ulonglong)uVar5 * -0x48 + -0x48);
        uVar12 = uVar12 - 1 & uVar12;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    uVar7 = lVar9 * 0x48 + 0x57U & 0xfffffffffffffff0;
    lVar9 = lVar9 + uVar7 + 0x11;
    if (lVar9 != 0) {
      thunk_FUN_1801d3330(*(longlong *)(param_1 + 0x58) - uVar7,lVar9,0x10);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x90);
  if (lVar9 != 0) {
    lVar10 = *(longlong *)(param_1 + 0xa0);
    if (lVar10 != 0) {
      pauVar8 = *(undefined1 (**) [16])(param_1 + 0x88);
      auVar3 = *pauVar8;
      uVar12 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
      pauVar11 = pauVar8 + 1;
      do {
        if ((short)uVar12 == 0) {
          do {
            auVar3 = *pauVar11;
            pauVar8 = pauVar8 + -0x50;
            pauVar11 = pauVar11 + 1;
            uVar12 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
          } while (uVar12 == 0xffff);
          uVar12 = ~uVar12;
        }
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        FUN_18009f210(pauVar8 + (ulonglong)uVar5 * -5 + -5);
        uVar12 = uVar12 - 1 & uVar12;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    lVar10 = lVar9 * 0x51 + 0x61;
    if (lVar10 != 0) {
      thunk_FUN_1801d3330(*(longlong *)(param_1 + 0x88) + lVar9 * -0x50 + -0x50,lVar10,0x10);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0xd0);
  if (lVar9 != 0) {
    LOCK();
    *(undefined1 *)(lVar9 + 0x40) = 1;
    UNLOCK();
    LOCK();
    cVar1 = *(char *)(lVar9 + 0x20);
    *(char *)(lVar9 + 0x20) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar10 = *(longlong *)(lVar9 + 0x10);
      *(undefined8 *)(lVar9 + 0x10) = 0;
      LOCK();
      uVar2 = *(undefined1 *)(lVar9 + 0x20);
      *(undefined1 *)(lVar9 + 0x20) = 0;
      UNLOCK();
      if (lVar10 != 0) {
        (**(code **)(lVar10 + 8))(*(undefined8 *)(lVar9 + 0x18),uVar2);
      }
    }
    LOCK();
    cVar1 = *(char *)(lVar9 + 0x38);
    *(char *)(lVar9 + 0x38) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar10 = *(longlong *)(lVar9 + 0x28);
      *(undefined8 *)(lVar9 + 0x28) = 0;
      if (lVar10 != 0) {
        (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar9 + 0x30));
      }
      LOCK();
      *(undefined1 *)(lVar9 + 0x38) = 0;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0xd0);
      LOCK();
      *plVar4 = *plVar4 + -1;
      lVar9 = *plVar4;
      UNLOCK();
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0xd0);
      LOCK();
      *plVar4 = *plVar4 + -1;
      lVar9 = *plVar4;
      UNLOCK();
    }
    if (lVar9 == 0) {
      FUN_18003cda0();
    }
  }
  plVar4 = *(longlong **)(param_1 + 0xb8);
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    FUN_18003cc40(param_1 + 0xb8);
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_18003cc40();
      return;
    }
  }
  return;
}


