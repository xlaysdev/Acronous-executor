/* Unwind@1801d4f30 @ 1801d4f30 */

void Unwind_1801d4f30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1f8) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x1e8),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x1f8) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x1f0),0x18,8);
  return;
}


