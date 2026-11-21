/* FUN_18012d5a0 @ 18012d5a0 */

longlong * FUN_18012d5a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_58 [2];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = param_2[1];
  local_40 = param_2[2];
  local_30 = param_2;
  FUN_1801f2ab0(local_58);
  if (local_58[0] == 1) {
    (**(code **)(*local_30 + 0x20))(local_30[3],local_38,local_40);
  }
  else {
    lVar1 = *local_30;
    local_48 = local_40;
    local_50 = local_38;
    if (lVar1 != 0) {
      param_1[1] = local_38;
      param_1[2] = local_40;
      local_48 = local_30[3];
      lVar2 = 0x18;
      goto LAB_18012d630;
    }
  }
  param_1[1] = local_50;
  lVar2 = 0x10;
  lVar1 = 0;
LAB_18012d630:
  *(longlong *)((longlong)param_1 + lVar2) = local_48;
  *param_1 = lVar1;
  return param_1;
}


