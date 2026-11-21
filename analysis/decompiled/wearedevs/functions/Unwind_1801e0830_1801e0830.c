/* Unwind@1801e0830 @ 1801e0830 */

void Unwind_1801e0830(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x28);
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x60) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x30),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x10));
  }
  FUN_1801e2280(param_2 + 0x40);
  *(undefined1 *)(param_2 + 0x76) = 0;
  return;
}


