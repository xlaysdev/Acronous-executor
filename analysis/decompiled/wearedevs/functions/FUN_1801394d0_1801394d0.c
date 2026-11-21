/* FUN_1801394d0 @ 1801394d0 */

void FUN_1801394d0(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_2c;
  int *local_28;
  code *local_20;
  
  uVar1 = *(uint *)(param_1 + 1);
  local_2c = *(int *)((longlong)param_1 + 0xc);
  if ((ulonglong)uVar1 < *(ulonglong *)(*param_1 + 0x10)) {
    lVar3 = *(longlong *)(*param_1 + 8);
    lVar4 = (ulonglong)uVar1 * 0x148;
    if ((*(int *)(lVar3 + lVar4) != 2) && (lVar3 = lVar3 + lVar4, *(int *)(lVar3 + 300) == local_2c)
       ) {
      if ((*(longlong *)(lVar3 + 0x80) != 0) || (*(uint *)(lVar3 + 0x40) < 4)) {
        return;
      }
      iVar2 = 8;
      if ((*(uint *)(lVar3 + 0x40) == 8) && (*(char *)(param_3 + 0x68) != '\0')) {
        iVar2 = (*(byte *)(lVar3 + 0x44) ^ 1) << 3;
      }
      FUN_180137820(param_2 + 0xa0,param_1,iVar2,param_3,param_2 + 0x140,uVar1);
      FUN_180159750(param_2,param_1,param_3);
      return;
    }
  }
  local_28 = &local_2c;
  local_20 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_28,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
}


