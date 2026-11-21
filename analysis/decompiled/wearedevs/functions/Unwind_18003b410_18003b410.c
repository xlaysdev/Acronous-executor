/* Unwind@18003b410 @ 18003b410 */

void Unwind_18003b410(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x38),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x30),0x18,8);
  FUN_18003a5b0(*(undefined8 *)(param_2 + 0x28));
  return;
}


