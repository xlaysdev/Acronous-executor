/* FUN_180044390 @ 180044390 */

void FUN_180044390(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  local_38 = 0;
  lVar3 = lVar1;
  while (lVar2 != local_38) {
    local_38 = local_38 + 1;
    FUN_180101100(lVar3);
    lVar3 = lVar3 + 8;
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,*param_1 << 3,8);
  return;
}


