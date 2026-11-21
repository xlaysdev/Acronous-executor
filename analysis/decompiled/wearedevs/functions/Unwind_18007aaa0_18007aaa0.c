/* Unwind@18007aaa0 @ 18007aaa0 */

void Unwind_18007aaa0(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x20) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x18),
                        **(longlong **)(param_2 + 0x20) * 0x48,8);
  }
  FUN_1801b2a70(*(longlong *)(param_2 + 0x28) + 0x40);
  return;
}


