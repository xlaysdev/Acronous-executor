/* Unwind@180113d90 @ 180113d90 */

void Unwind_180113d90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x28);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x30),lVar1 * 0x68,8);
  }
  FUN_18000a680(*(longlong *)(param_2 + 0x48) + 0x40);
  return;
}


