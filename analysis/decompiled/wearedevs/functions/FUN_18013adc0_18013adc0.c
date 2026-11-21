/* FUN_18013adc0 @ 18013adc0 */

void FUN_18013adc0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    uVar2 = lVar1 * 8 + 0x17U & 0xfffffffffffffff0;
    thunk_FUN_1801d3330(param_1[3] - uVar2,lVar1 + uVar2 + 0x11,0x10);
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(param_1[1],*param_1 << 4,8);
  return;
}


