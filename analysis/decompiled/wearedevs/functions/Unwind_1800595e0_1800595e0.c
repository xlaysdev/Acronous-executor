/* Unwind@1800595e0 @ 1800595e0 */

void Unwind_1800595e0(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x68) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x1a8),
                        **(longlong **)(param_2 + 0x68) << 5,8);
  }
  **(undefined8 **)(param_2 + 0x68) = *(undefined8 *)(param_2 + 0x58);
  return;
}


