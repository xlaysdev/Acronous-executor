/* Unwind@1800d7610 @ 1800d7610 */

void Unwind_1800d7610(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x9c8);
  *(undefined1 *)(lVar1 + 0x4b) = 0;
  FUN_18000b230(lVar1);
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x28),*(longlong *)(lVar1 + 0x20),1);
  }
  return;
}


