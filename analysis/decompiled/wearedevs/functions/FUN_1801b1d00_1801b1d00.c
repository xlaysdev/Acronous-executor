/* FUN_1801b1d00 @ 1801b1d00 */

undefined8 * FUN_1801b1d00(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_c0 [24];
  ulonglong *local_a8;
  undefined1 *local_a0;
  ulonglong *local_98;
  undefined1 *local_90;
  ulonglong local_80;
  ulonglong local_78;
  undefined *local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_180027490();
  local_48 = thunk_FUN_1801d32d0(0x14,1);
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(1,0x14);
  }
  local_40 = 0;
  local_38 = 0x14;
  local_30 = 1;
  local_21 = 1;
  lVar1 = FUN_1801d2a90(param_2,&local_a8);
  local_21 = 1;
  FUN_1801b2af0(&local_48,local_c0 + lVar1 + 0x18,0x14 - lVar1);
  if ((local_30 & 1) == 0) {
    local_70 = PTR_PTR_1802fd530;
    lVar1 = local_40;
  }
  else {
    uVar2 = local_30 >> 5;
    local_21 = 0;
    FUN_1801b1ef0(local_c0,local_48,local_40,local_38,uVar2);
    local_21 = 0;
    FUN_1801b3d40(&local_70,local_c0);
    lVar1 = local_60 - uVar2;
    if (local_60 < uVar2) {
      local_50 = local_60;
      local_80 = local_60;
      local_a8 = &local_78;
      local_a0 = &LAB_1800273d0;
      local_98 = &local_80;
      local_90 = &LAB_1800273d0;
      local_78 = uVar2;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180285840,&local_a8,&PTR_s_C__Users_burne__cargo_registry_s_1802858c8);
    }
    local_48 = uVar2 + local_68;
    local_30 = local_58;
  }
  *param_1 = local_70;
  param_1[1] = local_48;
  param_1[2] = lVar1;
  param_1[3] = local_30;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}


