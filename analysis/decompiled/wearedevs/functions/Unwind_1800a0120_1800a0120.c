/* Unwind@1800a0120 @ 1800a0120 */

void Unwind_1800a0120(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x50),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x58) + 0x10));
  }
  *(undefined1 *)(param_2 + 0x67) = 0;
  return;
}


