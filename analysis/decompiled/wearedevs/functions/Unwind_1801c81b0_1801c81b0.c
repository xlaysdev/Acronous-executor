/* Unwind@1801c81b0 @ 1801c81b0 */

void Unwind_1801c81b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1c0) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x1b0),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x1c0) + 0x10));
  }
  lVar1 = *(longlong *)(param_2 + 0x1a8);
  *(undefined8 *)(lVar1 + 0x18) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined1 *)(param_2 + 0x1de) = 1;
  return;
}


