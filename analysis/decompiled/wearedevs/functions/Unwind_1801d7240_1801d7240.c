/* Unwind@1801d7240 @ 1801d7240 */

void Unwind_1801d7240(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x48),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x38),0x18,8);
  return;
}


