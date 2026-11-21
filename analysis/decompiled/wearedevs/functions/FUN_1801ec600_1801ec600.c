/* FUN_1801ec600 @ 1801ec600 */

ulonglong FUN_1801ec600(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_68 [2];
  ulonglong local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong *local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar2 = *param_1;
  uVar3 = param_1[2];
  local_40 = param_1;
  if (uVar2 == uVar3) {
    uVar2 = uVar3 + 1;
    FUN_1802017d0(local_68,uVar3,param_1[1],uVar2);
    if (local_68[0] == 1) {
      local_31 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(local_60,local_58);
    }
    param_1[1] = local_60;
    *param_1 = uVar2;
  }
  local_48 = param_1[1];
  *(undefined1 *)(local_48 + uVar3) = 0;
  uVar3 = uVar3 + 1;
  if (uVar3 < uVar2) {
    if (uVar3 == 0) {
      thunk_FUN_1801d3330(local_48,uVar2,1);
      uVar1 = 1;
    }
    else {
      uVar1 = thunk_FUN_1801d3370(local_48,uVar2,1,uVar3);
      if (uVar1 == 0) {
        local_50 = uVar2;
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(1,uVar3);
      }
    }
  }
  else {
    uVar1 = local_48;
  }
  return uVar1;
}


