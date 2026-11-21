/* Unwind@1800732a0 @ 1800732a0 */

void Unwind_1800732a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x88),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x10));
  }
  return;
}


