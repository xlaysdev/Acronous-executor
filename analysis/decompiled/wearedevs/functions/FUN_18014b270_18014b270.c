/* FUN_18014b270 @ 18014b270 */

void FUN_18014b270(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 3) {
    FUN_18014ae20();
    return;
  }
  FUN_1800430f0(param_1 + 2);
  lVar1 = *(longlong *)(param_1 + 0x1a);
  if (lVar1 == 0) {
    return;
  }
  FUN_18002a190();
  thunk_FUN_1801d3330(lVar1,0x20,8);
  return;
}


