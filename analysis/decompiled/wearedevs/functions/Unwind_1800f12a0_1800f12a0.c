/* Unwind@1800f12a0 @ 1800f12a0 */

void Unwind_1800f12a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x4b0) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x4b8),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x4b0) + 0x10));
  }
  return;
}


