/* Unwind@1800561f0 @ 1800561f0 */

void Unwind_1800561f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x118) + 0x1a0);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x118) + 0x1a8),lVar1 << 5,8);
  }
  *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_2 + 0x108);
  return;
}


