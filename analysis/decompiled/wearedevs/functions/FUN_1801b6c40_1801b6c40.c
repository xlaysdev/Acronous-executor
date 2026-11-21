/* FUN_1801b6c40 @ 1801b6c40 */

longlong FUN_1801b6c40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    thunk_FUN_1801d3330(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    thunk_FUN_1801d3330(param_1[4],param_1[3],1);
  }
  lVar2 = param_1[9];
  lVar1 = -lVar2;
  if ((!SBORROW8(0,lVar2)) && (lVar2 != 0)) {
    lVar1 = thunk_FUN_1801d3330(param_1[10],lVar2,1);
  }
  if (param_1[6] == 0) {
    return lVar1;
  }
  lVar2 = thunk_FUN_1801d3330(param_1[7],param_1[6],1);
  return lVar2;
}


