/* FUN_1801b3c20 @ 1801b3c20 */

undefined8 * FUN_1801b3c20(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong *local_38;
  undefined1 *local_30;
  ulonglong *local_28;
  undefined1 *local_20;
  
  local_40 = param_2[2];
  if (param_3 == local_40) {
    param_1[1] = param_3 + param_2[1];
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &PTR_LAB_180285b00;
  }
  else if (param_3 == 0) {
    uVar1 = param_2[1];
    uVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
    uVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    *param_2 = &PTR_LAB_180285b00;
    param_2[1] = uVar1;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    local_48 = param_3;
    if (local_40 < param_3) {
      local_38 = &local_48;
      local_30 = &LAB_1800273d0;
      local_28 = &local_40;
      local_20 = &LAB_1800273d0;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180285ca8,&local_38,&PTR_s_C__Users_burne__cargo_registry_s_180285cd0);
    }
    (**(code **)*param_2)(param_1,param_2 + 3,param_2[1]);
    param_1[2] = param_1[2] - param_3;
    param_2[2] = param_3;
    param_1[1] = param_1[1] + param_3;
  }
  return param_1;
}


