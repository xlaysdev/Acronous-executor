/* FUN_1801f8cd0 @ 1801f8cd0 */

void FUN_1801f8cd0(undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = param_4 * 0x20;
  uVar2 = 1;
  if (uVar3 < 0x7ffffffffffffff9 && param_4 >> 0x3b == 0) {
    if (param_2 == 0) {
      FUN_180027490();
      lVar1 = thunk_FUN_1801d32d0(uVar3,8);
    }
    else {
      lVar1 = thunk_FUN_1801d3370(param_3,param_2 << 5,8,uVar3);
    }
    if (lVar1 == 0) {
      param_1[1] = 8;
      lVar1 = 0x10;
    }
    else {
      param_1[1] = lVar1;
      lVar1 = 0x10;
      uVar2 = 0;
    }
  }
  else {
    lVar1 = 8;
    uVar3 = 0;
  }
  *(ulonglong *)((longlong)param_1 + lVar1) = uVar3;
  *param_1 = uVar2;
  return;
}


