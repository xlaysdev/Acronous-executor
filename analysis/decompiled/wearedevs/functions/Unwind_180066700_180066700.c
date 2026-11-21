/* Unwind@180066700 @ 180066700 */

void Unwind_180066700(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x20) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x38),
                        **(longlong **)(param_2 + 0x20) * 0x60,8);
  }
  FUN_1801b2a70(*(longlong *)(param_2 + 0x28) + 0x70);
  return;
}


