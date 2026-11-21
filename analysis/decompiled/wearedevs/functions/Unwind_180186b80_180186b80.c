/* Unwind@180186b80 @ 180186b80 */

void Unwind_180186b80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x98) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x90),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x88),0x18,8);
  return;
}


