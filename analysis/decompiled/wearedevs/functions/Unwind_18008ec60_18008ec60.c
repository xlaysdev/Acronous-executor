/* Unwind@18008ec60 @ 18008ec60 */

void Unwind_18008ec60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x10));
  }
  return;
}


