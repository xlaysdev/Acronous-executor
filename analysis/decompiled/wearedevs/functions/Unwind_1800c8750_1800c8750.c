/* Unwind@1800c8750 @ 1800c8750 */

void Unwind_1800c8750(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x10));
  }
  FUN_18000adf0(*(longlong *)(param_2 + 0x38) + 0x60);
  return;
}


