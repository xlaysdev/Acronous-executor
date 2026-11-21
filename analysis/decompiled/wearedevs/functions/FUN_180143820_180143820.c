/* FUN_180143820 @ 180143820 */

void FUN_180143820(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong local_50;
  ulonglong local_48;
  longlong *local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_50 = param_2[4];
  uVar6 = param_3[1];
  uVar1 = *(ulonglong *)(*param_3 + 8);
  local_48 = 0;
  if (uVar6 <= uVar1) {
    local_48 = uVar1 - uVar6;
  }
  local_40 = param_2;
  if (local_48 < local_50) {
    local_31 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_1801fc980(&local_50);
  }
  uVar6 = uVar6 + local_50;
  param_3[1] = uVar6;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    local_31 = 1;
    FUN_180143990(param_1,param_3,param_2[5]);
  }
  else {
    lVar3 = param_2[1];
    lVar4 = param_2[2];
    lVar5 = param_2[3];
    local_50 = param_2[5];
    local_48 = 0;
    if (uVar6 <= uVar1) {
      local_48 = uVar1 - uVar6;
    }
    if (local_48 < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_1801fc980(&local_50);
    }
    param_3[1] = local_50 + uVar6;
    *param_1 = lVar2;
    param_1[1] = lVar3;
    param_1[2] = lVar4;
    param_1[3] = lVar5;
  }
  return;
}


