/* Unwind@1801683b0 @ 1801683b0 */

void Unwind_1801683b0(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x28) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x48),
                        **(longlong **)(param_2 + 0x28) << 3,8);
  }
  if (**(int **)(param_2 + 0x30) != 3) {
    FUN_180167e60(*(longlong *)(param_2 + 0x30) + 8);
  }
  return;
}


