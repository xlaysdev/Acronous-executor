/* FUN_1801df5d0 @ 1801df5d0 */

ulonglong * FUN_1801df5d0(ulonglong *param_1,longlong *param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = *param_2;
  uVar2 = (ulonglong)param_3 | param_4 << 0x20;
  uVar3 = uVar2 - lVar1;
  if ((longlong)uVar2 < lVar1) {
    uVar3 = lVar1 - uVar2;
  }
  param_1[1] = uVar3 / 10000000;
  *(int *)(param_1 + 2) = ((int)uVar3 + (int)(uVar3 / 10000000) * -10000000) * 100;
  *param_1 = (ulonglong)(lVar1 < (longlong)uVar2);
  return param_1;
}


