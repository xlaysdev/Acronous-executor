/* Unwind@1801e2350 @ 1801e2350 */

void Unwind_1801e2350(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 0x10);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(**(undefined8 **)(param_2 + 0x40),lVar1 << 4,8);
  }
  return;
}


