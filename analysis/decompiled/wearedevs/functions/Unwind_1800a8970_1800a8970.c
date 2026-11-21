/* Unwind@1800a8970 @ 1800a8970 */

void Unwind_1800a8970(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x4c0) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x4d0),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x4c0) + 0x10));
  }
  return;
}


