/* FUN_180123c40 @ 180123c40 */

void FUN_180123c40(longlong param_1)

{
  longlong lVar1;
  
  FUN_1800430f0();
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 == 0) {
    return;
  }
  FUN_18002a190();
  thunk_FUN_1801d3330(lVar1,0x20,8);
  return;
}


