/* FUN_18009eeb0 @ 18009eeb0 */

void FUN_18009eeb0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_1800a2ea0();
    lVar2 = lVar1 * 0x21 + 0x31;
    if (lVar2 != 0) {
      thunk_FUN_1801d3330(*param_1 + lVar1 * -0x20 + -0x20,lVar2,0x10);
      return;
    }
  }
  return;
}


