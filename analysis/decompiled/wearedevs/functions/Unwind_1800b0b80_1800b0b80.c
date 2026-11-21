/* Unwind@1800b0b80 @ 1800b0b80 */

void Unwind_1800b0b80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0xe8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0xf0),lVar1 << 5,8);
  }
  return;
}


