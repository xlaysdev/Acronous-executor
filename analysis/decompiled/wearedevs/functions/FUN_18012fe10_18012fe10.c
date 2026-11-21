/* FUN_18012fe10 @ 18012fe10 */

void FUN_18012fe10(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_14;
  int *local_10;
  code *local_8;
  
  uVar1 = *(uint *)(param_2 + 1);
  local_14 = *(int *)((longlong)param_2 + 0xc);
  if ((ulonglong)uVar1 < *(ulonglong *)(*param_2 + 0x10)) {
    lVar3 = *(longlong *)(*param_2 + 8);
    lVar4 = (ulonglong)uVar1 * 0x148;
    if ((*(int *)(lVar3 + lVar4) != 2) && (lVar3 = lVar3 + lVar4, *(int *)(lVar3 + 300) == local_14)
       ) {
      iVar2 = *(int *)(lVar3 + 0x8c);
      if (iVar2 < 1) {
        return;
      }
      *(undefined4 *)(lVar3 + 0x8c) = 0;
      FUN_1801305e0(param_1,iVar2,param_2);
      return;
    }
  }
  local_10 = &local_14;
  local_8 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_10,&PTR_s_C__Users_burne__cargo_registry_s_180257040,param_3,
                uVar1);
}


