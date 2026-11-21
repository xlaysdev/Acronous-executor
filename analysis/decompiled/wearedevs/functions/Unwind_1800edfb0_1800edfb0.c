/* Unwind@1800edfb0 @ 1800edfb0 */

void Unwind_1800edfb0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x80);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x70),lVar1 << 5,4);
  }
  return;
}


