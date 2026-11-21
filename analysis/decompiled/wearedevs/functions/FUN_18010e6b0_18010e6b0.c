/* FUN_18010e6b0 @ 18010e6b0 */

undefined8 * FUN_18010e6b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong **pplVar2;
  ulonglong local_78;
  longlong *local_70;
  longlong local_68;
  longlong **local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong **local_40;
  longlong local_38;
  undefined8 **local_30;
  code *local_28;
  longlong **local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_180102d70(&local_78);
  uVar1 = 1;
  if (local_78 != 2) {
    if ((local_78 & 1) == 0) {
      if (local_70 == (longlong *)0x0) {
        local_70 = (longlong *)0x0;
      }
      else {
        param_3 = local_58;
      }
    }
    else {
      local_50 = local_70;
      local_48 = local_68;
      local_40 = local_60;
      local_38 = local_68;
      if (local_68 != 0) {
        local_30 = &local_50;
        local_28 = FUN_180176fd0;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_18023e6a0,&local_30,&PTR_s_C__Users_burne__cargo_registry_s_18023e738);
      }
      local_30 = (undefined8 **)local_70;
      local_28 = (code *)0x0;
      local_20 = local_60;
      pplVar2 = (longlong **)&local_30;
      local_68 = FUN_180110560();
      local_70 = (longlong *)0x0;
      local_60 = pplVar2;
    }
    param_1[1] = local_70;
    param_1[2] = local_68;
    param_1[3] = local_60;
    param_1[4] = param_3;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return param_1;
}


