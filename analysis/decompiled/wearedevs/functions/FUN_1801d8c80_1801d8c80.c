/* FUN_1801d8c80 @ 1801d8c80 */

undefined8
FUN_1801d8c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1801db5d0(&local_70,param_1,param_2);
  if (SBORROW8(0,local_70)) {
    return local_68;
  }
  local_88 = local_70;
  local_80 = local_68;
  local_78 = local_60;
  FUN_1801dbd00(&local_58,&local_88,1);
  if (!SBORROW8(0,local_58)) {
    local_28 = local_58;
    local_40 = local_50;
    local_98 = local_50;
    local_90 = local_48;
    FUN_1801db5d0(&local_70,param_3,param_4);
    uVar1 = local_68;
    if (!SBORROW8(0,local_70)) {
      local_88 = local_70;
      local_80 = local_68;
      local_78 = local_60;
      FUN_1801dbd00(&local_58,&local_88,1);
      uVar1 = local_50;
      if (!SBORROW8(0,local_58)) {
        local_30 = local_58;
        local_38 = local_50;
        uVar1 = FUN_1801d8e50(&local_98,local_50,local_48);
        if (local_30 != 0) {
          thunk_FUN_1801d3330(local_38,local_30 * 2,2);
        }
      }
    }
    if (local_28 == 0) {
      return uVar1;
    }
    thunk_FUN_1801d3330(local_40,local_28 * 2,2);
    return uVar1;
  }
  return local_50;
}


