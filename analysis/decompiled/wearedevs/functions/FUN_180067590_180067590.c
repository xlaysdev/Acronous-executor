/* FUN_180067590 @ 180067590 */

void FUN_180067590(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *local_30;
  ulonglong *local_28;
  undefined8 **local_20;
  ulonglong *local_18;
  undefined8 **local_10;
  undefined1 *local_8;
  
  lVar2 = param_1[5] - (longlong)param_2;
  if ((ulonglong *)param_1[5] < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: cnt <= self.limit",0x23,&DAT_18020a798);
  }
  if (*param_1 == 0) {
    local_28 = (ulonglong *)param_1[3];
    if (local_28 < param_2) {
      local_20 = &local_30;
      local_18 = (ulonglong *)&LAB_1800273d0;
      local_10 = &local_28;
      local_8 = &LAB_1800273d0;
      local_30 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_18020a5c5,&local_20,&PTR_s_C__Users_burne__cargo_registry_s_18020a650);
    }
    param_1[3] = (longlong)local_28 - (longlong)param_2;
    param_1[2] = param_1[2] + (longlong)param_2;
    param_1[5] = lVar2;
    return;
  }
  if ((int)*param_1 == 1) {
    uVar1 = param_1[3];
    local_18 = (ulonglong *)0x0;
    if (uVar1 <= (ulonglong)param_1[2]) {
      local_18 = (ulonglong *)(param_1[2] - uVar1);
    }
    if (local_18 < param_2) {
      local_20 = (undefined8 **)param_2;
                    /* WARNING: Subroutine does not return */
      FUN_1801fc980(&local_20);
    }
    param_1[3] = uVar1 + (longlong)param_2;
  }
  param_1[5] = lVar2;
  return;
}


