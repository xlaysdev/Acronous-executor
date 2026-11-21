/* Unwind@1800ea0b0 @ 1800ea0b0 */

void Unwind_1800ea0b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x5e0) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x5e8),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x5e0) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x5f8),0x18,8);
  return;
}


