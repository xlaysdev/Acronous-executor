/* Unwind@18007e6e0 @ 18007e6e0 */

void Unwind_18007e6e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x4d8) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x4d0),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x4d8) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x4c8),0x18,8);
  return;
}


