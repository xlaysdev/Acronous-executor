/* FUN_18019d050 @ 18019d050 */

void FUN_18019d050(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  size_t _Size;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  
  if (*param_1 != param_1[1]) {
    *param_1 = param_1[1];
  }
  *param_1 = 1;
  param_1[1] = 1;
  _Size = param_1[4];
  if (_Size != 0) {
    plVar5 = (longlong *)param_1[2];
    lVar13 = param_1[3];
    lVar21 = plVar5[2];
    if (lVar21 == lVar13) {
      puVar18 = (undefined1 *)param_1[5];
      puVar14 = (undefined1 *)param_1[6];
    }
    else {
      lVar12 = plVar5[1];
      puVar14 = (undefined1 *)param_1[6];
      puVar17 = (undefined1 *)param_1[5];
      do {
        if (puVar17 == puVar14) {
          return;
        }
        puVar18 = puVar17 + 1;
        param_1[5] = (longlong)puVar18;
        *(undefined1 *)(lVar12 + lVar21) = *puVar17;
        plVar5[2] = plVar5[2] + 1;
        lVar21 = lVar21 + 1;
        puVar17 = puVar18;
      } while (lVar13 != lVar21);
    }
    uVar20 = (longlong)puVar14 - (longlong)puVar18;
    lVar21 = lVar13;
    if (uVar20 != 0) {
      if (*plVar5 - (lVar13 + _Size) < uVar20) {
        FUN_1801f6a80(plVar5,lVar13 + _Size,uVar20,1,1);
      }
      lVar21 = uVar20 + lVar13;
      memmove((void *)(plVar5[1] + lVar21),(void *)(lVar13 + plVar5[1]),_Size);
      param_1[3] = lVar21;
      lVar13 = plVar5[2];
      if (lVar13 != lVar21) {
        lVar12 = plVar5[1];
        puVar17 = puVar18;
        do {
          if (puVar17 == puVar14) {
            return;
          }
          puVar18 = puVar17 + 1;
          param_1[5] = (longlong)puVar18;
          *(undefined1 *)(lVar12 + lVar13) = *puVar17;
          plVar5[2] = plVar5[2] + 1;
          lVar13 = lVar13 + 1;
          puVar17 = puVar18;
        } while (lVar21 != lVar13);
      }
    }
    lVar13 = (longlong)puVar14 - (longlong)puVar18;
    if (lVar13 < 0) {
      uVar22 = 0;
LAB_18019d2bb:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar22,lVar13);
    }
    uVar20 = (longlong)puVar14 - (longlong)puVar18;
    if (uVar20 == 0) {
      return;
    }
    FUN_180027490();
    uVar22 = 1;
    lVar12 = thunk_FUN_1801d32d0(lVar13,1);
    if (lVar12 == 0) goto LAB_18019d2bb;
    uVar23 = 0;
    if ((0x1f < uVar20) && (0x1f < (ulonglong)(lVar12 - (longlong)puVar18))) {
      uVar23 = uVar20 & 0xffffffffffffffe0;
      puVar17 = puVar18 + uVar23;
      uVar15 = 0;
      do {
        puVar4 = (undefined4 *)(puVar18 + uVar15);
        uVar7 = puVar4[1];
        uVar8 = puVar4[2];
        uVar9 = puVar4[3];
        uVar22 = *(undefined8 *)(puVar18 + uVar15 + 0x10);
        uVar10 = *(undefined8 *)((longlong)(puVar18 + uVar15 + 0x10) + 8);
        puVar1 = (undefined4 *)(lVar12 + uVar15);
        *puVar1 = *puVar4;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        puVar3 = (undefined8 *)(lVar12 + 0x10 + uVar15);
        *puVar3 = uVar22;
        puVar3[1] = uVar10;
        uVar15 = uVar15 + 0x20;
      } while (uVar23 != uVar15);
      puVar18 = puVar17;
      if (uVar20 == uVar23) goto LAB_18019d393;
    }
    uVar19 = (int)puVar14 - (int)puVar18 & 3;
    uVar20 = (ulonglong)uVar19;
    puVar17 = puVar18;
    puVar16 = puVar18;
    if (uVar19 != 0) {
      do {
        puVar17 = puVar16 + 1;
        *(undefined1 *)(lVar12 + uVar23) = *puVar16;
        uVar23 = uVar23 + 1;
        uVar20 = uVar20 - 1;
        puVar16 = puVar17;
      } while (uVar20 != 0);
    }
    if ((ulonglong)((longlong)puVar18 - (longlong)puVar14) < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)(lVar12 + uVar23) = *puVar17;
        *(undefined1 *)(lVar12 + 1 + uVar23) = puVar17[1];
        *(undefined1 *)(lVar12 + 2 + uVar23) = puVar17[2];
        puVar18 = puVar17 + 3;
        puVar17 = puVar17 + 4;
        *(undefined1 *)(lVar12 + 3 + uVar23) = *puVar18;
        uVar23 = uVar23 + 4;
      } while (puVar17 != puVar14);
    }
