/* FUN_1802017d0 @ 1802017d0 */

void FUN_1802017d0(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (param_4 < 0) {
    lVar1 = 8;
    param_4 = 0;
    goto LAB_18020184e;
  }
  if (param_2 == 0) {
    if (param_4 != 0) {
      FUN_180027490();
      lVar1 = thunk_FUN_1801d32d0(param_4,1);
      goto joined_r0x00018020182d;
    }
    lVar1 = 1;
  }
  else {
    lVar1 = thunk_FUN_1801d3370(param_3,param_2,1,param_4);
joined_r0x00018020182d:
    if (lVar1 == 0) {
      param_1[1] = 1;
      lVar1 = 0x10;
      goto LAB_18020184e;
    }
  }
  param_1[1] = lVar1;
  lVar1 = 0x10;
  uVar2 = 0;
LAB_18020184e:
  *(longlong *)((longlong)param_1 + lVar1) = param_4;
  *param_1 = uVar2;
  return;
}


