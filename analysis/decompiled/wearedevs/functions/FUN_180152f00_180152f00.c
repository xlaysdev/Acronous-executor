/* FUN_180152f00 @ 180152f00 */

void FUN_180152f00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int local_14;
  int *local_10;
  code *local_8;
  
  uVar1 = *(uint *)(param_1 + 1);
  local_14 = *(int *)((longlong)param_1 + 0xc);
  if ((ulonglong)uVar1 < *(ulonglong *)(*param_1 + 0x10)) {
    lVar2 = *(longlong *)(*param_1 + 8);
    lVar3 = (ulonglong)uVar1 * 0x148;
    if ((*(int *)(lVar2 + lVar3) != 2) && (*(int *)(lVar2 + lVar3 + 300) == local_14)) {
      return;
    }
  }
  local_10 = &local_14;
  local_8 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_10,&PTR_s_C__Users_burne__cargo_registry_s_180257058,param_4,
                uVar1);
}


