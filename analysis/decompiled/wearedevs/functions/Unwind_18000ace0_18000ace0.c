/* Unwind@18000ace0 @ 18000ace0 */

void Unwind_18000ace0(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x20) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x68),
                        **(longlong **)(param_2 + 0x20) << 5,8);
  }
  if (**(int **)(param_2 + 0x28) != 3) {
    FUN_18000b470(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


