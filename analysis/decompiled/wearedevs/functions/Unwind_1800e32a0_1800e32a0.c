/* Unwind@1800e32a0 @ 1800e32a0 */

void Unwind_1800e32a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(undefined1 *)(lVar1 + 0x53) = 0;
  FUN_18000b230(lVar1);
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x28),*(longlong *)(lVar1 + 0x20),1);
  }
  return;
}


