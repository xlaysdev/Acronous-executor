/* FUN_18006b9a0 @ 18006b9a0 */

undefined8 * FUN_18006b9a0(undefined8 *param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 local_c0 [24];
  ulonglong *local_a8;
  undefined1 *local_a0;
  ulonglong *local_98;
  undefined1 *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined *local_58;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_2 + 0x98);
  local_98 = &local_68;
  if (uVar3 == 0) {
    uVar3 = FUN_18006a180(param_2);
    uVar2 = 1;
    if (uVar3 == 2) goto LAB_18006baa8;
    if ((uVar3 & 1) == 0) {
      if (param_3 < param_4) {
        param_4 = param_3;
      }
      FUN_1801b2630(&local_88,param_2 + 0x90,param_4);
      if ((local_70 & 1) == 0) {
        local_58 = PTR_PTR_1802fd530;
      }
      else {
        uVar3 = local_70 >> 5;
        FUN_1801b1ef0(local_c0,local_88,local_80,local_78,uVar3);
        FUN_1801b3d40(&local_58,local_c0);
        local_80 = local_48 - uVar3;
        if (local_48 < uVar3) {
          local_38 = local_48;
          local_68 = local_48;
          local_a8 = &local_60;
          local_a0 = &LAB_1800273d0;
          local_90 = &LAB_1800273d0;
          local_60 = uVar3;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_18020c397,&local_a8,&PTR_s_C__Users_burne__cargo_registry_s_18020c420);
        }
        local_88 = uVar3 + local_50;
        local_70 = local_40;
      }
      param_1[1] = local_58;
      param_1[2] = local_88;
      goto LAB_18006ba99;
    }
    param_1[1] = 0;
    lVar1 = 0x10;
    local_70 = param_3;
  }
  else {
    if (uVar3 < param_4) {
      param_4 = uVar3;
    }
    FUN_1801b2630(&local_88,param_2 + 0x90,param_4);
    if ((local_70 & 1) == 0) {
      local_58 = PTR_PTR_1802fd530;
    }
    else {
      uVar3 = local_70 >> 5;
      FUN_1801b1ef0(local_c0,local_88,local_80,local_78,uVar3);
      FUN_1801b3d40(&local_58,local_c0);
      local_80 = local_48 - uVar3;
      if (local_48 < uVar3) {
        local_38 = local_48;
        local_68 = local_48;
        local_a8 = &local_60;
        local_a0 = &LAB_1800273d0;
        local_90 = &LAB_1800273d0;
        local_60 = uVar3;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_18020c397,&local_a8,&PTR_s_C__Users_burne__cargo_registry_s_18020c420);
      }
      local_88 = uVar3 + local_50;
      local_70 = local_40;
    }
    param_1[1] = local_58;
    param_1[2] = local_88;
LAB_18006ba99:
    param_1[3] = local_80;
    lVar1 = 0x20;
  }
  *(ulonglong *)((longlong)param_1 + lVar1) = local_70;
  uVar2 = 0;
LAB_18006baa8:
  *param_1 = uVar2;
  return param_1;
}


