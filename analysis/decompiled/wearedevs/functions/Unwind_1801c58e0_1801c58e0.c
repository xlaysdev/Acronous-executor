/* Unwind@1801c58e0 @ 1801c58e0 */

void Unwind_1801c58e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x1f8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x40),lVar1 * 0x28,8);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x1d8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x1e0),lVar1 << 7,0x80);
  }
  FUN_1801c7680(*(undefined8 *)(param_2 + 0x20));
  FUN_1801c4cf0(*(longlong *)(param_2 + 0x38) + 0x180);
  return;
}


