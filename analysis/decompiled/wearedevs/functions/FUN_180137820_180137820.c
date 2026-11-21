/* FUN_180137820 @ 180137820 */

void FUN_180137820(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  int *local_58;
  code *local_50;
  uint local_48;
  int local_44;
  longlong local_40;
  undefined4 local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_48 = *(uint *)(param_2 + 1);
  local_44 = *(int *)((longlong)param_2 + 0xc);
  if ((ulonglong)local_48 < *(ulonglong *)(*param_2 + 0x10)) {
    local_40 = *(longlong *)(*param_2 + 8);
    lVar1 = (ulonglong)local_48 * 0x148;
    if ((*(int *)(local_40 + lVar1) != 2) &&
       (local_40 = local_40 + lVar1, *(int *)(local_40 + 300) == local_44)) {
      if (*(uint *)(local_40 + 0x40) < 4) {
        return;
      }
      local_34 = param_3;
      FUN_180132bb0(local_40 + 0x40);
      *(undefined4 *)(local_40 + 0x40) = 3;
      *(undefined4 *)(local_40 + 0x44) = local_34;
      FUN_1801300d0(param_1 + 8,param_2,param_4);
      FUN_18012e6d0(param_1 + 8,param_2,param_5);
      return;
    }
  }
  local_58 = &local_44;
  local_50 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_58,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
}


