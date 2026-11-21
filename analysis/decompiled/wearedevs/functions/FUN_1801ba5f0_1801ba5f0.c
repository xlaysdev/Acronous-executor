/* FUN_1801ba5f0 @ 1801ba5f0 */

longlong * FUN_1801ba5f0(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = param_2[1];
  lVar3 = param_2[3];
  uVar5 = lVar3 - lVar9;
  if (uVar5 == 0) {
    uVar4 = *param_2;
    lVar2 = param_2[2];
    lVar6 = 8;
    lVar8 = 0;
    lVar7 = 0;
  }
  else {
    uVar5 = uVar5 >> 3;
    lVar8 = uVar5 * -0x5555555555555555;
    lVar2 = uVar5 * 0x5555555555555558;
    FUN_180027490();
    lVar6 = thunk_FUN_1801d32d0(lVar2,8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(8,lVar2);
    }
    uVar4 = *param_2;
    lVar2 = param_2[2];
    lVar7 = 0;
    do {
      puVar1 = (uint *)(lVar9 + 8);
      lVar9 = lVar9 + 0x18;
      *(ulonglong *)(lVar6 + lVar7 * 8) = (ulonglong)*puVar1;
      lVar7 = lVar7 + 1;
    } while (lVar9 != lVar3);
  }
  if (lVar2 != 0) {
    thunk_FUN_1801d3330(uVar4,lVar2 * 0x18,4);
  }
  *param_1 = lVar8;
  param_1[1] = lVar6;
  param_1[2] = lVar7;
  return param_1;
}


