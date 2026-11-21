/* Unwind@1801bf6c0 @ 1801bf6c0 */

void Unwind_1801bf6c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = **(longlong **)(param_2 + 0x80);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x80) + 8),lVar1,1);
  }
  if (**(longlong **)(param_2 + 0x78) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x70),**(longlong **)(param_2 + 0x78),1);
  }
  return;
}


