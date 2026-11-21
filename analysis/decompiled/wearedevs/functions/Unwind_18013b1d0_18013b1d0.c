/* Unwind@18013b1d0 @ 18013b1d0 */

void Unwind_18013b1d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x18);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),lVar1 * 0x68,8);
  }
  FUN_18000a680(*(longlong *)(param_2 + 0x30) + 0x30);
  return;
}


