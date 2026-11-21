/* FUN_1801aab80 @ 1801aab80 */

longlong * FUN_1801aab80(longlong *param_1)

{
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1801aa780(&local_48);
  if (SBORROW8(0,local_48)) {
    FUN_1801ed200(param_1,local_40,local_38);
  }
  else {
    local_28 = local_48;
    local_30 = local_40;
    FUN_1801ed200(param_1,local_40,local_38);
    if (SBORROW8(0,*param_1)) {
      *param_1 = local_28;
      param_1[1] = local_30;
      param_1[2] = local_38;
    }
    else if (local_28 != 0) {
      thunk_FUN_1801d3330(local_30,local_28,1);
    }
  }
  return param_1;
}


