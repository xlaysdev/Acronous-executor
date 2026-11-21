/* Unwind@1800155b0 @ 1800155b0 */

void Unwind_1800155b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x760) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x768),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x760) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x758),0x18,8);
  return;
}


