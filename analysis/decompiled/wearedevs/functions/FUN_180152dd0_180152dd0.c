/* FUN_180152dd0 @ 180152dd0 */

void FUN_180152dd0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int local_14;
  int *local_10;
  code *local_8;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 1);
  local_14 = *(int *)((longlong)param_1 + 0xc);
  if (uVar2 < *(ulonglong *)(*param_1 + 0x10)) {
    lVar1 = *(longlong *)(*param_1 + 8);
    if ((*(int *)(lVar1 + uVar2 * 0x148) != 2) &&
       (*(int *)(lVar1 + uVar2 * 0x148 + 300) == local_14)) {
      FUN_180133210();
      return;
    }
  }
  local_10 = &local_14;
  local_8 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_10,&PTR_s_C__Users_burne__cargo_registry_s_180257040,uVar2,
                *(uint *)(param_1 + 1));
}


