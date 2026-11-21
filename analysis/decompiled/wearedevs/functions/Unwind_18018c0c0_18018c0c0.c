/* Unwind@18018c0c0 @ 18018c0c0 */

void Unwind_18018c0c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x50),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x40),0x18,8);
  return;
}


