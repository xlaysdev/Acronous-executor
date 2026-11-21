/* Unwind@1801caa00 @ 1801caa00 */

void Unwind_1801caa00(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x88) == 0) {
    FUN_1801c9e50(*(undefined8 *)(param_2 + 0x90));
    if (**(longlong **)(param_2 + 0x98) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x98) + 8),
                          **(longlong **)(param_2 + 0x98),1);
    }
  }
  return;
}


