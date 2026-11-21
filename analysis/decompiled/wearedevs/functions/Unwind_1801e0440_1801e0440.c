/* Unwind@1801e0440 @ 1801e0440 */

void Unwind_1801e0440(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x298) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x2a8),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x298) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x2a0),0x18,8);
  return;
}


