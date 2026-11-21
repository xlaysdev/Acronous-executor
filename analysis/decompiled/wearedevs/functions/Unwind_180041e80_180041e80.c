/* Unwind@180041e80 @ 180041e80 */

void Unwind_180041e80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x20),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
  }
  return;
}


