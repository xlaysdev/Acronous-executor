/* FUN_180136d10 @ 180136d10 */

void FUN_180136d10(longlong *param_1,longlong *param_2)

{
  longlong local_98;
  code *local_90;
  uint *local_88;
  code *local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  uint local_3c;
  longlong *local_38;
  longlong local_30;
  longlong local_28;
  uint local_1c;
  undefined4 local_18;
  undefined1 local_11;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  if ((int)param_1[5] == 1) {
    local_3c = *(uint *)(param_2 + 4);
    if ((*(uint *)((longlong)param_1 + 0x2c) == local_3c) &&
       ((int)param_1[6] == *(int *)((longlong)param_2 + 0x24))) {
                    /* WARNING: Could not recover jumptable at 0x000180136d66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x20))(param_2[3],param_2[1],param_2[2],*(code **)(*param_2 + 0x20));
      return;
    }
    local_78 = *param_2;
    lStack_70 = param_2[1];
    local_50 = param_2[2];
    local_48 = param_2[3];
    if (*(uint *)((longlong)param_1 + 0x2c) < local_3c) {
      local_98 = (longlong)param_1 + 0x2c;
      local_90 = FUN_1801392c0;
      local_88 = &local_3c;
      local_80 = FUN_1801392c0;
      local_11 = 1;
      local_60 = local_78;
      local_58 = lStack_70;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_18024bdf8,&local_98,&PTR_s_C__Users_burne__cargo_registry_s_18024beb8);
    }
    local_30 = local_50;
    local_28 = local_48;
    local_1c = local_3c;
  }
  else {
    local_78 = *param_2;
    lStack_70 = param_2[1];
    local_30 = param_2[2];
    local_28 = param_2[3];
    local_1c = *(uint *)(param_2 + 4);
  }
  local_18 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = 1;
  *(uint *)((longlong)param_1 + 0x2c) = local_1c;
  *(undefined4 *)(param_1 + 6) = local_18;
  local_38 = param_1;
  if (*param_1 != 0) {
    (**(code **)(*param_1 + 0x20))(param_1[3],param_1[1],param_1[2]);
  }
  *local_38 = local_78;
  local_38[1] = lStack_70;
  local_38[2] = local_30;
  local_38[3] = local_28;
  *(uint *)(local_38 + 4) = local_1c;
  *(undefined4 *)((longlong)local_38 + 0x24) = local_18;
  return;
}


