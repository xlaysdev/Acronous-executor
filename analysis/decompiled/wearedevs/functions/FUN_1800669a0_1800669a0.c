/* FUN_1800669a0 @ 1800669a0 */

undefined8 * FUN_1800669a0(undefined8 *param_1,longlong *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_c8 [24];
  ulonglong *local_b0;
  undefined1 *local_a8;
  ulonglong *local_a0;
  undefined1 *local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  longlong lStack_70;
  ulonglong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong *local_48;
  ulonglong local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_2 == 0) {
    puVar1 = (ulonglong *)param_2[3];
  }
  else if ((int)*param_2 == 1) {
    puVar1 = (ulonglong *)0x0;
    if ((ulonglong)param_2[3] <= (ulonglong)param_2[2]) {
      puVar1 = (ulonglong *)(param_2[2] - param_2[3]);
    }
  }
  else {
    puVar1 = (ulonglong *)0x0;
  }
  if ((ulonglong *)param_2[5] < puVar1) {
    puVar1 = (ulonglong *)param_2[5];
  }
  if (puVar1 < param_3) {
    local_a8 = (undefined1 *)FUN_180067670(param_2);
    local_b0 = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_1801fc980(&local_b0);
  }
  if ((longlong)param_3 < 0) {
    uVar2 = 0;
LAB_180066a03:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar2,param_3);
  }
  if (param_3 == (ulonglong *)0x0) {
    local_58 = 1;
  }
  else {
    FUN_180027490();
    uVar2 = 1;
    local_58 = thunk_FUN_1801d32d0(param_3,1);
    if (local_58 == 0) goto LAB_180066a03;
  }
  uVar3 = 0x3f;
  if ((ulonglong)param_3 >> 10 != 0) {
    for (; ((ulonglong)param_3 >> 10) >> uVar3 == 0; uVar3 = uVar3 - 1) {
    }
  }
  uVar4 = (uVar3 ^ 0xffffffffffffffc0) + 0x41;
  uVar3 = 7;
  if (uVar4 < 7) {
    uVar3 = uVar4;
  }
  local_40 = (uVar3 & 0xffffffff) * 4 + 1;
  local_50 = 0;
  local_31 = 1;
  local_48 = param_3;
  FUN_180046ae0(&local_58,param_2,param_3);
  if ((local_40 & 1) == 0) {
    param_1[1] = local_58;
    param_1[2] = local_50;
    param_1[3] = local_40;
    *param_1 = PTR_PTR_1802fd530;
  }
  else {
    uVar3 = local_40 >> 5;
    local_31 = 0;
    FUN_1801b1ef0(local_c8,local_58,local_50,local_48,uVar3);
    local_31 = 0;
    FUN_1801b3d40(&local_78,local_c8);
    if (local_68 < uVar3) {
      local_80 = local_68;
      local_90 = local_68;
      local_b0 = &local_88;
      local_a8 = &LAB_1800273d0;
      local_a0 = &local_90;
      local_98 = &LAB_1800273d0;
      local_88 = uVar3;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_18020a5c5,&local_b0,&PTR_s_C__Users_burne__cargo_registry_s_18020a650);
    }
    param_1[2] = local_68 - uVar3;
    param_1[3] = local_60;
    *param_1 = local_78;
    param_1[1] = lStack_70 + uVar3;
  }
  return param_1;
}


