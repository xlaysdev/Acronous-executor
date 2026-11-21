/* FUN_180043510 @ 180043510 */

void FUN_180043510(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_38;
  
  if (*param_1 != 0) {
    FUN_180101100(param_1 + 1);
  }
  lVar1 = param_1[4];
  local_38 = 0;
  lVar2 = param_1[3];
  while (lVar1 != local_38) {
    local_38 = local_38 + 1;
    FUN_180101100(lVar2);
    lVar2 = lVar2 + 8;
  }
  if (param_1[2] == 0) {
    return;
  }
  thunk_FUN_1801d3330(param_1[3],param_1[2] << 3,8);
  return;
}


