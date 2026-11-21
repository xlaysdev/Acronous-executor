/* FUN_1801c71c0 @ 1801c71c0 */

undefined8 * FUN_1801c71c0(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  uVar4 = *param_2;
  puVar10 = (ulonglong *)param_2[1];
  uVar7 = uVar4 >> 1;
  uVar11 = (ulonglong)((uint)uVar7 & 0x3f);
  if (uVar11 == 0x3f) {
    uVar9 = 0;
    do {
      if (uVar9 < 7) {
        uVar3 = 1;
        do {
          uVar8 = uVar3 >> ((byte)uVar9 & 0x1f);
          uVar3 = uVar3 + 1;
        } while (uVar8 == 0);
LAB_1801c7200:
        uVar9 = uVar9 + 1;
      }
      else {
        SwitchToThread();
        if (uVar9 < 0xb) goto LAB_1801c7200;
      }
      uVar4 = *param_2;
      puVar10 = (ulonglong *)param_2[1];
      uVar7 = uVar4 >> 1;
      uVar11 = (ulonglong)((uint)uVar7 & 0x3f);
    } while (uVar11 == 0x3f);
  }
  uVar12 = uVar4 + 2;
  if ((uVar4 & 1) == 0) {
    LOCK();
    UNLOCK();
    if (uVar7 == param_2[0x10] >> 1) {
      uVar5 = 0;
      goto LAB_1801c739d;
    }
    uVar12 = uVar12 | 0x7f < (param_2[0x10] ^ uVar4);
  }
  LOCK();
  uVar7 = *param_2;
  if (uVar4 == uVar7) {
    *param_2 = uVar12;
  }
  UNLOCK();
  uVar5 = 2;
  if (uVar4 == uVar7) {
    if ((int)uVar11 == 0x3e) {
      plVar6 = (longlong *)*puVar10;
      if (plVar6 == (longlong *)0x0) {
        uVar9 = 0;
        do {
          if (uVar9 < 7) {
            uVar3 = 1;
            do {
              uVar8 = uVar3 >> ((byte)uVar9 & 0x1f);
              uVar3 = uVar3 + 1;
            } while (uVar8 == 0);
LAB_1801c73c0:
            uVar9 = uVar9 + 1;
          }
          else {
            SwitchToThread();
            if (uVar9 < 0xb) goto LAB_1801c73c0;
          }
          plVar6 = (longlong *)*puVar10;
        } while (plVar6 == (longlong *)0x0);
      }
      lVar2 = *plVar6;
      param_2[1] = (ulonglong)plVar6;
      *param_2 = (uVar12 & 0xfffffffffffffffe) + (ulonglong)(lVar2 != 0) + 2;
    }
    if ((puVar10[uVar11 * 3 + 3] & 1) == 0) {
      uVar9 = 0;
      do {
        if (uVar9 < 7) {
          uVar3 = 1;
          do {
            uVar8 = uVar3 >> ((byte)uVar9 & 0x1f);
            uVar3 = uVar3 + 1;
          } while (uVar8 == 0);
LAB_1801c72e0:
          uVar9 = uVar9 + 1;
        }
        else {
          SwitchToThread();
          if (uVar9 < 0xb) goto LAB_1801c72e0;
        }
      } while ((puVar10[uVar11 * 3 + 3] & 1) == 0);
    }
    uVar4 = puVar10[uVar11 * 3 + 1];
    uVar7 = puVar10[uVar11 * 3 + 2];
    if ((int)uVar11 == 0x3e) goto LAB_1801c7365;
    uVar12 = puVar10[uVar11 * 3 + 3];
    do {
      LOCK();
      uVar1 = puVar10[uVar11 * 3 + 3];
      bVar13 = uVar12 == uVar1;
      if (bVar13) {
        puVar10[uVar11 * 3 + 3] = uVar12 | 2;
      }
      else {
        uVar12 = uVar1;
      }
      UNLOCK();
    } while (!bVar13);
    if ((uVar12 & 4) != 0) {
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
LAB_1801c7365:
        if ((puVar10[uVar11 * 3] & 2) == 0) {
          uVar12 = puVar10[uVar11 * 3];
          do {
            LOCK();
            uVar1 = puVar10[uVar11 * 3];
            bVar13 = uVar12 == uVar1;
            if (bVar13) {
              puVar10[uVar11 * 3] = uVar12 | 4;
            }
            else {
              uVar12 = uVar1;
            }
            UNLOCK();
          } while (!bVar13);
          if ((uVar12 & 2) == 0) goto LAB_1801c7394;
        }
      }
      thunk_FUN_1801d3330(puVar10,0x5f0,8);
    }
LAB_1801c7394:
    param_1[1] = uVar4;
    param_1[2] = uVar7;
    uVar5 = 1;
  }
LAB_1801c739d:
  *param_1 = uVar5;
  return param_1;
}


