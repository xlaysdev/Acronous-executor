/* FUN_180140f90 @ 180140f90 */

void FUN_180140f90(longlong *param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong local_28;
  ulonglong local_20;
  
  lVar1 = param_1[1];
  if ((ulonglong)(param_1[2] - lVar1) < param_3) {
    FUN_1801b2210(param_1,param_3,1);
    lVar1 = param_1[1];
  }
  memcpy((void *)(lVar1 + *param_1),param_2,param_3);
  local_20 = param_1[2] - param_1[1];
  if (local_20 < param_3) {
    local_28 = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_1801fc980(&local_28);
  }
  param_1[1] = param_1[1] + param_3;
  return;
}


