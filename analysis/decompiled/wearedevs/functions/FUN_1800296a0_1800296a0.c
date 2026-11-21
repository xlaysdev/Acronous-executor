/* FUN_1800296a0 @ 1800296a0 */

void FUN_1800296a0(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  
  lVar2 = param_1[8];
  if (lVar2 != 0) {
    lVar9 = param_1[10];
    if (lVar9 != 0) {
      pauVar10 = (undefined1 (*) [16])param_1[7];
      auVar1 = *pauVar10;
      uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      pauVar13 = pauVar10 + 1;
      do {
        if ((short)uVar7 == 0) {
          do {
            auVar1 = *pauVar13;
            pauVar10 = pauVar10 + -0x160;
            pauVar13 = pauVar13 + 1;
            uVar7 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar7 == 0xffff);
          uVar7 = ~uVar7;
        }
        uVar4 = 0;
        for (uVar6 = uVar7; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar8 = (ulonglong)uVar4;
        if (*(longlong *)(pauVar10[uVar8 * -0x16 + -0x15] + 8) != 0) {
          thunk_FUN_1801d3330(*(undefined8 *)pauVar10[uVar8 * -0x16 + -0x14],
                              *(longlong *)(pauVar10[uVar8 * -0x16 + -0x15] + 8),1);
        }
        lVar12 = *(longlong *)(pauVar10[uVar8 * -0x16 + -0x12] + 8);
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)(*(longlong *)pauVar10[uVar8 * -0x16 + -0x12] + 8);
          do {
            if (puVar11[-1] != 0) {
              thunk_FUN_1801d3330(*puVar11,puVar11[-1],1);
            }
            puVar11 = puVar11 + 4;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        if (*(longlong *)(pauVar10[uVar8 * -0x16 + -0x13] + 8) != 0) {
          thunk_FUN_1801d3330(*(undefined8 *)pauVar10[uVar8 * -0x16 + -0x12],
                              *(longlong *)(pauVar10[uVar8 * -0x16 + -0x13] + 8) << 5,8);
        }
        lVar12 = *(longlong *)(pauVar10[uVar8 * -0x16 + -0x10] + 8);
        if ((!SBORROW8(0,lVar12)) && (lVar12 != 0)) {
          thunk_FUN_1801d3330(*(undefined8 *)pauVar10[uVar8 * -0x16 + -0xf],lVar12,1);
        }
        lVar12 = *(longlong *)(pauVar10[uVar8 * -0x16 + -0xe] + 8);
        if ((!SBORROW8(0,lVar12)) && (lVar12 != 0)) {
          thunk_FUN_1801d3330(*(undefined8 *)pauVar10[uVar8 * -0x16 + -0xd],lVar12,1);
        }
        lVar12 = *(longlong *)pauVar10[uVar8 * -0x16 + -0x10];
        if (lVar12 != 0) {
          puVar11 = (undefined8 *)(*(longlong *)(pauVar10[uVar8 * -0x16 + -0x11] + 8) + 8);
          do {
            if (puVar11[-1] != 0) {
              thunk_FUN_1801d3330(*puVar11,puVar11[-1],1);
            }
            puVar11 = puVar11 + 4;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        if (*(longlong *)pauVar10[uVar8 * -0x16 + -0x11] != 0) {
          thunk_FUN_1801d3330(*(undefined8 *)(pauVar10[uVar8 * -0x16 + -0x11] + 8),
                              *(longlong *)pauVar10[uVar8 * -0x16 + -0x11] << 5,8);
        }
        lVar12 = *(longlong *)pauVar10[uVar8 * -0x16 + -0xc];
        if ((!SBORROW8(0,lVar12)) && (lVar12 != 0)) {
          thunk_FUN_1801d3330(*(undefined8 *)(pauVar10[uVar8 * -0x16 + -0xc] + 8),lVar12,1);
        }
        lVar12 = *(longlong *)pauVar10[uVar8 * -0x16 + -10];
        if ((!SBORROW8(0,lVar12)) && (lVar12 != 0)) {
          thunk_FUN_1801d3330(*(undefined8 *)(pauVar10[uVar8 * -0x16 + -10] + 8),lVar12,1);
        }
        plVar3 = *(longlong **)pauVar10[uVar8 * -0x16 + -6];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            FUN_1801b4f50(pauVar10 + uVar8 * -0x16 + -6);
          }
        }
        uVar7 = uVar7 - 1 & uVar7;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    lVar9 = lVar2 * 0x161 + 0x171;
    if (lVar9 != 0) {
      thunk_FUN_1801d3330(param_1[7] + lVar2 * -0x160 + -0x160,lVar9,0x10);
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
      lVar9 = param_1[0x14];
      if (lVar9 != 0) {
        pauVar10 = (undefined1 (*) [16])param_1[0x11];
        auVar1 = *pauVar10;
        uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        pauVar13 = pauVar10 + 1;
        do {
          if ((short)uVar7 == 0) {
            do {
              auVar1 = *pauVar13;
              pauVar10 = pauVar10 + -0x20;
              pauVar13 = pauVar13 + 1;
              uVar7 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            } while (uVar7 == 0xffff);
            uVar7 = ~uVar7;
          }
          iVar5 = 0;
          for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            iVar5 = iVar5 + 1;
          }
          lVar12 = *(longlong *)((longlong)pauVar10 + (-0x20 - (ulonglong)(uint)(iVar5 << 5)));
          if (lVar12 != 0) {
            thunk_FUN_1801d3330(*(undefined8 *)
                                 ((longlong)pauVar10 + (-0x18 - (ulonglong)(uint)(iVar5 << 5))),
                                lVar12,1);
          }
          lVar9 = lVar9 + -1;
          uVar7 = uVar7 - 1 & uVar7;
        } while (lVar9 != 0);
      }
      lVar9 = lVar2 * 0x21 + 0x31;
      if (lVar9 != 0) {
        thunk_FUN_1801d3330(param_1[0x11] + lVar2 * -0x20 + -0x20,lVar9,0x10);
        return;
      }
    }
  }
  return;
}


