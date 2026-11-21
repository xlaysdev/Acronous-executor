/* FUN_1801300d0 @ 1801300d0 */

void FUN_1801300d0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int local_14;
  int *local_10;
  code *local_8;
  
  local_14 = *(int *)((longlong)param_2 + 0xc);
  if ((ulonglong)*(uint *)(param_2 + 1) < *(ulonglong *)(*param_2 + 0x10)) {
    lVar3 = *(longlong *)(*param_2 + 8);
    lVar5 = (ulonglong)*(uint *)(param_2 + 1) * 0x148;
    if ((*(int *)(lVar3 + lVar5) != 2) && (lVar3 = lVar3 + lVar5, *(int *)(lVar3 + 300) == local_14)
       ) {
      uVar1 = *(uint *)(lVar3 + 0x8c);
      uVar2 = 0;
      if (0 < (int)uVar1) {
        uVar2 = uVar1;
      }
      if ((ulonglong)uVar2 <= *(ulonglong *)(lVar3 + 0x90)) {
        return;
      }
      iVar4 = uVar2 - (int)*(ulonglong *)(lVar3 + 0x90);
      if (SBORROW4(uVar1,iVar4)) {
        local_10 = (int *)CONCAT44(local_10._4_4_,3);
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("window size should be greater than reserved",0x2b,&local_10,&DAT_180246dd8,
                      &PTR_s_C__Users_burne__cargo_registry_s_180245f50);
      }
      *(uint *)(lVar3 + 0x8c) = uVar1 - iVar4;
      FUN_1801305e0(param_1,iVar4,param_2);
      return;
    }
  }
  local_10 = &local_14;
  local_8 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_10,&PTR_s_C__Users_burne__cargo_registry_s_180257040,param_3);
}


