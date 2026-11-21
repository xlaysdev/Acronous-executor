/* FUN_1800ef980 @ 1800ef980 */

void FUN_1800ef980(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38;
  
  lVar1 = param_1[3];
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(param_1[4],lVar1 << 2,4);
  }
  lVar1 = param_1[6];
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(param_1[7],lVar1,1);
  }
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


