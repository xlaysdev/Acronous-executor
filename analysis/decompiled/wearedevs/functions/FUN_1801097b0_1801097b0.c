/* FUN_1801097b0 @ 1801097b0 */

longlong FUN_1801097b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (SBORROW8(0,lVar1)) {
    if (param_1[1] != 0) {
      lVar1 = FUN_180111960(param_1 + 1);
      return lVar1;
    }
  }
  else if (lVar1 != 0) {
    lVar1 = thunk_FUN_1801d3330(param_1[1],lVar1,1);
    return lVar1;
  }
  return -lVar1;
}


