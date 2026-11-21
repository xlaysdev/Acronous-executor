/* FUN_1801aaa60 @ 1801aaa60 */

longlong * FUN_1801aaa60(longlong *param_1)

{
  longlong lVar1;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  int local_48 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1801aa780(&local_60);
  if (SBORROW8(0,local_60)) {
    FUN_1801f2ab0(local_48,local_58,local_50);
    if (local_48[0] == 1) {
      param_1[1] = CONCAT44(uStack_3c,local_40);
      param_1[2] = CONCAT44(uStack_34,uStack_38);
      lVar1 = -0x7fffffffffffffff;
    }
    else {
      param_1[1] = CONCAT44(uStack_3c,local_40);
      param_1[2] = CONCAT44(uStack_34,uStack_38);
      lVar1 = -0x8000000000000000;
    }
    *param_1 = lVar1;
  }
  else {
    local_28 = local_60;
    local_30 = local_58;
    FUN_1801f2ab0(local_48,local_58,local_50);
    if ((char)local_48[0] == '\0') {
      *param_1 = local_28;
      param_1[1] = local_30;
      param_1[2] = local_50;
    }
    else {
      *(undefined4 *)(param_1 + 1) = local_40;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3c;
      *(undefined4 *)(param_1 + 2) = uStack_38;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_34;
      *param_1 = -0x7fffffffffffffff;
      if (local_28 != 0) {
        thunk_FUN_1801d3330(local_30,local_28,1);
      }
    }
  }
  return param_1;
}


