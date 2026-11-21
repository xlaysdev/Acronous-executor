/* FUN_1801c1540 @ 1801c1540 */

void FUN_1801c1540(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38;
  
  lVar1 = param_1[1];
  lVar2 = param_1[3];
  local_38 = 0;
  lVar3 = lVar1;
  while (((ulonglong)(lVar2 - lVar1) >> 3) * -0x7d05f417d05f417d != local_38) {
    local_38 = local_38 + 1;
    FUN_1801bab00(lVar3);
    lVar3 = lVar3 + 0x158;
  }
  if (param_1[2] == 0) {
    return;
  }
  thunk_FUN_1801d3330(*param_1,param_1[2] * 0x158,8);
  return;
}


