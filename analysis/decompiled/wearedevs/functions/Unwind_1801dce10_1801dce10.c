/* Unwind@1801dce10 @ 1801dce10 */

void Unwind_1801dce10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x68) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x70),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x10));
  }
  return;
}


