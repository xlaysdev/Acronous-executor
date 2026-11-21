/* FUN_1801d9410 @ 1801d9410 */

undefined8 FUN_1801d9410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_78;
  undefined8 local_70;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1801db5d0(&local_48,param_1,param_2);
  if (!SBORROW8(0,local_48)) {
    local_60 = local_48;
    local_58 = local_40;
    local_50 = local_38;
    FUN_1801dbd00(&local_78,&local_60,1);
    if (!SBORROW8(0,local_78)) {
      local_28 = local_78;
      local_30 = local_70;
      uVar1 = FUN_1801d91e0(local_70,param_3);
      if (local_28 == 0) {
        return uVar1;
      }
      thunk_FUN_1801d3330(local_30,local_28 * 2,2);
      return uVar1;
    }
  }
  return 1;
}


