/* Unwind@180028e60 @ 180028e60 */

void Unwind_180028e60(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x20) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x48),
                        **(longlong **)(param_2 + 0x20) << 3,8);
  }
  FUN_180028d50(*(undefined8 *)(param_2 + 0x28));
  return;
}


