/* Unwind@1801632b0 @ 1801632b0 */

void Unwind_1801632b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x38),*(longlong *)(param_2 + 0x30) << 4,8);
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0xb0);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0xa8),lVar1 * 0x18,8);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x110);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x118),lVar1 << 3,8);
  }
  FUN_180162470(*(longlong *)(param_2 + 0x40) + 0x140);
  return;
}


