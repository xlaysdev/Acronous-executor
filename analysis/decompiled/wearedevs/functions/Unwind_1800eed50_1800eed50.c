/* Unwind@1800eed50 @ 1800eed50 */

void Unwind_1800eed50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x40);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x60);
  }
  else {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x48),lVar1,1);
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x60);
  }
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x80);
  }
  else {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x68),lVar1,1);
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x80);
  }
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x88),lVar1,1);
  }
  FUN_1800baa20(*(longlong *)(param_2 + 0x28) + 0xb8);
  return;
}


