/* Unwind@1800e5d60 @ 1800e5d60 */

void Unwind_1800e5d60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x68) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x60),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x10));
  }
  return;
}


