/* FUN_180153cf0 @ 180153cf0 */

void FUN_180153cf0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int local_14;
  int *local_10;
  code *local_8;
  
  if (*(ulonglong *)(param_1 + 0x10) <= *(ulonglong *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: self.can_inc_num_send_streams()",0x31,
                  &PTR_s_C__Users_burne__cargo_registry_s_1802582b8);
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 1);
  local_14 = *(int *)((longlong)param_2 + 0xc);
  if ((ulonglong)uVar2 < *(ulonglong *)(lVar4 + 0x10)) {
    plVar1 = (longlong *)(lVar4 + 8);
    lVar4 = (ulonglong)uVar2 * 0x148;
    if ((*(int *)(*plVar1 + lVar4) != 2) &&
       (lVar3 = *plVar1 + lVar4, *(int *)(lVar3 + 300) == local_14)) {
      if (*(char *)(lVar3 + 0x138) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: !stream.is_counted",0x24,
                      &PTR_s_C__Users_burne__cargo_registry_s_1802582d0);
      }
      *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) + 1;
      *(undefined1 *)(lVar3 + 0x138) = 1;
      return;
    }
  }
  local_10 = &local_14;
  local_8 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_10,&PTR_s_C__Users_burne__cargo_registry_s_180257040,lVar4,
                uVar2);
}


