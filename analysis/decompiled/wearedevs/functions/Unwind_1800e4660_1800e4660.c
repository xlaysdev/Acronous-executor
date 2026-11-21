/* Unwind@1800e4660 @ 1800e4660 */

void Unwind_1800e4660(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x88),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x78),0x18,8);
  *(undefined1 *)(param_2 + 0x9f) = 0;
  return;
}


