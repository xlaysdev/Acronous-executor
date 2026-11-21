/* Unwind@180032c20 @ 180032c20 */

void Unwind_180032c20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x10);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(**(undefined8 **)(param_2 + 0x40),lVar1 * 0x68,8);
  }
  return;
}


