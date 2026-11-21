/* FUN_18018ffd0 @ 18018ffd0 */

void FUN_18018ffd0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  
  uVar5 = param_1[3];
  if (uVar5 != 0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar8 = uVar1;
    if (param_1[2] < uVar1) {
      uVar8 = 0;
    }
    uVar8 = param_1[2] - uVar8;
    uVar6 = uVar1 - uVar8;
    lVar9 = uVar5 - uVar6;
    bVar11 = lVar9 != 0;
    if (uVar5 < uVar6) {
      lVar9 = 0;
    }
    uVar10 = uVar8 + uVar5;
    if (uVar5 >= uVar6 && bVar11) {
      uVar10 = uVar1;
    }
    if (uVar10 != uVar8) {
      puVar7 = (undefined8 *)(uVar2 + uVar8 * 8);
      lVar4 = 1;
      do {
        plVar3 = (longlong *)*puVar7;
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180187b30(puVar7);
        }
        puVar7 = puVar7 + 1;
        bVar11 = lVar4 != uVar10 - uVar8;
        lVar4 = lVar4 + 1;
      } while (bVar11);
    }
    if (uVar6 < uVar5) {
      lVar4 = 0;
      uVar5 = uVar2;
      do {
        plVar3 = *(longlong **)(uVar2 + lVar4 * 8);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          FUN_180187b30(uVar5);
        }
        lVar4 = lVar4 + 1;
        uVar5 = uVar5 + 8;
      } while (lVar9 != lVar4);
    }
  }
  return;
}


