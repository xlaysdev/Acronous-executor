/* thunk_FUN_1801d3550 @ 180038f80 */

longlong thunk_FUN_1801d3550(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_2 < 0x11) {
    lVar1 = FUN_1801dc500(param_1,8,param_1);
    return lVar1;
  }
  uVar2 = FUN_1801dc500(param_1 + param_2,8,param_1 + param_2);
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar3 = param_2 - (param_2 - 1 & uVar2);
    lVar1 = uVar2 + lVar3;
    *(ulonglong *)((uVar2 - 8) + lVar3) = uVar2;
  }
  return lVar1;
}


