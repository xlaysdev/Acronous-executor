/* Unwind@1801b8a90 @ 1801b8a90 */

void Unwind_1801b8a90(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x38) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x38) + 8),
                        **(longlong **)(param_2 + 0x38) * 0x158,8);
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x38),0x28,8);
  return;
}


