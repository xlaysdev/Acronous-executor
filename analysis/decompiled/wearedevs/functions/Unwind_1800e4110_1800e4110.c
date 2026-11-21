/* Unwind@1800e4110 @ 1800e4110 */

void Unwind_1800e4110(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x658) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x650),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x658) + 0x10));
  }
  *(undefined1 *)(param_2 + 0x66c) = 1;
  *(undefined1 *)(param_2 + 0x66b) = 0;
  return;
}


