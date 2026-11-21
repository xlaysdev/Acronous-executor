/* FUN_18002f2e0 @ 18002f2e0 */

void FUN_18002f2e0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  
  uVar1 = param_1[3];
  if (uVar1 != 0) {
    uVar2 = *param_1;
    uVar3 = param_1[1];
    uVar8 = uVar2;
    if (param_1[2] < uVar2) {
      uVar8 = 0;
    }
    uVar8 = param_1[2] - uVar8;
    uVar7 = uVar2 - uVar8;
    lVar9 = uVar1 - uVar7;
    bVar11 = lVar9 != 0;
    if (uVar1 < uVar7) {
      lVar9 = 0;
    }
    uVar10 = uVar8 + uVar1;
    if (uVar1 >= uVar7 && bVar11) {
      uVar10 = uVar2;
    }
    if (uVar10 != uVar8) {
      lVar6 = 1;
      do {
        uVar4 = *(undefined8 *)(uVar3 + uVar8 * 8 + -8 + lVar6 * 8);
        cVar5 = FUN_180177f20(uVar4);
        if (cVar5 != '\0') {
          FUN_1801776b0(uVar4);
        }
        bVar11 = lVar6 != uVar10 - uVar8;
        lVar6 = lVar6 + 1;
      } while (bVar11);
    }
    if (uVar7 < uVar1) {
      lVar6 = 0;
      do {
        uVar4 = *(undefined8 *)(uVar3 + lVar6 * 8);
        cVar5 = FUN_180177f20(uVar4);
        if (cVar5 != '\0') {
          FUN_1801776b0(uVar4);
        }
        lVar6 = lVar6 + 1;
      } while (lVar9 != lVar6);
    }
  }
  return;
}


