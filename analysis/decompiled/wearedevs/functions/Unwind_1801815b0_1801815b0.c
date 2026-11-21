/* Unwind@1801815b0 @ 1801815b0 */

void Unwind_1801815b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0xb0);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0xa8),lVar1 * 0x18,8);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x110);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x118),lVar1 << 3,8);
  }
  FUN_180162470(*(longlong *)(param_2 + 0x48) + 0x140);
  return;
}