LAB_18019d393:
    param_1[5] = (longlong)puVar17;
    if (uVar23 != 0) {
      if (*plVar5 - (lVar21 + _Size) < uVar23) {
        FUN_1801f6a80(plVar5,lVar21 + _Size,uVar23,1,1);
      }
      lVar2 = lVar21 + uVar23;
      memmove((void *)(plVar5[1] + lVar2),(void *)(plVar5[1] + lVar21),_Size);
      param_1[3] = lVar2;
      lVar6 = plVar5[2];
      if (lVar6 != lVar2) {
        lVar2 = plVar5[1];
        uVar20 = 0;
        do {
          if (uVar23 == uVar20) break;
          *(undefined1 *)(lVar6 + lVar2 + uVar20) = *(undefined1 *)(lVar12 + uVar20);
          plVar5[2] = plVar5[2] + 1;
          uVar20 = uVar20 + 1;
        } while ((lVar21 - lVar6) + uVar23 != uVar20);
      }
    }
    thunk_FUN_1801d3330(lVar12,lVar13,1);
    return;
  }
  plVar5 = (longlong *)param_1[2];
  puVar14 = (undefined1 *)param_1[5];
  puVar17 = (undefined1 *)param_1[6];
  uVar20 = (longlong)puVar17 - (longlong)puVar14;
  lVar13 = plVar5[2];
  if ((ulonglong)(*plVar5 - lVar13) < uVar20) {
    FUN_1801f6a80(plVar5,lVar13,uVar20,1,1);
    lVar13 = plVar5[2];
  }
  if (puVar14 == puVar17) goto LAB_18019d47c;
  lVar21 = plVar5[1];
  if ((uVar20 < 0x20) || ((ulonglong)((lVar13 + lVar21) - (longlong)puVar14) < 0x20)) {
LAB_18019d102:
    uVar19 = (int)puVar17 - (int)puVar14 & 3;
    uVar20 = (ulonglong)uVar19;
    puVar18 = puVar14;
    puVar16 = puVar14;
    if (uVar19 != 0) {
      do {
        puVar18 = puVar16 + 1;
        *(undefined1 *)(lVar21 + lVar13) = *puVar16;
        lVar13 = lVar13 + 1;
        uVar20 = uVar20 - 1;
        puVar16 = puVar18;
      } while (uVar20 != 0);
    }
    if ((ulonglong)((longlong)puVar14 - (longlong)puVar17) < 0xfffffffffffffffd) {
      do {
        *(undefined1 *)(lVar21 + lVar13) = *puVar18;
        *(undefined1 *)(lVar21 + 1 + lVar13) = puVar18[1];
        *(undefined1 *)(lVar21 + 2 + lVar13) = puVar18[2];
        puVar14 = puVar18 + 3;
        puVar18 = puVar18 + 4;
        *(undefined1 *)(lVar21 + 3 + lVar13) = *puVar14;
        lVar13 = lVar13 + 4;
      } while (puVar18 != puVar17);
    }
  }
  else {
    uVar23 = uVar20 & 0xffffffffffffffe0;
    puVar18 = puVar14 + uVar23;
    lVar12 = lVar13 + lVar21;
    lVar13 = lVar13 + uVar23;
    uVar15 = 0;
    do {
      uVar22 = *(undefined8 *)((longlong)(puVar14 + uVar15) + 8);
      uVar10 = *(undefined8 *)(puVar14 + uVar15 + 0x10);
      uVar11 = *(undefined8 *)((longlong)(puVar14 + uVar15 + 0x10) + 8);
      puVar3 = (undefined8 *)(lVar12 + uVar15);
      *puVar3 = *(undefined8 *)(puVar14 + uVar15);
      puVar3[1] = uVar22;
      puVar3 = (undefined8 *)(lVar12 + 0x10 + uVar15);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      uVar15 = uVar15 + 0x20;
    } while (uVar23 != uVar15);
    puVar14 = puVar18;
    if (uVar20 != uVar23) goto LAB_18019d102;
  }
  param_1[5] = (longlong)puVar18;
LAB_18019d47c:
  plVar5[2] = lVar13;
  return;
}


