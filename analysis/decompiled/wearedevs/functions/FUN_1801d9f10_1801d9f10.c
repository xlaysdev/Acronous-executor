/* FUN_1801d9f10 @ 1801d9f10 */

undefined8 * FUN_1801d9f10(undefined8 *param_1)

{
  longlong local_70;
  undefined8 local_68;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_1801db5d0(&local_40);
  if (!SBORROW8(0,local_40)) {
    local_58 = local_40;
    local_50 = local_38;
    local_48 = local_30;
    FUN_1801dbd00(&local_70,&local_58,1);
    local_38 = local_68;
    if (!SBORROW8(0,local_70)) {
      local_20 = local_70;
      local_28 = local_68;
      FUN_1801d9630(param_1);
      if (local_20 == 0) {
        return param_1;
      }
      thunk_FUN_1801d3330(local_28,local_20 * 2,2);
      return param_1;
    }
  }
  param_1[1] = local_38;
  *param_1 = 2;
  return param_1;
}


