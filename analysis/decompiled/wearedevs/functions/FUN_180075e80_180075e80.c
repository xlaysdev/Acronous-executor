/* FUN_180075e80 @ 180075e80 */

void FUN_180075e80(longlong *param_1)

{
  if (*param_1 != 0) {
    thunk_FUN_1801d3330(param_1[1],*param_1,1);
  }
  FUN_18007f870();
  if (param_1[4] == 0) {
    return;
  }
  thunk_FUN_1801d3330(param_1[5],param_1[4] * 0x50,8);
  return;
}


