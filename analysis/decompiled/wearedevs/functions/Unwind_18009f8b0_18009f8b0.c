/* Unwind@18009f8b0 @ 18009f8b0 */

void Unwind_18009f8b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x40),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x10));
  }
  *(undefined1 *)(param_2 + 0x4f) = 0;
  return;
}


