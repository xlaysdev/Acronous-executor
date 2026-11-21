/* Unwind@18002ca00 @ 18002ca00 */

void Unwind_18002ca00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x30),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),0x18,8);
  return;
}


