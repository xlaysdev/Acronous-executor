/* FUN_18014fcd0 @ 18014fcd0 */

void FUN_18014fcd0(longlong param_1,uint param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  int local_14;
  int *local_10;
  code *local_8;
  
  if ((ulonglong)param_2 < *(ulonglong *)(param_1 + 0x10)) {
    lVar1 = (ulonglong)param_2 * 0x148;
    if ((*(int *)(*(longlong *)(param_1 + 8) + lVar1) != 2) &&
       (*(int *)(*(longlong *)(param_1 + 8) + lVar1 + 300) == param_3)) {
      return;
    }
  }
  local_10 = &local_14;
  local_8 = FUN_180152d10;
  local_14 = param_3;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_10,&PTR_s_C__Users_burne__cargo_registry_s_180257058,param_4,
                param_2);
}


