/* Unwind@18007dcb0 @ 18007dcb0 */

void Unwind_18007dcb0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x690) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x698),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x690) + 0x10));
  }
  return;
}


