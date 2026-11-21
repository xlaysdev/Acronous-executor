/* Unwind@180104c40 @ 180104c40 */

void Unwind_180104c40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x18);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x20),lVar1 * 0x68,8);
  }
  FUN_18000a680(*(longlong *)(param_2 + 0x40) + 0x30);
  return;
}


