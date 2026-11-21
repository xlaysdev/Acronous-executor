/* FUN_180139790 @ 180139790 */

undefined8 * FUN_180139790(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int *local_38;
  code *local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_20 = *(uint *)(param_3 + 1);
  local_1c = *(int *)((longlong)param_3 + 0xc);
  local_28 = param_2;
  local_18 = param_2;
  if ((ulonglong)local_20 < *(ulonglong *)(*param_3 + 0x10)) {
    lVar1 = *(longlong *)(*param_3 + 8);
    lVar2 = (ulonglong)local_20 * 0x148;
    if ((*(int *)(lVar1 + lVar2) != 2) && (lVar1 = lVar1 + lVar2, *(int *)(lVar1 + 300) == local_1c)
       ) {
      if (*(longlong *)(lVar1 + 0x80) == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: self.ref_count < usize::MAX",0x2d,
                      &PTR_s_C__Users_burne__cargo_registry_s_1802497c8);
      }
      *(longlong *)(lVar1 + 0x80) = *(longlong *)(lVar1 + 0x80) + 1;
      *param_1 = param_2;
      *(uint *)(param_1 + 1) = local_20;
      *(int *)((longlong)param_1 + 0xc) = local_1c;
      return param_1;
    }
  }
  local_38 = &local_1c;
  local_30 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_38,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
}


