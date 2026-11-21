/* FUN_1800a0a50 @ 1800a0a50 */

void FUN_1800a0a50(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    uVar1 = lVar2 * 8 + 0x17U & 0xfffffffffffffff0;
    lVar2 = lVar2 + uVar1 + 0x11;
    if (lVar2 != 0) {
      thunk_FUN_1801d3330(*param_1 - uVar1,lVar2,0x10);
      return;
    }
  }
  return;
}


