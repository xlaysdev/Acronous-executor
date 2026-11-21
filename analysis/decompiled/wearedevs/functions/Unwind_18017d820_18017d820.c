/* Unwind@18017d820 @ 18017d820 */

void Unwind_18017d820(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xd0) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0xc0),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0x10));
  }
  lVar1 = *(longlong *)(param_2 + 0xb8);
  *(undefined8 *)(lVar1 + 0x18) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 200);
  *(undefined1 *)(param_2 + 0xee) = 1;
  return;
}


