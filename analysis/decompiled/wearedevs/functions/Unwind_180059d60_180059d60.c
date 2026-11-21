/* Unwind@180059d60 @ 180059d60 */

void Unwind_180059d60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x98) + 0x1a0);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x1a8),lVar1 << 5,8);
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x1a0) = *(undefined8 *)(param_2 + 0x90);
  return;
}


