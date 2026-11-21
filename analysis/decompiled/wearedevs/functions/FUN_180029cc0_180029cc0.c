/* FUN_180029cc0 @ 180029cc0 */

void FUN_180029cc0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[3];
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(param_1[4],lVar1,1);
  }
  FUN_180030ad0(param_1);
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(param_1[1],*param_1 * 0x70,8);
  return;
}


