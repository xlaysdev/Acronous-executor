/* Unwind@180125760 @ 180125760 */

void Unwind_180125760(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x18);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),lVar1 * 0x60,8);
  }
  FUN_18011b460(*(longlong *)(param_2 + 0x30) + 0x30);
  return;
}


