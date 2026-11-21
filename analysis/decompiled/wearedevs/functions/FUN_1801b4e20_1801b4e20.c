/* FUN_1801b4e20 @ 1801b4e20 */

void FUN_1801b4e20(longlong *param_1)

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
    FUN_1801bab00(lVar3);
    lVar3 = lVar3 + 0x158;
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,*param_1 * 0x158,8);
  return;
}


