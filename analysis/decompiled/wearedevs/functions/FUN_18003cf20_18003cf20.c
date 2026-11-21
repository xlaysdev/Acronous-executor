/* FUN_18003cf20 @ 18003cf20 */

void FUN_18003cf20(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  
  lVar2 = *param_1;
  FUN_1800a0bb0(lVar2 + 0x28);
  lVar8 = *(longlong *)(lVar2 + 0x60);
  if (lVar8 != 0) {
    lVar9 = *(longlong *)(lVar2 + 0x70);
    if (lVar9 != 0) {
      pauVar7 = *(undefined1 (**) [16])(lVar2 + 0x58);
      auVar1 = *pauVar7;
      uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      pauVar10 = pauVar7 + 1;
      do {
        if ((short)uVar11 == 0) {
          do {
            auVar1 = *pauVar10;
            pauVar7 = pauVar7 + -0x48;
            pauVar10 = pauVar10 + 1;
            uVar11 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar11 == 0xffff);
          uVar11 = ~uVar11;
        }
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        FUN_18009efd0((longlong)pauVar7 + (ulonglong)uVar4 * -0x48 + -0x48);
        uVar11 = uVar11 - 1 & uVar11;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    uVar6 = lVar8 * 0x48 + 0x57U & 0xfffffffffffffff0;
    lVar8 = lVar8 + uVar6 + 0x11;
    if (lVar8 != 0) {
      thunk_FUN_1801d3330(*(longlong *)(lVar2 + 0x58) - uVar6,lVar8,0x10);
    }
  }
  lVar8 = *(longlong *)(lVar2 + 0x90);
  if (lVar8 != 0) {
    lVar9 = *(longlong *)(lVar2 + 0xa0);
    if (lVar9 != 0) {
      pauVar7 = *(undefined1 (**) [16])(lVar2 + 0x88);
      auVar1 = *pauVar7;
      uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      pauVar10 = pauVar7 + 1;
      do {
        if ((short)uVar11 == 0) {
          do {
            auVar1 = *pauVar10;
            pauVar7 = pauVar7 + -0x50;
            pauVar10 = pauVar10 + 1;
            uVar11 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar11 == 0xffff);
          uVar11 = ~uVar11;
        }
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        FUN_18009f210(pauVar7 + (ulonglong)uVar4 * -5 + -5);
        uVar11 = uVar11 - 1 & uVar11;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    lVar9 = lVar8 * 0x51 + 0x61;
    if (lVar9 != 0) {
      thunk_FUN_1801d3330(*(longlong *)(lVar2 + 0x88) + lVar8 * -0x50 + -0x50,lVar9,0x10);
    }
  }
  plVar3 = *(longlong **)(lVar2 + 0xd0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(undefined1 *)(plVar3 + 8) = 1;
    UNLOCK();
    LOCK();
    lVar8 = plVar3[4];
    *(char *)(plVar3 + 4) = '\x01';
    UNLOCK();
    if ((char)lVar8 == '\0') {
      lVar8 = plVar3[2];
      plVar3[2] = 0;
      LOCK();
      lVar9 = plVar3[4];
      *(undefined1 *)(plVar3 + 4) = 0;
      UNLOCK();
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 8))(plVar3[3],(char)lVar9);
      }
    }
    LOCK();
    lVar8 = plVar3[7];
    *(char *)(plVar3 + 7) = '\x01';
    UNLOCK();
    if ((char)lVar8 == '\0') {
      lVar8 = plVar3[5];
      plVar3[5] = 0;
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x18))(plVar3[6]);
      }
      LOCK();
      *(undefined1 *)(plVar3 + 7) = 0;
      UNLOCK();
      LOCK();
      *plVar3 = *plVar3 + -1;
      lVar8 = *plVar3;
      UNLOCK();
    }
    else {
      LOCK();
      *plVar3 = *plVar3 + -1;
      lVar8 = *plVar3;
      UNLOCK();
    }
    if (lVar8 == 0) {
      FUN_18003cda0(lVar2 + 0xd0);
    }
  }
  plVar3 = *(longlong **)(lVar2 + 0xb8);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003cc40(lVar2 + 0xb8);
  }
  plVar3 = *(longlong **)(lVar2 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cc40();
    }
  }
  if (lVar2 != -1) {
    LOCK();
    plVar3 = (longlong *)(lVar2 + 8);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      thunk_FUN_1801d3330(lVar2,0xe8,8);
      return;
    }
  }
  return;
}


