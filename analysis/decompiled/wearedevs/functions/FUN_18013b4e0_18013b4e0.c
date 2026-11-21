/* FUN_18013b4e0 @ 18013b4e0 */

void FUN_18013b4e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_40;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  local_40 = 0;
  lVar3 = lVar1;
  while (lVar2 != local_40) {
    local_40 = local_40 + 1;
    FUN_18013b9a0(lVar3);
    lVar3 = lVar3 + 0x148;
  }
  if (*param_1 != 0) {
    thunk_FUN_1801d3330(lVar1,*param_1 * 0x148,8);
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    uVar4 = lVar1 * 8 + 0x17U & 0xfffffffffffffff0;
    thunk_FUN_1801d3330(param_1[8] - uVar4,lVar1 + uVar4 + 0x11,0x10);
  }
  if (param_1[5] == 0) {
    return;
  }
  thunk_FUN_1801d3330(param_1[6],param_1[5] << 4,8);
  return;
}


