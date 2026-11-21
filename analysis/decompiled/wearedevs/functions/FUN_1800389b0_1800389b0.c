/* FUN_1800389b0 @ 1800389b0 */

void FUN_1800389b0(longlong *param_1)

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
    FUN_1800300c0(lVar3);
    lVar3 = lVar3 + 0x20;
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar1,*param_1 << 5,8);
  return;
}


