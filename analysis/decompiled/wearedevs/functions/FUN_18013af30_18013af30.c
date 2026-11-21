/* FUN_18013af30 @ 18013af30 */

void FUN_18013af30(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 3) {
    FUN_18013b790();
    return;
  }
  FUN_18013b000(param_1 + 2);
  lVar1 = *(longlong *)(param_1 + 0x1a);
  if (lVar1 == 0) {
    return;
  }
  FUN_18002a190();
  thunk_FUN_1801d3330(lVar1,0x20,8);
  return;
}


