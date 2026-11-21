/* FUN_1801b2af0 @ 1801b2af0 */

void FUN_1801b2af0(longlong *param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong local_30;
  ulonglong local_28;
  
  lVar1 = param_1[1];
  local_28 = param_1[2] - lVar1;
  if (local_28 < param_3) {
    FUN_1801b2210(param_1,param_3,1);
    lVar1 = param_1[1];
    local_28 = param_1[2] - lVar1;
  }
  memcpy((void *)(*param_1 + lVar1),param_2,param_3);
  if (local_28 < param_3) {
    local_30 = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_1801fc980(&local_30);
  }
  param_1[1] = lVar1 + param_3;
  return;
}


