/* FUN_180093ba0 @ 180093ba0 */

void FUN_180093ba0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong local_38;
  
  lVar1 = param_1[1];
  lVar2 = param_1[3];
  local_38 = 0;
  lVar3 = lVar1;
  while ((ulonglong)(lVar2 - lVar1) >> 3 != local_38) {
    local_38 = local_38 + 1;
    FUN_180101100(lVar3);
    lVar3 = lVar3 + 8;
  }
  if (param_1[2] == 0) {
    return;
  }
  thunk_FUN_1801d3330(*param_1,param_1[2] << 3,8);
  return;
}


