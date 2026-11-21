/* Unwind@18002c3c0 @ 18002c3c0 */

void Unwind_18002c3c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x98) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x90),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x80),0x18,8);
  return;
}


