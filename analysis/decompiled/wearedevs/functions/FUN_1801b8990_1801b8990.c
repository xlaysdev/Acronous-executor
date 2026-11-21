/* FUN_1801b8990 @ 1801b8990 */

void FUN_1801b8990(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar3 = param_1[1];
  lVar1 = param_1[2];
  local_38 = 0;
  lVar2 = lVar3;
  while (lVar1 != local_38) {
    local_38 = local_38 + 1;
    FUN_1801bab00(lVar2);
    lVar2 = lVar2 + 0x158;
  }
  if (*param_1 != 0) {
    thunk_FUN_1801d3330(param_1[1],*param_1 * 0x158,8,param_4,lVar3);
  }
  thunk_FUN_1801d3330(param_1,0x28,8);
  return;
}


