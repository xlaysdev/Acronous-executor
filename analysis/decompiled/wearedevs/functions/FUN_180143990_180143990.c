/* FUN_180143990 @ 180143990 */

void FUN_180143990(ulonglong *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong local_c0 [3];
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong *local_70;
  undefined1 *local_68;
  ulonglong *local_60;
  undefined1 *local_58;
  ulonglong local_50;
  longlong lStack_48;
  ulonglong local_40;
  ulonglong local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar1 = param_2[1];
  FUN_1801b2630(&local_98,*param_2,param_3 + uVar1);
  param_2[1] = 0;
  local_c0[0] = uVar1;
  if (local_90 < uVar1) {
    local_50 = local_90;
    local_70 = local_c0;
    local_68 = &LAB_1800273d0;
    local_60 = &local_50;
    local_58 = &LAB_1800273d0;
    local_29 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_1802535c3,&local_70,&PTR_s_C__Users_burne__cargo_registry_s_1802537d0);
  }
  local_29 = 1;
  FUN_1801b2540(&local_98,uVar1);
  if ((local_80 & 1) == 0) {
    param_1[1] = local_98;
    param_1[2] = local_90;
    param_1[3] = local_80;
    *param_1 = (ulonglong)PTR_PTR_1802fd530;
  }
  else {
    uVar1 = local_80 >> 5;
    local_29 = 0;
    FUN_1801b1ef0(local_c0,local_98,local_90,local_88,uVar1);
    local_29 = 0;
    FUN_1801b3d40(&local_50,local_c0);
    if (local_40 < uVar1) {
      local_78 = local_40;
      local_a8 = local_40;
      local_70 = &local_a0;
      local_68 = &LAB_1800273d0;
      local_60 = &local_a8;
      local_58 = &LAB_1800273d0;
      local_a0 = uVar1;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_1802535c3,&local_70,&PTR_s_C__Users_burne__cargo_registry_s_180253650);
    }
    param_1[2] = local_40 - uVar1;
    param_1[3] = local_38;
    *param_1 = local_50;
    param_1[1] = lStack_48 + uVar1;
  }
  return;
}


